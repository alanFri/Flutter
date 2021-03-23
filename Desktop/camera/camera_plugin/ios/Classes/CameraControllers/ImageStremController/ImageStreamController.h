//
//  ImageStremController.h
//  camera_plugin
//
//  Created by tanghuiqun on 2021/3/22.
//

#import <Foundation/Foundation.h>

#import <Flutter/Flutter.h>

#import <AVFoundation/AVFoundation.h>

NS_ASSUME_NONNULL_BEGIN


@interface ImageStreamController : NSObject

@property(readonly, nonatomic) bool streamImages;
@property(nonatomic) FlutterEventSink imageStreamEventSink;

- (instancetype)initWithEventSink:(FlutterEventSink)imageStreamEventSink;
- (void)captureOutput:(AVCaptureOutput *)output didOutputSampleBuffer:(CMSampleBufferRef)sampleBuffer fromConnection:(AVCaptureConnection *)connection;

@end

NS_ASSUME_NONNULL_END
