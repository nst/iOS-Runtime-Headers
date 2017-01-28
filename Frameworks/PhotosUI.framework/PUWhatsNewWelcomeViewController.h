/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUWhatsNewWelcomeViewController : PUWelcomeViewController {
    UIView * __bottomContentView;
    id  __completionHandler;
    bool  __didAdjustScrollPosition;
    UIScrollView * __scrollView;
    NSLayoutConstraint * __topConstraint;
    UIView * __topContentView;
}

@property (nonatomic, readonly, copy) UIView *_bottomContentView;
@property (nonatomic, readonly, copy) id _completionHandler;
@property (setter=_setDidAdjustScrollPosition:, nonatomic) bool _didAdjustScrollPosition;
@property (nonatomic, readonly, copy) UIScrollView *_scrollView;
@property (nonatomic, readonly, copy) NSLayoutConstraint *_topConstraint;
@property (nonatomic, readonly, copy) UIView *_topContentView;

+ (void)presentIfNecessaryFromViewController:(id)arg1 completionHandler:(id)arg2;
+ (void)resetLastPresentationInfo;

- (void).cxx_destruct;
- (id)_bottomContentView;
- (id)_completionHandler;
- (bool)_didAdjustScrollPosition;
- (void)_handleContinueButton:(id)arg1;
- (id)_initWithCompletionHandler:(id)arg1;
- (id)_scrollView;
- (void)_setDidAdjustScrollPosition:(bool)arg1;
- (id)_topConstraint;
- (id)_topContentView;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
