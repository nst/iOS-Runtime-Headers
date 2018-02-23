/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCReadingList : FCPrivateDataController <FCOperationThrottlerDelegate, FCReadingListContentControllerObserving> {
    NSArray * _allSortedEntriesInReadingList;
    <FCOperationThrottler> * _articleIDsAvailableForOfflineReadingUpdateThrottler;
    FCCloudContext * _cloudContext;
    NSMutableDictionary * _entriesByArticleID;
    FCMTWriterMutexLock * _itemsLock;
    FCReadingListContentController * _readingListContentController;
}

@property (nonatomic, retain) NSArray *allSortedEntriesInReadingList;
@property (nonatomic, retain) <FCOperationThrottler> *articleIDsAvailableForOfflineReadingUpdateThrottler;
@property (nonatomic, retain) FCCloudContext *cloudContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *entriesByArticleID;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FCMTWriterMutexLock *itemsLock;
@property (nonatomic, retain) FCReadingListContentController *readingListContentController;
@property (readonly) Class superclass;

+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (id)desiredKeys;
+ (id)localStoreFilename;
+ (unsigned long long)localStoreVersion;
+ (bool)requiresBatchedSync;
+ (bool)requiresHighPriorityFirstSync;
+ (bool)requiresPushNotificationSupport;

- (void).cxx_destruct;
- (void)_addedArticleIDs:(id)arg1 removedArticleIDs:(id)arg2 eventInitiationLevel:(long long)arg3;
- (id)_entryIDForArticleID:(id)arg1;
- (void)_fetchArticleIDsAvailableForOfflineReadingWithCompletion:(id /* block */)arg1;
- (void)_invalidateAllSortedEntriesInReadingList;
- (unsigned long long)_maxCountOfArticlesAvailableOfflineWithAppConfiguration:(id)arg1;
- (void)addArticleToReadingList:(id)arg1;
- (void)addArticleToReadingList:(id)arg1 eventInitiationLevel:(long long)arg2 origin:(unsigned long long)arg3;
- (void)addObserver:(id)arg1;
- (id)allNonConsumedArticleIDsInReadingList;
- (id)allNonConsumedArticleIDsInReadingListForOfflineReading;
- (id)allSortedArticleIDsInReadingList;
- (id)allSortedEntriesInReadingList;
- (id)articleIDsAvailableForOfflineReadingUpdateThrottler;
- (bool)canHelpRestoreZoneName:(id)arg1;
- (id)cloudContext;
- (unsigned long long)countOfAllArticlesSavedOutsideOfNewsSince:(id)arg1;
- (id)dateArticleWasAdded:(id)arg1;
- (void)enableDownloadingForOfflineReading;
- (id)entriesByArticleID;
- (void)expressInterestInOfflineArticlesWithCompletionHandler:(id /* block */)arg1;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordIDs:(id)arg2;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;
- (bool)isArticleAvailableForOfflineReading:(id)arg1;
- (bool)isArticleOnReadingList:(id)arg1;
- (id)itemsLock;
- (void)loadLocalCachesFromStore;
- (void)notifyWhenFinishedDownloadingForOfflineReadingWithTimeout:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(id /* block */)arg2;
- (id)readingListContentController;
- (void)readingListContentControllerDidUpdateArticleAvailabilityInOfflineMode:(id)arg1;
- (id)recordsForRestoringZoneName:(id)arg1;
- (void)removeArticleFromReadingList:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setAllSortedEntriesInReadingList:(id)arg1;
- (void)setArticleIDsAvailableForOfflineReadingUpdateThrottler:(id)arg1;
- (void)setCloudContext:(id)arg1;
- (void)setEntriesByArticleID:(id)arg1;
- (void)setItemsLock:(id)arg1;
- (void)setReadingListContentController:(id)arg1;
- (bool)shouldHideHeadline:(id)arg1;

@end
