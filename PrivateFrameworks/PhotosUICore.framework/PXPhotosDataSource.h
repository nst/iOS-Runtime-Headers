/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosDataSource : NSObject <PXPhotoLibraryUIChangeObserver> {
    NSMutableSet * __inaccurateAssetCollections;
    PXPhotosDataSourceSectionCache * __preparedSectionCache;
    unsigned long long  __previousCollectionsCount;
    PXPhotosDataSourceSectionCache * __sectionCache;
    NSSet * _allowedUUIDs;
    long long  _backgroundFetchOriginSection;
    bool  _backgroundFetchOriginSectionChanged;
    PXLIFOQueue * _backgroundLIFOQueue;
    NSObject<OS_dispatch_queue> * _backgroundQueue;
    PHFetchResult * _collectionListFetchResult;
    bool  _curate;
    NSMutableDictionary * _facesByAssetCache;
    unsigned long long  _fetchLimit;
    NSArray * _filterPersons;
    NSPredicate * _filterPredicate;
    bool  _hideHiddenAssets;
    NSDictionary * _hintIndexPathByAssetReferenceCache;
    bool  _inaccurateAssetCollectionsNeedsUpdate;
    NSMutableDictionary * _infoForAssetCollection;
    bool  _interruptBackgroundFetch;
    bool  _isBackgroundFetching;
    bool  _needToStartBackgroundFetch;
    NSObject<OS_dispatch_queue> * _observersQueue;
    NSHashTable * _observersQueue_observers;
    bool  _observersQueue_shouldCopyChangeObserversOnWrite;
    unsigned long long  _options;
    NSMutableDictionary * _pendingResultsByAssetCollection;
    NSObject<OS_dispatch_queue> * _pendingResultsIsolationQueue;
    PHPhotoLibrary * _photoLibrary;
    NSDictionary * _preparedIndexPathByAssetReferenceCache;
    NSDictionary * _preparedResultRecordChangeDetailsByAssetCollection;
    bool  _processAndPublishScheduledOnRunloop;
    NSMutableOrderedSet * _queuedAssetCollectionsToFetch;
    PHAsset * _referenceAsset;
    NSMutableDictionary * _resultRecordByAssetCollection;
    bool  _reverseSortOrder;
    unsigned long long  _versionIdentifier;
    NSMutableDictionary * _weightByAssetCache;
}

@property (setter=_setPreviousCollectionsCount:, nonatomic) unsigned long long _previousCollectionsCount;
@property (nonatomic, copy) NSSet *allowedUUIDs;
@property (nonatomic) long long backgroundFetchOriginSection;
@property (nonatomic, retain) PHFetchResult *collectionListFetchResult;
@property (nonatomic, readonly) bool containsMultipleAssets;
@property (nonatomic) bool curate;
@property (nonatomic, readonly) bool curatedFutilely;
@property (nonatomic, readonly) bool curatedIsEmpty;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long estimatedAllCount;
@property (nonatomic, readonly) long long estimatedOtherCount;
@property (nonatomic, readonly) long long estimatedPhotosCount;
@property (nonatomic, readonly) long long estimatedVideosCount;
@property (nonatomic) unsigned long long fetchLimit;
@property (nonatomic, retain) NSPredicate *filterPredicate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) bool isImmutable;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) PHAsset *referenceAsset;
@property (nonatomic) bool reverseSortOrder;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long versionIdentifier;

+ (id)_curationSharedBackgroundQueue;

