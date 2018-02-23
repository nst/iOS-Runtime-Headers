/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUServiceDetailsHeaderCell : UITableViewCell <HUCellProtocol, UITextViewDelegate> {
    UIActivityIndicatorView * _checkingForUpdateSpinner;
    NSArray * _hiddenMessageTextViewConstraints;
    HFItem * _item;
    NSLayoutConstraint * _messageBottomConstraint;
    UITextView * _messageTextView;
    <HUResizableCellDelegate> * _resizingDelegate;
    HUGridServiceCell * _serviceCell;
    NSLayoutConstraint * _spinnerBottomConstraint;
    UILabel * _titleLabel;
    UIStackView * _titleSpinnerStackView;
    NSArray * _visibleMessageTextViewConstraints;
}

@property (nonatomic, retain) UIActivityIndicatorView *checkingForUpdateSpinner;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *hiddenMessageTextViewConstraints;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic, retain) NSLayoutConstraint *messageBottomConstraint;
@property (nonatomic, retain) UITextView *messageTextView;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (nonatomic, retain) HUGridServiceCell *serviceCell;
@property (nonatomic, retain) NSLayoutConstraint *spinnerBottomConstraint;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UIStackView *titleSpinnerStackView;
@property (nonatomic, retain) NSArray *visibleMessageTextViewConstraints;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_configureConstraints;
- (id)_hiddenMessageTextViewConstraints;
- (bool)_shouldShowServiceCell;
- (void)_updateErrorLabelConstraints;
- (void)_updateRequiredHeightIfNeeded;
- (id)_visibleMessageTextViewConstraints;
- (id)checkingForUpdateSpinner;
- (id)hiddenMessageTextViewConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)item;
- (void)layoutSubviews;
- (id)messageBottomConstraint;
- (id)messageTextView;
- (id)resizingDelegate;
- (id)serviceCell;
- (void)setCheckingForUpdateSpinner:(id)arg1;
- (void)setHiddenMessageTextViewConstraints:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setMessageBottomConstraint:(id)arg1;
- (void)setMessageTextView:(id)arg1;
- (void)setResizingDelegate:(id)arg1;
- (void)setServiceCell:(id)arg1;
- (void)setSpinnerBottomConstraint:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleSpinnerStackView:(id)arg1;
- (void)setVisibleMessageTextViewConstraints:(id)arg1;
- (id)spinnerBottomConstraint;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (id)titleLabel;
- (id)titleSpinnerStackView;
- (void)updateUIWithAnimation:(bool)arg1;
- (id)visibleMessageTextViewConstraints;

@end
