/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentPreferenceButtonCell : PKPaymentPreferenceCell {
    UIButton * _button;
    NSString * _buttonTitle;
    id  _handler;
}

@property (nonatomic, copy) NSString *buttonTitle;
@property (nonatomic, copy) id handler;

- (void).cxx_destruct;
- (void)buttonTapped:(id)arg1;
- (id)buttonTitle;
- (void)dealloc;
- (id)handler;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (id)pk_childrenForAppearance;
- (void)setButtonTitle:(id)arg1;
- (void)setHandler:(id)arg1;

@end