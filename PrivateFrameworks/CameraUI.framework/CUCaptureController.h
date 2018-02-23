/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CUCaptureController : NSObject <CAMCaptureRequestIntervalometerDelegate, CAMCaptureService> {
    bool  _HDRSuggested;
    CAMBurstController * __burstController;
    CAMCaptureEngine * __captureEngine;
    bool  __capturingPairedVideoPaused;
    CAMPanoramaCaptureRequest * __capturingPanoramaRequest;
    CAMVideoCaptureRequest * __capturingVideoRequest;
    CAMKeyValueCoalescer * __exposureCoalescer;
    CAMKeyValueCoalescer * __focusCoalescer;
    NSMutableSet * __identifiersForRecordingVideoForStillImageRequests;
    NSMutableSet * __identifiersForShowingLivePhotoIndicatorForStillImageRequests;
    bool  __isVideoCaptureAvailable;
    CAMLocationController * __locationController;
    long long  __maximumNumberOfStillImageRequests;
    CAMMotionController * __motionController;
    bool  __needsInitialPairedVideoUpdate;
    NSCountedSet * __numberOfInflightRequestsByType;
    CAMVideoCaptureRequest * __pendingVideoCaptureRequest;
    CAMPowerController * __powerController;
    CAMProtectionController * __protectionController;
    CAMRemoteShutterController * __remoteShutterController;
    NSObject<OS_dispatch_queue> * __responseQueue;
    CAMThumbnailGenerator * __responseThumbnailGenerator;
    bool  __shouldResetFocusAndExposureAfterIrisVideoCapture;
    <CAMAvailabilityDelegate> * _availabilityDelegate;
    <CAMBurstDelegate> * _burstDelegate;
    bool  _captureAvailable;
    bool  _capturingTimelapse;
    bool  _configurationAvailable;
    <CAMConfigurationDelegate> * _configurationDelegate;
    CAMCaptureRequestIntervalometer * _currentBurstIntervalometer;
    <CAMExposureDelegate> * _exposureDelegate;
    <CAMFacesDelegate> * _facesDelgate;
    bool  _failedConfigurationPreventingCapture;
    bool  _flashActive;
    bool  _flashAvailable;
    <CAMFocusDelegate> * _focusDelegate;
    <CAMCaptureInterruptionDelegate> * _interruptionDelegate;
    <CAMMachineReadableCodeDelegate> * _machineReadableCodeDelegate;
    <CAMPanoramaChangeDelegate> * _panoramaChangeDelegate;
    CAMPanoramaPreviewView * _panoramaPreviewView;
    bool  _previewDisabled;
    <CAMCaptureRecoveryDelegate> * _recoveryDelegate;
    <CAMCaptureResultDelegate> * _resultDelegate;
    <CAMCaptureRunningDelegate> * _runningDelegate;
    <CAMShallowDepthOfFieldStatusDelegate> * _shallowDepthOfFieldStatusDelegate;
    <CAMStillImageCapturingVideoDelegate> * _stillImageCapturingVideoDelegate;
    <CAMSuggestionDelegate> * _suggestionDelegate;
    bool  _torchActive;
    bool  _torchAvailable;
    int  _uniqueRequestIDForConfigurationChange;
    <CAMZoomDelegate> * _zoomDelegate;
}

