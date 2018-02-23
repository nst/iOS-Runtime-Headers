/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVPlaybackFadeAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    bool  _shouldAnimateHalfwayThenPopIn;
    double  _transitionDuration;
    bool  _usesCustomEasing;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldAnimateHalfwayThenPopIn;
@property (readonly) Class superclass;
@property (nonatomic) double transitionDuration;
@property (nonatomic) bool usesCustomEasing;

- (void)_beginFadeAnimationFromViewController:(id)arg1 toViewController:(id)arg2 containerView:(id)arg3 completion:(id /* block */)arg4;
- (void)animateTransition:(id)arg1;
- (id)init;
- (void)setShouldAnimateHalfwayThenPopIn:(bool)arg1;
- (void)setTransitionDuration:(double)arg1;
- (void)setUsesCustomEasing:(bool)arg1;
- (bool)shouldAnimateHalfwayThenPopIn;
- (double)transitionDuration;
- (double)transitionDuration:(id)arg1;
- (bool)usesCustomEasing;

@end
