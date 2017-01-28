/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedManager : NSObject {
    FCCloudContext * _context;
    NSMapTable * _feedDescriptorsByID;
    FCMutexLock * _feedDescriptorsLock;
    <FCFeedPersonalizing> * _feedPersonalizer;
    FCAsyncSerialQueue * _feedUpdateQueue;
    FCKeyValueStore * _store;
    NSObject<OS_dispatch_queue> * _storeQueue;
}

@property (nonatomic, retain) FCCloudContext *context;
@property (nonatomic, retain) NSMapTable *feedDescriptorsByID;
@property (nonatomic, retain) FCMutexLock *feedDescriptorsLock;
@property (nonatomic, retain) <FCFeedPersonalizing> *feedPersonalizer;
@property (nonatomic, retain) FCAsyncSerialQueue *feedUpdateQueue;
@property (nonatomic, retain) FCKeyValueStore *store;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *storeQueue;

+ (id)_identifierForFeedName:(id)arg1;
+ (id)feedDescriptorNameForForYou;
+ (id)feedDescriptorNameForReadingHistory;
+ (id)feedDescriptorNameForReadingList;

- (void).cxx_destruct;
- (void)_checkFilterForPreferredLanguages;
- (id)_feedDescriptorWithIdentifier:(id)arg1 forceRecreate:(bool)arg2 tag:(id)arg3;
- (void)backgroundFetchFeedsWithCompletionHandler:(id)arg1;
- (id)context;
- (id)feedDescriptorForArticleIDs:(id)arg1;
- (id)feedDescriptorForArticlesInSameClusterAsArticleID:(id)arg1;
- (id)feedDescriptorForForYou;
- (id)feedDescriptorForReadingHistory;
- (id)feedDescriptorForReadingList;
- (id)feedDescriptorForTag:(id)arg1;
- (id)feedDescriptorWithIdentifier:(id)arg1;
- (id)feedDescriptorsByID;
- (id)feedDescriptorsLock;
- (id)feedPersonalizer;
- (id)feedUpdateQueue;
- (id)init;
- (id)initWithCloudContext:(id)arg1;
- (void)prefetchForYouWithHighPriority:(bool)arg1 completionHandler:(id)arg2;
- (void)setContext:(id)arg1;
- (void)setFeedDescriptorsByID:(id)arg1;
- (void)setFeedDescriptorsLock:(id)arg1;
- (void)setFeedPersonalizer:(id)arg1;
- (void)setFeedUpdateQueue:(id)arg1;
- (void)setStore:(id)arg1;
- (void)setStoreQueue:(id)arg1;
- (id)store;
- (id)storeQueue;

@end