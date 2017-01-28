/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlViewController : UIViewController <HUPresentationDelegate, HUPresentationDelegateHost, HUQuickControlContainerViewDelegate, HUQuickControlControllerCoordinatorDelegate, HUQuickControlInteractionHost> {
    HUQuickControlContainerView * _controlContainerView;
    HUQuickControlControllerCoordinator * _controlControllerCoordinator;
    UIView<HUQuickControlPresentableView> * _controlView;
    <HUQuickControlViewControllerDelegate> * _delegate;
    UITapGestureRecognizer * _dismissGestureRecognizer;
    HMHome * _home;
    HFItem<NSCopying> * _item;
    HUAnimationApplier * _presentationApplier;
    unsigned long long  _presentationState;
    bool  _presentedDetailView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceRect;
    <HUPresentationDelegate> * presentationDelegate;
}

@property (nonatomic, readonly) HUQuickControlController *activeControlController;
@property (nonatomic, readonly) HUQuickControlInteractionCoordinator *activeInteractionCoordinator;
@property (nonatomic, retain) HUQuickControlContainerView *controlContainerView;
@property (nonatomic, retain) HUQuickControlControllerCoordinator *controlControllerCoordinator;
@property (nonatomic, retain) UIView<HUQuickControlPresentableView> *controlView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUQuickControlViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UITapGestureRecognizer *dismissGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HFItem<NSCopying> *item;
@property (nonatomic, retain) HUAnimationApplier *presentationApplier;
@property (nonatomic) <HUPresentationDelegate> *presentationDelegate;
@property (nonatomic) unsigned long long presentationState;
@property (nonatomic) bool presentedDetailView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRect;
@property (readonly) Class superclass;

+ (id)_blurAnimationSettingsForPresenting:(bool)arg1;
+ (id)_controlAlphaAnimationSettingsForPresenting:(bool)arg1;
+ (id)_controlScaleAnimationSettingsForPresenting:(bool)arg1;
+ (id)_detailChromeAnimationSettingsForPresenting:(bool)arg1;
+ (id)_easeOutTimingFunction;
+ (id)_sourceViewTransitionAnimationSettingsForPresenting:(bool)arg1;
+ (id)_statusBarHidingAnimationSettingsForPresenting:(bool)arg1;

- (void).cxx_destruct;
- (id)_controlControllerOfType:(unsigned long long)arg1;
- (void)_controlDidDismiss;
- (void)_createControlContainerViewWithSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_dismissControlAnimated:(bool)arg1 completion:(id)arg2;
- (void)_handleDismissGesture:(id)arg1;
- (void)_performTransitionToPresentationState:(unsigned long long)arg1 animated:(bool)arg2 initialProgress:(double)arg3 completion:(id)arg4;
- (id)_prepareDetailViewController;
- (void)_presentDetailViewController;
- (void)_updateControlReachability;
- (void)_updateControlStatusText;
- (void)_updateIconDescriptor;
- (void)_updateUserInteractionEnabledForActiveInteractionCoordinator;
- (id)activeControlController;
- (id)activeInteractionCoordinator;
- (void)beginReceivingTouchesWithGestureRecognizer:(id)arg1;
- (id)containerView:(id)arg1 createControlViewForControlType:(unsigned long long)arg2;
- (void)containerView:(id)arg1 didSelectControlType:(unsigned long long)arg2;
- (bool)containerView:(id)arg1 hasControlOfType:(unsigned long long)arg2;
- (id)containerView:(id)arg1 titleForControlType:(unsigned long long)arg2;
- (id)controlContainerView;
- (id)controlControllerCoordinator;
- (id)controlView;
- (void)controllerCoordinator:(id)arg1 didUpdateIconDescriptor:(id)arg2 showOffState:(bool)arg3;
- (void)controllerCoordinator:(id)arg1 didUpdateReachability:(bool)arg2;
- (void)controllerCoordinator:(id)arg1 didUpdateStatusWithPrimaryText:(id)arg2 secondaryText:(id)arg3;
- (id)delegate;
- (void)detailsButtonPressedInContainerView:(id)arg1;
- (void)dismissControlAnimated:(bool)arg1 completion:(id)arg2;
- (id)dismissGestureRecognizer;
- (void)finishPresentation:(id)arg1 animated:(bool)arg2;
- (void)hideAuxiliaryViewForInteractionCoordinator:(id)arg1;
- (id)home;
- (id)initWithItem:(id)arg1 home:(id)arg2;
- (void)interactionCoordinator:(id)arg1 showAuxiliaryView:(id)arg2;
- (void)interactionCoordinator:(id)arg1 updateControlHorizontalCompressionFactor:(double)arg2;
- (void)interactionCoordinator:(id)arg1 updateControlVerticalStretchFactor:(double)arg2;
- (void)interactionCoordinatorWantsDismissal:(id)arg1;
- (bool)isControlDismissedOrDismissing;
- (bool)isControlPresentedOrPresenting;
- (id)item;
- (void)presentControlAnimatedFromSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)presentationApplier;
- (id)presentationDelegate;
- (unsigned long long)presentationState;
- (bool)presentedDetailView;
- (void)setControlContainerView:(id)arg1;
- (void)setControlControllerCoordinator:(id)arg1;
- (void)setControlView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissGestureRecognizer:(id)arg1;
- (void)setPresentationApplier:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)setPresentationState:(unsigned long long)arg1;
- (void)setPresentedDetailView:(bool)arg1;
- (void)setSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRect;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })sourceViewTransformForPresentationProgress:(double)arg1;
- (void)viewDidLoad;

@end
