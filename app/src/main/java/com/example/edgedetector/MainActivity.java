package com.example.edgedetector;

import android.app.Activity;
import android.os.Bundle;
import android.view.TextureView;

public class MainActivity extends Activity {
    private TextureView textureView;
    private CameraRenderer cameraRenderer;

    static {
        System.loadLibrary("native-lib");
    }

    public static native void sendFrameToNative(byte[] data, int width, int height);

    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        textureView = findViewById(R.id.glSurfaceView);
        textureView.post(() -> {
            cameraRenderer = new CameraRenderer(this, textureView);
            cameraRenderer.startCamera();
        });
    }
}
