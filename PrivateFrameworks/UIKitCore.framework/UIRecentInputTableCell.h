/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIRecentInputTableCell : UITableViewCell {
    long long  _blurEffectStyle;
    UILabel * _floatingLabel;
    UITextInputTraits * _textInputTraits;
}

@property (nonatomic) long long blurEffectStyle;
@property (nonatomic, retain) UILabel *floatingLabel;
@property (nonatomic, retain) UITextInputTraits *textInputTraits;
@property (nonatomic, readonly) _UIFloatingContentView *tvFloatingView;

+ (id)backgroundColorForBlurEffectStyle:(long long)arg1;
+ (id)focusedTextColorForBlurEffectStyle:(long long)arg1;
+ (id)unfocusedTextColorForBlurEffectStyle:(long long)arg1;

- (void).cxx_destruct;
- (bool)_tvIsDarkMode;
- (void)_updateAppearance;
- (long long)blurEffectStyle;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)floatingLabel;
- (void)layoutSubviews;
- (void)setBlurEffectStyle:(long long)arg1;
- (void)setFloatingLabel:(id)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setInputText:(id)arg1 withBlurStyle:(long long)arg2;
- (void)setTextInputTraits:(id)arg1;
- (id)textInputTraits;
- (void)traitCollectionDidChange:(id)arg1;
- (id)tvFloatingView;

@end
