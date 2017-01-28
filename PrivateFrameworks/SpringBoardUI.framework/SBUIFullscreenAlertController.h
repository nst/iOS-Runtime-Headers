/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIFullscreenAlertController : UIViewController <NSCopying> {
    NSString * _activationContext;
    NSNumber * _animationStartTime;
    NSInvocation * _pendingDeactivationInvocation;
    bool  _shouldAnimateIn;
}

@property (nonatomic, retain) NSString *activationContext;
@property (nonatomic, retain) NSNumber *animationStartTime;
@property (nonatomic) bool shouldAnimateIn;

- (void).cxx_destruct;
- (id)activationContext;
- (bool)allowStackingOfAlert:(id)arg1;
- (bool)allowSuspension;
- (void)animateViewIn;
- (void)animateViewOut;
- (id)animationStartTime;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)definesPresentationContext;
- (void)didFinishLaunchingFrontmost;
- (void)didReceiveMemoryWarning;
- (void)finishedAnimatingIn;
- (void)finishedAnimatingOut;
- (void)handleAutoLock;
- (bool)handleHeadsetButtonPressed:(bool)arg1;
- (bool)handleLockButtonPressed;
- (bool)handleMenuButtonTap;
- (bool)handleVolumeDownButtonPressed;
- (bool)handleVolumeUpButtonPressed;
- (bool)hasTranslucentBackground;
- (id)init;
- (bool)isSlidingViewController;
- (id)pendingDeactivationInvocation;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id)arg3;
- (void)removeBackgroundStyleWithDuration:(double)arg1;
- (void)requestActivationAnimated:(bool)arg1 animateCurrentDisplayOut:(bool)arg2 withDelay:(bool)arg3;
- (void)requestDeactivationAnimated:(bool)arg1 animateOldDisplayInWithStyle:(int)arg2;
- (void)setActivationContext:(id)arg1;
- (void)setAnimationStartTime:(id)arg1;
- (void)setBackgroundStyle:(long long)arg1 withDuration:(double)arg2;
- (void)setPendingDeactivationInvocation:(id)arg1;
- (void)setShouldAnimateIn:(bool)arg1;
- (void)setWallpaperTunnelActive:(bool)arg1;
- (bool)shouldAnimateIn;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (bool)viewIsReadyToBeRemoved;
- (void)viewWillAnimateIn;
- (void)viewWillAnimateOut;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end
