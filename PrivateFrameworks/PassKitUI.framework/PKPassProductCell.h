/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassProductCell : UITableViewCell <PKAccessibleLayoutSupport> {
    long long  _accessibleLayout;
    <PKAccessibleLayoutObserverDelegate> * _accessibleLayoutObserverDelegate;
    PKPaymentPassAction * _action;
    PKContinuousButton * _actionButton;
    id /* block */  _actionHandler;
    PKPaymentBalance * _balance;
    UILabel * _detailView;
    double  _middlePadding;
    PKPaymentPass * _pass;
    UILabel * _titleView;
    double  _topPadding;
}

@property (nonatomic) long long accessibleLayout;
@property (nonatomic) <PKAccessibleLayoutObserverDelegate> *accessibleLayoutObserverDelegate;
@property (nonatomic, retain) PKPaymentPassAction *action;
@property (nonatomic, copy) id /* block */ actionHandler;
@property (nonatomic, copy) PKPaymentBalance *balance;
@property (nonatomic, retain) PKPaymentPass *pass;

- (void).cxx_destruct;
- (void)_actionButtonTapped:(id)arg1;
- (void)_applyStyles;
- (void)_updateContent;
- (long long)accessibleLayout;
- (id)accessibleLayoutObserverDelegate;
- (id)action;
- (id /* block */)actionHandler;
- (id)balance;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)pass;
- (void)prepareForReuse;
- (void)setAccessibleLayout:(long long)arg1;
- (void)setAccessibleLayoutObserverDelegate:(id)arg1;
- (void)setAction:(id)arg1;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setBalance:(id)arg1;
- (void)setPass:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
