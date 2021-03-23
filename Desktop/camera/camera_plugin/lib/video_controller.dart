import 'camera_plugin.dart';

class VideoController {
  Future<void> recordVideo(String filePath) async {
    // We need to refresh camera before using it
    // audio channel need to be ready
    CameraPlugin.refresh();

    await CameraPlugin.recordVideo(filePath);
  }

  Future<void> stopRecordingVideo() async {
    await CameraPlugin.stopRecordingVideo();
  }
}
