/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIForceClickInteractionDriver : NSObject <UIGestureRecognizerDelegatePrivate, _UIClickInteractionDriving> {
    <_UIClickInteractionDriverDelegate> * _delegate;
    UITouchForceGestureRecognizer * _gestureRecognizer;
    _UIStateMachine * _stateMachine;
    UIView * _view;
}

@property (nonatomic) double allowableMovement;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIClickInteractionDriverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UITouchForceGestureRecognizer *gestureRecognizer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIStateMachine *stateMachine;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double touchForce;
@property (nonatomic) UIView *view;

- (void).cxx_destruct;
- (void)_handleGestureRecognizer:(id)arg1;
- (void)_prepareStateMachine;
- (double)allowableMovement;
- (void)cancelInteraction;
- (id)delegate;
- (id)gestureRecognizer;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (id)init;
- (struct CGPoint { double x1; double x2; })locationInCoordinateSpace:(id)arg1;
- (void)setAllowableMovement:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGestureRecognizer:(id)arg1;
- (void)setStateMachine:(id)arg1;
- (void)setView:(id)arg1;
- (id)stateMachine;
- (double)touchForce;
- (id)view;

@end
