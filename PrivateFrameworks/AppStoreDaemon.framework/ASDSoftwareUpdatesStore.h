/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDSoftwareUpdatesStore : ASDBaseClient <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSXPCConnection * _connection;
    bool  _hasUpdatesEntitlement;
    int  _storeChangedNotificationToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_call:(id)arg1 run:(id /* block */)arg2 error:(id /* block */)arg3;
- (void)_setupConnection;
- (void)clearExpiredUpdateHistoryWithCompletionBlock:(id /* block */)arg1;
- (void)dealloc;
- (void)getUpdateableFirstPartyAppMetadataWithCompletion:(id /* block */)arg1;
- (void)getUpdatesWithCompletionBlock:(id /* block */)arg1;
- (bool)hasEntitlement;
- (void)hideApplicationBadgeForPendingUpdates;
- (id)init;
- (void)refreshUpdateCountWithCompletionBlock:(id /* block */)arg1;
- (void)reloadForSettingsFromServerWithCompletionBlock:(id /* block */)arg1;
- (void)reloadFromServerInBackgroundWithCompletionBlock:(id /* block */)arg1;
- (void)reloadFromServerWithCompletionBlock:(id /* block */)arg1;
- (void)removeUpdateBulletins;
- (void)showApplicationBadgeForPendingUpdates;
- (void)showApplicationUpdateBulletin;
- (void)updateAllWithCompletionBlock:(id /* block */)arg1;
- (void)updateAllWithJobResultsCompletionBlock:(id /* block */)arg1;
- (void)updateAllWithOrder:(id)arg1 completionBlock:(id /* block */)arg2;

@end
