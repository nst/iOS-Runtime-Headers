/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKConversationListController : UITableViewController <CKCloudKitSyncProgressViewControllerDelegate, CKConversationListCellDelegate, CKConversationResultsControllerDelegate, CKTranscriptPreviewControllerDelegate, IMCloudKitEventHandler, UIActionSheetDelegate, UISearchBarDelegate, UISearchControllerDelegate, UITableViewDataSource, UITableViewDelegate, UITableViewDragDestinationDelegate, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private> {
    UIBarButtonItem * _composeButton;
    double  _conversationCellHeight;
    CKConversation * _conversationChangingPinState;
    CKConversationList * _conversationList;
    UIBarButtonItem * _currentEditButtonItem;
    long long  _filterMode;
    unsigned long long  _filteredConversationCount;
    NSArray * _filteredJunkConversations;
    NSArray * _filteredWhitelistedConversations;
    NSArray * _frozenConversations;
    bool  _isInitialAppearance;
    bool  _isInitialLoad;
    bool  _isShowingSwipeDeleteConfirmation;
    unsigned int  _isVisible;
    CKMessagesController * _messagesController;
    UIView * _noMessagesDialogView;
    NSArray * _nonPlaceholderConversations;
    NSIndexPath * _previouslySelectedIndexPath;
    id /* block */  _searchCompletion;
    UISearchController * _searchController;
    CKConversationSearchResultsController * _searchResultsController;
    bool  _shouldUseFastPreviewText;
    CKCloudKitSyncProgressViewController * _syncProgressViewController;
    UITableView * _table;
    CKScheduledUpdater * _updater;
    unsigned int  _willRotate;
}

@property (nonatomic, retain) UIBarButtonItem *composeButton;
@property (nonatomic) double conversationCellHeight;
@property (nonatomic, retain) CKConversation *conversationChangingPinState;
@property (nonatomic) CKConversationList *conversationList;
@property (nonatomic, retain) UIBarButtonItem *currentEditButtonItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long filterMode;
@property (nonatomic) unsigned long long filteredConversationCount;
@property (nonatomic, retain) NSArray *filteredJunkConversations;
@property (nonatomic, retain) NSArray *filteredWhitelistedConversations;
@property (nonatomic, copy) NSArray *frozenConversations;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isShowingSwipeDeleteConfirmation;
@property (nonatomic, readonly) bool isVisible;
@property (nonatomic) CKMessagesController *messagesController;
@property (nonatomic, retain) UIView *noMessagesDialogView;
@property (nonatomic, retain) NSArray *nonPlaceholderConversations;
@property (nonatomic, retain) NSIndexPath *previouslySelectedIndexPath;
@property (nonatomic, copy) id /* block */ searchCompletion;
@property (nonatomic, retain) UISearchController *searchController;
@property (nonatomic, retain) CKConversationSearchResultsController *searchResultsController;
@property (nonatomic, readonly) bool shouldShowPendingCell;
@property (nonatomic) bool shouldUseFastPreviewText;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKCloudKitSyncProgressViewController *syncProgressViewController;
@property (nonatomic, retain) CKScheduledUpdater *updater;

