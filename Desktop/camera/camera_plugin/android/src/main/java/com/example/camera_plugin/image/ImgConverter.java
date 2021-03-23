package com.example.camera_plugin.image;

import android.media.ImageReader;

public interface ImgConverter {

    byte[] process(ImageReader imageReader);
}