@property (getter=isHDRSuggested, setter=_setHDRSuggested:, nonatomic) bool HDRSuggested;
@property (nonatomic, readonly) CAMBurstController *_burstController;
@property (nonatomic, readonly) CAMCaptureEngine *_captureEngine;
@property (getter=_isCapturingPairedVideoPaused, setter=_setCapturingPairedVideoPaused:, nonatomic) bool _capturingPairedVideoPaused;
@property (setter=_setCapturingPanoramaRequest:, nonatomic, retain) CAMPanoramaCaptureRequest *_capturingPanoramaRequest;
@property (setter=_setCapturingVideoRequest:, nonatomic, retain) CAMVideoCaptureRequest *_capturingVideoRequest;
@property (nonatomic, readonly) CAMKeyValueCoalescer *_exposureCoalescer;
@property (nonatomic, readonly) CAMKeyValueCoalescer *_focusCoalescer;
@property (nonatomic, readonly) NSMutableSet *_identifiersForRecordingVideoForStillImageRequests;
@property (nonatomic, readonly) NSMutableSet *_identifiersForShowingLivePhotoIndicatorForStillImageRequests;
@property (getter=_isVideoCaptureAvailable, setter=_setVideoCaptureAvailable:, nonatomic) bool _isVideoCaptureAvailable;
@property (nonatomic, readonly) CAMLocationController *_locationController;
@property (setter=_setMaximumNumberOfStillImageRequests:, nonatomic) long long _maximumNumberOfStillImageRequests;
@property (nonatomic, readonly) CAMMotionController *_motionController;
@property (setter=_setNeedsInitialPairedVideoUpdate:, nonatomic) bool _needsInitialPairedVideoUpdate;
@property (nonatomic, readonly) NSCountedSet *_numberOfInflightRequestsByType;
@property (setter=_setPendingVideoCaptureRequest:, nonatomic, retain) CAMVideoCaptureRequest *_pendingVideoCaptureRequest;
@property (nonatomic, readonly) CAMPowerController *_powerController;
@property (nonatomic, readonly) CAMProtectionController *_protectionController;
@property (nonatomic, readonly) CAMRemoteShutterController *_remoteShutterController;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_responseQueue;
@property (nonatomic, readonly) CAMThumbnailGenerator *_responseThumbnailGenerator;
@property (setter=_setShouldResetFocusAndExposureAfterIrisVideoCapture:, nonatomic) bool _shouldResetFocusAndExposureAfterIrisVideoCapture;
@property (nonatomic) <CAMAvailabilityDelegate> *availabilityDelegate;
@property (nonatomic) <CAMBurstDelegate> *burstDelegate;
@property (getter=isCaptureAvailable, setter=_setCaptureAvailable:, nonatomic) bool captureAvailable;
@property (getter=isCapturingBurst, nonatomic, readonly) bool capturingBurst;
@property (getter=isCapturingPanorama, nonatomic, readonly) bool capturingPanorama;
@property (getter=isCapturingStillImagePairedVideo, nonatomic, readonly) bool capturingStillImagePairedVideo;
@property (getter=isCapturingTimelapse, nonatomic) bool capturingTimelapse;
@property (getter=isCapturingVideo, nonatomic, readonly) bool capturingVideo;
@property (getter=isConfigurationAvailable, setter=_setConfigurationAvailable:, nonatomic) bool configurationAvailable;
@property (nonatomic) <CAMConfigurationDelegate> *configurationDelegate;
@property (nonatomic, readonly) unsigned long long currentBurstCount;
@property (setter=_setCurrentBurstIntervalometer:, nonatomic, retain) CAMCaptureRequestIntervalometer *currentBurstIntervalometer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <CAMExposureDelegate> *exposureDelegate;
@property (nonatomic) <CAMFacesDelegate> *facesDelgate;
@property (getter=_isFailedConfigurationPreventingCapture, setter=_setFailedConfigurationPreventingCapture:, nonatomic) bool failedConfigurationPreventingCapture;
@property (getter=isFlashActive, setter=_setFlashActive:, nonatomic) bool flashActive;
@property (getter=isFlashAvailable, setter=_setFlashAvailable:, nonatomic) bool flashAvailable;
@property (nonatomic) <CAMFocusDelegate> *focusDelegate;
@property (readonly) unsigned long long hash;
@property (getter=isInterrupted, nonatomic, readonly) bool interrupted;
@property (nonatomic) <CAMCaptureInterruptionDelegate> *interruptionDelegate;
@property (nonatomic) <CAMMachineReadableCodeDelegate> *machineReadableCodeDelegate;
@property (nonatomic) <CAMPanoramaChangeDelegate> *panoramaChangeDelegate;
@property (nonatomic, readonly) CAMPanoramaPreviewView *panoramaPreviewView;
@property (getter=isPreviewDisabled, nonatomic, readonly) bool previewDisabled;
@property (nonatomic) <CAMCaptureRecoveryDelegate> *recoveryDelegate;
@property (nonatomic) <CAMCaptureResultDelegate> *resultDelegate;
@property (nonatomic) <CAMCaptureRunningDelegate> *runningDelegate;
@property (nonatomic) <CAMShallowDepthOfFieldStatusDelegate> *shallowDepthOfFieldStatusDelegate;
@property (nonatomic, readonly) bool shouldAllowUserToChangeFocusAndExposure;
@property (nonatomic, readonly) bool shouldShowLivePhotoIndicator;
@property (nonatomic) <CAMStillImageCapturingVideoDelegate> *stillImageCapturingVideoDelegate;
@property (nonatomic) <CAMSuggestionDelegate> *suggestionDelegate;
@property (readonly) Class superclass;
@property (getter=isTorchActive, setter=_setTorchActive:, nonatomic) bool torchActive;
@property (getter=isTorchAvailable, setter=_setTorchAvailable:, nonatomic) bool torchAvailable;
@property (nonatomic, readonly) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property (nonatomic) <CAMZoomDelegate> *zoomDelegate;

