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
import android.widget.Toast;

import java.io.InputStream;
import java.util.UUID;

import androidx.core.app.ActivityCompat;
import androidx.core.content.ContextCompat;

public class BluetoothManager {
    private static final String TAG = "BluetoothManager";
    private BluetoothAdapter bluetoothAdapter;
    private Activity activity;
    private static final int REQUEST_BLUETOOTH_PERMISSION = 1;
    private BroadcastReceiver bluetoothReceiver;


    private BluetoothSocket bluetoothSocket;
    private InputStream inputStream;
    private boolean isConnected = false;

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

    // Hủy đăng ký receiver khi không cần thiết nữa (thường trong onDestroy của Activity)
    public void unregisterReceiver() {
        activity.unregisterReceiver(bluetoothReceiver);
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
            } else {
                // Quyền đã được cấp, bật Bluetooth
                if (!bluetoothAdapter.isEnabled()) {
                    Intent enableBtIntent = new Intent(BluetoothAdapter.ACTION_REQUEST_ENABLE);
                    activity.startActivityForResult(enableBtIntent, 1);
                } else {
                    Toast.makeText(activity, "Bluetooth đã được bật", Toast.LENGTH_SHORT).show();
                }
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
                // Quyền đã được cấp, bật Bluetooth
                if (!bluetoothAdapter.isEnabled()) {
                    enableBluetooth();
                }
                else{
                    disableBluetooth();
                }
            } else {
                Toast.makeText(activity, "Yêu cầu quyền Bluetooth bị từ chối", Toast.LENGTH_SHORT).show();
            }
        }
    }
}
