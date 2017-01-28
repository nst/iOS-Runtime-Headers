/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIViewServiceViewControllerOperator : UIViewController <_UIHostedTextServiceSessionDelegate, _UIViewServiceDeputy, _UIViewServiceDeputyRotationSource, _UIViewServiceDummyPopoverControllerDelegate, _UIViewServiceViewControllerOperator_RemoteViewControllerInterface> {
    bool  __automatic_invalidation_invalidated;
    int  __automatic_invalidation_retainCount;
    id  __traitsDidChangeHandler;
    id  __traitsWillChangeHandler;
    bool  _canShowTextServices;
    NSMutableArray * _deferredToViewDidAppear;
    <_UIViewServiceViewControllerOperatorDelegate> * _delegate;
    NSMutableArray * _deputyRotationDelegates;
    bool  _disableAutomaticKeyboardBehavior;
    UIPopoverController * _displayedPopoverController;
    _UIViewServiceDummyPopoverController * _dummyPopoverController;
    long long  _editAlertToken;
    NSUndoManager * _editAlertUndoManager;
    unsigned int  _hostAccessibilityServerPort;
    struct { 
        unsigned int val[8]; 
    }  _hostAuditToken;
    NSString * _hostBundleID;
    int  _hostPID;
    double  _hostStatusBarHeight;
    long long  _hostStatusBarOrientation;
    UIActionSheet * _hostedActionSheet;
    _UIHostedWindow * _hostedWindow;
    _UIAsyncInvocation * _invalidationInvocation;
    UIViewController * _localViewController;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _localViewControllerRequestedInsets;
    NSArray * _plugInScenes;
    _UIAsyncInvocation * _prepareForDisconnectionInvocation;
    NSString * _presentationControllerClassName;
    id  _remoteViewControllerProxyToOperator;
    id  _remoteViewControllerProxyToViewController;
    bool  _serviceInPopover;
    unsigned long long  _supportedOrientations;
    _UIHostedTextServiceSession * _textServiceSession;
    _UIViewControllerOneToOneTransitionContext * _viewControllerTransitioningContext;
}

@property (setter=_setTraitsDidChangeHandler:, nonatomic, copy) id _traitsDidChangeHandler;
@property (setter=_setTraitsWillChangeHandler:, nonatomic, copy) id _traitsWillChangeHandler;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIViewServiceViewControllerOperatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)XPCInterface;
+ (id)operatorWithRemoteViewControllerProxy:(id)arg1 hostPID:(int)arg2 hostBundleID:(id)arg3 hostAuditToken:(struct { unsigned int x1[8]; })arg4;

