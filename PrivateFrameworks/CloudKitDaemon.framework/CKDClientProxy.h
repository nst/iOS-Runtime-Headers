/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDClientProxy : NSObject <CKDSystemAvailabilityWatcher> {
    NSOperationQueue * _backgroundOperationThrottleQueue;
    NSString * _bundleIdentifier;
    NSArray * _cachedSandboxExtensions;
    bool  _canOpenByID;
    bool  _canUseCKBeforeFirstUnlock;
    bool  _canUseCKDuringBuddy;
    bool  _canUsePackages;
    NSObject<OS_dispatch_queue> * _cancellationQueue;
    NSOperationQueue * _cleanupOperationQueue;
    NSXPCConnection * _connection;
    NSDate * _connectionDate;
    CKDClientContext * _context;
    long long  _hasTCCAuthorizationTernary;
    bool  _holdAllOperations;
    NSOperationQueue * _operationQueue;
    NSMutableDictionary * _operationStatisticsByClassName;
    NSMutableArray * _pendingContexts;
    NSMutableSet * _pendingOperationIDs;
    int  _pid;
    NSString * _procName;
    bool  _sandboxed;
    NSObject<OS_dispatch_queue> * _setupQueue;
    NSString * _sourceApplicationBundleIdentifier;
    NSObject<OS_dispatch_queue> * _statusQueue;
    NSOperationQueue * _tccAuthOpQueue;
    NSObject<OS_dispatch_queue> * _tccAuthQueue;
    CKWatchdog * _watchdog;
}

@property (nonatomic, retain) NSOperationQueue *backgroundOperationThrottleQueue;
@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) NSArray *cachedSandboxExtensions;
@property (nonatomic) bool canOpenByID;
@property (nonatomic) bool canUseCKBeforeFirstUnlock;
@property (nonatomic) bool canUseCKDuringBuddy;
@property (nonatomic) bool canUsePackages;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *cancellationQueue;
@property (nonatomic, retain) NSOperationQueue *cleanupOperationQueue;
@property (nonatomic) NSXPCConnection *connection;
@property (nonatomic, retain) NSDate *connectionDate;
@property (nonatomic, retain) CKDClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long hasTCCAuthorizationTernary;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool holdAllOperations;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic, retain) NSMutableDictionary *operationStatisticsByClassName;
@property (nonatomic, retain) NSMutableArray *pendingContexts;
@property (nonatomic, retain) NSMutableSet *pendingOperationIDs;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) NSString *procName;
@property (getter=isSandboxed, nonatomic) bool sandboxed;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *setupQueue;
@property (nonatomic, retain) NSString *sourceApplicationBundleIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *statusQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSOperationQueue *tccAuthOpQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *tccAuthQueue;
@property (nonatomic, retain) CKWatchdog *watchdog;

