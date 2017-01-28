/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKRecipientSelectionController : CKViewController <ABPeoplePickerNavigationControllerDelegate, CKRecipientSearchListControllerDelegate, MFComposeRecipientTextViewDelegate, MFGroupDetailViewControllerDelegate> {
    NSArray * _addressBookProperties;
    CKPendingConversation * _conversation;
    <CKRecipientSelectionControllerDelegate> * _delegate;
    bool  _didShowOneTimeErrorAlert;
    bool  _editable;
    bool  _forceMMS;
    id  _gameCenterPickerBlock;
    bool  _homogenizePreferredServiceForiMessage;
    double  _keyboardHeightWithAccessoryView;
    ABPeoplePickerNavigationController * _peoplePickerController;
    bool  _peoplePickerHidden;
    bool  _preventAtomization;
    MFComposeRecipient * _recentContactForPresentedABCard;
    NSMutableDictionary * _recipientAvailabilities;
    NSMutableDictionary * _recipientAvailibityTimers;
    CKRecipientSearchListController * _searchListController;
    bool  _shouldSuppressSearchResultsTable;
    CKComposeRecipientView * _toField;
    UIView * _toFieldContainerView;
    UILabel * _toFieldPlaceholderLabel;
    UIScrollView * _toFieldScrollingView;
}

@property (nonatomic, retain) NSArray *addressBookProperties;
@property (nonatomic, readonly) double collapsedHeight;
@property (nonatomic, retain) CKPendingConversation *conversation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKRecipientSelectionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didShowOneTimeErrorAlert;
@property (getter=isEditable, nonatomic) bool editable;
@property (nonatomic) bool forceMMS;
@property (nonatomic, copy) id gameCenterPickerBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool homogenizePreferredServiceForiMessage;
@property (nonatomic, retain) ABPeoplePickerNavigationController *peoplePickerController;
@property (getter=isPeoplePickerHidden, nonatomic) bool peoplePickerHidden;
@property (nonatomic) bool preventAtomization;
@property (nonatomic, retain) MFComposeRecipient *recentContactForPresentedABCard;
@property (nonatomic, retain) NSMutableDictionary *recipientAvailabilities;
@property (nonatomic, retain) NSMutableDictionary *recipientAvailibityTimers;
@property (nonatomic, retain) CKRecipientSearchListController *searchListController;
@property (getter=isSearchResultsHidden, nonatomic) bool searchResultsHidden;
@property (nonatomic, readonly) bool shouldSuppressSearchResultsTable;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKComposeRecipientView *toField;
@property (nonatomic, readonly) UIView *toFieldContainerView;
@property (nonatomic, readonly) bool toFieldIsFirstResponder;
@property (nonatomic, retain) UILabel *toFieldPlaceholderLabel;
@property (nonatomic, retain) UIScrollView *toFieldScrollingView;

