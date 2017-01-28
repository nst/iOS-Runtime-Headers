/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPSimpleNumberPad : TPNumberPad {
    <TPSimpleNumberPadDelegate> * _delegate;
    UIButton * _deleteButton;
    bool  _showsDeleteButton;
}

@property <TPSimpleNumberPadDelegate> *delegate;
@property (nonatomic) bool showsDeleteButton;

+ (id)_numberPadCharacters;

- (void).cxx_destruct;
- (void)_deleteButtonClicked:(id)arg1 withEvent:(id)arg2;
- (void)_updateDeleteButton;
- (void)buttonUp:(id)arg1;
- (id)delegate;
- (id)initWithButtons:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setNumberButtonsEnabled:(bool)arg1;
- (void)setShowsDeleteButton:(bool)arg1;
- (bool)showsDeleteButton;

@end
