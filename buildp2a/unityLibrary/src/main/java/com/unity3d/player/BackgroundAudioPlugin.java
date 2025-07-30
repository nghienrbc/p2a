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
    private static final int RECORD_INTERVAL_MS = 25; // Tăng lên 50ms để giảm tải CPU
    private static final int FIXED_CHUNK_SIZE = 512;
    private static final String CHANNEL_ID = "AudioServiceChannel";
    private static final int NOTIFICATION_ID = 1;
    private static final String ACTION_START_SERVICE = "com.unity3d.player.ACTION_START_SERVICE";
    public static final String EXTRA_OPEN_REASON = "open_reason";
    public static final String OPEN_REASON_WAKE_WORD = "wake_word";
    public static final String OPEN_REASON_USER = "user";
    @SuppressLint("StaticFieldLeak")
    private static volatile Activity activity;

    public BackgroundAudioPlugin(Activity activity) {
        BackgroundAudioPlugin.activity = activity;
    }

    public void startRecordingFromUnity() {
        Log.d(TAG, "Bắt đầu thu âm từ Unity");
        startRecordingWithScript("HybridRealtimeSpeechController"); // Default script name
    }

    public void startRecordingFromUnity(String scriptName) {
        Log.d(TAG, "Bắt đầu thu âm từ Unity với script: " + scriptName);
        startRecordingWithScript(scriptName);
    }

    private void startRecordingWithScript(String scriptName) {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.UPSIDE_DOWN_CAKE) {
            if (ActivityCompat.checkSelfPermission(activity, Manifest.permission.FOREGROUND_SERVICE_MICROPHONE) != PackageManager.PERMISSION_GRANTED) {
                Log.e(TAG, "Thiếu quyền FOREGROUND_SERVICE_MICROPHONE");
                ActivityCompat.requestPermissions(activity, new String[]{Manifest.permission.FOREGROUND_SERVICE_MICROPHONE}, 101);
                return;
            }
        }
        if (ActivityCompat.checkSelfPermission(activity, Manifest.permission.RECORD_AUDIO) != PackageManager.PERMISSION_GRANTED) {
            Log.e(TAG, "Thiếu quyền RECORD_AUDIO");
            ActivityCompat.requestPermissions(activity, new String[]{Manifest.permission.RECORD_AUDIO}, 100);
            return;
        }
        Intent serviceIntent = new Intent(activity, AudioRecordingService.class);
        serviceIntent.putExtra("SCRIPT_NAME", scriptName);
        activity.startService(serviceIntent);
    }

    public void stopRecording() {
        Log.d(TAG, "Dừng thu âm");
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
        try {
            activity.startActivity(intent);
        } catch (Exception e) {
            Log.e(TAG, "Lỗi yêu cầu tối ưu hóa pin: " + e.getMessage());
        }
    }

    public static class AudioRecordingService extends Service {
        private static final String WEBSOCKET_URL = "ws://157.10.52.193:8008/ws/wake-word-test";
        private AudioRecord audioRecord;
        private boolean isRecording = false;
        private byte[] audioBuffer;
        private byte[] accumulatedBuffer = new byte[0];
        private WebSocketClient webSocketClient;
        private Thread recordingThread;
        private BroadcastReceiver serviceStarterReceiver;
        private BroadcastReceiver controlReceiver;
        private boolean shouldSendToWebSocket = true;
        private String currentScriptName = "HybridRealtimeSpeechController"; // Default script name
        //private boolean isForeground = false; // Theo dõi trạng thái foreground

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
            return networkInfo != null && networkInfo.isConnected();
        }

        @Override
        public void onCreate() {
            super.onCreate();
            Log.d(TAG, "Service được tạo");
            setupWebSocket();
//            setupServiceStarterReceiver();
            setupControlReceiver();
        }

        @Override
        public int onStartCommand(Intent intent, int flags, int startId) {
            // Get script name from intent
            if (intent != null && intent.hasExtra("SCRIPT_NAME")) {
                currentScriptName = intent.getStringExtra("SCRIPT_NAME");
                Log.d(TAG, "Received script name: " + currentScriptName);
            }
//            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.R) {
//                if (!startForegroundService()) {
//                    Log.e(TAG, "Không thể khởi động foreground service, dừng dịch vụ");
//                    stopSelf();
//                    return START_NOT_STICKY;
//                }
//            }

//            if (intent != null && intent.getBooleanExtra("OPEN_APP", false)) {
//                Log.d(TAG, "Nhận lệnh mở ứng dụng từ background");
//                startMainActivity();
//                return START_STICKY;
//            }

            try {
                startRecording();
            } catch (Exception e) {
                Log.e(TAG, "Lỗi khi bắt đầu thu âm: " + e.getMessage(), e);
                stopSelf();
                return START_NOT_STICKY;
            }
            return START_STICKY;
        }

