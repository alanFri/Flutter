import 'camera_plugin.dart';

class PictureController {
  Future<void> takePicture(String filePath) async {
    await CameraPlugin.takePhoto(filePath);
  }
}