+ (float)focusLensPositionCurrentSentinel;

- (void).cxx_destruct;
- (id)_availabilityKeyPaths;
- (void)_availabilityResultChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3;
- (void)_beginTrackingVideoRecordingForStillImageRequest:(id)arg1;
- (id)_burstController;
- (void)_cancelDelayedFocusAndExposureReset;
- (id)_captureEngine;
- (bool)_captureStillImageWithRequest:(id)arg1;
- (id)_capturingPanoramaRequest;
- (id)_capturingVideoRequest;
- (id)_commandForChangeToGraphConfiguration:(id)arg1 resetZoom:(bool)arg2 minimumExecutionTime:(double)arg3 outRequestID:(int*)arg4;
- (id)_commandForConfiguration:(id)arg1 outRequestID:(int*)arg2;
- (id)_commandForResetFocus:(bool)arg1 resetExposure:(bool)arg2 resetExposureTargetBias:(bool)arg3;
- (void)_didPlayBeginVideoRecordingSound;
- (void)_endTrackingVideoRecordingForStillImageRequest:(id)arg1;
- (id)_exposureCoalescer;
- (id)_exposureKVOKeyPaths;
- (void)_exposureResultChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3;
- (id)_focusCoalescer;
- (id)_focusKVOKeyPaths;
- (void)_focusResultChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3;
- (void)_handleCaptureEngineExecutionNotification:(id)arg1;
- (void)_handleSystemPressureStateChanged;
- (id)_identifierForPendingVideoForStillImageRequest:(id)arg1;
- (id)_identifiersForRecordingVideoForStillImageRequests;
- (id)_identifiersForShowingLivePhotoIndicatorForStillImageRequests;
- (bool)_isCapturingPairedVideoPaused;
- (bool)_isFailedConfigurationPreventingCapture;
- (bool)_isVideoCaptureAvailable;
- (bool)_kvoDidEndForChange:(id)arg1;
- (bool)_kvoDidStartForChange:(id)arg1;
- (id)_locationController;
- (long long)_maximumNumberOfStillImageRequests;
- (unsigned long long)_maximumNumberOfStillImageRequestsDuringBurst;
- (id)_motionController;
- (bool)_needsInitialPairedVideoUpdate;
- (void)_notifyDelegateOfCaptureAvailabilityChanged:(bool)arg1;
- (void)_notifyDelegateOfConfigurationAvailabilityChanged:(bool)arg1;
- (id)_numberOfInflightRequestsByType;
- (id)_pendingVideoCaptureRequest;
- (id)_powerController;
- (void)_processCapturedBurstRequest:(id)arg1 withResult:(id)arg2;
- (void)_processPendingVideoCaptureRequest:(id)arg1;
- (id)_protectionController;
- (id)_realtimeMetadataCommandsForMode:(long long)arg1 capturing:(bool)arg2 wantsMachineReadableCodes:(bool)arg3;
- (id)_remoteShutterController;
- (void)_resetFocusAndExposureAfterCapture;
- (void)_resetFocusAndExposureIfAppropriateForReason:(long long)arg1;
- (id)_responseQueue;
- (id)_responseThumbnailGenerator;
- (id)_sanitizePanoramaRequest:(id)arg1;
- (id)_sanitizeStillImageRequest:(id)arg1;
- (id)_sanitizeVideoRequest:(id)arg1;
- (void)_scheduleFocusAndExposureResetAfterCaptureIfNecessary;
- (void)_setCaptureAvailable:(bool)arg1;
- (void)_setCapturingPairedVideoPaused:(bool)arg1;
- (void)_setCapturingPanoramaRequest:(id)arg1;
- (void)_setCapturingVideoRequest:(id)arg1;
- (void)_setConfigurationAvailable:(bool)arg1;
- (void)_setCurrentBurstIntervalometer:(id)arg1;
- (void)_setFailedConfigurationPreventingCapture:(bool)arg1;
- (void)_setFlashActive:(bool)arg1;
- (void)_setFlashAvailable:(bool)arg1;
- (void)_setHDRSuggested:(bool)arg1;
- (void)_setMaximumNumberOfStillImageRequests:(long long)arg1;
- (void)_setNeedsInitialPairedVideoUpdate:(bool)arg1;
- (void)_setPendingVideoCaptureRequest:(id)arg1;
- (void)_setShouldResetFocusAndExposureAfterIrisVideoCapture:(bool)arg1;
- (void)_setTorchActive:(bool)arg1;
- (void)_setTorchAvailable:(bool)arg1;
- (void)_setVideoCaptureAvailable:(bool)arg1;
- (void)_setupAvailabilityMonitoring;
- (void)_setupExposureMonitoring;
- (void)_setupFocusAndExposureMonitoring;
- (void)_setupFocusMonitoring;
- (void)_setupShallowDepthOfFieldMonitoring;
- (void)_setupSuggestionMonitoring;
- (void)_setupSystemPressureStateMonitoring;
- (void)_setupZoomMonitoring;
- (void)_shallowDepthOfFieldMonitoringChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3;
- (id)_shallowDepthOfFieldMonitoringKeyPaths;
- (bool)_shouldMonitorSystemPressureState;
- (bool)_shouldResetFocusAndExposureAfterIrisVideoCapture;
- (void)_startShowingLivePhotoIndicatorForStillImageRequest:(id)arg1;
- (void)_stopShowingLivePhotoIndicatorForStillImageRequest:(id)arg1;
- (void)_subjectAreaDidChange:(id)arg1;
- (id)_suggestionKeyPaths;
- (void)_suggestionResultChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3;
- (void)_systemPressureStateMonitoringChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3;
- (id)_systemPressureStateMonitoringKeyPaths;
- (void)_teardownAvailabilityMonitoring;
- (void)_teardownFocusAndExposureMonitoring;
- (void)_teardownShallowDepthOfFieldMonitoring;
- (void)_teardownSuggestionMonitoring;
- (void)_teardownSystemPressureStateMonitoring;
- (void)_teardownZoomMonitoring;
- (id)_thumbnailImageFromStillImageCaptureResult:(id)arg1 imageOrientation:(long long)arg2;
- (int)_uniqueRequestIDForChangeToModeAndDevice;
- (void)_updateAvailabilityAfterCapturedRequest:(id)arg1;
- (void)_updateAvailabilityAfterEnqueuedRequest:(id)arg1;
- (void)_updateAvailabilityAfterStopCapturingForRequest:(id)arg1;
- (void)_updateAvailabilityForRequestType:(long long)arg1;
- (void)_updateAvailabilityWhenPreparingToStopCapturingForRequest:(id)arg1;
- (id)_updateFocusAndExposureForStartBurstCapture;
- (id)_updateFocusAndExposureForStartPanorama;
- (void)_updateMaximumNumberOfStillImageRequestsAfterBurst;
- (void)_updateMaximumNumberOfStillImageRequestsAfterCapturedRequestIfNecessary:(id)arg1;
- (void)_updateMaximumNumberOfStillImageRequestsAfterEnqueuingRequestWithFlashMode:(long long)arg1 HDRMode:(long long)arg2 burstIdentifier:(id)arg3 wantsPortraitEffect:(bool)arg4;
- (bool)_useSmoothFocus;
- (bool)_wantsMachineReadableCodesForGraphConfiguration:(id)arg1;
- (id)_zoomMonitoringKeyPaths;
- (void)_zoomResultChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3;
- (int)applyCaptureConfiguration:(id)arg1;
- (void)attemptToEndInterruptions;
- (id)availabilityDelegate;
- (id)burstDelegate;
- (void)cancelDelayedFocusAndExposureReset;
- (bool)captureStillImageWithRequest:(id)arg1 error:(id*)arg2;
- (void)changeExposureTargetBias:(float)arg1;
- (void)changeToFlashMode:(long long)arg1;
- (int)changeToGraphConfiguration:(id)arg1 resetZoom:(bool)arg2 minimumExecutionTime:(double)arg3;
- (void)changeToLockedExposure;
- (void)changeToPanoramaDirection:(long long)arg1;
- (void)changeToPanoramaEncodingBehavior:(long long)arg1;
- (void)changeToPreviewConfiguration:(unsigned long long)arg1;
- (void)changeToPreviewDisabled;
- (void)changeToPreviewEnabledWithConfiguration:(unsigned long long)arg1;
- (void)changeToPreviewFilters:(id)arg1;
- (void)changeToTorchLevel:(float)arg1;
- (void)changeToTorchMode:(long long)arg1;
- (void)changeToVideoRecordingCaptureOrientation:(long long)arg1;
- (void)changeToVideoZoomFactor:(double)arg1;
- (id)configurationDelegate;
- (unsigned long long)currentBurstCount;
- (id)currentBurstIntervalometer;
- (void)dealloc;
- (id)exposureDelegate;
- (id)facesDelgate;
- (void)focusAndExposeAtPoint:(struct CGPoint { double x1; double x2; })arg1 lockFocus:(bool)arg2 resetExposureTargetBias:(bool)arg3;
- (void)focusAtCenterForVideoRecording;
- (id)focusDelegate;
- (void)forceDisableSubjectAreaChangeMonitoring;
- (void)handleSessionDidStartRunning;
- (void)handleSessionDidStopRunning;
- (void)handleSessionInterruptionEnded;
- (void)handleSessionInterruptionForReason:(long long)arg1;
- (id)init;
- (id)initWithCaptureConfiguration:(id)arg1 engineOptions:(long long)arg2 locationController:(id)arg3 motionController:(id)arg4 burstController:(id)arg5 protectionController:(id)arg6 powerController:(id)arg7 remoteShutterController:(id)arg8;
- (id)interruptionDelegate;
- (bool)intervalometer:(id)arg1 didGenerateCaptureRequest:(id)arg2;
- (void)intervalometerDidReachMaximumCount:(id)arg1;
- (void)invalidateController;
- (bool)isCaptureAvailable;
- (bool)isCapturingBurst;
- (bool)isCapturingPanorama;
- (bool)isCapturingStillImagePairedVideo;
- (bool)isCapturingTimelapse;
- (bool)isCapturingVideo;
- (bool)isConfigurationAvailable;
- (bool)isFlashActive;
- (bool)isFlashAvailable;
- (bool)isHDRSuggested;
- (bool)isInterrupted;
- (bool)isPreviewDisabled;
- (bool)isTorchActive;
- (bool)isTorchAvailable;
- (void)lockFocusAtLensPosition:(float)arg1 completionBlock:(id /* block */)arg2;
- (id)machineReadableCodeDelegate;
- (void)metadataWasRecognized:(id)arg1;
- (void)notifyTimelapseControllerFinishedUpdatingWithLocation;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)panoramaChangeDelegate;
- (void)panoramaConfigurationDidChangeWithImageQueue:(struct _CAImageQueue { }*)arg1 direction:(long long)arg2;
- (id)panoramaPreviewView;
- (void)panoramaRequest:(id)arg1 didCompleteCaptureWithResult:(id)arg2;
- (void)panoramaRequest:(id)arg1 didReceiveNotification:(long long)arg2;
- (void)panoramaRequestDidStartCapturing:(id)arg1;
- (void)panoramaRequestDidStopCapturing:(id)arg1;
- (void)pauseCapturingStillImagePairedVideo;
- (void)prepareToCaptureStillImageAtSystemTime:(long long)arg1;
- (void)queryTimelapseDimensionsWithCompletionBlock:(id /* block */)arg1;
- (void)queryVideoDimensionsWithCompletionBlock:(id /* block */)arg1;
- (id)recoveryDelegate;
- (void)registerCaptureService:(id)arg1;
- (void)registerEffectsPreviewSampleBufferDelegate:(id)arg1;
- (void)registerVideoThumbnailContentsDelegate:(id)arg1;
- (id)resultDelegate;
- (void)resumeCapturingStillImagePairedVideo;
- (id)runningDelegate;
- (void)setAvailabilityDelegate:(id)arg1;
- (void)setBurstDelegate:(id)arg1;
- (void)setCapturingTimelapse:(bool)arg1;
- (void)setConfigurationDelegate:(id)arg1;
- (void)setExposureDelegate:(id)arg1;
- (void)setFacesDelgate:(id)arg1;
- (void)setFocusDelegate:(id)arg1;
- (void)setInterruptionDelegate:(id)arg1;
- (void)setMachineReadableCodeDelegate:(id)arg1;
- (void)setPanoramaChangeDelegate:(id)arg1;
- (void)setRecoveryDelegate:(id)arg1;
- (void)setResultDelegate:(id)arg1;
- (void)setRunningDelegate:(id)arg1;
- (void)setShallowDepthOfFieldStatusDelegate:(id)arg1;
- (void)setStillImageCapturingVideoDelegate:(id)arg1;
- (void)setSuggestionDelegate:(id)arg1;
- (void)setZoomDelegate:(id)arg1;
- (id)shallowDepthOfFieldStatusDelegate;
- (bool)shouldAllowUserToChangeFocusAndExposure;
- (bool)shouldShowLivePhotoIndicator;
- (void)startCaptureSession;
- (bool)startCapturingBurstWithRequest:(id)arg1 error:(id*)arg2;
- (bool)startCapturingPanoramaWithRequest:(id)arg1 error:(id*)arg2;
- (bool)startCapturingVideoWithRequest:(id)arg1 error:(id*)arg2;
- (void)startMonitoringForHDRSuggestions;
- (void)startRampToVideoZoomFactor:(double)arg1 withDuration:(double)arg2;
- (void)startRampToVideoZoomFactor:(double)arg1 withRate:(float)arg2;
- (id)stillImageCapturingVideoDelegate;
- (void)stillImageRequest:(id)arg1 didCompleteStillImageCaptureWithResult:(id)arg2;
- (void)stillImageRequest:(id)arg1 didCompleteVideoCaptureWithResult:(id)arg2;
- (void)stillImageRequestDidCompleteCapture:(id)arg1 error:(id)arg2;
- (void)stillImageRequestDidStartCapturing:(id)arg1 resolvedSettings:(id)arg2;
- (void)stillImageRequestDidStopCapturing:(id)arg1;
- (void)stillImageRequestDidStopCapturingVideo:(id)arg1;
- (void)stillImageRequestWillStartCapturingVideo:(id)arg1;
- (void)stopCaptureSession;
- (void)stopCapturingBurst;
- (bool)stopCapturingPanorama;
- (bool)stopCapturingVideo;
- (void)stopMonitoringForHDRSuggestions;
- (void)stopRampToVideoZoomFactor;
- (id)suggestionDelegate;
- (void)unregisterCaptureService:(id)arg1;
- (void)unregisterEffectsPreviewSampleBufferDelegate:(id)arg1;
- (void)unregisterVideoThumbnailContentsDelegate:(id)arg1;
- (void)updateRealtimeMetadataConfigurationForGraphConfiguration:(id)arg1 isCapturing:(bool)arg2;
- (id)videoPreviewLayer;
- (void)videoRequest:(id)arg1 didCompleteCaptureWithResult:(id)arg2;
- (void)videoRequestDidStartCapturing:(id)arg1;
- (void)videoRequestDidStopCapturing:(id)arg1;
- (void)willPerformRecoveryFromRuntimeError:(id)arg1;
- (id)zoomDelegate;

@end