//        @RequiresApi(api = Build.VERSION_CODES.R)
//        private boolean startForegroundService() {
//            if (isForeground) {
//                Log.d(TAG, "Dịch vụ đã ở trạng thái foreground, không gọi lại startForeground");
//                return true;
//            }
//
//            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.UPSIDE_DOWN_CAKE) {
//                if (ActivityCompat.checkSelfPermission(this, Manifest.permission.FOREGROUND_SERVICE_MICROPHONE) != PackageManager.PERMISSION_GRANTED) {
//                    Log.e(TAG, "Thiếu quyền FOREGROUND_SERVICE_MICROPHONE");
//                    return false;
//                }
//            }
//
//            try {
//                NotificationChannel channel = new NotificationChannel(CHANNEL_ID, "Audio Service Channel", NotificationManager.IMPORTANCE_LOW);
//                getSystemService(NotificationManager.class).createNotificationChannel(channel);
//
//                Notification notification = new NotificationCompat.Builder(this, CHANNEL_ID)
//                        .setContentTitle("Audio Listener")
//                        .setContentText("Listening in background...")
//                        .setSmallIcon(android.R.drawable.ic_notification_overlay)
//                        .setPriority(NotificationCompat.PRIORITY_DEFAULT)
//                        .build();
//
//                if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.Q) {
//                    startForeground(NOTIFICATION_ID, notification, ServiceInfo.FOREGROUND_SERVICE_TYPE_MICROPHONE);
//                }
//                isForeground = true;
//                Log.d(TAG, "Đã khởi động foreground service thành công");
//                return true;
//            } catch (Exception e) {
//                Log.e(TAG, "Lỗi khi khởi động foreground service: " + e.getMessage(), e);
//                return false;
//            }
//        }

