/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusPointToPointScrollAnimator : NSObject <_UIFocusScrollAnimator> {
    double  _defaultConvergenceRate;
    CAMediaTimingFunction * _fancyTimingFunction;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double defaultConvergenceRate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool requiresExtendingScrollViewVisibleBounds;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_animationDurationForDistance:(double)arg1 convergenceRate:(double)arg2;
- (void)cancelPeekAdjustmentForScrollView:(id)arg1 performRollback:(bool)arg2;
- (void)cancelScrollingForScrollView:(id)arg1;
- (double)defaultConvergenceRate;
- (id)init;
- (bool)isAnimatingScrollView:(id)arg1;
- (bool)requiresExtendingScrollViewVisibleBounds;
- (void)setDefaultConvergenceRate:(double)arg1;
- (void)setPeekOffsetAdjustment:(struct CGPoint { double x1; double x2; })arg1 forScrollView:(id)arg2;
- (void)setTargetContentOffset:(struct CGPoint { double x1; double x2; })arg1 forScrollView:(id)arg2 convergenceRate:(double)arg3 completion:(id)arg4;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForScrollView:(id)arg1;
- (struct CGPoint { double x1; double x2; })velocityToScrollFromOffset:(struct CGPoint { double x1; double x2; })arg1 toOffset:(struct CGPoint { double x1; double x2; })arg2;

@end
