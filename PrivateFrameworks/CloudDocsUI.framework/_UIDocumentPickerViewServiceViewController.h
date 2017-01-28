/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

@interface _UIDocumentPickerViewServiceViewController : _UIViewServiceViewController <_UIDocumentListControllerDelegate, _UIDocumentPickerOverviewDelegate, _UIDocumentPickerRemoteViewControllerContaining, _UIDocumentPickerViewController, _UIDocumentTargetSelectionControllerDelegate> {
    NSArray * _auxiliaryOptions;
    UIViewController * _currentPicker;
    NSString * _currentPickerIdentifier;
    bool  _displayedAsMenu;
    bool  _hasBeenDismissed;
    NSArray * _pickableTypes;
    unsigned long long  _pickerMode;
    bool  _showingSpinner;
    int  _sortOrder;
    NSURL * _uploadURL;
}

@property (setter=_setAuxiliaryOptions:, nonatomic, retain) NSArray *auxiliaryOptions;
@property (nonatomic, retain) UIViewController *currentPicker;
@property (nonatomic, retain) NSString *currentPickerIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool displayedAsMenu;
@property (nonatomic) bool hasBeenDismissed;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <_UIDocumentPickerViewControllerHost> *hostingViewController;
@property (setter=_setPickableTypes:, nonatomic, copy) NSArray *pickableTypes;
@property (setter=_setPickerMode:, nonatomic) unsigned long long pickerMode;
@property (nonatomic) bool showingSpinner;
@property (nonatomic) int sortOrder;
@property (readonly) Class superclass;
@property (setter=_setUploadURL:, nonatomic, copy) NSURL *uploadURL;

+ (id)_exportedInterface;
+ (id)_logicalURLForPhysicalURL:(id)arg1;
+ (id)_remoteViewControllerInterface;
+ (id)_urlByResolvingExternalDocumentReferenceForURL:(id)arg1;

- (void).cxx_destruct;
- (void)_cloudEnabledStatusDidChange:(id)arg1;
- (void)_createBookmarkAndDismissWithCloudURL:(id)arg1;
- (void)_didInstantiateThirdPartyPickerWithDescription:(id)arg1 placeholder:(id)arg2;
- (void)_didSelectPicker;
- (void)_didSelectURL:(id)arg1;
- (void)_dismissViewController;
- (void)_dismissWithFileProviderURL:(id)arg1 bundleIdentifier:(id)arg2;
- (void)_dismissWithImportURL:(id)arg1;
- (void)_dismissWithOption:(id)arg1;
- (void)_displayLocationsMenuFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_documentPickerDidDismiss;
- (void)_doneButton:(id)arg1;
- (void)_invalidatePicker:(id)arg1;
- (id)_mangledFilenameForURL:(id)arg1;
- (void)_prepareForDisplayWithCompletion:(id)arg1;
- (void)_presentError:(id)arg1 forThirdPartyPickerWithDescription:(id)arg2;
- (void)_setAuxiliaryOptions:(id)arg1;
- (void)_setPickableTypes:(id)arg1;
- (void)_setPickerMode:(unsigned long long)arg1;
- (void)_setSourceIsManaged:(bool)arg1;
- (void)_setTintColor:(id)arg1;
- (void)_setUploadURL:(id)arg1;
- (void)_setUploadURLWrapper:(id)arg1;
- (bool)_shouldWarnForSharing;
- (void)_showDefaultPicker;
- (void)_showExistsAlertForFile:(id)arg1 withSourceURL:(id)arg2;
- (void)_showLocationPopup:(id)arg1;
- (void)_showLocationPopupFromBarButtonItem:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_showPicker:(id)arg1;
- (void)_showTopLevelViewController;
- (void)_stitchFileCreationAtURL:(id)arg1;
- (void)_tryExportingFile:(id)arg1 toLocation:(id)arg2;
- (void)_updateDefaultPicker;
- (struct CGSize { double x1; double x2; })_updatedContentSizeForPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_warnSharingForTarget:(id)arg1 completion:(id)arg2;
- (void)_warnSharingPreMove;
- (void)_willAppearInRemoteViewController;
- (id)auxiliaryOptions;
- (void)beginDownloadingURL:(id)arg1 completion:(id)arg2;
- (id)currentPicker;
- (id)currentPickerIdentifier;
- (void)dealloc;
- (void)dismissWithURL:(id)arg1 forBundleIdentifier:(id)arg2;
- (bool)displayedAsMenu;
- (void)documentListController:(id)arg1 didSelectContainerWithViewController:(id)arg2;
- (void)documentListController:(id)arg1 didSelectItemAtURL:(id)arg2;
- (void)documentListController:(id)arg1 performAction:(long long)arg2 URL:(id)arg3 originatingView:(id)arg4 completion:(id)arg5;
- (void)documentTargetSelectionController:(id)arg1 didSelectItemAtURL:(id)arg2;
- (bool)hasBeenDismissed;
- (id)hostingViewController;
- (void)overviewController:(id)arg1 selectedAuxiliaryOptionWithIdentifier:(id)arg2;
- (void)overviewController:(id)arg1 selectedDocumentPickerWithIdentifier:(id)arg2;
- (void)pickLocationForUpload:(id)arg1;
- (id)pickableTypes;
- (unsigned long long)pickerMode;
- (void)setCurrentPicker:(id)arg1;
- (void)setCurrentPickerIdentifier:(id)arg1;
- (void)setDisplayedAsMenu:(bool)arg1;
- (void)setHasBeenDismissed:(bool)arg1;
- (void)setNavigationItemSpinner:(bool)arg1;
- (void)setShowingSpinner:(bool)arg1;
- (void)setSortOrder:(int)arg1;
- (void)setupNavigationItemForPicker:(id)arg1 isRoot:(bool)arg2;
- (bool)showingSpinner;
- (int)sortOrder;
- (id)uploadURL;

@end
