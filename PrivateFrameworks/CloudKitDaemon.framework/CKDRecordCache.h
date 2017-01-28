/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDRecordCache : NSObject {
    CKDClientContext * _context;
    CKSQLite * _db;
    CKSQLitePool * _dbPool;
    NSDate * _lastExpiryAttempt;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _scope;
}

@property (nonatomic, retain) CKDClientContext *context;
@property (nonatomic, retain) CKSQLite *db;
@property (nonatomic, retain) CKSQLitePool *dbPool;
@property (nonatomic, retain) NSDate *lastExpiryAttempt;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) long long scope;

+ (id)_expiryDateFormatter;

- (void).cxx_destruct;
- (void)_attemptRecordExpiryIfNeeded;
- (bool)_cachedRecordHasValidAssets:(id)arg1 forRequiredKeys:(id)arg2;
- (bool)_cachedRecordKnownUserKeyData:(id)arg1 satisfiesRequiredKeys:(id)arg2;
- (id)_dsid;
- (unsigned long long)_lockedSizeOfAllRecordsInDb;
- (id)_recordWithID:(id)arg1 requiredKeys:(id)arg2;
- (id)_trimRecord:(id)arg1 toRequiredKeys:(id)arg2;
- (void)addRecord:(id)arg1 knownUserKeys:(id)arg2;
- (void)clearAllRecords;
- (void)clearAllRecordsForZoneWithID:(id)arg1;
- (void)clearAssetAuthTokensForRecordWithID:(id)arg1;
- (void)close;
- (id)context;
- (id)db;
- (id)dbPool;
- (void)deleteRecordWithID:(id)arg1;
- (id)etagForRecordID:(id)arg1 requiredKeys:(id)arg2;
- (id)initWithDatabase:(id)arg1 dbPool:(id)arg2 context:(id)arg3 scope:(long long)arg4;
- (id)lastExpiryAttempt;
- (void)open;
- (id)queue;
- (id)recordWithID:(id)arg1 requiredKeys:(id)arg2;
- (id)recordsWithIDs:(id)arg1 requiredKeys:(id)arg2;
- (void)releaseDatabase;
- (void)scheduleRecordExpirationWithExpiryDate:(id)arg1 completionBlock:(id)arg2;
- (long long)scope;
- (void)setContext:(id)arg1;
- (void)setDb:(id)arg1;
- (void)setDbPool:(id)arg1;
- (void)setLastExpiryAttempt:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setScope:(long long)arg1;

@end
