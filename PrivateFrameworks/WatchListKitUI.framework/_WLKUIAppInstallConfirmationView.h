/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface _WLKUIAppInstallConfirmationView : UIView {
    UIButton * _actionButton;
    NSString * _ageRating;
    UIImage * _appIcon;
    NSString * _appName;
    UIButton * _appStoreButton;
    NSString * _appSubtitle;
    NSLayoutConstraint * _buttonHeightConstraint;
    WLKUIBuyButtonLockup * _buyLockup;
    UIButton * _cancelButton;
    bool  _didLayout;
    NSString * _iAP;
    UILabel * _imageSubtitleView;
    _WLKUIAppInstallLockup * _lockupView;
    NSString * _message;
    UILabel * _messageView;
    UIButton * _secondaryLinkButton;
    NSString * _title;
    UILabel * _titleView;
}

@property (nonatomic, retain) UIButton *actionButton;
@property (nonatomic, copy) NSString *ageRating;
@property (nonatomic, copy) UIImage *appIcon;
@property (nonatomic, copy) NSString *appName;
@property (nonatomic, retain) UIButton *appStoreButton;
@property (nonatomic, copy) NSString *appSubtitle;
@property (nonatomic, retain) UIButton *cancelButton;
@property (nonatomic, copy) NSString *iAP;
@property (nonatomic, retain) _WLKUIAppInstallLockup *lockupView;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, retain) UIButton *secondaryLinkButton;
@property (nonatomic, copy) NSString *title;

+ (struct CGSize { double x1; double x2; })iconSize;

- (void).cxx_destruct;
- (void)_layoutForIos;
- (void)_layoutForTvos;
- (id)actionButton;
- (id)ageRating;
- (id)appIcon;
- (id)appName;
- (id)appStoreButton;
- (id)appSubtitle;
- (id)cancelButton;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)iAP;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)lockupView;
- (id)message;
- (id)preferredFocusEnvironments;
- (id)secondaryLinkButton;
- (void)setActionButton:(id)arg1;
- (void)setAgeRating:(id)arg1;
- (void)setAppIcon:(id)arg1;
- (void)setAppName:(id)arg1;
- (void)setAppStoreButton:(id)arg1;
- (void)setAppSubtitle:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setIAP:(id)arg1;
- (void)setLockupView:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setSecondaryLinkButton:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
