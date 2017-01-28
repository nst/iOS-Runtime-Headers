/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKAccountPageViewController : UIViewController {
    NSURL * _accountURL;
    _UIAsyncInvocation * _cancelRequest;
    <SKAccountPageViewControllerDelegate> * _delegate;
    id  _prepareBlock;
    SKRemoteAccountPageViewController * _remoteViewController;
    SKInvocationQueueProxy<SKUIServiceAccountPageViewController> * _serviceProxy;
}

@property (nonatomic) <SKAccountPageViewControllerDelegate> *delegate;

- (void)_addRemoteView;
- (void)_didPrepareWithResult:(bool)arg1 error:(id)arg2;
- (void)_dismissViewController;
- (void)_requestRemoteViewController;
- (void)dealloc;
- (id)delegate;
- (id)initWithAccountURL:(id)arg1;
- (void)loadView;
- (void)prepareWithCompletionBlock:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidAppear:(bool)arg1;

@end