- (void).cxx_destruct;
- (void)_beginAccountRepairIfNeeded;
- (void)_cancelDeletion:(id /* block */)arg1;
- (void)_chatItemsDidChange:(id)arg1;
- (void)_chatParticipantsChangedNotification:(id)arg1;
- (void)_chatRegistryLastMessageLoadedNotification:(id)arg1;
- (void)_chatUnreadCountDidChange:(id)arg1;
- (void)_chatWatermarkDidChange:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_conversationContactPhotosEnabledChangedNotification:(id)arg1;
- (void)_conversationDisplayNameChangedNotification:(id)arg1;
- (void)_conversationFilteringStateChangedNotification:(id)arg1;
- (void)_conversationIsFilteredChangedNotification:(id)arg1;
- (void)_conversationListDidChange:(id)arg1;
- (void)_conversationListDidFinishLoadingConversations:(id)arg1;
- (void)_conversationMessageWasSent:(id)arg1;
- (void)_conversationMuteDidChangeNotification:(id)arg1;
- (void)_conversationPinStateChangedNotification:(id)arg1;
- (void)_conversationSpamFilteringStateChangedNotification:(id)arg1;
- (void)_dismissDetailsController:(id)arg1;
- (void)_endHoldingUpdatesForBatchEditing:(bool)arg1;
- (void)_endHoldingUpdatesOnViewWillAppear;
- (void)_filterCellSelectionChanged:(id)arg1;
- (void)_getRotationContentSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; double x6; int x7; }*)arg1;
- (void)_groupsChanged:(id)arg1;
- (void)_increaseContrastDidChange:(id)arg1;
- (unsigned long long)_indexOfConverationClosestToDeletedIndex:(unsigned long long)arg1;
- (unsigned long long)_indexOfDefaultConversation;
- (id)_indexPaths:(id)arg1 containingHandleWithUID:(id)arg2;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id)_mergeUnsentComposition:(id)arg1 withDroppedComposition:(id)arg2;
- (void)_multiWayCallStateChanged:(id)arg1;
- (void)_reloadVisibleConversationList:(id)arg1;
- (void)_selectConversationAtIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (bool)_shouldKeepSelection;
- (bool)_shouldResizeNavigationBar;
- (void)_showConversationWithComposition:(id)arg1 atIndexPath:(id)arg2;
- (bool)_tableView:(id)arg1 canHandleDropSession:(id)arg2;
- (id)_tableView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (void)_tableView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (void)_updateConversationFilteredFlagsAndReportSpam;
- (void)_updateConversationListNeedsResort:(bool)arg1;
- (void)_updateFilteredConversationLists;
- (void)_updateInsets;
- (void)_updateNonPlaceholderConverationLists;
- (void)_updateSyncProgressIfNeeded;
- (void)_updateSyncProgressIfNeededWithProgressController:(id)arg1;
- (void)_updateToolbarItems;
- (id)actionsForTranscriptPreviewController:(id)arg1;
- (id)activeConversations;
- (void)applicationWillSuspend;
- (void)avatarHeaderWasTappedForConversation:(id)arg1 inCell:(id)arg2;
- (void)batchDeleteButtonTapped:(id)arg1;
- (void)beginHoldingConversationListUpdatesForKey:(id)arg1;
- (void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2;
- (void)cloudKitSyncProgressViewController:(id)arg1 actionButtonWasPressed:(long long)arg2 errors:(id)arg3;
- (id)committedViewControllerForPreviewViewController:(id)arg1;
- (id)composeButton;
- (void)composeButtonClicked:(id)arg1;
- (double)conversationCellHeight;
- (id)conversationChangingPinState;
- (id)conversationList;
- (Class)conversationListCellClass;
- (void)conversationWillBeMarkedRead:(id)arg1;
- (id)currentEditButtonItem;
- (void)dealloc;
- (void)deleteButtonTappedForIndexPath:(id)arg1 completionHandler:(id /* block */)arg2 cellToUpdate:(id)arg3;
- (void)didDismissSearchController:(id)arg1;
- (void)editButtonTapped:(id)arg1;
- (void)endHoldingAllConversationListUpdatesForKey:(id)arg1;
- (void)endHoldingConversationListUpdatesForKey:(id)arg1;
- (long long)filterMode;
- (unsigned long long)filteredConversationCount;
- (id)filteredJunkConversations;
- (id)filteredWhitelistedConversations;
- (id)frozenConversations;
- (id)init;
- (id)inputAccessoryView;
- (void)invalidateCellLayout;
- (bool)isShowingSwipeDeleteConfirmation;
- (bool)isVisible;
- (void)loadView;
- (void)markAsReadButtonTapped:(id)arg1;
- (void)markAsReadButtonTappedForIndexPath:(id)arg1;
- (id)messagesController;
- (void)muteConversationButtonTappedForIndexPath:(id)arg1 setMuted:(bool)arg2;
- (id)noMessagesDialogView;
- (id)nonPlaceholderConversations;
- (void)noteUnreadCountsChanged;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)performResumeDeferredSetup;
- (void)performSearch:(id)arg1 completion:(id /* block */)arg2;
- (void)pinConversationButtonTappedForIndexPath:(id)arg1 setPinned:(bool)arg2;
- (long long)preferredStatusBarStyle;
- (void)prepareForResume;
- (void)prepareForSuspend;
- (id)previewViewControllerForRowAtIndexPath:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)previouslySelectedIndexPath;
- (void)registerForCloudKitEventsImmediately;
- (void)registerForCloudKitEventsWithDelayedRegistration:(bool)arg1;
- (void)scrollToTop;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (id /* block */)searchCompletion;
- (id)searchController;
- (id)searchResultsController;
- (id)searcher:(id)arg1 conversationForChatGUID:(id)arg2;
- (void)searcher:(id)arg1 userDidDeleteChatGUID:(id)arg2;
- (void)searcher:(id)arg1 userDidSelectChatGUID:(id)arg2 messageGUID:(id)arg3;
- (void)searcherDidComplete:(id)arg1;
- (void)selectConversationClosestToDeletedIndex:(unsigned long long)arg1;
- (void)selectDefaultConversationAnimated:(bool)arg1;
- (void)selectNextSequentialConversation:(bool)arg1;
- (void)setComposeButton:(id)arg1;
- (void)setConversationCellHeight:(double)arg1;
- (void)setConversationChangingPinState:(id)arg1;
- (void)setConversationList:(id)arg1;
- (void)setCurrentEditButtonItem:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setFilterMode:(long long)arg1;
- (void)setFilteredConversationCount:(unsigned long long)arg1;
- (void)setFilteredJunkConversations:(id)arg1;
- (void)setFilteredWhitelistedConversations:(id)arg1;
- (void)setFrozenConversations:(id)arg1;
- (void)setIsShowingSwipeDeleteConfirmation:(bool)arg1;
- (void)setMessagesController:(id)arg1;
- (void)setNoMessagesDialogView:(id)arg1;
- (void)setNonPlaceholderConversations:(id)arg1;
- (void)setPreviouslySelectedIndexPath:(id)arg1;
- (void)setSearchCompletion:(id /* block */)arg1;
- (void)setSearchController:(id)arg1;
- (void)setSearchResultsController:(id)arg1;
- (void)setShouldUseFastPreviewText:(bool)arg1;
- (void)setSyncProgressViewController:(id)arg1;
- (void)setUpdater:(id)arg1;
- (bool)shouldCleanupFilter;
- (bool)shouldShowPendingCell;
- (bool)shouldUseFastPreviewText;
- (void)significantTimeChange;
- (unsigned long long)supportedInterfaceOrientations;
- (id)syncProgressViewController;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (double)tableViewSpacingForExtraSeparators:(id)arg1;
- (void)unregisterForCloudKitEvents;
- (void)updateConversationList;
- (void)updateConversationSelection;
- (void)updateCurrentEditButton;
- (void)updateFilterControl:(id)arg1;
- (void)updateMarginWidth;
- (void)updateNavigationItems;
- (void)updateNoMessagesDialog;
- (void)updateSMSSpamConversationsDisplayName;
- (id)updater;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidAppearDeferredSetup;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willDismissSearchController:(id)arg1;

@end