- (void).cxx_destruct;
- (void)_adjustToFieldPositionIfNecessary;
- (id)_alternateAddressesForRecipient:(id)arg1;
- (id)_alternateiMessagableAddressesForRecipient:(id)arg1;
- (unsigned long long)_atomPresentationOptionsForRecipient:(id)arg1;
- (BOOL)_availibilityForRecipient:(id)arg1 onService:(id)arg2;
- (id)_canonicalRecipientAddresses;
- (void)_dismissPeoplePicker;
- (void)_handleConversationPreferredServiceDidChangeNotification:(id)arg1;
- (void)_handleRecipientAvailabilityTimeout:(id)arg1;
- (void)_handleRecipientViewChanged:(id)arg1;
- (void)_hideSearchField;
- (bool)_isToFieldPushedUp;
- (void)_keyboardWillShowOrHide:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_navigationBarInsets;
- (id)_recipientCausingTooManyRecipientsError;
- (void)_refreshActionSheet;
- (void)_removeAvailabilityTimeoutTimerForRecipient:(id)arg1;
- (void)_removeRecent;
- (void)_resetSearchResultsInsets;
- (void)_showActionSheetForRecipient:(id)arg1 animated:(bool)arg2;
- (void)_showDetailsForGroup:(id)arg1;
- (void)_showDetailsForRecipient:(id)arg1 canDelete:(bool)arg2;
- (void)_showOneTimeErrorAlertForAddedRecipient:(id)arg1 service:(id)arg2 withError:(BOOL)arg3;
- (void)_showSearchField;
- (void)_startAvailabilityTimeoutTimerForRecipient:(id)arg1;
- (id)_toFieldCollapsedTextColor;
- (void)_updateAddressBookProperties;
- (void)_updateRecipientViewLayouts;
- (void)_updateSearchResultsTable;
- (void)_updateShowingSearch;
- (void)_updateToField;
- (void)addRecipient:(id)arg1;
- (void)addRecipients:(id)arg1;
- (id)addressBookProperties;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2;
- (void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)collapsedHeight;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didSelectRecipients:(id)arg2;
- (void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)composeRecipientViewReturnPressed:(id)arg1;
- (id)conversation;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToParentViewController:(id)arg1;
- (bool)didShowOneTimeErrorAlert;
- (bool)finishedComposingRecipients;
- (bool)forceMMS;
- (id)gameCenterPickerBlock;
- (void)groupDetailViewController:(id)arg1 didAskToRemoveGroup:(id)arg2;
- (void)groupDetailViewController:(id)arg1 didTapComposeRecipient:(id)arg2;
- (void)groupDetailViewControllerDidCancel:(id)arg1;
- (bool)hasFailediMessageRecipients;
- (bool)hasPendingiMessageRecipients;
- (bool)hasTimedOutRecipients;
- (bool)hasUnreachableEmergencyRecipient;
- (bool)homogenizePreferredServiceForiMessage;
- (id)init;
- (id)initWithConversation:(id)arg1;
- (void)invalidateOutstandingIDStatusRequests;
- (bool)isEditable;
- (bool)isGameCenterRecipient:(id)arg1;
- (bool)isPeoplePickerHidden;
- (bool)isSearchResultsHidden;
- (void)loadView;
- (void)parentControllerDidResume:(bool)arg1 animating:(bool)arg2;
- (id)peoplePickerController;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(const void*)arg2;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (unsigned long long)presentationOptionsForRecipient:(id)arg1;
- (bool)preventAtomization;
- (id)recentContactForPresentedABCard;
- (id)recipientAvailabilities;
- (void)recipientAvailibilitiesDidUpdate;
- (id)recipientAvailibityTimers;
- (void)recipientSelectionControllerDidChange;
- (void)recipientViewDidBecomeFirstResponder:(id)arg1;
- (void)recipientViewDidResignFirstResponder:(id)arg1;
- (bool)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1;
- (id)recipients;
- (void)refreshComposeSendingServiceForAddresses:(id)arg1 withCompletionBlock:(id)arg2;
- (void)removeRecipient:(id)arg1;
- (void)reset;
- (id)searchListController;
- (void)searchListController:(id)arg1 destinationsUpdated:(id)arg2;
- (long long)searchListController:(id)arg1 idStatusForIDSID:(id)arg2;
- (void)searchListControllerDidFinishSearch:(id)arg1;
- (void)searchListControllerDidScroll:(id)arg1;
- (void)setAddressBookProperties:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidShowOneTimeErrorAlert:(bool)arg1;
- (void)setEditable:(bool)arg1;
- (void)setForceMMS:(bool)arg1;
- (void)setGameCenterPickedHandles:(id)arg1 playerNames:(id)arg2;
- (void)setGameCenterPickerBlock:(id)arg1;
- (void)setPeoplePickerController:(id)arg1;
- (void)setPeoplePickerHidden:(bool)arg1;
- (void)setPreventAtomization:(bool)arg1;
- (void)setRecentContactForPresentedABCard:(id)arg1;
- (void)setRecipientAvailabilities:(id)arg1;
- (void)setRecipientAvailibityTimers:(id)arg1;
- (void)setSearchListController:(id)arg1;
- (void)setSearchResultsHidden:(bool)arg1;
- (void)setToField:(id)arg1;
- (void)setToFieldPlaceholderLabel:(id)arg1;
- (void)setToFieldScrollingView:(id)arg1;
- (bool)shouldSuppressSearchResultsTable;
- (void)stopCheckingRecipientAvailabilityAndRemoveAllTimers;
- (id)toField;
- (id)toFieldContainerView;
- (bool)toFieldIsFirstResponder;
- (id)toFieldPlaceholderLabel;
- (id)toFieldScrollingView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppearDeferredSetup;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
