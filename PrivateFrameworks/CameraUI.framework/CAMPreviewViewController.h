/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMPreviewViewController : UIViewController <CAMEffectsPreviewSampleBufferDelegate, CAMExposureDelegate, CAMFacesDelegate, CAMFocusDelegate, CAMFocusIndicatorViewDelegate, CAMPreviewViewSubjectIndicatorDelegate, UIGestureRecognizerDelegate> {
    UITapGestureRecognizer * __aspectRatioToggleDoubleTapGestureRecognizer;
    CAMBurstIndicatorView * __burstIndicator;
    float  __cachedExposureTargetBias;
    CUCaptureController * __captureController;
    bool  __changingModeOrDevice;
    CAMFocusIndicatorView * __continuousIndicator;
    unsigned long long  __currentFacesCount;
    long long  __device;
    UIPanGestureRecognizer * __exposureBiasPanGestureRecognizer;
    float  __exposureBiasPanStartValue;
    double  __exposureBiasVirtualSliderExponent;
    double  __exposureBiasVirtualSliderPointsForFirstStop;
    NSDate * __lastExposureBiasModificationTime;
    CAMExposureResult * __lastExposureResult;
    NSDate * __lastFocusIndictorStartTime;
    CAMFocusResult * __lastFocusResult;
    NSDate * __lastTapToFocusTime;
    UILongPressGestureRecognizer * __longPressToLockGestureRecognizer;
    long long  __mode;
    CAMMotionController * __motionController;
    CAMFocusIndicatorView * __pointIndicator;
    CAMSubjectIndicatorView * __portraitModeCenteredIndicatorView;
    UITapGestureRecognizer * __tapToFocusAndExposeGestureRecognizer;
    CAMTimelapseController * __timelapseController;
    bool  __updateFaceIndicators;
    bool  __userLockedFocusAndExposure;
    <CAMPreviewViewControllerDelegate> * _delegate;
    CAMEffectsRenderer * _effectsRenderer;
    long long  _layoutStyle;
    long long  _shallowDepthOfFieldStatus;
    bool  _showingStandardControls;
}

@property (nonatomic, readonly) UITapGestureRecognizer *_aspectRatioToggleDoubleTapGestureRecognizer;
@property (nonatomic, readonly) CAMBurstIndicatorView *_burstIndicator;
@property (setter=_setCachedExposureTargetBias:, nonatomic) float _cachedExposureTargetBias;
@property (nonatomic, readonly) CUCaptureController *_captureController;
@property (getter=_isChangingModeOrDevice, setter=_setChangingModeOrDevice:, nonatomic) bool _changingModeOrDevice;
@property (nonatomic, readonly) CAMFocusIndicatorView *_continuousIndicator;
@property (nonatomic, readonly) unsigned long long _currentFacesCount;
@property (nonatomic, readonly) long long _device;
@property (nonatomic, readonly) UIPanGestureRecognizer *_exposureBiasPanGestureRecognizer;
@property (nonatomic, readonly) float _exposureBiasPanStartValue;
@property (setter=_setExposureBiasVirtualSliderExponent:, nonatomic) double _exposureBiasVirtualSliderExponent;
@property (setter=_setExposureBiasVirtualSliderPointsForFirstStop:, nonatomic) double _exposureBiasVirtualSliderPointsForFirstStop;
@property (setter=_setLastExposureBiasModifiedTime:, nonatomic, retain) NSDate *_lastExposureBiasModificationTime;
@property (setter=_setLastExposureResult:, nonatomic, retain) CAMExposureResult *_lastExposureResult;
@property (setter=_setLastFocusIndictorStartTime:, nonatomic, retain) NSDate *_lastFocusIndictorStartTime;
@property (setter=_setLastFocusResult:, nonatomic, retain) CAMFocusResult *_lastFocusResult;
@property (setter=_setLastTapToFocusTime:, nonatomic, retain) NSDate *_lastTapToFocusTime;
@property (nonatomic, readonly) UILongPressGestureRecognizer *_longPressToLockGestureRecognizer;
@property (nonatomic, readonly) long long _mode;
@property (nonatomic, readonly) CAMMotionController *_motionController;
@property (nonatomic, readonly) CAMFocusIndicatorView *_pointIndicator;
@property (nonatomic, readonly) CAMSubjectIndicatorView *_portraitModeCenteredIndicatorView;
@property (nonatomic, readonly) UITapGestureRecognizer *_tapToFocusAndExposeGestureRecognizer;
@property (nonatomic, readonly) CAMTimelapseController *_timelapseController;
@property (nonatomic, readonly) bool _updateFaceIndicators;
@property (setter=_setUserLockedFocusAndExposure:, nonatomic) bool _userLockedFocusAndExposure;
@property (nonatomic, readonly) UIPanGestureRecognizer *activeExposureBiasPanGestureRecognizer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CAMPreviewViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CAMEffectsRenderer *effectsRenderer;
@property (getter=isExposureLockedByUser, nonatomic, readonly) bool exposureLockedByUser;
@property (getter=isFocusLockedByUser, nonatomic, readonly) bool focusLockedByUser;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long layoutStyle;
@property (nonatomic, readonly) CAMPreviewView *previewView;
@property (nonatomic) long long shallowDepthOfFieldStatus;
@property (getter=isShowingStandardControls, nonatomic) bool showingStandardControls;
@property (readonly) Class superclass;

