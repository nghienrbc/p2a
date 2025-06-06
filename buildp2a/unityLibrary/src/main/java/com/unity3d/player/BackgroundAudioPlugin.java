package com.unity3d.player;

import android.Manifest;
import android.annotation.SuppressLint;
import android.app.Activity;
import android.app.ActivityManager;
import android.app.Notification;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.app.Service;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.pm.PackageManager;
import android.content.pm.ServiceInfo;
import android.media.AudioFormat;
import android.media.AudioRecord;
import android.media.MediaRecorder;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.os.Build;
import android.os.IBinder;
import android.os.PowerManager;
import android.util.Base64;
import android.util.Log;

import androidx.annotation.RequiresApi;
import androidx.core.app.ActivityCompat;
import androidx.core.app.NotificationCompat;

import com.unity3d.player.UnityPlayer;

import org.java_websocket.client.WebSocketClient;
import org.java_websocket.handshake.ServerHandshake;
import org.json.JSONException;
import org.json.JSONObject;

import java.net.URI;
import java.util.Arrays;
import java.util.List;

public class BackgroundAudioPlugin {
    private static final String TAG = "BackgroundAudioPlugin";
    private static final int SAMPLE_RATE = 16000;
    private static final int CHANNEL_CONFIG = AudioFormat.CHANNEL_IN_MONO;
    private static final int AUDIO_FORMAT = AudioFormat.ENCODING_PCM_16BIT;
    private static final int RECORD_INTERVAL_MS = 10; // 100 ms
    private static final int FIXED_CHUNK_SIZE = 512; // Kích thước chunk 512 bytes (giống TypeScript)
    private static final String CHANNEL_ID = "AudioServiceChannel";
    private static final int NOTIFICATION_ID = 1;
    private static final String ACTION_START_SERVICE = "com.unity3d.player.ACTION_START_SERVICE";
    public static final String EXTRA_OPEN_REASON = "open_reason";
    public static final String OPEN_REASON_WAKE_WORD = "wake_word";
    public static final String OPEN_REASON_USER = "user";
    @SuppressLint("StaticFieldLeak")
    private static Activity activity;

    public BackgroundAudioPlugin(Activity activity) {
        BackgroundAudioPlugin.activity = activity;
    }


//    public void notifyWakeWordDetected() {
////        Log.d(TAG, "Phát hiện wake word, gửi tín hiệu mở ứng dụng");
////        Intent serviceIntent = new Intent(activity, AudioRecordingService.class);
////        serviceIntent.putExtra("OPEN_APP", true); // Tín hiệu mở ứng dụng
////        activity.startService(serviceIntent);
//
//        Log.d(TAG, "Phát hiện wake word, gửi broadcast đến AudioRecordingService");
//        Intent intent = new Intent("com.unity3d.player.WAKE_WORD_DETECTED");
//        activity.sendBroadcast(intent);
//    }

    public void startRecordingFromUnity() {
        Log.d(TAG, "Bắt đầu thu âm từ Unity");
        Intent serviceIntent = new Intent(activity, AudioRecordingService.class);
        activity.startService(serviceIntent);
    }

    public void stopRecording() {
        Intent serviceIntent = new Intent(activity, AudioRecordingService.class);
        activity.stopService(serviceIntent);
    }

    public void pauseRecordingFromUnity() {
        Intent intent = new Intent("com.unity3d.player.PAUSE_RECORDING");
        activity.sendBroadcast(intent);
        Log.d(TAG, "Gửi broadcast để tạm dừng ghi âm");
    }

    public void resumeRecordingFromUnity() {
        Intent intent = new Intent("com.unity3d.player.RESUME_RECORDING");
        activity.sendBroadcast(intent);
        Log.d(TAG, "Gửi broadcast để tiếp tục ghi âm");
    }

    public void requestIgnoreBatteryOptimizations() {
        Log.d(TAG, "Yêu cầu tắt tối ưu hóa pin");
        @SuppressLint("BatteryLife") Intent intent = new Intent(android.provider.Settings.ACTION_REQUEST_IGNORE_BATTERY_OPTIMIZATIONS);
        intent.setData(android.net.Uri.parse("package:com.unity3d.player"));
        intent.setFlags(Intent.FLAG_ACTIVITY_NEW_TASK);
        try {
            activity.startActivity(intent);
        } catch (Exception e) {
            Log.e(TAG, "Lỗi yêu cầu tối ưu hóa pin: " + e.getMessage());
        }
    }

