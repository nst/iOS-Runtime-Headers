/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAlbumListViewController : UIViewController <PLCloudFeedNavigating, PLNavigableAssetContainerListViewController, PLNavigablePhotoStreamViewController, PUAlbumListTableViewCellDelegate, PUAlbumStreamActivityDelegate, PUCollectionViewReorderDelegate, PUFeedRecentsManagerDelegate, PUSectionedGridLayoutDelegate, PUStackedAlbumControllerTransition, PUStackedAlbumTransitionDelegate, PXCollectionsDataSourceManagerObserver, PXPhotoLibraryUIChangeObserver, PXPlacesSnapshotFactoryDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, UITableViewDataSource, UITableViewDelegate, _UISettingsKeyObserver> {
    bool  __aboutToCreateAlbum;
    UICollectionViewLayout * __albumListTransitionLayout;
    UIView * __backgroundView;
    PXAssetBadgeManager * __badgeManager;
    PUFeedViewController * __cachedFeedViewController;
    PHCachingImageManager * __cachingImageManager;
    PXCollectionTileLayoutTemplate * __collectionTileLayoutTemplate;
    UIAlertAction * __createAlbumAlertAction;
    UIAlertController * __currentDeleteConfirmationAlertController;
    _UIContentUnavailableView * __emptyPlaceholderView;
    PXFeatureSpec * __featureSpec;
    PXFeatureSpecManager * __featureSpecManager;
    PUCollageView * __feedCollageView;
    PUFeedRecentsManager * __feedRecentsManager;
    PUFontManager * __fontManager;
    long long  __ignoredReorderNotificationCount;
    PHImageRequestOptions * __imageRequestOptions;
    bool  __isKeyboardAware;
    id  __justCreatedCollectionAnimationCompletionHandler;
    NSString * __justCreatedCollectionIdentifier;
    struct CGSize { 
        double width; 
        double height; 
    }  __layoutReferenceSize;
    PUCollectionView * __mainCollectionView;
    PUSectionedGridLayout * __mainCollectionViewLayout;
    UITableView * __mainTableView;
    id  __onViewDidLayoutSubviewsBlock;
    id  __pendingScrollingAnimationEndBlock;
    PXPeopleAlbumProvider * __peopleAlbumProvider;
    PUPhotoPinchGestureRecognizer * __photoPinchGestureRecognizer;
    PXPlacesAlbumCoverProvider * __placesAlbumCoverProvider;
    NSMutableSet * __preheatedCollections;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __previousPreheatRect;
    NSArray * __syncProgressAlbums;
    PUCollageView * _aggregateCollageView;
    PULongPressableBarButtonItem * _albumCreationButtonItem;
    PUAlbumListTransitionContext * _albumListTransitionContext;
    PUAlbumStreamActivity * _albumStreamActivity;
    NSString * _albumSubtitleFormat;
    UIBarButtonItem * _cancelButtonItem;
    PXPhotoKitCollectionsDataSource * _dataSource;
    PXPhotoKitCollectionsDataSourceManager * _dataSourceManager;
    PXPhotoKitCollectionsDataSourceManagerConfiguration * _dataSourceManagerConfiguration;
    bool  _didInitialRequestForPeopleCount;
    bool  _didInitialRequestForPlacesCount;
    bool  _didInitializeMemoriesTitleSupport;
    bool  _disallowsSearch;
    UIBarButtonItem * _doneButtonItem;
    bool  _isRootSharedAlbumList;
    NSArray * _keyAssetsForMoments;
    struct { 
        bool visibleCellsConfiguration; 
    }  _needsUpdateFlags;
    bool  _progressViewVisible;
    PHCollection * _pushedAlbum;
    UIViewController * _pushedController;
    PHCollection * _retitlingCollection;
    PUSearchButtonItem * _searchButtonItem;
    PUAlbumListSectionHeaderView * _sectionHeaderView;
    PUSessionInfo * _sessionInfo;
    bool  _showAddNewAlbumPlaceholder;
    PUAlbumListViewControllerSpec * _spec;
    PUPhotosGlobalFooterView * _syncProgressView;
    bool  _viewInSyncWithModel;
}

