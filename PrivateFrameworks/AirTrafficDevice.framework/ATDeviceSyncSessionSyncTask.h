/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATDeviceSyncSessionSyncTask : ATDeviceSyncSessionTask {
    bool  _addedTransportUpgradeException;
    unsigned long long  _clientCurrentItemCount;
    unsigned long long  _clientTotalItemCount;
    <ATSyncClient> * _pluginClient;
    unsigned long long  _serverCurrentItemCount;
    unsigned long long  _serverTotalItemCount;
    ATDeviceSettings * _settings;
    bool  _startAssetTaskWhenFinished;
    NSMutableArray * _streamReaders;
    unsigned long long  _syncIterationCount;
    double  _taskStartTime;
    unsigned long long  _totalItemsSyncedCount;
}

@property (nonatomic) bool startAssetTaskWhenFinished;

- (void).cxx_destruct;
- (void)_applyChangesForSyncResponse:(id)arg1 toCurrentRevision:(unsigned long long)arg2 versionToken:(id)arg3 onMessageLink:(id)arg4;
- (void)_drainInputStream:(id)arg1 withCompletion:(id)arg2;
- (void)_finishSyncWithError:(id)arg1;
- (void)_finishTaskWithError:(id)arg1;
- (void)_processSyncRequest:(id)arg1 onMessageLink:(id)arg2;
- (void)_processSyncResponse:(id)arg1 onMessageLink:(id)arg2;
- (void)_resetSyncDataForLibrary:(id)arg1 withCompletionHandler:(id)arg2;
- (void)_sendSyncRequestOnMessageLink:(id)arg1;
- (void)_sendSyncRequestWithChangesAfterRevision:(unsigned long long)arg1 toRevision:(unsigned long long)arg2 withNewRevision:(unsigned long long)arg3 withSyncType:(unsigned int)arg4 onMessageLink:(id)arg5;
- (void)_sendSyncRequestWithParams:(id)arg1 withSyncType:(unsigned int)arg2 syncState:(id)arg3 newRevision:(unsigned long long)arg4 versionToken:(id)arg5 inputStream:(id)arg6 onMessageLink:(id)arg7;
- (void)_sendSyncResponseToRequest:(id)arg1 withChangesAfterRevision:(unsigned long long)arg2 toRevision:(unsigned long long)arg3 withNewRevision:(unsigned long long)arg4 withSyncType:(unsigned int)arg5 onMessageLink:(id)arg6;
- (void)_sendSyncResponseToRequest:(id)arg1 withParams:(id)arg2 withNewRevision:(unsigned long long)arg3 withSyncType:(unsigned int)arg4 inputStream:(id)arg5 onMessageLink:(id)arg6;
- (void)_updateProgressWithCount:(unsigned long long)arg1 totalItemCount:(unsigned long long)arg2 forEndpointType:(int)arg3;
- (void)cancel;
- (id)initWithDataClass:(id)arg1 onMessageLink:(id)arg2;
- (void)messageLink:(id)arg1 didReceiveRequest:(id)arg2;
- (id)sessionGroupingKey;
- (void)setStartAssetTaskWhenFinished:(bool)arg1;
- (void)start;
- (bool)startAssetTaskWhenFinished;

@end
