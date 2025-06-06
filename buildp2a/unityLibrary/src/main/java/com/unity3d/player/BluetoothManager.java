package com.unity3d.player;

import android.Manifest;
import android.app.Activity;
import android.bluetooth.BluetoothAdapter;
import android.bluetooth.BluetoothDevice;
import android.bluetooth.BluetoothSocket;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.pm.PackageManager;
import android.util.Log;
import android.widget.Toast;

import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.nio.charset.StandardCharsets;
import java.util.Arrays;
import java.util.Base64;
import java.util.UUID;

import androidx.core.app.ActivityCompat;
import androidx.core.content.ContextCompat;

import static android.text.TextUtils.indexOf;

public class BluetoothManager {
    private static final String TAG = "BluetoothManager";
    private BluetoothAdapter bluetoothAdapter;
    private Activity activity;
    public static final int REQUEST_BLUETOOTH_PERMISSION = 1;
    private BroadcastReceiver bluetoothReceiver;

    private BluetoothSocket bluetoothSocket;
    private InputStream inputStream;
    private OutputStream outputStream;
    private boolean isConnected = false;

    private String targetDeviceAddress = "9C:9C:1F:EA:F9:E6";
    private Thread connectionCheckerThread;

    // UUID cho kết nối Bluetooth SPP (Serial Port Profile)
    private static final UUID MY_UUID = UUID.fromString("00001101-0000-1000-8000-00805F9B34FB");
    private BluetoothDevice device;

    public BluetoothManager(Activity activity) {
        this.activity = activity;
        bluetoothAdapter = BluetoothAdapter.getDefaultAdapter();

        // Tạo BroadcastReceiver để lắng nghe sự thay đổi trạng thái của Bluetooth
        bluetoothReceiver = new BroadcastReceiver() {
            @Override
            public void onReceive(Context context, Intent intent) {
                final String action = intent.getAction();
                if (BluetoothAdapter.ACTION_STATE_CHANGED.equals(action)) {
                    final int state = intent.getIntExtra(BluetoothAdapter.EXTRA_STATE, BluetoothAdapter.ERROR);
                    switch (state) {
                        case BluetoothAdapter.STATE_OFF:
                            // Gửi thông báo về Unity khi Bluetooth bị tắt
                            Toast.makeText(activity, "Bluetooth đã tắt", Toast.LENGTH_SHORT).show();
                            UnityPlayer.UnitySendMessage("UIManager", "OnBluetoothStateChanged", "OFF");
                            break;
                        case BluetoothAdapter.STATE_TURNING_ON:
                            Toast.makeText(activity, "Bluetooth đang bật...", Toast.LENGTH_SHORT).show();
                            UnityPlayer.UnitySendMessage("UIManager", "OnBluetoothStateChanged", "TURNING_ON");
                            break;
                        case BluetoothAdapter.STATE_ON:
                            // Gửi thông báo về Unity khi Bluetooth được bật
                            Toast.makeText(activity, "Bluetooth đã được bật!", Toast.LENGTH_SHORT).show();
                            UnityPlayer.UnitySendMessage("UIManager", "OnBluetoothStateChanged", "ON");
                            break;
                        case BluetoothAdapter.STATE_TURNING_OFF:
                            Toast.makeText(activity, "Bluetooth đang tắt...", Toast.LENGTH_SHORT).show();
                            UnityPlayer.UnitySendMessage("UIManager", "OnBluetoothStateChanged", "TURNING_OFF");
                            break;
                    }
                }
            }
        };
        // Đăng ký BroadcastReceiver để nhận thông báo khi trạng thái Bluetooth thay đổi
        IntentFilter filter = new IntentFilter(BluetoothAdapter.ACTION_STATE_CHANGED);
        activity.registerReceiver(bluetoothReceiver, filter);
    }

    // Bật Bluetooth
    public void enableBluetooth() {
        if (bluetoothAdapter == null) {
            Toast.makeText(activity, "Thiết bị không hỗ trợ Bluetooth", Toast.LENGTH_SHORT).show();
        } else {
            if (ContextCompat.checkSelfPermission(activity, android.Manifest.permission.BLUETOOTH_CONNECT)
                    != PackageManager.PERMISSION_GRANTED) {
                // Quyền chưa được cấp, yêu cầu quyền
                ActivityCompat.requestPermissions(activity,
                        new String[]{android.Manifest.permission.BLUETOOTH_CONNECT},
                        REQUEST_BLUETOOTH_PERMISSION);
                return;
            }
            if (!bluetoothAdapter.isEnabled()) {
                Intent enableBtIntent = new Intent(BluetoothAdapter.ACTION_REQUEST_ENABLE);
                activity.startActivityForResult(enableBtIntent, 1);
            } else {
                Toast.makeText(activity, "Bluetooth đã được bật", Toast.LENGTH_SHORT).show();
                autoConnectToDevice(targetDeviceAddress);
            }
        }
    }

