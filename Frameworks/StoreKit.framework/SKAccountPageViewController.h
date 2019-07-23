/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKAccountPageViewController : UIViewController <PSStateRestoration, SKUIRedeemViewCameraOverrideDelegate> {
    ACAccount * _account;
    NSURL * _accountURL;
    bool  _cameraDidShow;
    _UIAsyncInvocation * _cancelRequest;
    <SKAccountPageViewControllerDelegate> * _delegate;
    bool  _financeInterruptionCalled;
    bool  _isRemoteViewControllerReady;
    bool  _isRemoteViewControllerSetup;
    id /* block */  _loadBlock;
    SKAccountPageViewController * _preWarmedViewController;
    id /* block */  _prepareBlock;
    SURedeemCameraViewController * _presentedRedeemCameraViewController;
    SKAccountPageViewController * _presentingAccountPageViewController;
    SKRemoteAccountPageViewController * _remoteViewController;
    SKInvocationQueueProxy<SKUIServiceAccountPageViewController> * _serviceProxy;
    long long  _type;
    bool  _viewHasAppeared;
    id /* block */  redeemCompletionHandler;
}

@property (nonatomic, retain) ACAccount *account;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKAccountPageViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SKAccountPageViewController *preWarmedViewController;
@property (nonatomic) SKAccountPageViewController *presentingAccountPageViewController;
@property (readonly) Class superclass;
@property (nonatomic) long long type;

+ (void)isCommerceUIURL:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_addRemoteView;
- (void)_bridgedRightButtonPressed:(id)arg1;
- (void)_didFinishLoading;
- (void)_didPrepareWithResult:(bool)arg1 error:(id)arg2;
- (void)_dismissBridgedViewController;
- (void)_dismissViewControllerWithResult:(bool)arg1 error:(id)arg2;
- (void)_financeInterruptionResolved:(bool)arg1;
- (unsigned long long)_indexForFirstBridgedNavigationViewController;
- (void)_keyboardDidChangeNotification:(id)arg1;
- (void)_keyboardWillChangeNotification:(id)arg1;
- (void)_overrideCreditCardPresentationWithCompletion:(id /* block */)arg1;
- (void)_overrideRedeemCameraPerformAction:(long long)arg1 withObject:(id)arg2;
- (void)_overrideRedeemCameraWithCompletion:(id /* block */)arg1;
- (void)_popAllBridgedNavigationViewControllers;
- (void)_popBridgedViewControllersToIndex:(unsigned long long)arg1;
- (void)_presentBridgedViewController;
- (void)_pushBridgedViewControllerAnimated:(bool)arg1 options:(id)arg2;
- (void)_requestRemoteViewController;
- (void)_setBridgedNavigationItemWithOptions:(id)arg1;
- (void)_setupNotificationCenter;
- (void)_setupPreWarmedViewController;
- (void)_setupRemoteViewController:(bool)arg1;
- (void)_sk_applicationDidEnterBackground:(id)arg1;
- (void)_sk_applicationWillEnterForeground:(id)arg1;
- (id)account;
- (bool)canBeShownFromSuspendedState;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToParentViewController:(id)arg1;
- (id)initWithAccountURL:(id)arg1;
- (void)loadView;
- (void)loadWithCompletionBlock:(id /* block */)arg1;
- (void)overrideRedeemOperationWithCode:(id)arg1 cameraRecognized:(bool)arg2 completion:(id /* block */)arg3;
- (id)preWarmedViewController;
- (void)prepareWithCompletionBlock:(id /* block */)arg1;
- (id)presentingAccountPageViewController;
- (void)redeemCameraViewController:(id)arg1 didFinishWithRedeem:(id)arg2;
- (void)setAccount:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPreWarmedViewController:(id)arg1;
- (void)setPresentingAccountPageViewController:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;

@end
