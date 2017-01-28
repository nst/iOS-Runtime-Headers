/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMCameraViewController : UIViewController <CAMCaptureResultDelegate, CAMPersistenceResultDelegate, CAMViewfinderReviewButtonSource, NSCoding, NSSecureCoding> {
    NSObject<OS_dispatch_queue> * __resultProcessingQueue;
    NSMutableDictionary * __resultQueuePendingLivePhotoProperties;
    NSMutableDictionary * __resultQueuePendingPortraitPhotoProperties;
    CAMThumbnailGenerator * __resultQueueThumbnailGenerator;
    CAMReviewButton * __reviewButton;
    bool  _automaticallyManagesCameraSession;
    CAMBurstController * _burstController;
    CUCaptureController * _captureController;
    <CAMCameraCaptureDelegate> * _captureDelegate;
    <CAMCameraConfigurationDelegate> * _configurationDelegate;
    CAMIrisVideoController * _irisVideoController;
    CAMKeepAliveController * _keepAliveController;
    CAMLocationController * _locationController;
    CAMMotionController * _motionController;
    CAMNebulaDaemonProxyManager * _nebulaDaemonProxyManager;
    CAMPersistenceController * _persistenceController;
    CAMPowerController * _powerController;
    <CAMCameraViewControllerPresentationDelegate> * _presentationDelegate;
    CAMProtectionController * _protectionController;
    CAMRemoteShutterController * _remoteShutterController;
    CAMTimelapseController * _timelapseController;
    CAMViewfinderViewController * _viewfinderViewController;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_resultProcessingQueue;
@property (nonatomic, readonly) NSMutableDictionary *_resultQueuePendingLivePhotoProperties;
@property (nonatomic, readonly) NSMutableDictionary *_resultQueuePendingPortraitPhotoProperties;
@property (nonatomic, readonly) CAMThumbnailGenerator *_resultQueueThumbnailGenerator;
@property (nonatomic, readonly) CAMReviewButton *_reviewButton;
@property (nonatomic) bool automaticallyAdjustsApplicationIdleTimer;
@property (nonatomic) bool automaticallyManagesCameraSession;
@property (nonatomic, readonly) CAMBurstController *burstController;
@property (nonatomic, readonly) CUCaptureController *captureController;
@property (nonatomic) <CAMCameraCaptureDelegate> *captureDelegate;
@property (nonatomic, readonly) long long captureDevice;
@property (nonatomic, readonly) long long captureMode;
@property (nonatomic) <CAMCameraConfigurationDelegate> *configurationDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisablingAdditionalCaptures, nonatomic) bool disablingAdditionalCaptures;
@property (getter=isDisablingMultipleCaptureFeatures, nonatomic) bool disablingMultipleCaptureFeatures;
@property (nonatomic) long long flashMode;
@property (readonly) unsigned long long hash;
@property (setter=setHDRMode:, nonatomic) long long hdrMode;
@property (nonatomic, readonly) CAMIrisVideoController *irisVideoController;
@property (nonatomic, readonly) CAMKeepAliveController *keepAliveController;
@property (nonatomic) long long livePhotoMode;
@property (nonatomic, readonly) CAMLocationController *locationController;
@property (nonatomic, readonly) CAMMotionController *motionController;
@property (nonatomic, readonly) CAMNebulaDaemonProxyManager *nebulaDaemonProxyManager;
@property (getter=isPerformingTileTransition, nonatomic) bool performingTileTransition;
@property (nonatomic) unsigned long long persistenceBehavior;
@property (nonatomic, readonly) CAMPersistenceController *persistenceController;
@property (nonatomic, readonly) CAMPowerController *powerController;
@property (nonatomic) <CAMCameraViewControllerPresentationDelegate> *presentationDelegate;
@property (nonatomic, readonly) CAMProtectionController *protectionController;
@property (getter=isRecording, nonatomic, readonly) bool recording;
@property (nonatomic, readonly) CAMRemoteShutterController *remoteShutterController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CAMTimelapseController *timelapseController;
@property (nonatomic) long long timerDuration;
@property (nonatomic) long long torchMode;
@property (nonatomic, readonly) CAMViewfinderViewController *viewfinderViewController;

