/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIModularControlCenterViewController : UIViewController <CCUIContentModuleContextDelegate, CCUIModuleCollectionViewControllerDelegate, CCUIModuleInstanceManagerObserver> {
    bool  _active;
    <CCUIModularControlCenterViewControllerDelegate> * _delegate;
    bool  _hostedInTestApp;
    CCUIModuleInstanceManager * _moduleInstanceManager;
    CCUIModuleInstanceManager * _moduleManager;
    CCUIStatusLabelViewController * _statusLabelViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CCUIModularControlCenterViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHomeGestureDismissalAllowed, nonatomic, readonly) bool homeGestureDismissalAllowed;
@property (getter=isHostedInTestApp, nonatomic) bool hostedInTestApp;
@property (nonatomic, readonly) CCUIModuleCollectionViewController *moduleCollectionViewController;
@property (nonatomic, readonly) CCUIModuleInstanceManager *moduleInstanceManager;
@property (nonatomic, readonly) unsigned long long moduleRowCount;
@property (nonatomic, readonly) CCUIStatusLabelViewController *statusLabelViewController;
@property (readonly) Class superclass;

+ (id)_sharedCollectionViewController;

- (void).cxx_destruct;
- (long long)_interfaceOrientation;
- (id)_moduleCollectionViewContainerView;
- (void)_reparent;
- (void)_reparentAndBecomeActive;
- (void)_reparentCollectionViewController;
- (void)_resignActive;
- (id)_safeModuleCollectionViewContainerView;
- (id)_safeStatusLabelViewContainerView;
- (id)_statusLabelViewContainerView;
- (bool)canDismissPresentedContent;
- (void)closeCurrentModuleWithCompletionHandler:(id /* block */)arg1;
- (void)contentModuleContext:(id)arg1 didUpdateHomeGestureDismissalAllowed:(bool)arg2;
- (void)contentModuleContext:(id)arg1 enqueueStatusUpdate:(id)arg2;
- (id)delegate;
- (void)didUpdatePreferredSizeForContentModuleContext:(id)arg1;
- (void)dismissControlCenterForContentModuleContext:(id)arg1;
- (void)dismissExpandedModuleAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)dismissExpandedViewForContentModuleContext:(id)arg1;
- (void)dismissPresentedContent;
- (void)dismissPresentedContentAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)dismissPresentedContentWithCompletionHandler:(id /* block */)arg1;
- (void)expandModuleWithIdentifier:(id)arg1;
- (id)initWithSystemAgent:(id)arg1;
- (id)interactionHighlightContainerViewForModuleCollectionViewController:(id)arg1;
- (long long)interfaceOrientationForModuleCollectionViewController:(id)arg1;
- (bool)isHomeGestureDismissalAllowed;
- (bool)isHostedInTestApp;
- (id)moduleCollectionViewController;
- (void)moduleCollectionViewController:(id)arg1 didAddModuleContainerViewController:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 didBeginInteractionWithModule:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 didCloseExpandedModule:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 didFinishInteractionWithModule:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 didOpenExpandedModule:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 didUpdateHomeGestureDismissalAllowed:(bool)arg2;
- (void)moduleCollectionViewController:(id)arg1 willCloseExpandedModule:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 willOpenExpandedModule:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 willRemoveModuleContainerViewController:(id)arg2;
- (id)moduleInstanceManager;
- (void)moduleInstancesChangedForModuleInstanceManager:(id)arg1;
- (unsigned long long)moduleRowCount;
- (id)obscuringBackgroundViewForModuleCollectionViewController:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)requestExpandModuleForContentModuleContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHostedInTestApp:(bool)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (id)statusLabelViewController;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
