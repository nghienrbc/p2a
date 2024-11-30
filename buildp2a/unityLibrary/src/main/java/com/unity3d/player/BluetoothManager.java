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

import java.io.IOException;
import java.io.InputStream;
import java.util.UUID;

import androidx.core.app.ActivityCompat;
import androidx.core.content.ContextCompat;

public class BluetoothManager {
    private static final String TAG = "BluetoothManager";
    private BluetoothAdapter bluetoothAdapter;
    private Activity activity;
    public static final int REQUEST_BLUETOOTH_PERMISSION = 1;
    private BroadcastReceiver bluetoothReceiver;

    private BluetoothSocket bluetoothSocket;
    private InputStream inputStream;
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
//                if (BluetoothAdapter.ACTION_REQUEST_ENABLE.equals(action)) {
//
//                }
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
//            else {
                // Quyền đã được cấp, bật Bluetooth
                if (!bluetoothAdapter.isEnabled()) {
                    Intent enableBtIntent = new Intent(BluetoothAdapter.ACTION_REQUEST_ENABLE);
                    activity.startActivityForResult(enableBtIntent, 1);
                } else {
                    Toast.makeText(activity, "Bluetooth đã được bật", Toast.LENGTH_SHORT).show();
                    autoConnectToDevice(targetDeviceAddress);

//                    if (ContextCompat.checkSelfPermission(activity, Manifest.permission.BLUETOOTH_SCAN) != PackageManager.PERMISSION_GRANTED ||
//                            ContextCompat.checkSelfPermission(activity, Manifest.permission.ACCESS_FINE_LOCATION) != PackageManager.PERMISSION_GRANTED) {
//
//                        ActivityCompat.requestPermissions(activity,
//                                new String[]{Manifest.permission.BLUETOOTH_SCAN, Manifest.permission.ACCESS_FINE_LOCATION},
//                                REQUEST_BLUETOOTH_PERMISSION);
//                        return;
//                    }
                }
//            }
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
                // Quyền đã được cấp, bật Bluetooth
                //if (!bluetoothAdapter.isEnabled()) {
                //    enableBluetooth();
                //}
//                else {
//                    disableBluetooth();
//                }

            } else {
                Toast.makeText(activity, "Yêu cầu quyền Bluetooth bị từ chối", Toast.LENGTH_SHORT).show();
            }
        }
    }

//    public void startConnectionCheck() {
//        connectionCheckerThread = new Thread(new Runnable() {
//            @Override
//            public void run() {
//                while (true) {
//                    if (bluetoothSocket != null && bluetoothSocket.isConnected()) {
//                        // Đã kết nối, không cần làm gì
//                    } else {
//                        // Nếu mất kết nối, thử tự động kết nối lại
//                        UnityPlayer.UnitySendMessage("UIManager", "OnDeviceConnected", "Reconnecting...");
//                        autoConnectToDevice(targetDeviceAddress);//
//                    }
//                    try {
//                        Thread.sleep(5000); // Kiểm tra mỗi 5 giây
//                    } catch (InterruptedException e) {
//                        break;
//                    }
//                }
//            }
//        });
//        connectionCheckerThread.start();
//    }

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
            Toast.makeText(activity, "Bắt đầu quét thiết bị...", Toast.LENGTH_SHORT).show();
        } else {
            Toast.makeText(activity, "Không thể bắt đầu quét", Toast.LENGTH_SHORT).show();
        }
    }

    private BroadcastReceiver deviceReceiver;

    // Bắt đầu quét thiết bị Bluetooth
