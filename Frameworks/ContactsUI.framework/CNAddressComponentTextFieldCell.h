/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNAddressComponentTextFieldCell : UITableViewCell {
    UIImageView * _chevron;
    NSArray * _componentConstraints;
    NSArray * _oneFieldConstraints;
    CNRepeatingGradientSeparatorView * _separator;
    NSArray * _splitFieldConstraints;
    UITextField * _textFieldForChevron;
    UITextField * _textFieldLeft;
    UITextField * _textFieldRight;
    bool  _usesSplitTextFields;
}

@property (nonatomic, retain) UIImageView *chevron;
@property (nonatomic, retain) NSArray *componentConstraints;
@property (nonatomic, retain) CNRepeatingGradientSeparatorView *separator;
@property (nonatomic, copy) NSDictionary *textAttributes;
@property (nonatomic, retain) UITextField *textFieldForChevron;
@property (nonatomic, retain) UITextField *textFieldLeft;
@property (nonatomic, retain) UITextField *textFieldRight;
@property (nonatomic, readonly) NSArray *textFields;
@property (nonatomic) bool usesSplitTextFields;

- (void).cxx_destruct;
- (id)_addTextField;
- (id)chevron;
- (id)componentConstraints;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)separator;
- (void)setChevron:(id)arg1;
- (void)setComponentConstraints:(id)arg1;
- (void)setSeparator:(id)arg1;
- (void)setTextAttributes:(id)arg1;
- (void)setTextFieldForChevron:(id)arg1;
- (void)setTextFieldLeft:(id)arg1;
- (void)setTextFieldRight:(id)arg1;
- (void)setUsesSplitTextFields:(bool)arg1;
- (id)textAttributes;
- (id)textFieldForChevron;
- (id)textFieldLeft;
- (id)textFieldRight;
- (id)textFields;
- (void)updateConstraints;
- (bool)usesSplitTextFields;

@end