    // Tắt Bluetooth
    public void disableBluetooth() {
        if (bluetoothAdapter != null && bluetoothAdapter.isEnabled()) {
            if (ActivityCompat.checkSelfPermission(activity, Manifest.permission.BLUETOOTH_CONNECT) != PackageManager.PERMISSION_GRANTED) {
                ActivityCompat.requestPermissions(activity,
                        new String[]{android.Manifest.permission.BLUETOOTH_CONNECT},
                        REQUEST_BLUETOOTH_PERMISSION);
                return;
            }
            bluetoothAdapter.disable();
            Toast.makeText(activity, "Bluetooth đã được tắt", Toast.LENGTH_SHORT).show();
        }
    }

    // Kiểm tra trạng thái Bluetooth
    public boolean isBluetoothEnabled() {
        return bluetoothAdapter != null && bluetoothAdapter.isEnabled();
    }

    // Xử lý kết quả yêu cầu quyền
    public void onRequestPermissionsResult(int requestCode, String[] permissions, int[] grantResults) {
        if (requestCode == REQUEST_BLUETOOTH_PERMISSION) {
            if (grantResults.length > 0 && grantResults[0] == PackageManager.PERMISSION_GRANTED) {
            }
            else {
                Toast.makeText(activity, "Yêu cầu quyền Bluetooth bị từ chối", Toast.LENGTH_SHORT).show();
            }
        }
    }

    public void autoConnectToDevice(final String targetAddress) {
        if (ContextCompat.checkSelfPermission(activity, Manifest.permission.BLUETOOTH_SCAN) != PackageManager.PERMISSION_GRANTED ||
                ContextCompat.checkSelfPermission(activity, Manifest.permission.ACCESS_FINE_LOCATION) != PackageManager.PERMISSION_GRANTED) {

            ActivityCompat.requestPermissions(activity,
                    new String[]{Manifest.permission.BLUETOOTH_SCAN, Manifest.permission.ACCESS_FINE_LOCATION},
                    REQUEST_BLUETOOTH_PERMISSION);
            return;
        }
        this.targetDeviceAddress = targetAddress;

        if (deviceReceiver != null) {
            activity.unregisterReceiver(deviceReceiver);
            deviceReceiver = null;
        }
        // Đăng ký receiver để quét các thiết bị
        deviceReceiver = new BroadcastReceiver() {
            @Override
            public void onReceive(Context context, Intent intent) {
                String action = intent.getAction();
                if (BluetoothDevice.ACTION_FOUND.equals(action)) {
                    BluetoothDevice device = intent.getParcelableExtra(BluetoothDevice.EXTRA_DEVICE);
                    if (device != null && device.getAddress().equals(targetDeviceAddress)) {
                        activity.unregisterReceiver(deviceReceiver);
                        deviceReceiver = null;
                        connectToDevice(targetDeviceAddress); // Tự động kết nối khi tìm thấy thiết bị
                    }
                }
            }
        };

        // Bắt đầu quét các thiết bị xung quanh
        IntentFilter filter = new IntentFilter(BluetoothDevice.ACTION_FOUND);
        activity.registerReceiver(deviceReceiver, filter);

        // Bắt đầu quá trình quét thiết bị
        boolean started = bluetoothAdapter.startDiscovery();
        if (started) {
            Toast.makeText(activity, "Bắt đầu quét thiết bị 111...", Toast.LENGTH_SHORT).show();
        } else {
            Toast.makeText(activity, "Không thể bắt đầu quét", Toast.LENGTH_SHORT).show();
        }
    }

    private BroadcastReceiver deviceReceiver;

    // Bỏ đăng ký tất cả receiver
    public void unregisterReceiver() {
        if (bluetoothReceiver != null) {
            activity.unregisterReceiver(bluetoothReceiver);
            bluetoothReceiver = null;
        }
        if (deviceReceiver != null) {
            activity.unregisterReceiver(deviceReceiver);
            deviceReceiver = null;
        }
    }

