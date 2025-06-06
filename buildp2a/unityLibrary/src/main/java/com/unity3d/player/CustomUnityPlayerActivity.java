package com.unity3d.player;

import android.content.Intent;
import android.os.Bundle;
import android.util.Log;

import com.unity3d.player.UnityPlayer;
import com.unity3d.player.UnityPlayerActivity;

public class CustomUnityPlayerActivity extends UnityPlayerActivity {
    private static final String TAG = "CustomUnityPlayerActivity";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        handleOpenReason();
    }

    private void handleOpenReason() {
        Intent intent = getIntent();
        String openReason = (intent != null) ? intent.getStringExtra(BackgroundAudioPlugin.EXTRA_OPEN_REASON) : BackgroundAudioPlugin.OPEN_REASON_USER;
        if (openReason == null) {
            openReason = BackgroundAudioPlugin.OPEN_REASON_USER;
        }
        Log.d(TAG, "Ứng dụng được mở với lý do: " + openReason);

        // Gửi thông tin đến Unity
        try {
            UnityPlayer.UnitySendMessage("RecordAudio", "OnAppOpened", openReason);
        } catch (Exception e) {
            Log.e(TAG, "Lỗi gửi thông điệp đến Unity: " + e.getMessage());
        }
    }

    @Override
    protected void onNewIntent(Intent intent) {
        super.onNewIntent(intent);
        setIntent(intent);
        handleOpenReason();
    }
}