@property (setter=_setAboutToCreateAlbum:, nonatomic) bool _aboutToCreateAlbum;
@property (setter=setAlbumListTransitionLayout:, nonatomic, retain) UICollectionViewLayout *_albumListTransitionLayout;
@property (setter=_setBackgroundView:, nonatomic, retain) UIView *_backgroundView;
@property (nonatomic, readonly) PXAssetBadgeManager *_badgeManager;
@property (setter=_setCachedFeedViewController:, nonatomic, retain) PUFeedViewController *_cachedFeedViewController;
@property (nonatomic, readonly) PHCachingImageManager *_cachingImageManager;
@property (nonatomic, readonly) PXCollectionTileLayoutTemplate *_collectionTileLayoutTemplate;
@property (setter=_setCreateAlbumAlertAction:, nonatomic) UIAlertAction *_createAlbumAlertAction;
@property (setter=_setCurrentDeleteConfirmationAlertController:, nonatomic) UIAlertController *_currentDeleteConfirmationAlertController;
@property (setter=_setEmptyPlaceholderView:, nonatomic, retain) _UIContentUnavailableView *_emptyPlaceholderView;
@property (setter=_setFeatureSpec:, nonatomic, retain) PXFeatureSpec *_featureSpec;
@property (nonatomic, readonly) PXFeatureSpecManager *_featureSpecManager;
@property (nonatomic, retain) PUCollageView *_feedCollageView;
@property (nonatomic, retain) PUFeedRecentsManager *_feedRecentsManager;
@property (nonatomic, readonly) PUFontManager *_fontManager;
@property (setter=_setIgnoredReorderNotificationCount:, nonatomic) long long _ignoredReorderNotificationCount;
@property (nonatomic, readonly) PHImageRequestOptions *_imageRequestOptions;
@property (setter=_setKeyboardAware:, nonatomic) bool _isKeyboardAware;
@property (setter=_setJustCreatedCollectionAnimationCompletionHandler:, nonatomic, copy) id _justCreatedCollectionAnimationCompletionHandler;
@property (setter=_setJustCreatedCollectionIdentifier:, nonatomic, retain) NSString *_justCreatedCollectionIdentifier;
@property (setter=_setLayoutReferenceSize:, nonatomic) struct CGSize { double x1; double x2; } _layoutReferenceSize;
@property (setter=_setMainCollectionView:, nonatomic, retain) PUCollectionView *_mainCollectionView;
@property (setter=_setMainCollectionViewLayout:, nonatomic, retain) PUSectionedGridLayout *_mainCollectionViewLayout;
@property (setter=_setMainTableView:, nonatomic, retain) UITableView *_mainTableView;
@property (setter=_setOnViewDidLayoutSubviewsBlock:, nonatomic, copy) id _onViewDidLayoutSubviewsBlock;
@property (setter=_setPendingScrollingAnimationEndBlock:, nonatomic, copy) id _pendingScrollingAnimationEndBlock;
@property (setter=_setPeopleAlbumProvider:, nonatomic, retain) PXPeopleAlbumProvider *_peopleAlbumProvider;
@property (setter=_setPhotoPinchGestureRecognizer:, nonatomic, retain) PUPhotoPinchGestureRecognizer *_photoPinchGestureRecognizer;
@property (nonatomic, readonly) PXPlacesAlbumCoverProvider *_placesAlbumCoverProvider;
@property (setter=_setPreheatedCollections:, nonatomic, retain) NSMutableSet *_preheatedCollections;
@property (setter=_setPreviousPreheatRect:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _previousPreheatRect;
@property (nonatomic, readonly) NSArray *_syncProgressAlbums;
@property (nonatomic, retain) PUAlbumListTransitionContext *albumListTransitionContext;
@property (nonatomic, readonly) long long albumsSection;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } albumsSections;
@property (nonatomic, retain) PXPhotoKitCollectionsDataSource *dataSource;
@property (nonatomic, retain) PXPhotoKitCollectionsDataSourceManager *dataSourceManager;
@property (nonatomic, retain) PXPhotoKitCollectionsDataSourceManagerConfiguration *dataSourceManagerConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disallowsSearch;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isRootSharedAlbumList;
@property (nonatomic) bool progressViewVisible;
@property (nonatomic, retain) PHCollection *pushedAlbum;
@property (nonatomic, retain) UIViewController *pushedController;
@property (nonatomic, retain) PHCollection *retitlingCollection;
@property (nonatomic, retain) PUSessionInfo *sessionInfo;
@property (nonatomic, readonly) PUAlbumListViewControllerSpec *spec;
@property (readonly) Class superclass;
@property (nonatomic, retain) PUPhotosGlobalFooterView *syncProgressView;
@property (nonatomic, readonly) long long topPlaceholdersSection;
@property (getter=isViewInSyncWithModel, nonatomic) bool viewInSyncWithModel;

