/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLListViewController : UINavigationController <UIPopoverPresentationControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    <QLListViewControllerDelegate> * _archiveDelegate;
    UIBarButtonItem * _barButton;
    QLListCellManager * _cellManager;
    QLItem * _currentPreviewItem;
    NSArray * _itemsWithFolders;
    UIPopoverPresentationController * _presentationController;
    QLPreviewItemStore * _previewItemStore;
    UITableViewController * _tableViewController;
}

@property <QLListViewControllerDelegate> *archiveDelegate;
@property (nonatomic) UIBarButtonItem *barButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addPath:(id)arg1 fromPreviewItem:(id)arg2 intoArray:(id)arg3;
- (void)_dismiss;
- (void)_generateItemsAndFolders;
- (void)_updateNavigationBarVisibilityForPresentationStyle:(long long)arg1;
- (id)archiveDelegate;
- (id)barButton;
- (id)initWithPreviewItemStore:(id)arg1 currentPreviewItem:(id)arg2;
- (void)prepareForPopoverPresentation:(id)arg1;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (void)setArchiveDelegate:(id)arg1;
- (void)setBarButton:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;

@end
