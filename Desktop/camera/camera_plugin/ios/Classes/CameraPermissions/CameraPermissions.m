//
//  CameraPermissions.m
//  camera_plugin
//
//  Created by tanghuiqun on 2021/3/22.
//

#import "CameraPermissions.h"

#import <AVFoundation/AVFoundation.h>


@implementation CameraPermissions

+ (BOOL)checkPermissions {
    NSString *mediaType = AVMediaTypeVideo;
    AVAuthorizationStatus authStatus = [AVCaptureDevice authorizationStatusForMediaType:mediaType];
    
    __block BOOL permissionsGranted;
    if (authStatus == AVAuthorizationStatusNotDetermined) {
        dispatch_semaphore_t sem = dispatch_semaphore_create(0);
         [AVCaptureDevice requestAccessForMediaType:mediaType completionHandler:^(BOOL granted) {
           permissionsGranted = granted;
           dispatch_semaphore_signal(sem);
         }];
        dispatch_semaphore_wait(sem, DISPATCH_TIME_FOREVER);
    } else {
      permissionsGranted = (authStatus == AVAuthorizationStatusAuthorized);
    }
    return permissionsGranted;
}


@end

