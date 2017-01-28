/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFFindOnPageToolbar : UIInputView <UISearchBarDelegate> {
    UIBarButtonItem * _doneBarButtonItem;
    bool  _editing;
    <_SFFindOnPageToolbarDelegate> * _findDelegate;
    UILabel * _inFieldMatchLabel;
    UISearchBar * _inputBar;
    UIBarButtonItem * _inputFieldBarButtonItem;
    UILabel * _matchLabel;
    NSArray * _narrowToolbarItems;
    UIBarButtonItem * _nextButtonItem;
    UIBarButtonItem * _previousButtonItem;
    NSString * _searchText;
    NSArray * _standardToolbarItems;
    NSTimer * _textChangedUpdateTimer;
    UIToolbar * _toolbar;
    bool  _usesNarrowLayout;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UITextField *inputField;
@property (nonatomic, copy) NSString *searchText;
@property (readonly) Class superclass;
@property (nonatomic) bool usesNarrowLayout;

- (void).cxx_destruct;
- (void)_doUpdateSearchText;
- (void)_done;
- (void)_initializeToolbarItems;
- (void)_orientationDidChange:(id)arg1;
- (bool)_updateEditing:(bool)arg1;
- (double)_widthOfAllToolbarItemsExceptInputField;
- (void)dealloc;
- (void)dismiss:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)inputField;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })leftContentViewSize;
- (void)next:(id)arg1;
- (void)previous:(id)arg1;
- (struct CGSize { double x1; double x2; })rightContentViewSize;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (id)searchText;
- (void)setSearchText:(id)arg1;
- (void)setUsesNarrowLayout:(bool)arg1;
- (void)updateUI;
- (bool)usesNarrowLayout;

@end
