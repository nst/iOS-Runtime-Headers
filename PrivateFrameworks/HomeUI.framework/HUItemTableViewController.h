/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUItemTableViewController : HUTableViewController <HFItemManagerDelegate, HUItemManagerContainer, HUPreloadableViewController> {
    HUGridLayoutOptions * _gridLayoutOptions;
    bool  _hasFinishedInitialLoad;
    NSMapTable * _indexPathToTextFieldMap;
    HFItemManager * _itemManager;
    NSMapTable * _textFieldToIndexPathMap;
    bool  _wantsPreferredContentSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HUGridLayoutOptions *gridLayoutOptions;
@property (nonatomic) bool hasFinishedInitialLoad;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMapTable *indexPathToTextFieldMap;
@property (nonatomic, retain) HFItemManager *itemManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMapTable *textFieldToIndexPathMap;
@property (nonatomic) bool wantsPreferredContentSize;

+ (bool)adoptsDefaultGridLayoutMargins;
+ (unsigned long long)updateMode;

- (void).cxx_destruct;
- (id)_itemForTextField:(id)arg1;
- (bool)_shouldHideFooterForSection:(long long)arg1;
- (bool)_shouldHideHeaderForSection:(long long)arg1;
- (void)_updateLayoutMarginsForCells:(id)arg1;
- (void)_updateTableHeaderAndFooter;
- (void)_updateTitle;
- (id)_visibleCellForItem:(id)arg1;
- (id)allCellClasses;
- (unsigned long long)automaticDisablingReasonsForItem:(id)arg1;
- (bool)automaticallyUpdatesViewControllerTitle;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)childViewControllersToPreload;
- (id)currentTextForTextField:(id)arg1 item:(id)arg2;
- (id)defaultTextForTextField:(id)arg1 item:(id)arg2;
- (id)gridLayoutOptions;
- (bool)hasFinishedInitialLoad;
- (id)hu_preloadContent;
- (id)indexPathToTextFieldMap;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)itemManager;
- (void)itemManager:(id)arg1 didChangeOverallLoadingState:(unsigned long long)arg2;
- (void)itemManager:(id)arg1 didChangeSourceItem:(id)arg2;
- (void)itemManager:(id)arg1 didInsertItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 didInsertSections:(id)arg2;
- (void)itemManager:(id)arg1 didMoveItem:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4;
- (void)itemManager:(id)arg1 didMoveSection:(long long)arg2 toSection:(long long)arg3;
- (void)itemManager:(id)arg1 didRemoveItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 didRemoveSections:(id)arg2;
- (void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (bool)itemManager:(id)arg1 performBatchUpdateBlock:(id)arg2;
- (id)itemTableFooterMessage;
- (id)itemTableFooterView;
- (id)itemTableHeaderMessage;
- (id)itemTableHeaderView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)placeholderTextForTextField:(id)arg1 item:(id)arg2;
- (void)recursivelyDisableItemUpdates:(bool)arg1 withReason:(id)arg2;
- (void)setGridLayoutOptions:(id)arg1;
- (void)setHasFinishedInitialLoad:(bool)arg1;
- (void)setItemManager:(id)arg1;
- (void)setWantsPreferredContentSize:(bool)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (bool)shouldHideFooterBelowSection:(long long)arg1;
- (bool)shouldHideHeaderAboveSection:(long long)arg1;
- (bool)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;
- (bool)shouldManageTextFieldForItem:(id)arg1;
- (id)subclass_preloadContent;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1 item:(id)arg2;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1 item:(id)arg2;
- (id)textFieldForVisibleItem:(id)arg1;
- (bool)textFieldShouldClear:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)textFieldToIndexPathMap;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)wantsPreferredContentSize;

@end