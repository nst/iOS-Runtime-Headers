/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDTokenRegistrationScheduler : NSObject <CKDSystemAvailabilityWatcher> {
    NSMutableDictionary * _callbackBlocks;
    NSMutableDictionary * _callbackTimers;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _requests;
    bool  _schedulerIsAvailable;
}

@property (nonatomic, retain) NSMutableDictionary *callbackBlocks;
@property (nonatomic, retain) NSMutableDictionary *callbackTimers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableSet *requests;
@property (nonatomic) bool schedulerIsAvailable;
@property (readonly) Class superclass;

+ (id)sharedScheduler;

- (void).cxx_destruct;
- (void)_refreshToken:(id)arg1 appContainerTuple:(id)arg2 apsEnvironmentString:(id)arg3 usesAPSPublicToken:(long long)arg4 darkWakeEnabled:(bool)arg5 isCKSystemService:(bool)arg6 completionBlock:(id)arg7;
- (void)_removeToken:(id)arg1 appContainerTuple:(id)arg2 apsEnvironmentString:(id)arg3 usesAPSPublicToken:(long long)arg4 darkWakeEnabled:(bool)arg5 isCKSystemService:(bool)arg6 completionBlock:(id)arg7;
- (id)callbackBlocks;
- (id)callbackTimers;
- (bool)canRunGivenAvailabilityState:(unsigned long long)arg1;
- (void)dealloc;
- (void)ensureTokenRefreshForAppContainerTuple:(id)arg1 apsEnvironmentString:(id)arg2 useAPSPublicToken:(bool)arg3 darkWakeEnabled:(bool)arg4 isCKSystemService:(bool)arg5 completionBlock:(id)arg6;
- (void)forceTokenRefreshForAllClients;
- (void)handlePublicPushTokenDidUpdate:(id)arg1;
- (void)handlePushTokenDidUpdate:(id)arg1;
- (id)init;
- (id)queue;
- (void)refreshAllClientsNow;
- (void)registerTokenRefreshActivity;
- (id)requests;
- (bool)schedulerIsAvailable;
- (void)setCallbackBlocks:(id)arg1;
- (void)setCallbackTimers:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRequests:(id)arg1;
- (void)setSchedulerAvailable:(bool)arg1;
- (void)setSchedulerIsAvailable:(bool)arg1;
- (void)systemAvailabilityChanged:(unsigned long long)arg1;
- (void)tokenRefreshChanged;
- (void)unregisterAllTokensWithCompletionHandler:(id)arg1;
- (void)unregisterTokenForAppContainerTuple:(id)arg1;

@end