    public static class AudioRecordingService extends Service {
//        private static final String WEBSOCKET_URL = "ws://157.10.52.193:8000/ws/audio-chat/186462d7-3150-4b47-93e8-a349db63b307/null/f836ce6c-5910-47b7-8931-d3a11b65c8e5"; // Thay bằng URL WebSocket thực tế
        private static final String WEBSOCKET_URL = "ws://157.10.52.193:8008/ws/wake-word-test"; // Thay bằng URL WebSocket thực tế
        private AudioRecord audioRecord;
        private boolean isRecording = false;
        private byte[] audioBuffer; // Buffer tạm thời để đọc dữ liệu từ AudioRecord
        private byte[] accumulatedBuffer = new byte[0]; // Buffer tích lũy dữ liệu (tương tự audioBuffer trong TypeScript)
        private static final String TAG = "BackgroundAudioPlugin";
//        private BroadcastReceiver wakeWordReceiver;
        private BroadcastReceiver serviceStarterReceiver;
        private WebSocketClient webSocketClient;
        private static Thread recordingThread;

        private boolean shouldSendToWebSocket = true; // Biến kiểm soát gửi WebSocket
        private BroadcastReceiver controlReceiver; // Receiver để xử lý pause/resume


        private boolean isAppInBackground() {
            ActivityManager activityManager = (ActivityManager) getSystemService(Context.ACTIVITY_SERVICE);
            List<ActivityManager.RunningAppProcessInfo> appProcesses = activityManager.getRunningAppProcesses();
            if (appProcesses == null) {
                return true;
            }
            
            String packageName = getPackageName();
            for (ActivityManager.RunningAppProcessInfo appProcess : appProcesses) {
                if (appProcess.importance == ActivityManager.RunningAppProcessInfo.IMPORTANCE_FOREGROUND 
                    && appProcess.processName.equals(packageName)) {
                    return false;
                }
            }
            return true;
        }

        private boolean isAppInForeground() {
            ActivityManager activityManager = (ActivityManager) getSystemService(Context.ACTIVITY_SERVICE);
            List<ActivityManager.RunningAppProcessInfo> appProcesses = activityManager.getRunningAppProcesses();
            if (appProcesses == null) {
                return false;
            }
            String packageName = getPackageName();
            for (ActivityManager.RunningAppProcessInfo appProcess : appProcesses) {
                if (appProcess.importance == ActivityManager.RunningAppProcessInfo.IMPORTANCE_FOREGROUND
                        && appProcess.processName.equals(packageName)) {
                    return true;
                }
            }
            return false;
        }
        private boolean isNetworkAvailable() {
            ConnectivityManager cm = (ConnectivityManager) getSystemService(Context.CONNECTIVITY_SERVICE);
            NetworkInfo networkInfo = cm.getActiveNetworkInfo();
            return networkInfo != null;
        }
        @SuppressLint("UnspecifiedRegisterReceiverFlag")
        @Override
        public void onCreate() {
            super.onCreate();
            Log.d(TAG, "Service được tạo");
            setupWebSocket();
            setupServiceStarterReceiver();
            setupControlReceiver(); // Thêm receiver để xử lý pause/resume
        }

        @Override
        public int onStartCommand(Intent intent, int flags, int startId) {
            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.R) {
                //startForegroundService();
            }
            
//            if (intent != null && intent.getBooleanExtra("OPEN_APP", false)) {
//                Log.d(TAG, "Received command to open app from background");
//                startMainActivity();
//                return START_STICKY;
//            }
            
            startRecording();
            return START_STICKY;
        }