+ (double)hideIndicatorAnimationDuration;
+ (double)showIndicatorAnimationDuration;

- (void).cxx_destruct;
- (void)_activateFocusIndicator:(id)arg1;
- (bool)_allowExposureBiasForMode:(long long)arg1;
- (bool)_allowUserToChangeFocusAndExposure;
- (void)_applicationDidEnterBackground;
- (id)_aspectRatioToggleDoubleTapGestureRecognizer;
- (id)_burstIndicator;
- (float)_cachedExposureTargetBias;
- (bool)_canModifyExposureBias;
- (void)_cancelDelayedActions;
- (void)_cancelDelayedFaceIndicatorFadeOut;
- (void)_cancelDelayedFocusAndExposureLock;
- (void)_cancelDelayedHideOrDeactivateForFocusIndicator:(id)arg1;
- (id)_captureController;
- (void)_captureOrientationChanged:(id)arg1;
- (id)_continuousIndicator;
- (void)_createAspectRatioToggleDoubleTapGestureRecognizerIfNecessary;
- (void)_createCommonGestureRecognizersIfNecessary;
- (void)_createContinuousIndicatorIfNecessary;
- (void)_createExposureBiasPanGestureRecognizerIfNecessary;
- (void)_createLongPressToLockGestureRecognizersIfNecessary;
- (void)_createPointIndicatorIfNecessary;
- (void)_createPortraitModeCenteredIndicatorViewIfNecessary;
- (void)_createTapToFocusAndExposeGestureRecognizerIfNecessary;
- (unsigned long long)_currentFacesCount;
- (void)_deactivateFocusIndicator:(id)arg1;
- (void)_deactivateFocusIndicator:(id)arg1 afterDelay:(double)arg2;
- (long long)_device;
- (void)_didChangeModeOrDevice;
- (double)_effectiveExposureBiasMovementForTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (double)_exposureBiasForVirtualSliderPosition:(double)arg1;
- (id)_exposureBiasPanGestureRecognizer;
- (float)_exposureBiasPanStartValue;
- (int)_exposureBiasSide;
- (double)_exposureBiasVirtualSliderExponent;
- (double)_exposureBiasVirtualSliderPointsForFirstStop;
- (float)_exposureTargetBiasMaximum;
- (float)_exposureTargetBiasMinimum;
- (void)_fadeOutFaceIndicators;
- (void)_fadeOutFaceIndicatorsAfterDelay:(double)arg1;
- (void)_finishFocusingLockedPointOfInterestIndicator;
- (id)_focusIndicatorViewsWithExposureBiasSliders;
- (void)_focusOnPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_handleAspectRatioToggleDoubleTap:(id)arg1;
- (void)_handleExposureBiasPan:(id)arg1;
- (void)_handleLongPressToLock:(id)arg1;
- (void)_handleTapToFocusAndExpose:(id)arg1;
- (void)_hideAllFocusIndicatorsAnimated:(bool)arg1;
- (void)_hideAllFocusIndicatorsExceptForIndicator:(id)arg1;
- (void)_hideFaceIndicatorsAnimated:(bool)arg1;
- (void)_hideFocusIndicator:(id)arg1;
- (void)_hideFocusIndicator:(id)arg1 afterDelay:(double)arg2;
- (void)_hideFocusIndicator:(id)arg1 animated:(bool)arg2;
- (void)_hidePortaitModeTrackedSubjectIndicatorsAnimated:(bool)arg1;
- (void)_initializeExposureBiasParametersForFocusIndicatorView:(id)arg1;
- (void)_initializeExposureBiasSliderParameters;
- (long long)_interfaceOrientationForExposureBiasUI;
- (bool)_isChangingModeOrDevice;
- (bool)_isFocusLockAllowed;
- (bool)_isFullyAutomaticFocus:(id)arg1 andExposure:(id)arg2;
- (bool)_isFullyAutomaticFocusAndExposure;
- (bool)_isPanningExposureBias;
- (bool)_isPortraitEffectActive;
- (bool)_isShowingFaces;
- (long long)_largeStyleForPointIndicator;
- (id)_lastExposureBiasModificationTime;
- (id)_lastExposureResult;
- (id)_lastFocusIndictorStartTime;
- (id)_lastFocusResult;
- (id)_lastTapToFocusTime;
- (void)_lockFocusAndExposure;
- (void)_lockFocusAndExposureAfterDelay:(double)arg1;
- (id)_longPressToLockGestureRecognizer;
- (long long)_mode;
- (id)_motionController;
- (id)_pointIndicator;
- (id)_portraitModeCenteredIndicatorView;
- (void)_resetCachedTimes;
- (void)_resetFaceTracking;
- (void)_scaleDownLockedPointOfInterest;
- (void)_scalePortraitModeFocusIndicators;
- (void)_setCachedExposureTargetBias:(float)arg1;
- (void)_setChangingModeOrDevice:(bool)arg1;
- (void)_setExposureBiasVirtualSliderExponent:(double)arg1;
- (void)_setExposureBiasVirtualSliderPointsForFirstStop:(double)arg1;
- (void)_setFocusIndicatorsHidden:(bool)arg1 animated:(bool)arg2;
- (void)_setFocusIndicatorsPulsing:(bool)arg1;
- (void)_setLastExposureBiasModifiedTime:(id)arg1;
- (void)_setLastExposureResult:(id)arg1;
- (void)_setLastFocusIndictorStartTime:(id)arg1;
- (void)_setLastFocusResult:(id)arg1;
- (void)_setLastTapToFocusTime:(id)arg1;
- (void)_setUserLockedFocusAndExposure:(bool)arg1;
- (void)_setUserLockedFocusAndExposure:(bool)arg1 shouldAnimate:(bool)arg2;
- (bool)_shouldAllowAspectRatioToggleForMode:(long long)arg1;
- (bool)_shouldAllowFaceIndicators;
- (bool)_shouldDisableAspectRatioToggle;
- (bool)_shouldDisableFocusUI;
- (bool)_shouldHideFocusIndicators;
- (bool)_shouldResetFocusAndExposureForSubjectAreaDidChange;
- (bool)_shouldShowContinuousIndicator;
- (bool)_shouldShowIndicatorsAsInactive;
- (bool)_shouldShowPortraitModeIndicatorViews;
- (bool)_shouldSuppressNewFaces;
- (bool)_shouldSuppressNewPortraitModeTrackedSubjectIndicators;
- (bool)_shouldUpdateIndicatorSizeFrom:(struct CGSize { double x1; double x2; })arg1 to:(struct CGSize { double x1; double x2; })arg2 minimumAreaChangeThreshold:(double)arg3 minimumAreaFractionChangeThreshold:(double)arg4;
- (bool)_showExposureBiasSliderForPointView;
- (void)_showIndicatorAtPointOfInterest:(struct CGPoint { double x1; double x2; })arg1;
- (void)_showLockedAtPointOfInterest:(struct CGPoint { double x1; double x2; })arg1;
- (void)_showUIForResetFocusAndExposure;
- (long long)_styleForPointIndicator;
- (id)_tapToFocusAndExposeGestureRecognizer;
- (id)_timelapseController;
- (void)_updateExposureBiasPanGestureRecognizerForOrientation;
- (void)_updateExposureBiasSideAnimated:(bool)arg1;
- (void)_updateExposureBiasViews;
- (void)_updateExposureBiasViews:(id)arg1;
- (bool)_updateFaceIndicators;
- (void)_updateFaceIndicatorsForFaceResults:(id)arg1;
- (void)_updateFaceIndicatorsWithResults:(id)arg1;
- (void)_updateGestureRecognizersForOrientation;
- (void)_updatePortraitModeTrackedSubjectIndicatorsWithFaceResults:(id)arg1;
- (void)_updatePortraitModeViewsAnimated:(bool)arg1;
- (void)_updatePortraitModeViewsForFaceResults:(id)arg1;
- (void)_updatePreviewViewAspectMode;
- (void)_updateUIForCenteredContrastBasedFocusDidEnd;
- (void)_updateVideoPreviewViewOrientationAnimated:(bool)arg1;
- (bool)_userLockedFocusAndExposure;
- (void)_validateExposureTargetBiasFromExposureResult:(id)arg1;
- (void)_validateInternalProperties;
- (void)_validateLastExposureBiasModificationTime;
- (void)_validateUserLockedFocusAndExposure;
- (double)_virtualSliderPositionForExposureBias:(double)arg1;
- (void)_willChangeModeOrDevice;
- (id)activeExposureBiasPanGestureRecognizer;
- (void)captureController:(id)arg1 didOutputExposureResult:(id)arg2;
- (void)captureController:(id)arg1 didOutputFaceResults:(id)arg2;
- (void)captureController:(id)arg1 didOutputFocusResult:(id)arg2;
- (bool)captureController:(id)arg1 shouldResetFocusAndExposureForReason:(long long)arg2;
- (double)captureControllerDelayBeforeResettingFocusAndExposureAfterCapture:(id)arg1;
- (bool)captureControllerUserHasAdjustedExposureTargetBias:(id)arg1;
- (void)captureControllerWillResetFocusAndExposure:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didChangeToMode:(long long)arg1 device:(long long)arg2 animated:(bool)arg3;
- (void)effectsPreviewVideoDataOutputDidDropSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)effectsPreviewVideoDataOutputDidOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)effectsRenderer;
- (id)focusIndicatorViewBoundingViewForClippingFocusIndicatorView:(id)arg1;
- (void)focusOnNormalizedPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleTapAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithCaptureController:(id)arg1 motionController:(id)arg2 timelapseController:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isExposureLockedByUser;
- (bool)isFocusLockedByUser;
- (bool)isShowingStandardControls;
- (long long)layoutStyle;
- (void)loadView;
- (void)notifyCaptureSessionDidStopRunning;
- (void)notifyDidStopCapture;
- (void)notifyShutterButtonPressed;
- (void)notifyWillStartCapturing;
- (id)previewView;
- (void)previewViewDidAddFirstTrackedSubjectIndicator:(id)arg1;
- (void)previewViewDidRemoveLastTrackedSubjectIndicator:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setShallowDepthOfFieldStatus:(long long)arg1;
- (void)setShowingStandardControls:(bool)arg1;
- (long long)shallowDepthOfFieldStatus;
- (void)updateIndicatorVisibilityAnimated:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willChangeToMode:(long long)arg1 device:(long long)arg2;

@end
