/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDFitnessFriendsCloudKitUtility : NSObject {
    CKContainer * _container;
    NSHashTable * _queue_executingFetchOperations;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, retain) CKContainer *container;

+ (id)shareURLForShare:(id)arg1;

- (void).cxx_destruct;
- (void)_acceptShareMetadatas:(id)arg1 completion:(id)arg2;
- (void)_createRecordZonesWithIDs:(id)arg1 priority:(long long)arg2 completion:(id)arg3;
- (void)_fetchChangesInDatabase:(id)arg1 serverChangeTokenCache:(id)arg2 priority:(long long)arg3 completion:(id)arg4;
- (void)_fetchChangesInZones:(id)arg1 inDatabase:(id)arg2 serverChangeTokenCache:(id)arg3 priority:(long long)arg4 allowRetry:(bool)arg5 completion:(id)arg6;
- (void)_fetchShareParticipantForEmailAddress:(id)arg1 completion:(id)arg2;
- (void)_fetchShareWithShareRecordID:(id)arg1 completion:(id)arg2;
- (void)_saveRecordsIntoPrivateDatabase:(id)arg1 savePolicy:(long long)arg2 priority:(long long)arg3 completion:(id)arg4;
- (void)_saveRecordsIntoPrivateDatabaseCreatingZones:(id)arg1 savePolicy:(long long)arg2 priority:(long long)arg3 completion:(id)arg4;
- (void)acceptSharesWithURLs:(id)arg1 completion:(id)arg2;
- (void)addParticipantWithCloudKitAddress:(id)arg1 toShares:(id)arg2 completion:(id)arg3;
- (void)cancelAllExecutingFetches;
- (id)container;
- (void)createShareAndAssociatedZoneWithShareRecordID:(id)arg1 rootRecord:(id)arg2 otherRecordsToSave:(id)arg3 completion:(id)arg4;
- (void)fetchChangesInPrivateDatabaseWithServerChangeTokenCache:(id)arg1 priority:(long long)arg2 completion:(id)arg3;
- (void)fetchChangesInSharedDatabaseWithServerChangeTokenCache:(id)arg1 priority:(long long)arg2 completion:(id)arg3;
- (void)fetchShareWithShareRecordID:(id)arg1 completion:(id)arg2;
- (void)forceSaveRecordsIntoPrivateDatabaseIgnoringServerChanges:(id)arg1 priority:(long long)arg2 completion:(id)arg3;
- (id)init;
- (id)initWithContainer:(id)arg1;
- (void)removeParticpantWithCloudKitAddress:(id)arg1 fromShares:(id)arg2 completion:(id)arg3;
- (void)saveRecordsIntoPrivateDatabase:(id)arg1 priority:(long long)arg2 completion:(id)arg3;
- (void)setContainer:(id)arg1;

@end
