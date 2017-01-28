/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchDatabaseChangesOperation : CKDDatabaseOperation <CKDOperationPipelining> {
    bool  _fetchAllChanges;
    NSObject<OS_dispatch_group> * _fetchZonesGroup;
    unsigned long long  _numRequestsSent;
    CKServerChangeToken * _previousServerChangeToken;
    id  _recordZoneWithIDChangedBlock;
    id  _recordZoneWithIDWasDeletedBlock;
    NSMutableArray * _requestInfos;
    unsigned long long  _resultsLimit;
    CKServerChangeToken * _serverChangeToken;
    id  _serverChangeTokenUpdatedBlock;
    long long  _status;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool fetchAllChanges;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *fetchZonesGroup;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long numRequestsSent;
@property (nonatomic, readonly) NSString *pipeliningDescription;
@property (nonatomic, retain) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic, copy) id recordZoneWithIDChangedBlock;
@property (nonatomic, copy) id recordZoneWithIDWasDeletedBlock;
@property (nonatomic, retain) NSMutableArray *requestInfos;
@property (nonatomic) unsigned long long resultsLimit;
@property (nonatomic, retain) CKServerChangeToken *serverChangeToken;
@property (nonatomic, copy) id serverChangeTokenUpdatedBlock;
@property (nonatomic) long long status;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleFetchDatabaseChangesRequestFinishedWithSchedulerInfo:(id)arg1;
- (void)_sendFetchDatabaseChangesRequestWithChangeToken:(id)arg1 previousRequestSchedulerInfo:(id)arg2;
- (id)activityCreate;
- (bool)fetchAllChanges;
- (id)fetchZonesGroup;
- (void)fillOutOperationResult:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (unsigned long long)numRequestsSent;
- (Class)operationResultClass;
- (id)pipeliningDescription;
- (id)previousServerChangeToken;
- (id)recordZoneWithIDChangedBlock;
- (id)recordZoneWithIDWasDeletedBlock;
- (id)requestInfos;
- (unsigned long long)resultsLimit;
- (id)serverChangeToken;
- (id)serverChangeTokenUpdatedBlock;
- (void)setFetchAllChanges:(bool)arg1;
- (void)setFetchZonesGroup:(id)arg1;
- (void)setNumRequestsSent:(unsigned long long)arg1;
- (void)setPreviousServerChangeToken:(id)arg1;
- (void)setRecordZoneWithIDChangedBlock:(id)arg1;
- (void)setRecordZoneWithIDWasDeletedBlock:(id)arg1;
- (void)setRequestInfos:(id)arg1;
- (void)setResultsLimit:(unsigned long long)arg1;
- (void)setServerChangeToken:(id)arg1;
- (void)setServerChangeTokenUpdatedBlock:(id)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end
