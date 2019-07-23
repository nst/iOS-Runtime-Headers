/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDashboardPassMessage : NSObject {
    id /* block */  _actionOnButtonPress;
    id /* block */  _actionOnDismiss;
    id /* block */  _actionOnMessagePress;
    NSString * _buttonTitle;
    NSString * _identifier;
    UIImage * _image;
    bool  _isDestructiveAction;
    NSString * _message;
    bool  _showDisclosure;
    bool  _showSpinner;
    NSString * _title;
    unsigned long long  _type;
}

@property (nonatomic, copy) id /* block */ actionOnButtonPress;
@property (nonatomic, copy) id /* block */ actionOnDismiss;
@property (nonatomic, copy) id /* block */ actionOnMessagePress;
@property (nonatomic, copy) NSString *buttonTitle;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) bool isDestructiveAction;
@property (nonatomic, copy) NSString *message;
@property (nonatomic) bool showDisclosure;
@property (nonatomic) bool showSpinner;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id /* block */)actionOnButtonPress;
- (id /* block */)actionOnDismiss;
- (id /* block */)actionOnMessagePress;
- (id)buttonTitle;
- (id)identifier;
- (id)image;
- (bool)isDestructiveAction;
- (id)message;
- (void)setActionOnButtonPress:(id /* block */)arg1;
- (void)setActionOnDismiss:(id /* block */)arg1;
- (void)setActionOnMessagePress:(id /* block */)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setIsDestructiveAction:(bool)arg1;
- (void)setMessage:(id)arg1;
- (void)setShowDisclosure:(bool)arg1;
- (void)setShowSpinner:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (bool)showDisclosure;
- (bool)showSpinner;
- (id)title;
- (unsigned long long)type;

@end
