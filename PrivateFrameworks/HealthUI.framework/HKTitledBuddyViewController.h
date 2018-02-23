/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKTitledBuddyViewController : HKViewController <HKTitledBuddyHeaderViewDelegate> {
    UIVisualEffectView * _anchoredButtonContainerView;
    UIStackView * _bodyStackView;
    NSArray * _buttonStackConstraints;
    NSArray * _buttons;
    UIStackView * _containerStackView;
    HKTitledLogoBuddyHeaderView * _header;
    UIActivityIndicatorView * _loadingIndicator;
    UIScrollView * _scrollView;
}

@property (nonatomic, readonly) NSArray *buttons;
@property (nonatomic, readonly) UIActivityIndicatorView *loadingIndicator;

+ (id)embedView:(id)arg1 inContainerViewWithMinimumEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;

- (void).cxx_destruct;
- (void)_anchoredButtonTapped:(id)arg1;
- (void)_createAnchoredButtons;
- (id)_createHeaderView;
- (void)_updateForCurrentSizeCategory;
- (id)bodyString;
- (id)bottomAnchoredButtons;
- (void)buttonAtIndexTapped:(long long)arg1;
- (id)buttons;
- (id)headerView;
- (id)init;
- (void)linkButtonTapped:(id)arg1;
- (id)linkButtonTitle;
- (id)loadingIndicator;
- (void)reloadViews;
- (bool)shouldCustomizeNavigationBar;
- (bool)shouldHideNavigationBar;
- (id)subsequentViews;
- (unsigned long long)supportedInterfaceOrientations;
- (id)titleImage;
- (id)titleString;
- (void)titledBuddyHeaderViewDidTapLinkButton:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
