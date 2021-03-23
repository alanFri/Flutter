//
//  CameraConstants.h
//  camera_plugin
//
//  Created by tanghuiqun on 2021/3/22.
//


#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>


#define kCameraQualities @[\
    @{\
        @"width": @3840,\
        @"height": @2160\
    },\
    @{\
        @"width": @1920,\
        @"height": @1080\
    },\
    @{\
        @"width": @1280,\
        @"height": @720\
    },\
    @{\
        @"width": @640,\
        @"height": @480\
    },\
    @{\
        @"width": @352,\
        @"height": @288\
    }\
]


typedef enum {
    None,   // Flash is disabled
    On,     // Flash is always enabled when photo is taken
    Auto,   // Flash is enabled when user take a photo only if necessary
    Always, // Flash is enabled anytime, then trigger Auto mode when a photo is taken
} CameraFlashMode;

typedef enum {
    Front,
    Back,
} CameraSensor;

typedef enum {
    Photo,
    Video,
} CaptureModes;

NS_ASSUME_NONNULL_BEGIN

@interface CameraConstants : NSObject

+ (NSString *)selectVideoCapturePresset:(CGSize)size session:(AVCaptureSession *)session;
+ (NSString *)selectVideoCapturePresset:(AVCaptureSession *)session;
+ (CGSize)getSizeForPresset:(NSString *)presset;

@end

NS_ASSUME_NONNULL_END