+ (bool)isEmulatingImagePicker;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_behaviorDefinedDestinationURLForRequest:(id)arg1 withLocalDestinationURL:(id)arg2 linkedDestinationURL:(id)arg3;
- (unsigned long long)_capturePersistenceBehaviorForViewfinderPersistenceBehavior:(unsigned long long)arg1;
- (id)_clientPropertiesForLivePhotoVideoURL:(id)arg1 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 uniqueIdentifier:(id)arg3;
- (id)_clientPropertiesForStillImageWithURL:(id)arg1 metadata:(id)arg2 creationDate:(id)arg3 captureOrientation:(long long)arg4 fullsizeSurface:(void*)arg5 fullsizeSize:(unsigned long long)arg6 previewSurface:(void*)arg7 previewOrientation:(long long)arg8 uniqueIdentifier:(id)arg9 forOriginal:(bool)arg10 livePhoto:(bool)arg11 savedToPhotoLibrary:(bool)arg12;
- (id)_clientPropertiesForVideoURL:(id)arg1 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 size:(struct CGSize { double x1; double x2; })arg3 creationDate:(id)arg4 captureOrientation:(long long)arg5 previewSurface:(void*)arg6 previewOrientation:(long long)arg7 adjustments:(id)arg8 uniqueIdentifier:(id)arg9 forLivePhoto:(bool)arg10 savedToPhotoLibrary:(bool)arg11;
- (void)_commonCAMCameraViewControllerInitializationWithLaunchOptions:(id)arg1 usingEmulationMode:(long long)arg2 initialLayoutStyle:(long long)arg3 privateOptions:(long long)arg4;
- (bool)_couldProvidePendingLivePhotoUpdateForPairingIdentifier:(id)arg1 withProperties:(id)arg2;
- (void)_notifyCaptureDelegateOfCompletedCaptureOfLivePhoto:(id)arg1 withProperties:(id)arg2 error:(id)arg3;
- (void)_notifyCaptureDelegateOfCompletedCaptureOfPhoto:(id)arg1 withProperties:(id)arg2 error:(id)arg3;
- (id)_previewImageFromVideoURL:(id)arg1;
- (id)_resultProcessingQueue;
- (void)_resultQueueHandleFallbackPhotoForPairingIdentifierIfNecessary:(id)arg1;
- (id)_resultQueuePendingLivePhotoProperties;
- (id)_resultQueuePendingPortraitPhotoProperties;
- (id)_resultQueueProcessLivePhotoForPairingIdentifier:(id)arg1 combinedProperties:(out id*)arg2 error:(id*)arg3;
- (void)_resultQueueProcessSingleCapturePortraitResultForPersistenceUUID:(id)arg1;
- (id)_resultQueueSafeImageFromSurface:(void*)arg1 imageOrientation:(long long)arg2;
- (id)_resultQueueThumbnailGenerator;
- (bool)_resultQueueUpdatePendingLivePhotoForPairingIdentifier:(id)arg1 withProperties:(id)arg2;
- (void)_resultQueueUpdateSingleCapturePortraitPhotoForPersistenceUUID:(id)arg1 properties:(id)arg2 captureError:(id)arg3;
- (id)_reviewButton;
- (unsigned long long)_viewfinderPersistenceBehaviorForCapturePersistenceBehavior:(unsigned long long)arg1;
- (bool)automaticallyAdjustsApplicationIdleTimer;
- (bool)automaticallyManagesCameraSession;
- (id)burstController;
- (id)captureController;
- (void)captureController:(id)arg1 didGenerateStillImageCaptureResult:(id)arg2 fromRequest:(id)arg3;
- (id)captureDelegate;
- (long long)captureDevice;
- (long long)captureMode;
- (bool)capturePhoto;
- (id)childViewControllerForStatusBarHidden;
- (id)configurationDelegate;
- (void)configureForCaptureMode:(long long)arg1 captureDevice:(long long)arg2;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (long long)flashMode;
- (void)handleReviewButtonReleased:(id)arg1;
- (long long)hdrMode;
- (id)initWithCoder:(id)arg1;
- (id)initWithCustomLaunchOptions:(id)arg1 usingEmulationMode:(long long)arg2;
- (id)initWithInitialLayoutStyle:(long long)arg1 privateOptions:(long long)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)irisVideoController;
- (bool)isDisablingAdditionalCaptures;
- (bool)isDisablingMultipleCaptureFeatures;
- (bool)isPerformingTileTransition;
- (bool)isRecording;
- (id)keepAliveController;
- (long long)livePhotoMode;
- (void)loadView;
- (id)locationController;
- (id)motionController;
- (id)nebulaDaemonProxyManager;
- (unsigned long long)persistenceBehavior;
- (id)persistenceController;
- (void)persistenceController:(id)arg1 didCompleteAllLocalPersistenceForRequest:(id)arg2;
- (void)persistenceController:(id)arg1 didGenerateStillImageLocalPersistenceResult:(id)arg2 forCaptureResult:(id)arg3 fromRequest:(id)arg4;
- (void)persistenceController:(id)arg1 didGenerateVideoLocalPersistenceResult:(id)arg2 forCaptureResult:(id)arg3 fromRequest:(id)arg4;
- (id)powerController;
- (long long)preferredStatusBarUpdateAnimation;
- (id)presentationDelegate;
- (id)protectionController;
- (id)remoteShutterController;
- (void)resumeCameraSession;
- (id)reviewButton;
- (void)setAutomaticallyAdjustsApplicationIdleTimer:(bool)arg1;
- (void)setAutomaticallyManagesCameraSession:(bool)arg1;
- (void)setCaptureDelegate:(id)arg1;
- (void)setConfigurationDelegate:(id)arg1;
- (void)setDisablingAdditionalCaptures:(bool)arg1;
- (void)setDisablingMultipleCaptureFeatures:(bool)arg1;
- (void)setFlashMode:(long long)arg1;
- (void)setHDRMode:(long long)arg1;
- (void)setLivePhotoMode:(long long)arg1;
- (void)setPerformingTileTransition:(bool)arg1;
- (void)setPersistenceBehavior:(unsigned long long)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)setTimerDuration:(long long)arg1;
- (void)setTorchMode:(long long)arg1;
- (bool)startRecording;
- (bool)stopRecording;
- (void)suspendCameraSession;
- (id)timelapseController;
- (long long)timerDuration;
- (long long)torchMode;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (id)viewfinderViewController;

@end