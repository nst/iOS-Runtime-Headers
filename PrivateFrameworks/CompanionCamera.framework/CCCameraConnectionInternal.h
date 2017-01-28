/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionCamera.framework/CompanionCamera
 */

@interface CCCameraConnectionInternal : NSObject <CCCameraConnectionProtocol> {
    CCCameraConnection * _parent;
}

@property (nonatomic) CCCameraConnection *parent;

- (void).cxx_destruct;
- (id)parent;
- (void)setParent:(id)arg1;
- (void)takePhotoWithCountdown:(unsigned long long)arg1;
- (oneway void)xpc_beginBurstCaptureWithReply:(id)arg1;
- (oneway void)xpc_beginVideo;
- (oneway void)xpc_cancelCountdown;
- (oneway void)xpc_endBurstCaptureWithReply:(id)arg1;
- (oneway void)xpc_endVideo;
- (oneway void)xpc_fetchCurrentState:(id)arg1;
- (oneway void)xpc_setCameraMode:(int)arg1 interruptCapture:(bool)arg2 completion:(id)arg3;
- (oneway void)xpc_setFlashMode:(int)arg1;
- (oneway void)xpc_setFocusPoint:(id)arg1;
- (oneway void)xpc_setHDRMode:(int)arg1;
- (oneway void)xpc_setIrisMode:(int)arg1;
- (oneway void)xpc_setPreviewEndpoint:(id)arg1;
- (oneway void)xpc_setZoom:(float)arg1 completion:(id)arg2;
- (oneway void)xpc_toggleCameraDevice;

@end
