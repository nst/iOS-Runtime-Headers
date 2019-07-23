/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
 */

@interface TKApplicationViewController : UIViewController {
    NSURL * _bundleURL;
    UIViewController * _childViewController;
    <TKApplicationViewControllerDelegate> * _delegate;
    UIViewController * _loadingViewController;
    NSString * _viewName;
}

@property (nonatomic, readonly) NSURL *bundleURL;
@property (nonatomic, retain) UIViewController *childViewController;
@property (nonatomic) <TKApplicationViewControllerDelegate> *delegate;
@property (nonatomic, retain) UIViewController *loadingViewController;
@property (nonatomic, readonly) NSString *viewName;

+ (id)applicationViewController:(id)arg1;

- (void).cxx_destruct;
- (id)bundleURL;
- (id)childViewController;
- (id)delegate;
- (void)didLoadViewController:(id)arg1;
- (void)dismissApplicationControllerAnimated:(bool)arg1;
- (bool)handleApplicationControllerError;
- (id)initWithBundleURL:(id)arg1 loadPage:(id)arg2;
- (id)initWithBundleURL:(id)arg1 loadPage:(id)arg2 withData:(id)arg3;
- (id)initWithBundleURL:(id)arg1 loadPage:(id)arg2 withDataRequest:(id)arg3;
- (id)initWithBundleURL:(id)arg1 viewName:(id)arg2 delegate:(id /* block */)arg3;
- (id)loadingViewController;
- (void)setChildViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLoadingViewController:(id)arg1;
- (void)viewDidLoad;
- (id)viewName;

@end