- (void).cxx_destruct;
- (int)__automatic_invalidation_logic;
- (void)__cancelAlertActionWithToken:(long long)arg1;
- (void)__createViewController:(id)arg1 withAppearanceSerializedRepresentations:(id)arg2 legacyAppearance:(bool)arg3 hostAccessibilityServerPort:(id)arg4 canShowTextServices:(bool)arg5 replyHandler:(id)arg6;
- (void)__createViewController:(id)arg1 withContextToken:(id)arg2 fbsDisplays:(id)arg3 appearanceSerializedRepresentations:(id)arg4 legacyAppearance:(bool)arg5 traitCollection:(id)arg6 initialInterfaceOrientation:(long long)arg7 hostAccessibilityServerPort:(id)arg8 canShowTextServices:(bool)arg9 replyHandler:(id)arg10;
- (void)__dimmingViewWasTapped;
- (void)__exchangeAccessibilityPortInformation:(id)arg1 replyHandler:(id)arg2;
- (void)__hostDidAttachDisplay:(id)arg1;
- (void)__hostDidChangeStatusBarHeight:(double)arg1;
- (void)__hostDidChangeStatusBarOrientationToInterfaceOrientation:(long long)arg1;
- (void)__hostDidDetachDisplayWithIntegerDisplayID:(unsigned int)arg1;
- (void)__hostDidEnterBackground;
- (void)__hostDidPromoteFirstResponder;
- (void)__hostDidRotateFromInterfaceOrientation:(long long)arg1 skipSelf:(bool)arg2;
- (void)__hostDidSetContentOverlayInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)__hostDidSetPresentationControllerClassName:(id)arg1;
- (void)__hostDidUpdateAppearanceWithSerializedRepresentations:(id)arg1 originalSource:(id)arg2 legacyAppearance:(bool)arg3;
- (void)__hostDisablesAutomaticKeyboardBehavior:(bool)arg1;
- (void)__hostReadyToReceiveMessagesFromServiceViewController;
- (void)__hostViewDidAppear:(bool)arg1;
- (void)__hostViewDidDisappear:(bool)arg1;
- (void)__hostViewDidMoveToScreenWithIntegerDisplayID:(unsigned int)arg1 newHostingHandleReplyHandler:(id)arg2;
- (void)__hostViewWillAppear:(bool)arg1 inInterfaceOrientation:(long long)arg2 traitCollection:(id)arg3 statusBarHeight:(double)arg4 underlapsStatusBar:(bool)arg5 completionHandler:(id)arg6;
- (void)__hostViewWillDisappear:(bool)arg1;
- (void)__hostViewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withContextDescription:(id)arg2 statusBarHeight:(double)arg3 underlapsStatusBar:(bool)arg4 whenDone:(id)arg5;
- (void)__hostWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 skipSelf:(bool)arg3;
- (void)__hostWillEnterForeground;
- (void)__hostWillRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 skipSelf:(bool)arg3;
- (void)__hostWillTransitionToTraitCollection:(id)arg1 withContextDescription:(id)arg2 deferIfAnimated:(bool)arg3;
- (void)__hostedActionSheetClickedButtonAtIndex:(long long)arg1;
- (void)__hostedActionSheetDidDismissWithClickedButtonIndex:(long long)arg1;
- (void)__hostedActionSheetDidPresent;
- (bool)__knownPresentationWithoutPresentationControllerInstance;
- (void)__prepareForDisconnectionWithCompletionHandler:(id)arg1;
- (void)__redoActionWithToken:(long long)arg1;
- (void)__restoreStateForSession:(id)arg1 restorationAnchor:(id)arg2;
- (void)__saveStateForSession:(id)arg1 restorationAnchor:(id)arg2 completionHandler:(id)arg3;
- (void)__scrollToTopFromTouchAtViewLocation:(struct CGPoint { double x1; double x2; })arg1 resultHandler:(id)arg2;
- (void)__setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)__setContentSize:(struct CGSize { double x1; double x2; })arg1 withFence:(id)arg2;
- (void)__setHostTintColor:(id)arg1 tintAdjustmentMode:(long long)arg2;
- (void)__setHostTraitCollection:(id)arg1 deferIfAnimated:(bool)arg2;
- (void)__setHostViewUnderlapsStatusBar:(bool)arg1;
- (void)__setServiceInPopover:(bool)arg1;
- (void)__showEditAlertView;
- (void)__textServiceDidDismiss;
- (void)__undoActionWithToken:(long long)arg1;
- (id)_appearanceSource;
- (bool)_canShowTextServices;
- (id)_dataFromPressesEvent:(id)arg1;
- (void)_didBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (bool)_disableAutomaticKeyboardBehavior;
- (void)_dismissActionSheet:(id)arg1 withClickedButtonIndex:(long long)arg2 animated:(bool)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(bool*)arg2;
- (void)_firstResponderDidChange:(id)arg1;
- (bool)_forwardPresses:(id)arg1 withEvent:(id)arg2 canceled:(bool)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForContainerViewInSheetForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForContainerViewInSheetForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 displayingTopView:(bool)arg2 andBottomView:(bool)arg3;
- (id)_inputViewsKey;
- (void)_invalidateUnconditionallyThen:(id)arg1;
- (bool)_isDeallocating;
- (bool)_isHostedRootViewController;
- (void)_popoverDidDismiss:(id)arg1;
- (void)_popoverWillPresent:(id)arg1;
- (void)_prepareForDisconnectionUnconditionallyThen:(id)arg1;
- (bool)_presentActionSheet:(id)arg1 asPopoverFromBarButtonItem:(id)arg2 orFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 inView:(id)arg4 withPreferredArrowDirections:(unsigned long long)arg5 passthroughViews:(id)arg6 backgroundStyle:(long long)arg7 animated:(bool)arg8;
- (bool)_presentActionSheet:(id)arg1 inView:(id)arg2 fromYCoordinate:(double)arg3;
- (id)_presentationControllerClassName;
- (id)_queue;
- (void)_sendFocusMovementAction:(id)arg1;
- (id)_sessionForStateRestoration:(id)arg1;
- (void)_setTraitsDidChangeHandler:(id)arg1;
- (void)_setTraitsWillChangeHandler:(id)arg1;
- (bool)_shouldForwardLegacyRotationOnly;
- (id)_showServiceForText:(id)arg1 selectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 type:(long long)arg3 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 inView:(id)arg5;
- (id)_showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 inView:(id)arg4;
- (id)_supportedInterfaceOrientationsForViewController:(id)arg1;
- (id)_traitsDidChangeHandler;
- (id)_traitsWillChangeHandler;
- (bool)_tryRetain;
- (void)_updateSupportedInterfaceOrientationsIfNecessary;
- (bool)_validateSessionIdentifier:(id)arg1 restorationAnchor:(id)arg2 functionName:(const char *)arg3;
- (id)_viewControllersForRotationCallbacks;
- (void)_viewServiceIsDisplayingPopoverController:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_willResignContentViewControllerOfPopover:(id)arg1;
- (id)_window;
- (void)_windowDidRegisterScrollToTopView;
- (void)_windowDidUnregisterScrollToTopView;
- (void)_windowDidUpdateCurrentTintView:(id)arg1;
- (void)addDeputyRotationDelegate:(id)arg1;
- (id)autorelease;
- (bool)becomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (struct CGSize { double x1; double x2; })contentSizeForViewInPopover;
- (void)dealloc;
- (id)delegate;
- (void)dismissHostedTextServiceSession:(id)arg1 animated:(bool)arg2;
- (void)dummyPopoverController:(id)arg1 didChangeContentSize:(struct CGSize { double x1; double x2; })arg2 animated:(bool)arg3;
- (void)dummyPopoverController:(id)arg1 popoverViewDidSetUseToolbarShine:(bool)arg2;
- (void)establishViewControllerDeputyWithProxy:(id)arg1 completionHandler:(id)arg2;
- (id)invalidate;
- (void)loadView;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)preferredFocusEnvironments;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setDelegate:(id)arg1;
- (void)setNeedsStatusBarAppearanceUpdate;
- (void)setNeedsWhitePointAdaptivityStyleUpdate;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)shouldAutomaticallyForwardRotationMethods;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)systemLayoutFittingSizeDidChangeForChildViewController:(id)arg1;
- (void)viewDidLoad;
- (void)window:(id)arg1 statusBarWillChangeFromHeight:(double)arg2 toHeight:(double)arg3;

@end
