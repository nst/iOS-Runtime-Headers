/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCLegacyNotificationTextInputViewController : UIViewController <NCNotificationCustomContent> {
    NCNotificationAction * _action;
    UIButton * _button;
    UIStackView * _contentView;
    <NCNotificationCustomContentDelegate> * _delegate;
    NCNotificationRequest * _notificationRequest;
    UITextField * _textField;
}

@property (nonatomic, readonly) NCNotificationAction *action;
@property (nonatomic, retain) UIButton *button;
@property (nonatomic, readonly) NSString *contentExtensionIdentifier;
@property (nonatomic, retain) UIStackView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationCustomContentDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NCNotificationRequest *notificationRequest;
@property (nonatomic) NCNotificationAction *presentationSourceAction;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITextField *textField;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)_attributedPlaceholderForString:(id)arg1;
- (void)_buttonPressed:(id)arg1;
- (id)action;
- (bool)allowManualDismiss;
- (id)button;
- (id)contentView;
- (unsigned long long)customContentLocation;
- (bool)defaultContentHidden;
- (id)delegate;
- (bool)didReceiveNotificationRequest:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1 notificationAction:(id)arg2;
- (void)loadView;
- (id)notificationRequest;
- (bool)performAction:(id)arg1 forNotification:(id)arg2;
- (bool)performAction:(id)arg1 forNotification:(id)arg2 withUserInfo:(id)arg3;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setButton:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTextField:(id)arg1;
- (id)textField;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