       // @RequiresApi(api = Build.VERSION_CODES.R)
//        private void startForegroundService() {
//            NotificationChannel channel = new NotificationChannel(CHANNEL_ID, "Audio Service", NotificationManager.IMPORTANCE_LOW);
//            getSystemService(NotificationManager.class).createNotificationChannel(channel);
//
//            Notification notification = new NotificationCompat.Builder(this, CHANNEL_ID)
//                    .setContentTitle("Audio Listener")
//                    .setContentText("Listening in background...")
//                    .setSmallIcon(R.drawable.ic_notification)
//                    .setPriority(NotificationCompat.PRIORITY_DEFAULT)
//                    .setNumber(1) // Thêm badge để tăng khả năng hiển thị
//                    .build();
//            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.UPSIDE_DOWN_CAKE) {
//                if (ActivityCompat.checkSelfPermission(this, Manifest.permission.FOREGROUND_SERVICE_MICROPHONE) != PackageManager.PERMISSION_GRANTED) {
//                    Log.e(TAG, "Thiếu quyền FOREGROUND_SERVICE_MICROPHONE");
//                    return;
//                }
//            }
//            startForeground(NOTIFICATION_ID, notification, ServiceInfo.FOREGROUND_SERVICE_TYPE_MICROPHONE);
//        }

