#import <Flutter/Flutter.h>

@interface CameraPlugin : NSObject<FlutterPlugin, FlutterStreamHandler>
@end


@interface OrientationStreamHandler : NSObject <FlutterStreamHandler>
@end

@interface VideoRecordingStreamHandler : NSObject <FlutterStreamHandler>
@end

@interface ImageStreamHandler : NSObject <FlutterStreamHandler>
@end
