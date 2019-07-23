/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface TVMediaPlaybackManager : NSObject <UIGestureRecognizerDelegate> {
    NSTimer * _backgroundedTimer;
    <TVMediaPlaybackManagerDelegate> * _delegate;
    struct { 
        bool hasShouldEnableUIModeImplicitly; 
        bool hasEvaluateSwipeUpMessage; 
        bool hasPresentPlaybackController; 
    }  _delegateFlags;
    bool  _goesToForegroundOnFirstAppear;
    bool  _isFirstAppearance;
    UIViewController<TVMediaController> * _mediaController;
    int  _mediaPlaybackState;
    unsigned long long  _mediaPlaybackStateModifier;
    int  _mediaPlaybackTrigger;
    unsigned long long  _mediaPlaybackTriggerModifier;
    UITapGestureRecognizer * _menuGestureRecognizer;
    double  _showcaseFactor;
    _TVNonFocusSwipeUpCapture * _swipeUpCapture;
}

@property (nonatomic, readonly) long long currentUIMode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TVMediaPlaybackManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool goesToForegroundOnFirstAppear;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIViewController<TVMediaController> *mediaController;
@property (nonatomic, readonly) UITapGestureRecognizer *menuGestureRecognizer;
@property (nonatomic, readonly) bool shouldHideUI;
@property (nonatomic) double showcaseFactor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIPanGestureRecognizer *swipeUpGestureRecognizer;

- (void).cxx_destruct;
- (bool)_canMenu;
- (bool)_canSwipeUp;
- (void)_onMenu;
- (void)_onShowcaseFactorDidChange;
- (void)_onSwipeUp;
- (void)_onTimeout;
- (int)_processBackgroundedStateTriggers;
- (int)_processForegroundedStateTriggers;
- (int)_processPausedStateTriggers;
- (void)_processStateEnter;
- (void)_processStateExit;
- (void)_processTrigger;
- (int)_processUndefinedStateTriggers;
- (int)_processWaitingForTimeoutStateTriggers;
- (int)_processWillBeBackgroundedStateTriggers;
- (int)_processWillBeForegroundedStateTriggers;
- (void)_scheduleBackgroundedTimer;
- (bool)_shouldPause;
- (long long)currentUIMode;
- (void)dealloc;
- (id)delegate;
- (bool)goesToForegroundOnFirstAppear;
- (id)initWithMediaController:(id)arg1;
- (id)mediaController;
- (id)menuGestureRecognizer;
- (void)onAppear;
- (void)onDisappear;
- (void)onEvent;
- (void)onMediaControllerStateDidChange;
- (void)onSupplementaryUIShouldDismiss;
- (bool)onSupplementaryUIShouldPresent;
- (void)setDelegate:(id)arg1;
- (void)setGoesToForegroundOnFirstAppear:(bool)arg1;
- (void)setShowcaseFactor:(double)arg1;
- (bool)shouldHideUI;
- (double)showcaseFactor;
- (id)swipeUpGestureRecognizer;

@end
