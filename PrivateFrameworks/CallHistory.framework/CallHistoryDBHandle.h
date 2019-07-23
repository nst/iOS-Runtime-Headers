/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CallHistoryDBHandle : CHLogger {
    id  _dataStoreAddedRef;
    id  _moveCallRecordsFromTempStoreRef;
    id  _observerCallDBPropRef;
    id  _observerCallRecordRef;
    CallDBManager * callDBManager;
    NSManagedObjectContext * fCallDBPropertiesContext;
    NSManagedObjectContext * fCallRecordContext;
    NSString * objectId;
}

@property (nonatomic, readonly) CallDBManager *callDBManager;
@property (nonatomic, readonly) NSString *objectId;

+ (id)createForClient;
+ (id)createForServer;
+ (id)createWithDBManager:(id)arg1;

- (void).cxx_destruct;
- (id)callDBManager;
- (id)callDBProperties;
- (id)callRecordContext;
- (id)createCallRecord;
- (void)dealloc;
- (void)deleteAll;
- (void)deleteObjectWithUniqueId:(id)arg1;
- (void)deleteObjectsWithUniqueIds:(id)arg1;
- (id)deleteWithPredicate:(id)arg1;
- (id)fetchAll;
- (id)fetchAllNoLimit;
- (id)fetchAllObjectsWithUniqueId:(id)arg1;
- (id)fetchManagedCallsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3;
- (id)fetchObjectWithUniqueId:(id)arg1;
- (id)fetchObjectsWithPredicate:(id)arg1;
- (id)fetchObjectsWithUniqueIds:(id)arg1;
- (id)fetchWithCallTypes:(unsigned int)arg1;
- (id)fetchWithPredicate:(id)arg1 forEntity:(id)arg2;
- (id)fetchWithPredicate:(id)arg1 forEntity:(id)arg2 withLimit:(bool)arg3;
- (id)getArrayForCallTypeMask:(unsigned int)arg1;
- (void)handleCallDBPropContextDidSaveNotification:(id)arg1;
- (void)handleCallRecordContextDidSaveNotification:(id)arg1;
- (void)handlePersistentStoreChangedNotification:(id)arg1;
- (bool)handleSaveForCallRecordContext:(id)arg1 error:(id*)arg2;
- (id)initWithDBManager:(id)arg1;
- (void)mergeCallDBPropChangesFromRemoteAppSave;
- (void)mergeCallRecordChangesFromRemoteAppSave;
- (bool)moveCallRecordsFromDatabaseAtURL:(id)arg1;
- (id)objectId;
- (bool)performSaveWithBackgroundTaskAssertion:(id)arg1 error:(id*)arg2;
- (void)postTimersChangedNotification;
- (void)registerForNotifications:(id)arg1;
- (bool)resetAllTimers;
- (void)resetTimers;
- (bool)save:(id*)arg1;
- (bool)saveTimers:(id /* block */)arg1;
- (id)timerIncoming;
- (id)timerLastReset;
- (id)timerLifetime;
- (id)timerOutgoing;
- (void)unRegisterForNotifications;
- (void)updateCallDBProperties;

@end