        @SuppressLint("UnspecifiedRegisterReceiverFlag")
        private void setupServiceStarterReceiver() {
            serviceStarterReceiver = new BroadcastReceiver() {
                @Override
                public void onReceive(Context context, Intent intent) {
                    Log.d(TAG, "Nhận broadcast để khởi động service: " + intent.getAction());
//                    Intent serviceIntent = new Intent(context, AudioRecordingService.class);
//                    context.startForegroundService(serviceIntent);
                }
            };
            IntentFilter filter = new IntentFilter();
            filter.addAction(ACTION_START_SERVICE);
            filter.addAction(Intent.ACTION_BOOT_COMPLETED);
            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.TIRAMISU) {
                registerReceiver(serviceStarterReceiver, filter, RECEIVER_NOT_EXPORTED);
            } else {
                registerReceiver(serviceStarterReceiver, filter);
            }
        }

        @SuppressLint("UnspecifiedRegisterReceiverFlag")
        private void setupControlReceiver() {
            controlReceiver = new BroadcastReceiver() {
                @Override
                public void onReceive(Context context, Intent intent) {
                    String action = intent.getAction();
                    Log.d(TAG, "Nhận broadcast: " + action);
                    if ("com.unity3d.player.PAUSE_RECORDING".equals(action)) {
                        shouldSendToWebSocket = false;
                        stopAudioRecord(); // Dừng AudioRecord để nhường microphone
                        Log.d(TAG, "Tạm dừng gửi WebSocket và dừng AudioRecord");
                    } else if ("com.unity3d.player.RESUME_RECORDING".equals(action)) {
                        shouldSendToWebSocket = true;
                        if (!isRecording) {
                            startRecording();
                        }
                        Log.d(TAG, "Tiếp tục gửi WebSocket và khởi động lại AudioRecord nếu cần");
                    }
                }
            };
            IntentFilter filter = new IntentFilter();
            filter.addAction("com.unity3d.player.PAUSE_RECORDING");
            filter.addAction("com.unity3d.player.RESUME_RECORDING");
            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.TIRAMISU) {
                registerReceiver(controlReceiver, filter, RECEIVER_NOT_EXPORTED);
            } else {
                registerReceiver(controlReceiver, filter);
            }
        }

        private void setupWebSocket() {
            try {
                URI uri = new URI(WEBSOCKET_URL);
                webSocketClient = new WebSocketClient(uri) {
                    @Override
                    public void onOpen(ServerHandshake handshakedata) {
                        Log.d(TAG, "WebSocket kết nối thành công");
                    }

                    @Override
                    public void onMessage(String message) {
                        Log.d(TAG, "Nhận tin nhắn WebSocket: " + message);
                        try {
                            JSONObject data = new JSONObject(message);
                            String type = data.getString("type");
                            if ("wake_word_detected".equals(type)) {
                                Log.d(TAG, "Phát hiện wake word từ WebSocket");
                                if (isAppInForeground()) {
                                    Log.d(TAG, "Ứng dụng đang ở foreground, gửi thông báo wake word đến Unity");
                                    UnityPlayer.UnitySendMessage("RecordAudio", "OnWakeWordDetected", "");
                                } else {
                                    Log.d(TAG, "Ứng dụng ở background hoặc bị kill, mở Activity");
                                    //startMainActivity();
                                }
                            }
                        } catch (JSONException e) {
                            Log.e(TAG, "Lỗi phân tích JSON: " + e.getMessage());
                        }
                    }

                    @Override
                    public void onClose(int code, String reason, boolean remote) {
                        Log.d(TAG, "WebSocket đóng: " + reason);
                        // Thử kết nối lại sau 5 giây
                        reconnectWebSocket();
                    }

                    @Override
                    public void onError(Exception ex) {
                        Log.e(TAG, "Lỗi WebSocket: " + ex.getMessage());
                    }
                };
                if (isNetworkAvailable()) {
                    webSocketClient.connect();
                    Log.d(TAG, "Đã thử kết nối WebSocket");
                } else {
                    Log.w(TAG, "Không có mạng, thử kết nối lại sau");
                    reconnectWebSocket();
                }
            } catch (Exception e) {
                Log.e(TAG, "Lỗi khởi tạo WebSocket: " + e.getMessage());
                reconnectWebSocket();
            }
        }

        private void reconnectWebSocket() {
            if (!isRecording) return; // Không kết nối lại nếu service đã dừng
            new Thread(() -> {
                try {
                    Thread.sleep(5000);
                    if (webSocketClient != null && !webSocketClient.isOpen() && isNetworkAvailable()) {
                        Log.d(TAG, "Thử kết nối lại WebSocket");
                        webSocketClient.reconnect();
                    } else if (!isNetworkAvailable()) {
                        Log.w(TAG, "Không có mạng, thử lại sau");
                        Thread.sleep(5000);
                        reconnectWebSocket();
                    }
                } catch (InterruptedException e) {
                    Log.e(TAG, "Lỗi kết nối lại WebSocket: " + e.getMessage());
                }
            }).start();
        }
        private void startRecording() {
            Log.d(TAG, "Bắt đầu thu âm");
            if (ActivityCompat.checkSelfPermission(this, Manifest.permission.RECORD_AUDIO) != PackageManager.PERMISSION_GRANTED) {
                Log.d(TAG, "Không có quyền thu âm, yêu cầu quyền");
                ActivityCompat.requestPermissions(activity, new String[]{Manifest.permission.RECORD_AUDIO}, 100);
                return;
            }
            // Tính kích thước buffer tối thiểu
            int bufferSize = AudioRecord.getMinBufferSize(SAMPLE_RATE, CHANNEL_CONFIG, AUDIO_FORMAT);
            audioRecord = new AudioRecord(MediaRecorder.AudioSource.MIC, SAMPLE_RATE, CHANNEL_CONFIG, AUDIO_FORMAT, bufferSize);

            // Khởi tạo buffer để đọc dữ liệu âm thanh
            audioBuffer = new byte[bufferSize];
            isRecording = true;
            shouldSendToWebSocket = true; // Bật gửi WebSocket khi khởi động
            audioRecord.startRecording();

            recordingThread = new Thread(() -> {
               // byte[] audioBuffer = new byte[bufferSize];
                while (isRecording) {
                    recordAndSend();
                    Log.d(TAG, "Recording...");
                    try {
                        Thread.sleep(RECORD_INTERVAL_MS); // Tránh CPU overload
                    } catch (InterruptedException e) {
                        Log.e(TAG, "Recording interrupted: " + e.getMessage());
                    }
                }
            });
            recordingThread.start();
        }

        private void stopAudioRecord() {
            if (audioRecord != null) {
                try {
                    audioRecord.stop();
                    audioRecord.release();
                } catch (IllegalStateException e) {
                    Log.e(TAG, "Lỗi khi dừng AudioRecord: " + e.getMessage());
                }
                audioRecord = null;
            }
            isRecording = false;
            if (recordingThread != null) {
                recordingThread.interrupt();
                try {
                    recordingThread.join(1000);
                } catch (InterruptedException e) {
                    Log.e(TAG, "Lỗi khi dừng thread: " + e.getMessage());
                }
                recordingThread = null;
            }
        }

        private void recordAndSend() {
            if (!isRecording || audioRecord == null) return;
            int bytesRead = audioRecord.read(audioBuffer, 0, audioBuffer.length);
            if (bytesRead <= 0) {
                Log.e(TAG, "Không đọc được dữ liệu âm thanh: " + bytesRead);
                return;
            }
            if (!shouldSendToWebSocket) {
                Log.d(TAG, "Bỏ qua gửi WebSocket do đang tạm dừng");
                return;
            }
            // Tích lũy dữ liệu vào accumulatedBuffer
            byte[] newBuffer = new byte[accumulatedBuffer.length + bytesRead];
            System.arraycopy(accumulatedBuffer, 0, newBuffer, 0, accumulatedBuffer.length);
            System.arraycopy(audioBuffer, 0, newBuffer, accumulatedBuffer.length, bytesRead);
            accumulatedBuffer = newBuffer;

            // Cắt và gửi các chunk 512 bytes (giống TypeScript)
            while (accumulatedBuffer.length >= FIXED_CHUNK_SIZE) {
                byte[] chunk = new byte[FIXED_CHUNK_SIZE];
                System.arraycopy(accumulatedBuffer, 0, chunk, 0, FIXED_CHUNK_SIZE);

                String base64Audio = Base64.encodeToString(chunk, 0, FIXED_CHUNK_SIZE, Base64.NO_WRAP);
                Log.d(TAG, "Base64 Chunk (512 bytes): " + base64Audio);
                Log.d(TAG, "Base64 length: " + base64Audio.length()); // Phải là 684
                byte[] decodedBytes = Base64.decode(base64Audio, Base64.NO_WRAP);

                if (webSocketClient != null && webSocketClient.isOpen()) {
                    try {
                        webSocketClient.send(decodedBytes);
                        Log.d(TAG, "Đã gửi base64 chunk qua WebSocket");
                    } catch (Exception e) {
                        Log.e(TAG, "Lỗi gửi dữ liệu qua WebSocket: " + e.getMessage());
                    }
                } else {
                    Log.w(TAG, "WebSocket không mở, không thể gửi dữ liệu");
                }
                // Cắt bỏ phần đã gửi khỏi accumulatedBuffer
                accumulatedBuffer = Arrays.copyOfRange(accumulatedBuffer, FIXED_CHUNK_SIZE, accumulatedBuffer.length);
            }
        }
        private boolean isScreenOn() {
            PowerManager pm = (PowerManager) getSystemService(Context.POWER_SERVICE);
            return pm.isInteractive();
        }

        private void startMainActivity() {
//        Intent intent = new Intent(this, NewActivity.class);
//        //intent.setFlags(Intent.FLAG_ACTIVITY_NEW_TASK | Intent.FLAG_ACTIVITY_SINGLE_TOP); // Đảm bảo mở Activity ở foreground
//        intent.setFlags(Intent.FLAG_ACTIVITY_NEW_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP | Intent.FLAG_ACTIVITY_REORDER_TO_FRONT);
//
//        startActivity(intent);
            // Đánh thức màn hình nếu tắt
            PowerManager pm = (PowerManager) getSystemService(Context.POWER_SERVICE);
            if (!pm.isInteractive()) {
                @SuppressLint("InvalidWakeLockTag") PowerManager.WakeLock wakeLock = pm.newWakeLock(PowerManager.ACQUIRE_CAUSES_WAKEUP, "WakeUpService:WakeScreen");
                wakeLock.acquire(5000); // Giữ wake lock trong 5 giây
                wakeLock.release();
            }

            Log.d(TAG, "Screen state: " + (isScreenOn() ? "On" : "Off")); // Thêm phương thức kiểm tra màn hình
            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.UPSIDE_DOWN_CAKE) { // API 34
                Log.d(TAG, "Checking background restrictions on Android 14");
                ActivityManager activityManager = (ActivityManager) getSystemService(Context.ACTIVITY_SERVICE);
                if (activityManager != null && !activityManager.isBackgroundRestricted()) {
                    //Intent intent = new Intent(this, UnityPlayerActivity.class);
                    //intent.setFlags(Intent.FLAG_ACTIVITY_NEW_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP | Intent.FLAG_ACTIVITY_REORDER_TO_FRONT | Intent.FLAG_ACTIVITY_BROUGHT_TO_FRONT | Intent.FLAG_ACTIVITY_NO_USER_ACTION);


                    Log.d(TAG, "Thử mở UnityPlayerActivity do wake word");
                    Intent intent = new Intent(this, CustomUnityPlayerActivity.class);
                    intent.setFlags(Intent.FLAG_ACTIVITY_NEW_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP | Intent.FLAG_ACTIVITY_REORDER_TO_FRONT | Intent.FLAG_ACTIVITY_BROUGHT_TO_FRONT | Intent.FLAG_ACTIVITY_NO_USER_ACTION);
                    intent.putExtra(EXTRA_OPEN_REASON, OPEN_REASON_WAKE_WORD);
                    try {
                        startActivity(intent);
                        Log.d(TAG, "Đã gọi startActivity thành công do wake word");
                    } catch (Exception e) {
                        Log.e(TAG, "Lỗi khi mở activity: " + e.getMessage());
                        showFallbackNotification();
                    }

                } else {
                    // Thử mở Activity với quyền đặc biệt hoặc thông báo cho người dùng
                    Intent intent = new Intent(this, UnityPlayerActivity.class);
                    intent.setFlags(Intent.FLAG_ACTIVITY_NEW_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP | Intent.FLAG_ACTIVITY_REORDER_TO_FRONT | Intent.FLAG_ACTIVITY_BROUGHT_TO_FRONT | Intent.FLAG_ACTIVITY_NO_USER_ACTION);
                    startActivity(intent);
                    Log.w(TAG, "Background activity restricted, forcing app to foreground");
                }
            } else {
                Intent intent = new Intent(this, UnityPlayerActivity.class);
                intent.setFlags(Intent.FLAG_ACTIVITY_NEW_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP | Intent.FLAG_ACTIVITY_REORDER_TO_FRONT | Intent.FLAG_ACTIVITY_BROUGHT_TO_FRONT | Intent.FLAG_ACTIVITY_NO_USER_ACTION);
                startActivity(intent);
                Log.d(TAG, "Bringing app (MainActivity) 2 to foreground");
            }
        }

        private void showFallbackNotification() {
            Log.d(TAG, "Hiển thị thông báo dự phòng");
            Notification notification = new NotificationCompat.Builder(this, CHANNEL_ID)
                    .setContentTitle("Phát hiện Wake Word")
                    .setContentText("Nhấn để mở ứng dụng")
                    .setSmallIcon(android.R.drawable.ic_notification_overlay)
                    .setPriority(NotificationCompat.PRIORITY_HIGH)
                    .setContentIntent(PendingIntent.getActivity(this, 0, new Intent(this, UnityPlayerActivity.class), PendingIntent.FLAG_UPDATE_CURRENT | PendingIntent.FLAG_IMMUTABLE))
                    .setAutoCancel(true)
                    .build();
            getSystemService(NotificationManager.class).notify(2, notification);
        }
        @Override
        public void onTaskRemoved(Intent rootIntent) {
            Log.d(TAG, "Ứng dụng bị kill qua danh sách gần đây, khởi động lại service");
//            Intent restartServiceIntent = new Intent(this, AudioRecordingService.class);
//            restartServiceIntent.setPackage(getPackageName());
//            startForegroundService(restartServiceIntent);

            // Gửi broadcast để đảm bảo service được khởi động lại
            Intent broadcastIntent = new Intent(ACTION_START_SERVICE);
            sendBroadcast(broadcastIntent);

            super.onTaskRemoved(rootIntent);
        }

        @Override
        public void onDestroy() {
            Log.d(TAG, "Service bị hủy");
            isRecording = false;
            if (recordingThread != null) {
                recordingThread.interrupt();
                try {
                    recordingThread.join(1000); // Đợi thread kết thúc
                } catch (InterruptedException e) {
                    Log.e(TAG, "Lỗi khi dừng thread: " + e.getMessage());
                }
                recordingThread = null;
            }
            if (audioRecord != null) {
                try {
                    audioRecord.stop();
                    audioRecord.release();
                } catch (IllegalStateException e) {
                    Log.e(TAG, "Lỗi khi dừng AudioRecord: " + e.getMessage());
                }
                audioRecord = null;
            }
            if (webSocketClient != null) {
                webSocketClient.close();
                webSocketClient = null;
            }
            accumulatedBuffer = new byte[0];
            if (serviceStarterReceiver != null) {
                unregisterReceiver(serviceStarterReceiver);
                serviceStarterReceiver = null;
            }
            super.onDestroy();
        }

        @Override
        public IBinder onBind(Intent intent) {
            return null;
        }
    }
    public static class ServiceStarterReceiver extends BroadcastReceiver {
        private static final String TAG = "BackgroundAudioPlugin";

        @Override
        public void onReceive(Context context, Intent intent) {
            Log.d(TAG, "ServiceStarterReceiver nhận broadcast: " + intent.getAction());
//            Intent serviceIntent = new Intent(context, AudioRecordingService.class);
//            context.startForegroundService(serviceIntent);
        }
    }
}