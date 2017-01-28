/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionCamera.framework/CompanionCamera
 */

@interface CCCameraConnection : NSObject <CCCameraConnectionProtocol, FigCameraViewfinderDelegate, FigCameraViewfinderSessionDelegate> {
    bool  _burstInProgress;
    unsigned long long  _currentPreviewState;
    <CCCameraConnectionDelegate> * _delegate;
    unsigned long long  _desiredPreviewState;
    int  _deviceConnectedNotificationToken;
    int  _deviceDisconnectedNotificationToken;
    CCCameraConnectionInternal * _internal;
    unsigned long long  _interruptionCount;
    float  _lastSentZoomAmount;
    id  _orientationChangeObserver;
    float  _pendingZoomAmount;
    NSString * _previewEndpoint;
    FigCameraViewfinder * _remoteViewfinder;
    FigCameraViewfinderSession * _remoteViewfinderSession;
    NSXPCConnection * _xpc;
    NSObject<OS_dispatch_source> * _zoomTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CCCameraConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_burstSupport;
- (void)_checkin;
- (int)_currentOrientation;
- (int)_flashMode;
- (int)_flashSupport;
- (void)_handleInterruption;
- (void)_handleInvalidation;
- (int)_hdrMode;
- (int)_hdrSupport;
- (int)_irisMode;
- (int)_irisSupport;
- (int)_mode;
- (void)_performPreviewStateTransitionsIfNeeded;
- (bool)_shouldReportEvent;
- (bool)_toggleCameraDeviceSupport;
- (double)_zoomAmount;
- (bool)_zoomSupport;
- (void)_zoomTimerFired;
- (void)burstCaptureDidStop;
- (void)burstCaptureNumberOfPhotosDidChange:(unsigned long long)arg1;
- (void)burstCaptureWillStart;
- (void)cameraViewfinder:(id)arg1 viewfinderSessionDidBegin:(id)arg2;
- (void)cameraViewfinder:(id)arg1 viewfinderSessionDidEnd:(id)arg2;
- (void)cameraViewfinderSession:(id)arg1 didCapturePhotoWithStatus:(int)arg2 thumbnailData:(id)arg3 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (void)cameraViewfinderSession:(id)arg1 previewStreamDidCloseWithStatus:(int)arg2;
- (void)cameraViewfinderSessionPreviewStreamDidOpen:(id)arg1;
- (void)captureDeviceDidChange;
- (void)close;
- (void)closePreview;
- (void)countdownCanceled;
- (void)dealloc;
- (id)delegate;
- (void)flashModeDidChange;
- (void)hdrModeDidChange;
- (id)init;
- (void)irisModeDidChange;
- (bool)isOpen;
- (bool)isPreviewConnected;
- (void)modeSelected:(unsigned long long)arg1;
- (void)open;
- (void)openPreview;
- (void)photoTaken:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)switchedMirroringMode:(bool)arg1;
- (void)switchedOrientation:(long long)arg1;
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
- (void)zoomDidChange:(double)arg1;

@end
