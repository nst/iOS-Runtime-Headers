/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCReadingList : FCPrivateZoneController <FCReadingListContentControllerObserving> {
    NSArray * _allSortedEntriesInReadingList;
    FCCloudContext * _cloudContext;
    NSMutableDictionary * _entriesByArticleID;
    FCMutexLock * _itemsLock;
    FCReadingListContentController * _readingListContentController;
}

@property (nonatomic, retain) NSArray *allSortedEntriesInReadingList;
@property (nonatomic, retain) FCCloudContext *cloudContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *entriesByArticleID;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FCMutexLock *itemsLock;
@property (nonatomic, retain) FCReadingListContentController *readingListContentController;
@property (readonly) Class superclass;

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
- (void)_addedArticleIDs:(id)arg1 removedArticleIDs:(id)arg2;
- (id)_entryIDForArticleID:(id)arg1;
- (void)_invalidateAllSortedEntriesInReadingList;
- (unsigned long long)_maxCountOfArticlesAvailableOffline;
- (void)addArticleToReadingList:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)allNonConsumedArticleIDsInReadingList;
- (id)allNonConsumedArticleIDsInReadingListForOfflineReading;
- (id)allSortedArticleIDsInReadingList;
- (id)allSortedEntriesInReadingList;
- (id)articleIDsAvailableForOfflineReading;
- (id)cloudContext;
- (id)dateArticleWasAdded:(id)arg1;
- (void)enableDownloadingForOfflineReading;
- (id)entriesByArticleID;
- (void)expressInterestInOfflineArticlesWithCompletionHandler:(id)arg1;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordIDs:(id)arg2;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 recordZone:(id)arg3 storeDirectory:(id)arg4;
- (bool)isArticleAvailableForOfflineReading:(id)arg1;
- (bool)isArticleOnReadingList:(id)arg1;
- (id)itemsLock;
- (void)loadLocalCachesFromStore;
- (void)notifyWhenFinishedDownloadingForOfflineReadingWithTimeout:(unsigned long long)arg1 block:(id)arg2;
- (id)readingListContentController;
- (void)readingListContentControllerDidUpdateArticleAvailabilityInOfflineMode:(id)arg1;
- (void)removeArticleFromReadingList:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setAllSortedEntriesInReadingList:(id)arg1;
- (void)setCloudContext:(id)arg1;
- (void)setEntriesByArticleID:(id)arg1;
- (void)setItemsLock:(id)arg1;
- (void)setReadingListContentController:(id)arg1;
- (bool)shouldHideHeadline:(id)arg1;
- (void)toggleArticleIsOnReadingList:(id)arg1;

@end