    public void connectToDevice(String deviceAddress) {
        BluetoothDevice device = bluetoothAdapter.getRemoteDevice(deviceAddress);
        try {
            if (ActivityCompat.checkSelfPermission(activity, Manifest.permission.BLUETOOTH_CONNECT) != PackageManager.PERMISSION_GRANTED) {
                ActivityCompat.requestPermissions(activity,
                        new String[]{android.Manifest.permission.BLUETOOTH_CONNECT},
                        REQUEST_BLUETOOTH_PERMISSION);
                return;
            }
            // Tạo một BluetoothSocket
            bluetoothSocket = device.createRfcommSocketToServiceRecord(MY_UUID);
            bluetoothSocket.connect();
            inputStream = bluetoothSocket.getInputStream();
            outputStream = bluetoothSocket.getOutputStream();
            isConnected = true;
            UnityPlayer.UnitySendMessage("UIManager", "OnDeviceConnected", "Connected to " + deviceAddress);

            // Bắt đầu luồng đọc dữ liệu
            startListeningForData();
        } catch (IOException e) {
            e.printStackTrace();
            UnityPlayer.UnitySendMessage("UIManager", "OnDeviceConnected", "Failed to connect to " + deviceAddress);
            closeConnection();
        }
    }

    // Phương thức gửi dữ liệu qua Bluetooth
    public void sendData(String data) {
        try {
            if (bluetoothSocket != null && outputStream != null) {
                outputStream.write(data.getBytes());
                Log.d("BluetoothManager", "data receive from unity and will send to bluetooth device: " + data);
            } else {
                Log.e("BluetoothManager", "Bluetooth socket or output stream is not initialized.");
            }
        } catch (Exception e) {
            Log.e("BluetoothManager", "Error sending data: " + e.getMessage());
        }
    }

//    private void startListeningForData() {
//        new Thread(new Runnable() {
//            @Override
//            public void run() {
//                byte[] buffer = new byte[1024]; // Bộ đệm để lưu dữ liệu nhận
//                int bytes;
//
//                while (isConnected) {
//                    try {
//                        // Đọc dữ liệu từ InputStream
//                        bytes = inputStream.read(buffer);
//                        String receivedData = new String(buffer, 0, bytes);
//
//                        Log.d("BluetoothManager",  receivedData);
//                        //if (receivedData == "ddhello"){
//                            // Gửi dữ liệu nhận được về Unity
//                            UnityPlayer.UnitySendMessage("UIManager", "OnDataReceived", receivedData);
//                        //}
//                    } catch (IOException e) {
//                        Log.e("BluetoothManager", "Disconnecteddd", e);
//                        closeConnection();
//                        break;
//                    }
//                }
//            }
//        }).start();
//    }

    // Định nghĩa marker dưới dạng mảng byte
    private static final byte[] START_MARKER = "|bytes|>.&0#256:".getBytes();
    private static final byte[] END_MARKER = "#05".getBytes();
    // Marker điều khiển để dừng tích lũy (ví dụ "START" xuất hiện trong phần text)
    private static final byte[] CONTROL_START = "START".getBytes();

    // Hàm tìm chỉ số xuất hiện của pattern trong data bắt đầu từ vị trí start
    private static int indexOf(byte[] data, byte[] pattern, int start) {
        for (int i = start; i <= data.length - pattern.length; i++) {
            boolean found = true;
            for (int j = 0; j < pattern.length; j++) {
                if (data[i + j] != pattern[j]) {
                    found = false;
                    break;
                }
            }
            if (found) {
                return i;
            }
        }
        return -1;
    }

    // Hàm kiểm tra xem dữ liệu tích lũy có chứa lệnh "START" (dạng marker điều khiển) hay không
    private static boolean containsControlStart(byte[] data) {
        return indexOf(data, CONTROL_START, 0) != -1;
    }

    /**
     * Hàm trích xuất dữ liệu âm thanh từ mảng byte tích lũy bằng cách:
     * - Tìm các cặp marker (startMarker, endMarker)
     * - Lấy phần dữ liệu nằm giữa các marker và nối chúng lại
     */
    public static byte[] extractAudioData(byte[] data) {
        ByteArrayOutputStream audioOut = new ByteArrayOutputStream();
        int pos = 0;
        while (true) {
            // Tìm start marker
            int startIdx = indexOf(data, START_MARKER, pos);
            if (startIdx == -1) {
                break; // không còn marker nào nữa
            }
            // Vị trí bắt đầu của dữ liệu âm thanh nằm sau start marker
            int audioDataStart = startIdx + START_MARKER.length;
            // Tìm end marker ngay sau start marker
            int endIdx = indexOf(data, END_MARKER, audioDataStart);
            if (endIdx == -1) {
                // Nếu không tìm thấy end marker, thoát vòng lặp (có thể tùy chỉnh theo logic)
                break;
            }
            // Trích xuất đoạn dữ liệu nằm giữa startMarker và endMarker
            byte[] audioSegment = Arrays.copyOfRange(data, audioDataStart, endIdx);
            audioOut.write(audioSegment, 0, audioSegment.length);
            // Cập nhật vị trí để tìm marker tiếp theo
            pos = endIdx + END_MARKER.length;
        }
        return audioOut.toByteArray();
    }