+ (id)sharedClientThrottlingOperationQueue;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)CKStatusReportArray;
- (void)_accountStatusWithClientContext:(id)arg1 completionHandler:(id)arg2;
- (void)_addOperationWithOperationInfo:(id)arg1 factoryBlock:(id)arg2;
- (long long)_applicationPermissionStatusFromUserPrivacySetting:(long long)arg1;
- (id)_clientPrefixEntitlement;
- (void)_dumpStatusReportArrayToOsTrace:(id)arg1;
- (void)_finishClientSetupWithClientContext:(id)arg1 completionHandler:(id)arg2;
- (void)_globalStatusForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(id)arg3;
- (void)_handleCheckpointForOperationWithID:(id)arg1 withArguments:(id)arg2;
- (void)_handleCompletionForOperation:(id)arg1 withBlock:(id)arg2;
- (void)_handleCompletionForOperationWithID:(id)arg1 isLongLived:(bool)arg2 withResult:(id)arg3 block:(id)arg4;
- (void)_handleProgressForOperation:(id)arg1 withArguments:(id)arg2;
- (void)_handleProgressForOperation:(id)arg1 withArguments:(id)arg2 completion:(id)arg3;
- (void)_handleProgressForOperationWithID:(id)arg1 withArguments:(id)arg2 completion:(id)arg3;
- (bool)_hasCustomAccountsEntitlement;
- (bool)_hasEntitlementForKey:(id)arg1;
- (bool)_hasEnvironmentEntitlement;
- (bool)_isConnectionAuthorizedForOperation:(id)arg1 error:(id*)arg2;
- (bool)_lockedHasTCCAuthorization;
- (void)_lockedSetHasTCCAuthorizationTernary:(long long)arg1;
- (id)_operationStatusReport:(id)arg1;
- (void)_sanityCheckMutableEncryptedPublicSharingKeyOnReturnedRecord:(id)arg1 forOperationID:(id)arg2;
- (void)_setApplicationPermission:(unsigned long long)arg1 enabled:(bool)arg2 setupInfo:(id)arg3 completionHandler:(id)arg4;
- (void)_setupClientWithSetupInfo:(id)arg1 completionHandler:(id)arg2;
- (void)_setupOperationQueues;
- (void)_startClientSetupWithSetupInfo:(id)arg1 completionHandler:(id)arg2;
- (void)accountChangedWithID:(id)arg1;
- (void)accountStatusWithSetupInfo:(id)arg1 completionHandler:(id)arg2;
- (void)accountsDidGrantAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)accountsDidRevokeAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)accountsWillDeleteAccount:(id)arg1 completionHandler:(id)arg2;
- (id)applicationIdentifier;
- (id)apsEnvironmentEntitlement;
- (id)backgroundOperationThrottleQueue;
- (id)bundleIdentifier;
- (id)cachedSandboxExtensions;
- (bool)canOpenByID;
- (bool)canRunGivenAvailabilityState:(unsigned long long)arg1;
- (bool)canUseCKBeforeFirstUnlock;
- (bool)canUseCKDuringBuddy;
- (bool)canUsePackages;
- (bool)canUsePackagesWithError:(id*)arg1;
- (void)cancelAllOperations;
- (void)cancelOperationWithIdentifier:(id)arg1;
- (id)cancellationQueue;
- (id)cleanupOperationQueue;
- (void)clearAssetCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2 completionHandler:(id)arg3;
- (void)clearAuthTokensWithSetupInfo:(id)arg1 recordID:(id)arg2 databaseScope:(long long)arg3;
- (void)clearCachesForRecordWithSetupInfo:(id)arg1 recordID:(id)arg2 databaseScope:(long long)arg3 completionHandler:(id)arg4;
- (void)clearCachesForZoneWithSetupInfo:(id)arg1 zoneID:(id)arg2 databaseScope:(long long)arg3 completionHandler:(id)arg4;
- (void)clearCachesWithSetupInfo:(id)arg1 options:(unsigned long long)arg2 databaseScope:(long long)arg3 completionHandler:(id)arg4;
- (void)clearContextFromMetadataCache;
- (void)clearRecordCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2;
- (id)connection;
- (id)connectionDate;
- (id)context;
- (void)currentDeviceIDWithSetupInfo:(id)arg1 completionHandler:(id)arg2;
- (void)currentUserIDWithSetupInfo:(id)arg1 completionHandler:(id)arg2;
- (bool)darkWakeEnabledEntitlement;
- (void)dataclassEnabled:(id)arg1 withSetupInfo:(id)arg2 completionHandler:(id)arg3;
- (void)dealloc;
- (void)decryptPersonalInfoOnShare:(id)arg1 setupInfo:(id)arg2 completionHandler:(id)arg3;
- (id)description;
- (void)dumpAllClientsStatusReportToFileHandle:(id)arg1 completionHandler:(id)arg2;
- (void)dumpDaemonStatusReportToFileHandle:(id)arg1 completionHandler:(id)arg2;
- (void)fetchAllLongLivedOperationIDsWithSetupInfo:(id)arg1 completionHandler:(id)arg2;
- (void)fetchLongLivedOperationsWithIDs:(id)arg1 setupInfo:(id)arg2 completionHandler:(id)arg3;
- (void)forceFinishClientSetupWithClientContext:(id)arg1;
- (void)fullNameAndPrimaryEmailOnAccountWithSetupInfo:(id)arg1 completionHandler:(id)arg2;
- (void)getBehaviorOptionForKey:(id)arg1 isContainerOption:(bool)arg2 completionHandler:(id)arg3;
- (void)getNewWebSharingIdentityWithSetupInfo:(id)arg1 completionHandler:(id)arg2;
- (void)getPCSDiagnosticsForZonesWithSetupInfo:(id)arg1 completionHandler:(id)arg2;
- (void)getSandboxExtensionsWithSetupInfo:(id)arg1 completionHandler:(id)arg2;
- (void)getTCCAuthorizationWithCompletion:(id)arg1;
- (bool)hasAllowAccessBeforeFirstUnlockSinceBootEntitlement;
- (bool)hasAllowAccessDuringBuddyEntitlement;
- (bool)hasCloudKitSystemServiceEntitlement;
- (bool)hasDarkWakeNetworkReachabilityEnabledEntitlement;
- (bool)hasDeviceIdentifierEntitlement;
- (bool)hasDisplaysSystemAcceptPromptEntitlement;
- (bool)hasLightweightPCSEntitlement;
- (bool)hasMasqueradingEntitlement;
- (bool)hasOutOfProcessUIEntitlement;
- (bool)hasParticipantPIIEntitlement;
- (bool)hasProtectionDataEntitlement;
- (bool)hasTCCAuthorization;
- (long long)hasTCCAuthorizationTernary;
- (bool)holdAllOperations;
- (id)initWithConnection:(id)arg1;
- (bool)isLongLived;
- (bool)isSandboxed;
- (id)openFileWithOpenInfo:(id)arg1 error:(id*)arg2;
- (id)operationQueue;
- (id)operationStatisticsByClassName;
- (id)pendingContexts;
- (id)pendingOperationIDs;
- (void)performAcceptSharesOperation:(id)arg1 withBlock:(id)arg2;
- (void)performAggregateZonePCSOperation:(id)arg1 withBlock:(id)arg2;
- (void)performCodeFunctionInvokeOperation:(id)arg1 withBlock:(id)arg2;
- (void)performCompleteParticipantVettingOperation:(id)arg1 withBlock:(id)arg2;
- (void)performDiscoverAllIdentitiesOperation:(id)arg1 withBlock:(id)arg2;
- (void)performDiscoverUserIdentitiesOperation:(id)arg1 withBlock:(id)arg2;
- (void)performFetchDatabaseChangesOperation:(id)arg1 withBlock:(id)arg2;
- (void)performFetchNotificationChangesOperation:(id)arg1 withBlock:(id)arg2;
- (void)performFetchRecordChangesOperation:(id)arg1 withBlock:(id)arg2;
- (void)performFetchRecordVersionsOperation:(id)arg1 withBlock:(id)arg2;
- (void)performFetchRecordZoneChangesOperation:(id)arg1 withBlock:(id)arg2;
- (void)performFetchRecordZonesOperation:(id)arg1 withBlock:(id)arg2;
- (void)performFetchRecordsOperation:(id)arg1 withBlock:(id)arg2;
- (void)performFetchShareMetadataOperation:(id)arg1 withBlock:(id)arg2;
- (void)performFetchShareParticipantKeyOperation:(id)arg1 withBlock:(id)arg2;
- (void)performFetchShareParticipantsOperation:(id)arg1 withBlock:(id)arg2;
- (void)performFetchSubscriptionsOperation:(id)arg1 withBlock:(id)arg2;
- (void)performFetchUserQuotaOperation:(id)arg1 withBlock:(id)arg2;
- (void)performFetchWebAuthTokenOperation:(id)arg1 withBlock:(id)arg2;
- (void)performFetchWhitelistedBundleIDsOperation:(id)arg1 withBlock:(id)arg2;
- (void)performInitiateParticipantVettingOperation:(id)arg1 withBlock:(id)arg2;
- (void)performMarkNotificationsReadOperation:(id)arg1 withBlock:(id)arg2;
- (void)performModifyBadgeOperation:(id)arg1 withBlock:(id)arg2;
- (void)performModifyRecordAccessOperation:(id)arg1 withBlock:(id)arg2;
- (void)performModifyRecordZonesOperation:(id)arg1 withBlock:(id)arg2;
- (void)performModifyRecordsOperation:(id)arg1 withBlock:(id)arg2;
- (void)performModifySubscriptionsOperation:(id)arg1 withBlock:(id)arg2;
- (void)performModifyWebSharingOperation:(id)arg1 withBlock:(id)arg2;
- (void)performPublishAssetsOperation:(id)arg1 withBlock:(id)arg2;
- (void)performQueryOperation:(id)arg1 withBlock:(id)arg2;
- (int)pid;
- (id)procName;
- (void)purgeDirectory:(id)arg1;
- (void)repairZonePCSWithOperationInfo:(id)arg1 withBlock:(id)arg2;
- (void)requestApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(id)arg3;
- (void)resetAllApplicationPermissionsWithSetupInfo:(id)arg1 completionHandler:(id)arg2;
- (void)serverPreferredPushEnvironmentWithSetupInfo:(id)arg1 completionHandler:(id)arg2;
- (void)setApplicationPermission:(unsigned long long)arg1 enabled:(bool)arg2 setupInfo:(id)arg3 completionHandler:(id)arg4;
- (void)setBackgroundOperationThrottleQueue:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCachedSandboxExtensions:(id)arg1;
- (void)setCanOpenByID:(bool)arg1;
- (void)setCanUseCKBeforeFirstUnlock:(bool)arg1;
- (void)setCanUseCKDuringBuddy:(bool)arg1;
- (void)setCanUsePackages:(bool)arg1;
- (void)setCancellationQueue:(id)arg1;
- (void)setCleanupOperationQueue:(id)arg1;
- (void)setClientProxyAvailable:(bool)arg1;
- (void)setConnection:(id)arg1;
- (void)setConnectionDate:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2 setupInfo:(id)arg3;
- (void)setFakeResponseOperationResult:(id)arg1 forNextRequestOfClassName:(id)arg2 forItemID:(id)arg3 setupInfo:(id)arg4;
- (void)setHasTCCAuthorizationTernary:(long long)arg1;
- (void)setHoldAllOperations:(bool)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setOperationStatisticsByClassName:(id)arg1;
- (void)setPendingContexts:(id)arg1;
- (void)setPendingOperationIDs:(id)arg1;
- (void)setSandboxed:(bool)arg1;
- (void)setSetupQueue:(id)arg1;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setStatusQueue:(id)arg1;
- (void)setTccAuthOpQueue:(id)arg1;
- (void)setTccAuthQueue:(id)arg1;
- (void)setWatchdog:(id)arg1;
- (id)setupQueue;
- (void)showAssetCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2;
- (id)sourceApplicationBundleIdentifier;
- (void)statusForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(id)arg3;
- (void)statusGroupsForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(id)arg3;
- (id)statusQueue;
- (void)systemAvailabilityChanged:(unsigned long long)arg1;
- (id)tccAuthOpQueue;
- (id)tccAuthQueue;
- (void)tearDown;
- (void)tossConfigWithSetupInfo:(id)arg1 completionHandler:(id)arg2;
- (void)updatePushTokens;
- (bool)usePublicTokenEntitlement;
- (id)valueForEntitlement:(id)arg1;
- (id)watchdog;
- (void)wipeAllCachesAndDie;

@end
