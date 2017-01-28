/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIPINInputControl : UIControl <SKUIViewElementView, UIKeyInput> {
    UIColor * _boxBackgroundColor;
    UIColor * _boxBorderColor;
    UIFont * _font;
    long long  _keyboardType;
    NSMutableArray * _labels;
    bool  _needsLabelReload;
    long long  _numberOfCharacters;
    bool  _secureTextEntry;
    NSMutableString * _text;
    UIColor * _textColor;
    SKUIViewElement * _viewElement;
}

@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic, copy) UIColor *boxBackgroundColor;
@property (nonatomic, copy) UIColor *boxBorderColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic, copy) UIFont *font;
@property (nonatomic, readonly) bool hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long numberOfCharacters;
@property (nonatomic) long long returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) UIColor *textColor;
@property (nonatomic, copy) NSString *textContentType;

+ (double)_defaultBoxSizeForFont:(id)arg1;
+ (struct CGSize { double x1; double x2; })preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize { double x1; double x2; })sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (void)_reloadLabelSubviews;
- (void)_sendValueChangeEvents;
- (void)_setNeedsReloadLayout;
- (long long)autocorrectionType;
- (bool)becomeFirstResponder;
- (id)boxBackgroundColor;
- (id)boxBorderColor;
- (bool)canBecomeFirstResponder;
- (void)deleteBackward;
- (id)font;
- (bool)hasText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insertText:(id)arg1;
- (bool)isSecureTextEntry;
- (long long)keyboardType;
- (void)layoutSubviews;
- (long long)numberOfCharacters;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (bool)resignFirstResponder;
- (void)setAutocorrectionType:(long long)arg1;
- (void)setBoxBackgroundColor:(id)arg1;
- (void)setBoxBorderColor:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setFont:(id)arg1;
- (bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setKeyboardType:(long long)arg1;
- (void)setNumberOfCharacters:(long long)arg1;
- (void)setSecureTextEntry:(bool)arg1;
- (void)setSpellCheckingType:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)spellCheckingType;
- (id)text;
- (id)textColor;
- (void)tintColorDidChange;
- (bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end