    /**
     * Hàm xử lý dữ liệu tích lũy sau khi đã nhận đủ (có chứa lệnh "START").
     * Sau đó, có thể chuyển đổi dữ liệu âm thanh thành Base64 để gửi sang Unity hoặc xử lý trực tiếp.
     */
    public static void processAccumulatedData(ByteArrayOutputStream accumulator) {
        byte[] accumulatedData = accumulator.toByteArray();
        if (containsControlStart(accumulatedData)) {
            // Đã nhận đủ dữ liệu (xuất hiện "START")
            byte[] audioData = extractAudioData(accumulatedData);
            // Ví dụ: chuyển audioData sang Base64 để gửi sang Unity
            String base64Audio = java.util.Base64.getEncoder().encodeToString(audioData);
            // Gửi base64Audio sang Unity (ví dụ, dùng UnitySendMessage)
            UnityPlayer.UnitySendMessage("UIManager", "OnDataReceived", base64Audio);
            System.out.println(" Độ dài:" + audioData.length + " Dữ liệu audio sau khi xử lý (Base64): " +  base64Audio);
            // Sau khi xử lý, reset bộ nhớ tích lũy
            accumulator.reset();
        }
    }

    boolean isReadtyToGetAudioRecord = false;
    private void startListeningForData() {
        new Thread(new Runnable() {
            @Override
            public void run() {
                byte[] buffer = new byte[1024]; // Bộ đệm để lưu dữ liệu nhận
                int bytes;
                StringBuilder accumulatedData = new StringBuilder(); // Tích lũy dữ liệu từ nhiều lần đọc
                final String START_MARKER = "|bytes|>.&0#256:";
                final String END_MARKER = "#05";
                ByteArrayOutputStream accumulator = new ByteArrayOutputStream();

                while (isConnected) {
                    try {
                        // Đọc dữ liệu từ InputStream
                        bytes = inputStream.read(buffer);

                        if (bytes > 0) {
                            String receivedData = new String(buffer, 0, bytes);
                            Log.d("BluetoothManager",  "kích thước nhận: " + bytes + " Nhận dữ liệu 1: " + receivedData);
                            // nếu chưa sẵn sàng nhận dữ liệu audio
                            if (isReadtyToGetAudioRecord == false){
                                // Gửi dữ liệu về Unity
                                UnityPlayer.UnitySendMessage("UIManager", "OnDataReceived", receivedData);
                                // Nếu dữ liệu nhận được có chứa START lần đầu tiên, tức là đã sẵn sàng nhận dữ liệu ghi âm
                                if (receivedData.trim().contains("START")) isReadtyToGetAudioRecord = true;
                            }
                            else {
                                accumulator.write(buffer, 0, bytes);
                                processAccumulatedData(accumulator);
                                if (receivedData.trim().contains("START") ) { // nếu nhận thêm START một lần nữa, tức là đã kết thúc 1 lần ghi âm
                                    UnityPlayer.UnitySendMessage("UIManager", "OnDataReceived", "START");
                                }
                                if ( receivedData.trim().contains("STOP")) { // nếu nhận thêm START một lần nữa, tức là đã kết thúc 1 lần ghi âm
                                    UnityPlayer.UnitySendMessage("UIManager", "OnDataReceived", "STOP");
                                }
                            }
                        }
                    } catch (IOException e) {
                        Log.e("BluetoothManager", "Mất kết nối", e);
                        closeConnection();
                        break;
                    }
                }
            }
        }).start();
    }

    public void closeConnection() {
        isConnected = false;
        isReadtyToGetAudioRecord = false;
        if (inputStream != null) {
            try {
                inputStream.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
        if (outputStream != null) {
            try {
                outputStream.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
        if (bluetoothSocket != null) {
            try {
                bluetoothSocket.close();
                bluetoothSocket = null;
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }

    public void disconnect() {
        if (bluetoothSocket != null) {
            try {
                bluetoothSocket.close();
                bluetoothSocket = null;
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }
}