//    public void startDiscovery() {
//       // Toast.makeText(activity, "call start", Toast.LENGTH_SHORT).show();
//        if (bluetoothAdapter != null && bluetoothAdapter.isEnabled()) {
//            if (ContextCompat.checkSelfPermission(activity, Manifest.permission.BLUETOOTH_SCAN) != PackageManager.PERMISSION_GRANTED ||
//                    ContextCompat.checkSelfPermission(activity, Manifest.permission.ACCESS_FINE_LOCATION) != PackageManager.PERMISSION_GRANTED) {
//
//                ActivityCompat.requestPermissions(activity,
//                        new String[]{Manifest.permission.BLUETOOTH_SCAN, Manifest.permission.ACCESS_FINE_LOCATION},
//                        REQUEST_BLUETOOTH_PERMISSION);
//                return;
//            }
//            // Đăng ký receiver để nhận các thiết bị tìm thấy
//            deviceReceiver = new BroadcastReceiver() {
//                @Override
//                public void onReceive(Context context, Intent intent) {
//                    String action = intent.getAction();
//                    if (BluetoothDevice.ACTION_FOUND.equals(action)) {
//                        if (ContextCompat.checkSelfPermission(activity, Manifest.permission.BLUETOOTH_SCAN) != PackageManager.PERMISSION_GRANTED ||
//                                ContextCompat.checkSelfPermission(activity, Manifest.permission.ACCESS_FINE_LOCATION) != PackageManager.PERMISSION_GRANTED) {
//
//                            ActivityCompat.requestPermissions(activity,
//                                    new String[]{Manifest.permission.BLUETOOTH_SCAN, Manifest.permission.ACCESS_FINE_LOCATION},
//                                    REQUEST_BLUETOOTH_PERMISSION);
//                            return;
//                        }
//                        BluetoothDevice device = intent.getParcelableExtra(BluetoothDevice.EXTRA_DEVICE);
//                        if (device != null) {
//                            // Lấy địa chỉ thiết bị và tên nếu có
//                            String deviceName = device.getName() != null ? device.getName() : "Unknown Device";
//                            String deviceAddress = device.getAddress() != null ? device.getAddress() : "Unknown Address";
//
//                            // Gửi thông tin thiết bị về Unity
//                            if (deviceName != null && deviceAddress != null) {
//                                Toast.makeText(activity, deviceName, Toast.LENGTH_SHORT).show();
//                                UnityPlayer.UnitySendMessage("UIManager", "OnDeviceFound", deviceName + ";" + deviceAddress);
//                            }
//                        }
//                        else {
//                            Log.w("BluetoothManager", "Device is null in ACTION_FOUND broadcast");
//                        }
//                    }
//                }
//            };
//
//            // Đăng ký receiver cho thiết bị tìm thấy
//            IntentFilter filter = new IntentFilter(BluetoothDevice.ACTION_FOUND);
//            activity.registerReceiver(deviceReceiver, filter);
//
//            // Bắt đầu quá trình quét thiết bị
//            boolean started = bluetoothAdapter.startDiscovery();
//            if (started) {
//                Toast.makeText(activity, "Bắt đầu quét thiết bị...", Toast.LENGTH_SHORT).show();
//            } else {
//                Toast.makeText(activity, "Không thể bắt đầu quét", Toast.LENGTH_SHORT).show();
//            }
//        } else {
//            Toast.makeText(activity, "Bluetooth chưa được bật", Toast.LENGTH_SHORT).show();
//        }
//    }

    // Dừng quét thiết bị Bluetooth
//    public void stopDiscovery() {
//        if (ContextCompat.checkSelfPermission(activity, Manifest.permission.BLUETOOTH_SCAN) != PackageManager.PERMISSION_GRANTED ||
//                ContextCompat.checkSelfPermission(activity, Manifest.permission.ACCESS_FINE_LOCATION) != PackageManager.PERMISSION_GRANTED) {
//
//            ActivityCompat.requestPermissions(activity,
//                    new String[]{Manifest.permission.BLUETOOTH_SCAN, Manifest.permission.ACCESS_FINE_LOCATION},
//                    REQUEST_BLUETOOTH_PERMISSION);
//            return;
//        }
//        if (bluetoothAdapter != null && bluetoothAdapter.isDiscovering()) {
//            bluetoothAdapter.cancelDiscovery();
//        }
//        if (deviceReceiver != null) {
//            activity.unregisterReceiver(deviceReceiver);
//            deviceReceiver = null;
//        }
//    }

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

    private void startListeningForData() {
        new Thread(new Runnable() {
            @Override
            public void run() {
                byte[] buffer = new byte[1024]; // Bộ đệm để lưu dữ liệu nhận
                int bytes;

                while (isConnected) {
                    try {
                        // Đọc dữ liệu từ InputStream
                        bytes = inputStream.read(buffer);
                        String receivedData = new String(buffer, 0, bytes);

                        // Gửi dữ liệu nhận được về Unity
                        UnityPlayer.UnitySendMessage("UIManager", "OnDataReceived", receivedData);
                    } catch (IOException e) {
                        Log.e("BluetoothManager", "Disconnected", e);
                        closeConnection();
                        break;
                    }
                }
            }
        }).start();
    }

    public void closeConnection() {
        isConnected = false;
        if (inputStream != null) {
            try {
                inputStream.close();
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
