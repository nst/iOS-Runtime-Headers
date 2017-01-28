/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSAutoAuthenticationViewController_iOS : UIViewController <VSAutoAuthenticationViewController> {
    UILabel * _accountNameLabel;
    UIBarButtonItem * _cancelButtonItem;
    bool  _cancellationAllowed;
    id  _contentSizeCategoryObserver;
    <VSAuthenticationViewControllerDelegate> * _delegate;
    VSIdentityProviderLogoView * _logoView;
    UIButton * _manualSignInButton;
    UILabel * _manualSignInTitleLabel;
    UILabel * _messageLabel;
    UILabel * _messageTitleLabel;
    UILabel * _noticeLabel;
    UIScrollView * _scrollView;
    UIBarButtonItem * _signInButtonItem;
    VSAutoAuthenticationViewModel * _viewModel;
}

@property (nonatomic, retain) UILabel *accountNameLabel;
@property (nonatomic, retain) UIBarButtonItem *cancelButtonItem;
@property (getter=isCancellationAllowed, nonatomic) bool cancellationAllowed;
@property (nonatomic) id contentSizeCategoryObserver;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VSAuthenticationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VSIdentityProviderLogoView *logoView;
@property (nonatomic, retain) UIButton *manualSignInButton;
@property (nonatomic, retain) UILabel *manualSignInTitleLabel;
@property (nonatomic, retain) UILabel *messageLabel;
@property (nonatomic, retain) UILabel *messageTitleLabel;
@property (nonatomic, retain) UILabel *noticeLabel;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredLogoSize;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic, retain) UIBarButtonItem *signInButtonItem;
@property (readonly) Class superclass;
@property (nonatomic, readonly) VSViewModel *viewModel;

- (void).cxx_destruct;
- (void)_cancelButtonPressed:(id)arg1;
- (void)_hideNavigationBarButtons;
- (void)_manualSignInButtonPressed:(id)arg1;
- (void)_showNavigationBarButtons;
- (void)_showValidationAlertForError:(id)arg1;
- (void)_signInButtonPressed:(id)arg1;
- (void)_startObservingViewModel:(id)arg1;
- (void)_startValidation;
- (void)_stopObservingViewModel:(id)arg1;
- (void)_stopValidationAndShowButtons:(bool)arg1;
- (void)_updateFonts;
- (id)accountNameLabel;
- (id)cancelButtonItem;
- (id)contentSizeCategoryObserver;
- (void)dealloc;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isCancellationAllowed;
- (id)logoView;
- (id)manualSignInButton;
- (id)manualSignInTitleLabel;
- (id)messageLabel;
- (id)messageTitleLabel;
- (id)noticeLabel;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (struct CGSize { double x1; double x2; })preferredLogoSize;
- (id)scrollView;
- (void)setAccountNameLabel:(id)arg1;
- (void)setCancelButtonItem:(id)arg1;
- (void)setCancellationAllowed:(bool)arg1;
- (void)setContentSizeCategoryObserver:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLogoView:(id)arg1;
- (void)setManualSignInButton:(id)arg1;
- (void)setManualSignInTitleLabel:(id)arg1;
- (void)setMessageLabel:(id)arg1;
- (void)setMessageTitleLabel:(id)arg1;
- (void)setNoticeLabel:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setSignInButtonItem:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)signInButtonItem;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewModel;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