//        @SuppressLint("UnspecifiedRegisterReceiverFlag")
//        private void setupServiceStarterReceiver() {
//            try {
//                serviceStarterReceiver = new BroadcastReceiver() {
//                    @Override
//                    public void onReceive(Context context, Intent intent) {
//                        String action = intent.getAction();
//                        Log.d(TAG, "Nhận broadcast: " + action);
//                        if (ACTION_START_SERVICE.equals(action) || Intent.ACTION_BOOT_COMPLETED.equals(action)) {
//                            if (ActivityCompat.checkSelfPermission(context, Manifest.permission.FOREGROUND_SERVICE_MICROPHONE) != PackageManager.PERMISSION_GRANTED ||
//                                    ActivityCompat.checkSelfPermission(context, Manifest.permission.RECORD_AUDIO) != PackageManager.PERMISSION_GRANTED) {
//                                Log.e(TAG, "Thiếu quyền cần thiết, không khởi động dịch vụ");
//                                return;
//                            }
//                            Intent serviceIntent = new Intent(context, AudioRecordingService.class);
//                            context.startForegroundService(serviceIntent);
//                            Log.d(TAG, "Khởi động AudioRecordingService từ broadcast");
//                        }
//                    }
//                };
//                IntentFilter filter = new IntentFilter();
//                filter.addAction(ACTION_START_SERVICE);
//                filter.addAction(Intent.ACTION_BOOT_COMPLETED);
//                if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.TIRAMISU) {
//                    registerReceiver(serviceStarterReceiver, filter, Context.RECEIVER_NOT_EXPORTED);
//                } else {
//                    registerReceiver(serviceStarterReceiver, filter);
//                }
//            } catch (Exception e) {
//                Log.e(TAG, "Lỗi khi thiết lập ServiceStarterReceiver: " + e.getMessage(), e);
//            }
//        }

        @SuppressLint("UnspecifiedRegisterReceiverFlag")
        private void setupControlReceiver() {
            try {
                controlReceiver = new BroadcastReceiver() {
                    @Override
                    public void onReceive(Context context, Intent intent) {
                        String action = intent.getAction();
                        Log.d(TAG, "Nhận broadcast: " + action);
                        if ("com.unity3d.player.PAUSE_RECORDING".equals(action)) {
                            shouldSendToWebSocket = false;
                            stopAudioRecord();
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
                    registerReceiver(controlReceiver, filter, Context.RECEIVER_NOT_EXPORTED);
                } else {
                    registerReceiver(controlReceiver, filter);
                }
            } catch (Exception e) {
                Log.e(TAG, "Lỗi khi thiết lập ControlReceiver: " + e.getMessage(), e);
            }
        }

        private void setupWebSocket() {
            try {
                // Check if there's an existing WebSocket connection to the same URL
                if (webSocketClient != null) {
                    Log.d(TAG, "Đóng WebSocket cũ trước khi tạo kết nối mới");
                    try {
                        if (webSocketClient.isOpen()) {
                            webSocketClient.close();
                        }
                    } catch (Exception e) {
                        Log.e(TAG, "Lỗi khi đóng WebSocket cũ: " + e.getMessage());
                    }
                    webSocketClient = null;
                }

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
                                    Log.d(TAG, "Ứng dụng đang ở foreground, gửi thông báo wake word đến Unity script: " + currentScriptName);
                                    UnityPlayer.UnitySendMessage(currentScriptName, "OnWakeWordDetected", "");
                                } else {
                                    Log.d(TAG, "Ứng dụng ở background, mở Activity");
                                   // startMainActivity();
                                }
                            }
                        } catch (JSONException e) {
                            Log.e(TAG, "Lỗi phân tích JSON: " + e.getMessage());
                        }
                    }

                    @Override
                    public void onClose(int code, String reason, boolean remote) {
                        Log.d(TAG, "WebSocket đóng: " + reason);
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
            if (!isRecording) return;
            new Thread(() -> {
                try {
                    Thread.sleep(5000);
                    if (webSocketClient != null && !webSocketClient.isOpen() && isNetworkAvailable()) {
                        Log.d(TAG, "Thử kết nối lại WebSocket");
                        webSocketClient.reconnect();
                    } else if (!isNetworkAvailable()) {
                        Log.w(TAG, "Không có mạng, thử lại sau");
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
                Log.e(TAG, "Không có quyền thu âm, yêu cầu quyền");
                if (activity != null) {
                    ActivityCompat.requestPermissions(activity, new String[]{Manifest.permission.RECORD_AUDIO}, 100);
                } else {
                    Log.e(TAG, "Activity is null, không thể yêu cầu quyền");
                    throw new IllegalStateException("Activity is null");
                }
                return;
            }

            int bufferSize = AudioRecord.getMinBufferSize(SAMPLE_RATE, CHANNEL_CONFIG, AUDIO_FORMAT);
            if (bufferSize == AudioRecord.ERROR || bufferSize == AudioRecord.ERROR_BAD_VALUE) {
                Log.e(TAG, "Kích thước buffer không hợp lệ: " + bufferSize);
                throw new IllegalStateException("Invalid buffer size");
            }

            try {
                audioRecord = new AudioRecord(MediaRecorder.AudioSource.MIC, SAMPLE_RATE, CHANNEL_CONFIG, AUDIO_FORMAT, bufferSize);
                if (audioRecord.getState() != AudioRecord.STATE_INITIALIZED) {
                    Log.e(TAG, "AudioRecord không được khởi tạo");
                    audioRecord.release();
                    audioRecord = null;
                    throw new IllegalStateException("AudioRecord not initialized");
                }
                audioBuffer = new byte[bufferSize];
                isRecording = true;
                shouldSendToWebSocket = true;
                audioRecord.startRecording();

                recordingThread = new Thread(() -> {
                    while (isRecording && audioRecord != null) {
                        try {
                            recordAndSend();
                        } catch (Exception e) {
                            Log.e(TAG, "Lỗi khi xử lý dữ liệu âm thanh: " + e.getMessage(), e);
                        }
                        try {
                            Thread.sleep(RECORD_INTERVAL_MS);
                        } catch (InterruptedException e) {
                            Log.e(TAG, "Recording interrupted: " + e.getMessage());
                            Thread.currentThread().interrupt();
                        }
                    }
                });
                recordingThread.start();
            } catch (Exception e) {
                Log.e(TAG, "Lỗi khi khởi tạo hoặc bắt đầu AudioRecord: " + e.getMessage(), e);
                stopAudioRecord();
                throw e;
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

            byte[] newBuffer = new byte[accumulatedBuffer.length + bytesRead];
            System.arraycopy(accumulatedBuffer, 0, newBuffer, 0, accumulatedBuffer.length);
            System.arraycopy(audioBuffer, 0, newBuffer, accumulatedBuffer.length, bytesRead);
            accumulatedBuffer = newBuffer;

            while (accumulatedBuffer.length >= FIXED_CHUNK_SIZE) {
                byte[] chunk = new byte[FIXED_CHUNK_SIZE];
                System.arraycopy(accumulatedBuffer, 0, chunk, 0, FIXED_CHUNK_SIZE);

                String base64Audio = Base64.encodeToString(chunk, 0, FIXED_CHUNK_SIZE, Base64.NO_WRAP);
                byte[] decodedBytes = Base64.decode(base64Audio, Base64.NO_WRAP);

                if (webSocketClient != null && webSocketClient.isOpen()) {
                    try {
                        webSocketClient.send(decodedBytes);
                        Log.d(TAG, "Đã gửi chunk âm thanh qua WebSocket");
                    } catch (Exception e) {
                        Log.e(TAG, "Lỗi gửi dữ liệu qua WebSocket: " + e.getMessage());
                    }
                } else {
                    Log.w(TAG, "WebSocket không mở, không thể gửi dữ liệu");
                }
                accumulatedBuffer = Arrays.copyOfRange(accumulatedBuffer, FIXED_CHUNK_SIZE, accumulatedBuffer.length);
            }
        }

        private void stopAudioRecord() {
            isRecording = false;
            shouldSendToWebSocket = false;
            if (audioRecord != null) {
                try {
                    audioRecord.stop();
                    audioRecord.release();
                } catch (IllegalStateException e) {
                    Log.e(TAG, "Lỗi khi dừng AudioRecord: " + e.getMessage());
                }
                audioRecord = null;
            }
            if (recordingThread != null) {
                recordingThread.interrupt();
                try {
                    recordingThread.join(1000);
                } catch (InterruptedException e) {
                    Log.e(TAG, "Lỗi khi dừng thread: " + e.getMessage());
                }
                recordingThread = null;
            }
            accumulatedBuffer = new byte[0];
        }

        private boolean isScreenOn() {
            PowerManager pm = (PowerManager) getSystemService(Context.POWER_SERVICE);
            return pm.isInteractive();
        }

//        private void startMainActivity() {
//            PowerManager pm = (PowerManager) getSystemService(Context.POWER_SERVICE);
//            if (!pm.isInteractive()) {
//                @SuppressLint("InvalidWakeLockTag") PowerManager.WakeLock wakeLock = pm.newWakeLock(PowerManager.ACQUIRE_CAUSES_WAKEUP, "WakeUpService:WakeScreen");
//                wakeLock.acquire(5000);
//                wakeLock.release();
//            }
//
//            Log.d(TAG, "Screen state: " + (isScreenOn() ? "On" : "Off"));
//            Intent intent = new Intent(this, CustomUnityPlayerActivity.class);
//            intent.setFlags(Intent.FLAG_ACTIVITY_NEW_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP);
//            intent.putExtra(EXTRA_OPEN_REASON, OPEN_REASON_WAKE_WORD);
//            try {
//                startActivity(intent);
//                Log.d(TAG, "Đã gọi startActivity thành công do wake word");
//            } catch (Exception e) {
//                Log.e(TAG, "Lỗi khi mở activity: " + e.getMessage(), e);
//                showFallbackNotification();
//            }
//        }
//
//        private void showFallbackNotification() {
//            Log.d(TAG, "Hiển thị thông báo dự phòng");
//            NotificationCompat.Builder builder = new NotificationCompat.Builder(this, CHANNEL_ID)
//                    .setContentTitle("Phát hiện Wake Word")
//                    .setContentText("Nhấn để mở ứng dụng")
//                    .setSmallIcon(android.R.drawable.ic_notification_overlay)
//                    .setPriority(NotificationCompat.PRIORITY_HIGH)
//                    .setAutoCancel(true);
//
//            Intent intent = new Intent(this, CustomUnityPlayerActivity.class);
//            intent.setFlags(Intent.FLAG_ACTIVITY_NEW_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP);
//            intent.putExtra(EXTRA_OPEN_REASON, OPEN_REASON_WAKE_WORD);
//            PendingIntent pendingIntent = PendingIntent.getActivity(this, 0, intent, PendingIntent.FLAG_UPDATE_CURRENT | PendingIntent.FLAG_IMMUTABLE);
//            builder.setContentIntent(pendingIntent);
//
//            NotificationManager nm = getSystemService(NotificationManager.class);
//            nm.notify(2, builder.build());
//        }

        @Override
        public void onTaskRemoved(Intent rootIntent) {
            Log.d(TAG, "Ứng dụng bị kill qua danh sách gần đây, gửi broadcast để khởi động lại");
//            Intent restartServiceIntent = new Intent(this, AudioRecordingService.class);
//            restartServiceIntent.setPackage(getPackageName());
//            startForegroundService(restartServiceIntent);
//
//            Intent broadcastIntent = new Intent(ACTION_START_SERVICE);
//            sendBroadcast(broadcastIntent);
            super.onTaskRemoved(rootIntent);
        }

        @Override
        public void onDestroy() {
            Log.d(TAG, "Service bị hủy");
            stopAudioRecord();
            if (webSocketClient != null) {
                try {
                    webSocketClient.close();
                } catch (Exception e) {
                    Log.e(TAG, "Lỗi khi đóng WebSocket: " + e.getMessage());
                }
                webSocketClient = null;
            }
//            if (serviceStarterReceiver != null) {
//                try {
//                    unregisterReceiver(serviceStarterReceiver);
//                    Log.d(TAG, "Đã hủy đăng ký ServiceStarterReceiver");
//                } catch (IllegalArgumentException e) {
//                    Log.e(TAG, "Lỗi khi hủy đăng ký receiver: " + e.getMessage());
//                }
//                serviceStarterReceiver = null;
//            }
            if (controlReceiver != null) {
                try {
                    unregisterReceiver(controlReceiver);
                    Log.d(TAG, "Đã hủy đăng ký ControlReceiver");
                } catch (IllegalArgumentException e) {
                    Log.e(TAG, "Lỗi khi hủy đăng ký receiver: " + e.getMessage());
                }
                controlReceiver = null;
            }
           // isForeground = false; // Đặt lại trạng thái foreground
            super.onDestroy();
        }

        @Override
        public IBinder onBind(Intent intent) {
            return null;
        }
    }

    public void onAppEnterForeground() {
        Log.d(TAG, "Ứng dụng quay lại foreground, khởi động ghi âm");
        startRecordingFromUnity();
    }

//    public static class ServiceStarterReceiver extends BroadcastReceiver {
//        @Override
//        public void onReceive(Context context, Intent intent) {
//            Log.d(TAG, "ServiceStarterReceiver nhận broadcast: " + intent.getAction());
//            if (ActivityCompat.checkSelfPermission(context, Manifest.permission.FOREGROUND_SERVICE_MICROPHONE) != PackageManager.PERMISSION_GRANTED ||
//                    ActivityCompat.checkSelfPermission(context, Manifest.permission.RECORD_AUDIO) != PackageManager.PERMISSION_GRANTED) {
//                Log.e(TAG, "Thiếu quyền cần thiết, không khởi động dịch vụ");
//                return;
//            }
//            Intent serviceIntent = new Intent(context, AudioRecordingService.class);
//            context.startForegroundService(serviceIntent);
//        }
//    }
}