- (void).cxx_destruct;
- (bool)_allSectionsConsideredAccurate;
- (id)_allowedUUIDsForAssetCollection:(id)arg1;
- (bool)_areFiltersDisabledForAssetCollection:(id)arg1;
- (id)_assetOidsByAssetCollectionForAssetsAtIndexPaths:(id)arg1;
- (unsigned long long)_cachedSectionForAssetCollection:(id)arg1;
- (void)_cancelBackgroundFetchIfNeeded;
- (id)_closestIndexPathToIndexPath:(id)arg1;
- (void)_commonInit;
- (void)_createFilteredFetchResult:(out id*)arg1 curatedFetchResult:(out id*)arg2 keyAssetsFetchResult:(out id*)arg3 forAssetCollection:(id)arg4 calledOnMainQueue:(bool)arg5;
- (id)_createResultRecordForAssetCollection:(id)arg1;
- (void)_didFinishBackgroundFetching;
- (void)_enumerateChangeObserversWithBlock:(id)arg1;
- (id)_fetchAssetsStartingAtIndexPath:(id)arg1;
- (void)_fetchRemainingCollectionsBackgroundLoop;
- (id)_fetcher;
- (id)_filterPredicateForAssetCollection:(id)arg1;
- (id)_finalFilterPredicateForAssetCollection:(id)arg1;
- (id)_inaccurateAssetCollections;
- (id)_inclusionPredicateForAssetCollection:(id)arg1;
- (void)_incrementVersionIdentifier;
- (void)_interruptBackgroundFetch;
- (bool)_isAssetCollectionAccurate:(id)arg1;
- (bool)_isCurationEnabled;
- (id)_mutableResultRecordForAssetCollection:(id)arg1;
- (id)_observerInterestingAssetReferences;
- (void)_observersQueue_copyChangeObserversForWriteIfNeeded;
- (void)_performManualChangesForAssetCollections:(id)arg1 changeBlock:(id)arg2;
- (void)_performManualReloadWithChangeBlock:(id)arg1;
- (unsigned long long)_previousCollectionsCount;
- (void)_processAndPublishPendingCollectionFetchResults;
- (void)_processAndPublishPendingCollectionFetchResultsWhenAppropriate;
- (void)_publishChange:(id)arg1;
- (void)_publishDidReceivePhotoLibraryChange:(id)arg1;
- (void)_publishReloadChange;
- (void)_publishWillChange;
- (id)_resultRecordForAssetCollection:(id)arg1;
- (bool)_reverseSortOrderForAssetCollection:(id)arg1;
- (id)_sectionCache;
- (void)_setPreviousCollectionsCount:(unsigned long long)arg1;
- (void)_updateInaccurateAssetCollectionsIfNeeded;
- (id)allowedUUIDs;
- (id)approximateAssetsAtIndexPaths:(id)arg1;
- (id)assetAtIndexPath:(id)arg1;
- (id)assetAtSimpleIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)assetCollectionForSection:(long long)arg1;
- (id)assetReferenceAtIndexPath:(id)arg1;
- (id)assetsAtIndexPaths:(id)arg1;
- (id)assetsInSection:(long long)arg1;
- (id)assetsStartingAtIndexPath:(id)arg1;
- (long long)backgroundFetchOriginSection;
- (void)clearResultsForAssetCollection:(id)arg1;
- (id)collectionListFetchResult;
- (bool)containsMultipleAssets;
- (bool)curate;
- (id)curatedAssetsInSection:(long long)arg1;
- (bool)curatedFutilely;
- (bool)curatedIsEmpty;
- (void)dealloc;
- (id)description;
- (void)enumerateStartingAtIndexPath:(id)arg1 reverseDirection:(bool)arg2 usingBlock:(id)arg3;
- (long long)estimatedAllCount;
- (long long)estimatedOtherCount;
- (long long)estimatedPhotosCount;
- (long long)estimatedVideosCount;
- (id)facesAtSimpleIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (unsigned long long)fetchLimit;
- (id)fetchResultWithAssetsAtIndexPaths:(id)arg1;
- (id)fetchResultWithAssetsInSections:(id)arg1;
- (id)fetchResultsByAssetCollection;
- (id)filterPredicate;
- (id)firstAssetCollection;
- (bool)forceAccurateAllSectionsIfNeeded;
- (bool)forceAccurateIndexPath:(id)arg1 andAssetsBeforeAndAfter:(long long)arg2;
- (bool)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2;
- (bool)forceAccurateSectionsIfNeeded:(id)arg1;
- (void)forceExcludeAssetsAtIndexPaths:(id)arg1;
- (void)forceIncludeAssetsAtIndexPaths:(id)arg1;
- (long long)indexForAsset:(id)arg1 inCollection:(id)arg2 hintIndex:(long long)arg3;
- (id)indexPathForAsset:(id)arg1 hintIndexPath:(id)arg2 hintCollection:(id)arg3;
- (id)indexPathForAsset:(id)arg1 inCollection:(id)arg2;
- (id)indexPathForAssetReference:(id)arg1;
- (id)indexPathForAssetWithUUID:(id)arg1 orBurstIdentifier:(id)arg2 hintIndexPath:(id)arg3 hintCollection:(id)arg4;
- (id)indexPathForFirstAsset;
- (id)indexPathForLastAsset;
- (id)infoForAssetCollection:(id)arg1;
- (id)initWithPhotosDataSource:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithPhotosDataSourceConfiguration:(id)arg1;
- (bool)isAssetAtIndexPathPartOfCuratedSet:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (bool)isEmpty;
- (bool)isImmutable;
- (id)keyAssetsInSection:(long long)arg1;
- (id)lastAssetCollection;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (unsigned long long)options;
- (void)pauseChangeDeliveryFor:(double)arg1;
- (id)photoLibrary;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)prefetchApproximateAssetsAtIndexPaths:(id)arg1;
- (void)prefetchAssetsAtIndexPaths:(id)arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (id)referenceAsset;
- (void)refetchResultsForAssetCollection:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (bool)reverseSortOrder;
- (unsigned long long)sectionForAssetCollection:(id)arg1;
- (void)setAllowedUUIDs:(id)arg1;
- (void)setBackgroundFetchOriginSection:(long long)arg1;
- (void)setCollectionListFetchResult:(id)arg1;
- (void)setCurate:(bool)arg1;
- (void)setDisableFilters:(bool)arg1 forAssetCollection:(id)arg2;
- (void)setFetchLimit:(unsigned long long)arg1;
- (void)setFilterPredicate:(id)arg1;
- (void)setReverseSortOrder:(bool)arg1;
- (void)startBackgroundFetchIfNeeded;
- (void)stopExcludingAssets:(id)arg1;
- (void)stopForceIncludingAllAssets;
- (id)uncuratedAssetsInSection:(long long)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (unsigned long long)versionIdentifier;
- (double)weightForAsset:(id)arg1;

@end
