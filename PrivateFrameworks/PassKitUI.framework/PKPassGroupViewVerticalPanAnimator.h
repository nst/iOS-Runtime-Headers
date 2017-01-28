/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassGroupViewVerticalPanAnimator : NSObject {
    UIPanGestureRecognizer * _gestureRecognizer;
    PKPassGroupView * _groupView;
    _UIDynamicValueAnimation * _panningAnimation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _panningViewStartPosition;
    struct CGPoint { 
        double x; 
        double y; 
    }  _panningViewTargetPosition;
    double  _panningViewTargetScale;
    CASpringAnimation * _springAnimation;
    CAMediaTimingFunction * _timingFunction;
}

@property (nonatomic, retain) UIPanGestureRecognizer *gestureRecognizer;
@property (nonatomic, readonly, retain) PKPassGroupView *groupView;
@property (nonatomic) struct CGPoint { double x1; double x2; } panningViewStartPosition;
@property (nonatomic) struct CGPoint { double x1; double x2; } panningViewTargetPosition;
@property (nonatomic) double panningViewTargetScale;

- (void).cxx_destruct;
- (id)_dynamicAnimationWithStart:(double)arg1 target:(double)arg2 initialVelocity:(double)arg3;
- (void)dealloc;
- (void)dismissWithStartVelocity:(double)arg1 alongSideApplier:(id)arg2 completion:(id)arg3;
- (id)gestureRecognizer;
- (id)groupView;
- (id)init;
- (id)initWithGroupView:(id)arg1;
- (void)layoutViewsWithY:(double)arg1;
- (struct CGPoint { double x1; double x2; })panningViewStartPosition;
- (struct CGPoint { double x1; double x2; })panningViewTargetPosition;
- (double)panningViewTargetScale;
- (void)setGestureRecognizer:(id)arg1;
- (void)setPanningViewStartPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPanningViewTargetPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPanningViewTargetScale:(double)arg1;
- (void)stop;

@end