- (void).cxx_destruct;
- (bool)_aboutToCreateAlbum;
- (id)_albumCreationButtonItem;
- (id)_albumListTransitionLayout;
- (void)_allChildAssetCollections:(id)arg1 andCollectionLists:(id)arg2 ofFolder:(id)arg3;
- (bool)_appAllowsSupressionOfAlerts;
- (id)_assetsFetchOptions;
- (id)_backgroundView;
- (id)_badgeManager;
- (void)_beginInteractiveNavigationForItemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_beginInteractiveZoomOut:(id)arg1;
- (id)_cachedFeedViewController;
- (id)_cachingImageManager;
- (bool)_canTransitionInteractivelyToCollection:(id)arg1;
- (bool)_canUseStackTransitionFromCollection:(id)arg1;
- (id)_cancelButtonItem;
- (id)_collectionTileLayoutTemplate;
- (id)_createAlbumAlertAction;
- (id)_createControllerForFolder:(id)arg1;
- (id)_createControllerForStandInCollection:(id)arg1;
- (id)_currentDeleteConfirmationAlertController;
- (void)_didSelectPlaceholderAtIndexPath:(id)arg1;
- (id)_doneButtonItem;
- (unsigned long long)_editCapabilitiesForAlbum:(id)arg1;
- (id)_emptyPlaceholderView;
- (id)_featureSpec;
- (id)_featureSpecManager;
- (id)_feedCollageView;
- (id)_feedRecentsManager;
- (id)_fontManager;
- (void)_getDisplayableAssets:(id*)arg1 indexes:(id*)arg2 forCollection:(id)arg3 maximumCount:(long long)arg4 useCache:(bool)arg5;
- (id)_getDisplayableAssetsForStandInCollectionList:(id)arg1 maximumCount:(long long)arg2 useCache:(bool)arg3 correspondingCollections:(out id*)arg4;
- (id)_getDisplayableFacesForCollectionList:(id)arg1 maximumCount:(long long)arg2;
- (void)_handleAlbumCreation:(id)arg1;
- (void)_handleAlbumOrFolderCreation:(id)arg1;
- (void)_handleCancelButton:(id)arg1;
- (void)_handleCreateAlbumOrFolder:(bool)arg1;
- (void)_handleDoneButton:(id)arg1;
- (void)_handlePendingScrollingAnimationEndBlock;
- (void)_handlePhotoPinchGestureRecognizer:(id)arg1;
- (long long)_ignoredReorderNotificationCount;
- (id)_imageRequestOptions;
- (void)_initializeMemoriesTitleSupportIfNeeded;
- (void)_invalidateSyncProgressAlbums;
- (void)_invalidateVisibleCellsConfiguration;
- (bool)_isKeyboardAware;
- (bool)_isPlaceholderEnabled:(long long)arg1;
- (id)_justCreatedCollectionAnimationCompletionHandler;
- (id)_justCreatedCollectionIdentifier;
- (id)_keyAssetsForMoments;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (struct CGSize { double x1; double x2; })_layoutReferenceSize;
- (id)_mainCollectionView;
- (id)_mainCollectionViewLayout;
- (id)_mainTableView;
- (void)_navigateToPeople;
- (void)_navigateToPlacesFromCollection:(id)arg1;
- (void)_navigateToScenes;
- (bool)_needsUpdate;
- (id)_nextCloudFeedNavigatingObject;
- (id)_onViewDidLayoutSubviewsBlock;
- (id)_pendingScrollingAnimationEndBlock;
- (void)_peopleAlbumChanged:(id)arg1;
- (id)_peopleAlbumProvider;
- (void)_performBatchUpdates:(id)arg1 withDeletedSections:(id)arg2 insertedSections:(id)arg3 changedSections:(id)arg4 deletedItemsIndexPaths:(id)arg5 insertedItemsIndexPaths:(id)arg6 changedItemsIndexPaths:(id)arg7 movedItemsFromIndexPaths:(id)arg8 movedItemsToIndexPaths:(id)arg9 completionHandler:(id)arg10;
- (id)_photoPinchGestureRecognizer;
- (id)_pickerBannerView;
- (id)_placesAlbumCoverProvider;
- (long long)_preferredWhitePointAdaptivityStyle;
- (id)_preheatedCollections;
- (void)_prepareStackView:(id)arg1 forCollection:(id)arg2 withStackCount:(long long)arg3 withCustomEmptyPlaceHolderImage:(id)arg4;
- (void)_presentSearchViewController:(id)arg1 animated:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_previousPreheatRect;
- (void)_recursivelyCollectCollectionsIn:(id)arg1 fetchResult:(id)arg2;
- (void)_resetPreheating;
- (id)_searchButtonItem;
- (void)_searchButtonPressed:(id)arg1;
- (void)_setAboutToCreateAlbum:(bool)arg1;
- (void)_setBackgroundView:(id)arg1;
- (void)_setCachedFeedViewController:(id)arg1;
- (void)_setCreateAlbumAlertAction:(id)arg1;
- (void)_setCurrentDeleteConfirmationAlertController:(id)arg1;
- (void)_setEmptyPlaceholderView:(id)arg1;
- (void)_setFeatureSpec:(id)arg1;
- (void)_setIgnoredReorderNotificationCount:(long long)arg1;
- (void)_setJustCreatedCollectionAnimationCompletionHandler:(id)arg1;
- (void)_setJustCreatedCollectionIdentifier:(id)arg1;
- (void)_setKeyboardAware:(bool)arg1;
- (void)_setLayoutReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setMainCollectionView:(id)arg1;
- (void)_setMainCollectionViewLayout:(id)arg1;
- (void)_setMainTableView:(id)arg1;
- (void)_setOnViewDidLayoutSubviewsBlock:(id)arg1;
- (void)_setPendingScrollingAnimationEndBlock:(id)arg1;
- (void)_setPeopleAlbumProvider:(id)arg1;
- (void)_setPhotoPinchGestureRecognizer:(id)arg1;
- (void)_setPreheatedCollections:(id)arg1;
- (void)_setPreviousPreheatRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_shouldShowAggregateItem;
- (bool)_someAlbumSupportsEditing;
- (id)_suppressionContexts;
- (id)_syncProgressAlbums;
- (id)_targetIndexPathForMoveFromIndexPath:(id)arg1 toProposedIndexPath:(id)arg2;
- (long long)_unfilteredFirstReorderableCollectionIndex;
- (unsigned long long)_unfilteredIndexForFilteredIndexPath:(id)arg1;
- (void)_updateAddNewAlbumPlaceholderAnimated:(bool)arg1;
- (void)_updateAlbumSubtitleFormat;
- (void)_updateCollageView:(id)arg1 forAssets:(id)arg2;
- (void)_updateCreateAlbumTextField:(id)arg1;
- (void)_updateEmptyPlaceholderAnimated:(bool)arg1;
- (void)_updateIfNeeded;
- (bool)_updateInterfaceForIncrementalModelChangeHandler:(id)arg1 withSectionedChangeDetails:(id)arg2 animated:(bool)arg3;
- (void)_updateInterfaceForModelReloadAnimated:(bool)arg1;
- (void)_updateLayoutMetrics;
- (void)_updateMainView;
- (void)_updateNavigationBannerAnimated:(bool)arg1;
- (void)_updatePeripheralInterfaceAnimated:(bool)arg1;
- (void)_updatePreheatedAssets;
- (void)_updateStackView:(id)arg1 forAssets:(id)arg2 collection:(id)arg3 withCustomEmptyPlaceholderImage:(id)arg4;
- (void)_updateStackView:(id)arg1 forAssets:(id)arg2 memoriesCollection:(id)arg3 memories:(id)arg4 withCustomEmptyPlaceholderImage:(id)arg5;
- (void)_updateStackView:(id)arg1 forFaces:(id)arg2 inCollection:(id)arg3 withCustomEmptyPlaceholderImage:(id)arg4;
- (void)_updateStackView:(id)arg1 forPeopleImages:(id)arg2 inCollection:(id)arg3 withCustomEmptyPlaceholderImage:(id)arg4;
- (void)_updateVisibleCellsConfigurationIfNeeded;
- (id)_validateNewCollectionTitle:(id)arg1;
- (id)_visibleAssetsForCollection:(id)arg1;
- (id)_visibleAssetsForCollection:(id)arg1 correspondingCollections:(out id*)arg2;
- (id)_visibleAssetsForCollection:(id)arg1 maximumNumberOfVisibleAssets:(long long)arg2 correspondingCollections:(out id*)arg3;
- (id)_visibleStackViewAtIndexPath:(id)arg1;
- (id)_visibleStackViewForCollection:(id)arg1;
- (void)_visiblyInsertItemAtIndexPath:(id)arg1 modelUpdate:(id)arg2 completionHandler:(id)arg3;
- (void)albumListCellContentView:(id)arg1 didEndRetitingFromTitle:(id)arg2 toTitle:(id)arg3;
- (void)albumListCellContentView:(id)arg1 performDeleteAction:(id)arg2;
- (bool)albumListCellContentViewShouldBeginRetitling:(id)arg1;
- (void)albumListTableViewCell:(id)arg1 willChangeState:(unsigned long long)arg2;
- (id)albumListTransitionContext;
- (void)albumStreamActivity:(id)arg1 didCreateAlbum:(struct NSObject { Class x1; }*)arg2;
- (void)albumStreamActivity:(id)arg1 didFinishSuccessfully:(bool)arg2;
- (long long)albumsSection;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })albumsSections;
- (id)assetsFilterPredicate;
- (id)backgroundColorForTableView;
- (id)bestReferenceItemIndexPath;
- (bool)canShowSyncProgress;
- (bool)cloudFeedAssetIsAvailableForNavigation:(id)arg1;
- (bool)cloudFeedCommentIsAvailableForNavigation:(id)arg1;
- (bool)cloudFeedInvitationForAlbumIsAvailableForNavigation:(id)arg1;
- (id)collectionAtIndexPath:(id)arg1;
- (id)collectionView;
- (bool)collectionView:(id)arg1 canReorderItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 completionHandler:(id)arg4;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)configureDataSourceManagerConfiguration:(id)arg1;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(bool)arg4;
- (id)dataSource;
- (id)dataSourceManager;
- (id)dataSourceManagerConfiguration;
- (void)dealloc;
- (void)deselectSelectedItemAnimated:(bool)arg1;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (bool)disallowsSearch;
- (void)feedRecentsManagerRecentAssetsDidChange:(id)arg1;
- (long long)filteringAssetTypes;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)gridLayout;
- (void)handleCreateAlbum;
- (void)handleCreateFolder;
- (void)handleCreateSharedAlbum;
- (void)handleDeleteAlbumAtIndexPath:(id)arg1;
- (void)handleSessionInfoAlbumSelection:(id)arg1;
- (void)handleTransitionFade:(bool)arg1 animate:(bool)arg2;
- (id)indexPathForAddNewAlbumPlaceholder;
- (id)indexPathForAlbumListCellContentView:(id)arg1;
- (id)indexPathForCloudFeedPlaceholder;
- (id)indexPathForCollection:(id)arg1;
- (id)indexPathForFirstEditableAlbum;
- (id)indexPathForItemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)indexPathForPeopleAlbum;
- (id)indexPathForPlacesAlbum;
- (id)indexPathsForItemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)indexPathsForVisibleItems;
- (id)initWithSpec:(id)arg1 isRootSharedAlbumList:(bool)arg2;
- (bool)isEmpty;
- (bool)isPlaceholderAtIndexPath:(id)arg1;
- (bool)isRootFolder;
- (bool)isRootSharedAlbumList;
- (bool)isViewInSyncWithModel;
- (id)mainScrollView;
- (void)navigateToAllPhotosAnimated:(bool)arg1 completion:(id)arg2;
- (void)navigateToCollection:(id)arg1 animated:(bool)arg2 completion:(id)arg3;
- (void)navigateToPhotoStreamMode:(long long)arg1 animated:(bool)arg2 completion:(id)arg3;
- (void)navigateToRevealAssetCollection:(id)arg1 initiallyHidden:(bool)arg2 animated:(bool)arg3;
- (id)newCloudFeedViewController;
- (id)newGridViewControllerForAllPhotos;
- (id)newGridViewControllerForAssetCollection:(id)arg1;
- (id)newGridViewControllerForFolder:(id)arg1;
- (id)newGridViewControllerForStandInCollection:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)numberOfVisualSectionsForSectionedGridLayout:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (long long)placeholderKindAtIndexPath:(id)arg1;
- (void)placesSnapshotCountDidChange;
- (void)placesSnapshotDidChange;
- (bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (void)ppt_navigateToPeople;
- (void)prepareForPopoverPresentation:(id)arg1;
- (bool)progressViewVisible;
- (bool)pu_handleSecondTabTap;
- (id)pushedAlbum;
- (id)pushedController;
- (void)reloadContentView;
- (id)retitlingCollection;
- (void)scrollToItemAtIndexPath:(id)arg1 centered:(bool)arg2 animated:(bool)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1;
- (double)sectionedGridLayout:(id)arg1 sectionHeaderHeightForVisualSection:(long long)arg2;
- (id)sectionedGridLayout:(id)arg1 sectionsForVisualSection:(long long)arg2;
- (id)sectionedGridLayoutAnchorItemForAdjustingContentOffset:(id)arg1;
- (void)sectionedGridLayoutWillPrepareLayout:(id)arg1;
- (void)selectItemAtIndexPath:(id)arg1 animated:(bool)arg2;
- (id)sessionInfo;
- (void)sessionInfoPhotoSelectionDidChange:(id)arg1;
- (void)setAlbumListTransitionContext:(id)arg1;
- (void)setAlbumListTransitionLayout:(id)arg1;
- (void)setAlbumListTransitionLayout:(id)arg1 animated:(bool)arg2;
- (void)setDataSource:(id)arg1;
- (void)setDataSourceManager:(id)arg1;
- (void)setDataSourceManagerConfiguration:(id)arg1;
- (void)setDisallowsSearch:(bool)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setKeyboardAware:(bool)arg1;
- (void)setProgressViewVisible:(bool)arg1;
- (void)setPushedAlbum:(id)arg1;
- (void)setPushedController:(id)arg1;
- (void)setRetitlingCollection:(id)arg1;
- (void)setSessionInfo:(id)arg1;
- (void)setSyncProgressView:(id)arg1;
- (void)setSyncProgressVisible:(bool)arg1;
- (void)setTitleForCell:(id)arg1 withCollection:(id)arg2;
- (void)setViewInSyncWithModel:(bool)arg1;
- (void)set_feedCollageView:(id)arg1;
- (void)set_feedRecentsManager:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (bool)shouldAllowEmailInAlbumSubtitle;
- (bool)shouldAutorotate;
- (bool)shouldBeginRetitlingAlbumAtIndexPath:(id)arg1;
- (bool)shouldEnableCollection:(id)arg1;
- (bool)shouldHideEmptyCollections;
- (bool)shouldShowActivityItem;
- (bool)shouldShowAllPhotosItem;
- (bool)showAddNewAlbumPlaceholder;
- (bool)showPeople;
- (bool)showPlaces;
- (void)showPlacesCount:(long long)arg1;
- (void)showPlacesCount:(long long)arg1 atIndexPath:(id)arg2;
- (void)showPlacesPlaceholderImageInStackView:(id)arg1 andContentView:(struct PUAlbumListCellContentView { Class x1; }*)arg2;
- (bool)showScenes;
- (bool)showsEmptyPlaceholderWhenEmpty;
- (bool)showsSeparatorBelowTopPlaceholdersSection;
- (bool)showsTopPlaceholdersSection;
- (id)spec;
- (id)stackedAlbumTransition:(id)arg1 layoutForCollection:(id)arg2 forCollectionView:(id)arg3;
- (id)stackedAlbumTransition:(id)arg1 layoutForPHCollection:(id)arg2 forCollectionView:(id)arg3;
- (void)stackedAlbumTransition:(id)arg1 setVisibility:(bool)arg2 forCollection:(id)arg3;
- (void)stackedAlbumTransition:(id)arg1 setVisibility:(bool)arg2 forPHCollection:(id)arg3;
- (id)subtitleForCollection:(id)arg1;
- (id)syncProgressView;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableViewStyle;
- (long long)topPlaceholdersSection;
- (void)updateAlbumListCellContentView:(id)arg1 forItemAtIndexPath:(id)arg2 animated:(bool)arg3;
- (void)updateInterfaceLayoutIfNecessary;
- (void)updateListCellForItemAtIndexPath:(id)arg1 animated:(bool)arg2;
- (void)updateNavigationBarAnimated:(bool)arg1;
- (void)updatePlaceholderListCellContentView:(struct PUAlbumListCellContentView { Class x1; }*)arg1 forItemAtIndexPath:(id)arg2 animated:(bool)arg3;
- (bool)updateSpec;
- (void)updateSyncProgress;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)visibleAlbumListCellContentViewAtIndexPath:(id)arg1;
- (struct PUAlbumListCellContentView { Class x1; }*)visiblePlaceholderListCellContentViewAtIndexPath:(id)arg1;

@end
