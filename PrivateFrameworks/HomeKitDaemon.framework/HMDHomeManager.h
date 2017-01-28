/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHomeManager : NSObject <HAPFragmentationStreamDelegate, HMDAccessoryBrowserDelegate, HMDAccountDelegate, HMDAccountRegistryDelegate, HMDCompanionManagerDelegate, HMDPairedSyncDelegate, HMDWatchManagerDelegate, HMFMessageReceiver, HMFTimerDelegate, IDSServiceDelegate> {
    bool  _accessAllowedWhenLocked;
    HMDAccessoryBrowser * _accessoryBrowser;
    NSObject<OS_dispatch_source> * _accessoryFinderTimer;
    bool  _accountActive;
    HMDAccountRegistry * _accountRegistry;
    bool  _accountStatusFailedDueToNetworkFailure;
    bool  _accountStatusIsAuthenticated;
    HMDApplicationData * _appData;
    HMDApplicationRegistry * _appRegistry;
    int  _assetUpdatedNotification;
    unsigned long long  _assistantGenerationCounter;
    NSMutableDictionary * _associatedRemotePeers;
    NSMutableDictionary * _associatedWatchPeers;
    HMDAWDLogEventObserver * _awdLogEventObserver;
    bool  _backOffOperationInProgress;
    bool  _cacheUseAllowed;
    HMDClientConnection * _clientConnection;
    NSObject<OS_dispatch_queue> * _clientConnectionQueue;
    HMDCloudDataSyncManager * _cloudDataSyncManager;
    HMDCloudDataSyncStateFilter * _cloudDataSyncStateFilter;
    unsigned long long  _cloudOperationRetryCount;
    NSObject<OS_dispatch_source> * _cloudOperationRetryTimer;
    HMFTimer * _cloudkitAccountChangedDebounceTimer;
    bool  _cloudkitAccountStatusDetermined;
    HMDCompanionManager * _companionManager;
    bool  _companionReachable;
    NSUUID * _currentHomeUUID;
    NSUUID * _dataTag;
    NSDictionary * _demoAccessories;
    bool  _demoFinalized;
    bool  _deviceLost;
    NSMutableSet * _dialogCancelationContexts;
    HMFDumpCategory * _dumpCategory;
    NSMutableSet * _fullSyncedWatchPeers;
    HMDAssistantGather * _gatherer;
    unsigned long long  _generationCounter;
    bool  _homeDataLoadedFromArchive;
    unsigned long long  _homeDatabaseSize;
    NSMutableDictionary * _homeNames;
    NSMutableArray * _homes;
    bool  _iCloudSwitchEnabled;
    HMDRemoteIdentityRegistry * _identityRegistry;
    bool  _ignoreFirstTimeReachabilityChanged;
    NSMutableArray * _incomingInvitations;
    HMDKeyTransferAgent * _keyTransferAgent;
    bool  _lastAnswerForShouldCloudSyncData;
    NSUUID * _lastCurrentHomeUUID;
    HMDLocation * _locationHandler;
    HMFMessageDispatcher * _messageDispatcher;
    HMDMessageFilterChain * _msgFilterChain;
    HMDNameValidator * _nameValidator;
    bool  _needToCleanUpKeys;
    long long  _networkConnectionAvailable;
    int  _newAssetInstalledNotification;
    unsigned short  _nextRequestTransactionIdentifier;
    HMDPairedSync * _pairedSync;
    NSMutableDictionary * _pendingDataSyncAcks;
    NSMutableDictionary * _pendingFragmentationStream;
    NSMutableDictionary * _pendingRemoteSessions;
    NSMutableSet * _pendingResidentSetupSessions;
    NSMutableArray * _pendingResponsesForAccessoryFinder;
    HMDPendingCloudSyncTransactions * _pendingTransactions;
    HMDPowerManager * _powerManager;
    NSUUID * _primaryHomeUUID;
    struct __SCNetworkReachability { } * _reachability;
    HMFTimer * _remoteAccessHealthMonitorTimer;
    HMDCentralMessageDispatcher * _remoteMessageDispatcher;
    bool  _residentEnabled;
    HMDResidentMesh * _residentMesh;
    unsigned long long  _stateHandle;
    HMDSyncOperationManager * _syncManager;
    HMDTimeInformationMonitor * _timeInformationMonitor;
    NSMutableSet * _unassociatedRemotePeers;
    bool  _uploadHomeDataToCloud;
    bool  _uploadMetadataToCloud;
    bool  _uploadToCloudIsPending;
    NSMutableDictionary * _userPushCacheMap;
    NSUUID * _uuid;
    NSMutableArray * _uuidsOfRemovedHomes;
    HMDWatchManager * _watchManager;
    bool  _watchPerformVersionCheck;
    HMFTimer * _watchPushDelayTimer;
    NSMutableDictionary * _watchSyncStateMap;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (getter=isAccessAllowedWhenLocked, nonatomic) bool accessAllowedWhenLocked;
@property (nonatomic, retain) HMDAccessoryBrowser *accessoryBrowser;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *accessoryFinderTimer;
@property (nonatomic) bool accountActive;
@property (nonatomic, readonly) HMDAccountRegistry *accountRegistry;
@property (nonatomic) bool accountStatusFailedDueToNetworkFailure;
@property (nonatomic) bool accountStatusIsAuthenticated;
@property (nonatomic, retain) HMDApplicationData *appData;
@property (nonatomic, retain) HMDApplicationRegistry *appRegistry;
@property (nonatomic) int assetUpdatedNotification;
@property (nonatomic) unsigned long long assistantGenerationCounter;
@property (nonatomic, retain) NSMutableDictionary *associatedRemotePeers;
@property (nonatomic, retain) NSMutableDictionary *associatedWatchPeers;
@property (nonatomic, retain) HMDAWDLogEventObserver *awdLogEventObserver;
@property (nonatomic) bool backOffOperationInProgress;
@property (getter=isCacheUseAllowed, nonatomic) bool cacheUseAllowed;
@property (nonatomic, retain) HMDClientConnection *clientConnection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientConnectionQueue;
@property (nonatomic, retain) HMDCloudDataSyncManager *cloudDataSyncManager;
@property (nonatomic, retain) HMDCloudDataSyncStateFilter *cloudDataSyncStateFilter;
@property (nonatomic) unsigned long long cloudOperationRetryCount;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *cloudOperationRetryTimer;
@property (nonatomic, retain) HMFTimer *cloudkitAccountChangedDebounceTimer;
@property (nonatomic) bool cloudkitAccountStatusDetermined;
@property (nonatomic, readonly) HMDCompanionManager *companionManager;
@property (nonatomic) bool companionReachable;
@property (nonatomic, retain) NSUUID *currentHomeUUID;
@property (nonatomic, retain) NSUUID *dataTag;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSDictionary *demoAccessories;
@property (nonatomic) bool demoFinalized;
@property (readonly, copy) NSString *description;
@property (getter=isDeviceLost, nonatomic) bool deviceLost;
@property (nonatomic, retain) NSMutableSet *dialogCancelationContexts;
@property (nonatomic, readonly) HMFDumpCategory *dumpCategory;
@property (nonatomic, retain) NSMutableSet *fullSyncedWatchPeers;
@property (nonatomic, retain) HMDAssistantGather *gatherer;
@property (nonatomic) unsigned long long generationCounter;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool homeDataLoadedFromArchive;
@property (nonatomic) unsigned long long homeDatabaseSize;
@property (nonatomic, retain) NSMutableDictionary *homeNames;
@property (nonatomic, retain) NSMutableArray *homes;
@property (nonatomic) bool iCloudSwitchEnabled;
@property (nonatomic, retain) HMDRemoteIdentityRegistry *identityRegistry;
@property (nonatomic) bool ignoreFirstTimeReachabilityChanged;
@property (nonatomic, retain) NSMutableArray *incomingInvitations;
@property (nonatomic, readonly) HMDKeyTransferAgent *keyTransferAgent;
@property (nonatomic) bool lastAnswerForShouldCloudSyncData;
@property (nonatomic, retain) NSUUID *lastCurrentHomeUUID;
@property (nonatomic, retain) HMDLocation *locationHandler;
@property (nonatomic, retain) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMDMessageFilterChain *msgFilterChain;
@property (nonatomic, retain) HMDNameValidator *nameValidator;
@property (nonatomic) bool needToCleanUpKeys;
@property (nonatomic) long long networkConnectionAvailable;
@property (nonatomic) int newAssetInstalledNotification;
@property (nonatomic, readonly) unsigned short nextRequestTransactionIdentifier;
@property (nonatomic, readonly) HMDPairedSync *pairedSync;
@property (nonatomic, retain) NSMutableDictionary *pendingDataSyncAcks;
@property (nonatomic, retain) NSMutableDictionary *pendingFragmentationStream;
@property (nonatomic, retain) NSMutableDictionary *pendingRemoteSessions;
@property (nonatomic, retain) NSMutableSet *pendingResidentSetupSessions;
@property (nonatomic, retain) NSMutableArray *pendingResponsesForAccessoryFinder;
@property (nonatomic, retain) HMDPendingCloudSyncTransactions *pendingTransactions;
@property (nonatomic, retain) HMDPowerManager *powerManager;
@property (nonatomic, retain) NSUUID *primaryHomeUUID;
@property (nonatomic) struct __SCNetworkReachability { }*reachability;
@property (nonatomic, retain) HMFTimer *remoteAccessHealthMonitorTimer;
@property (nonatomic, retain) HMDCentralMessageDispatcher *remoteMessageDispatcher;
@property (getter=isResidentEnabled, nonatomic) bool residentEnabled;
@property (nonatomic, retain) HMDResidentMesh *residentMesh;
@property (nonatomic) unsigned long long stateHandle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMDSyncOperationManager *syncManager;
@property (nonatomic, retain) HMDTimeInformationMonitor *timeInformationMonitor;
@property (nonatomic, retain) NSMutableSet *unassociatedRemotePeers;
@property (nonatomic) bool uploadHomeDataToCloud;
@property (nonatomic) bool uploadMetadataToCloud;
@property (nonatomic) bool uploadToCloudIsPending;
@property (nonatomic, readonly) NSMutableDictionary *userPushCacheMap;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic, retain) NSMutableArray *uuidsOfRemovedHomes;
@property (nonatomic, readonly) HMDWatchManager *watchManager;
@property (nonatomic) bool watchPerformVersionCheck;
@property (nonatomic, readonly) HMFTimer *watchPushDelayTimer;
@property (nonatomic, retain) NSMutableDictionary *watchSyncStateMap;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)activeAccountIdentifier;
+ (id)createIdentifierSalt:(id)arg1 deviceSpecific:(bool)arg2;
+ (bool)doesSaveReasonAffectOnlyLocalData:(id)arg1;
+ (bool)doesSaveReasonAffectWatchVersionCheck:(id)arg1;
+ (id)getCurrentAltDSID;
+ (id)getCurrentUserID;
+ (id)getSPIClientIdentifierSalt;
+ (id)getUniqueDeviceIdSalt;
+ (id)idsDeviceForDevice:(id)arg1;
+ (bool)isThisDeviceAdminOfHome:(id)arg1;
+ (bool)readiCloudSwitchState;
+ (id)remotePeerDeviceAddress:(id)arg1;
+ (id)saltForDeviceSpecificIdentifier;

- (void).cxx_destruct;
- (void)__registerIncomingInvitations:(id)arg1;
- (void)_acceptHomeInviteFromUser:(id)arg1 message:(id)arg2 trackInvite:(bool)arg3;
- (bool)_acceptMetadataVersion:(id)arg1 schemaVersion:(id)arg2 error:(id*)arg3;
- (void)_accessoriesAreLocallyReachableOnTransientDevice:(bool)arg1 forHome:(id)arg2;
- (id)_accessoryIdentifiersForHome:(id)arg1;
- (void)_addCurrentResidentDeviceToHomes:(id)arg1;
- (void)_addPendingDataSyncAcksForUser:(id)arg1 forHome:(id)arg2;
- (void)_addSyncOperation:(id)arg1;
- (void)_addWatch:(id)arg1 completionHandler:(id)arg2;
- (bool)_addWatch:(id)arg1 toAssociatedList:(id)arg2;
- (bool)_associateAccessories:(id)arg1 withHomes:(id)arg2;
- (void)_cancelAccessoryFinderTimer;
- (void)_checkAndAddWatchDevices:(id)arg1 resend:(bool)arg2 requestFromWatch:(bool)arg3;
- (void)_checkAndAddWatchDevicesWithResend:(bool)arg1;
- (void)_checkAndInformCompanionDevice;
- (void)_checkForAccountChanged;
- (void)_checkForRemotePeers;
- (void)_checkForRemotePeersAndRegisterForRemoteNotifications:(bool)arg1;
- (id)_compressHomeData:(id)arg1;
- (bool)_configureHomes:(id)arg1;
- (bool)_configureHomesImpl:(id)arg1;
- (void)_detectGuestHomesAddedAndRemovedWithCloudHomes:(id)arg1;
- (id)_deviceForIdentifier:(id)arg1;
- (void)_deviceLostStateNotification:(id)arg1;
- (void)_downloadUnavailableAsset:(id)arg1 availableVersion:(unsigned long long)arg2 unavailableVersion:(unsigned long long)arg3;
- (id)_dumpHomeManagerData;
- (void)_dumpToLog:(id)arg1 withState:(id)arg2;
- (void)_electCompanionForRemoteAccess:(id)arg1;
- (void)_electRemoteAccessDeviceForHome:(id)arg1 retryCount:(unsigned long long)arg2;
- (void)_electRemoteAccessPeerForHome:(id)arg1;
- (void)_electRemoteAccessPeerForHome:(id)arg1 retryCount:(unsigned long long)arg2;
- (void)_electRemoteGatewayForHomesAfterReachabilityChanges;
- (void)_eraseConfiguration:(bool)arg1 completionHandler:(id)arg2;
- (void)_eraseLocalHomeConfiguration;
- (void)_eraseLocalHomeConfigurationAndDeleteMetadata:(bool)arg1 completionQueue:(id)arg2 completion:(id)arg3;
- (void)_eraseLocalHomeConfigurationCommon;
- (void)_eraseLocalHomeConfigurationOnResident;
- (void)_eraseLocalMetadata;
- (void)_extractVendorIdentifierFor:(id)arg1 andRun:(id)arg2;
- (void)_fetchDataFromCloud;
- (id)_filterAccessories:(id)arg1 inHome:(id)arg2;
- (id)_filterAccessories:(id)arg1 withIdentifiers:(id)arg2;
- (bool)_findAnyAccessoryWithIdentities:(id)arg1 inAccessoryServers:(id)arg2;
- (void)_findRemotePeerContainingAccessories:(id)arg1 forHome:(id)arg2;
- (id)_generateAssistantTeamIdentifier;
- (id)_generatePayloadFromHome:(id)arg1 forAdmin:(bool)arg2;
- (id)_getAssistantTeamIdentifierForKey;
- (id)_getHomeConfigurationLogEvent;
- (id)_getRequestedState:(id)arg1;
- (void)_handleAccessAllowedWhenLockedRequest:(id)arg1;
- (void)_handleAccessHomeInvite:(id)arg1;
- (void)_handleAccountAvailabilityChanged;
- (void)_handleAccountStatusDeterminedWithError:(id)arg1 homeDataRecordExists:(bool)arg2 metadataRecordExists:(bool)arg3;
- (void)_handleAddRemoteAccessRequest:(id)arg1;
- (void)_handleAreYouAtHome:(id)arg1;
- (void)_handleAssistantTeamIdentifierChanged:(id)arg1;
- (void)_handleCompanionKeysSync:(id)arg1;
- (bool)_handleControllerKeyAvailable;
- (void)_handleCurrentHomeChanged:(id)arg1;
- (void)_handleDeleteDuetEvent:(id)arg1;
- (void)_handleDevicePing:(id)arg1;
- (void)_handleDisabledResidentDevices;
- (void)_handleDismissBulletinRequest:(id)arg1;
- (void)_handleDismissDialogRequest:(id)arg1;
- (void)_handleDoYouSeeUnpairedAccessories:(id)arg1;
- (void)_handleDumpState:(id)arg1;
- (void)_handleEnableResidentForThisDeviceRequest:(id)arg1;
- (void)_handleEventIdentifierValidation:(id)arg1;
- (void)_handleHomeDataFragmentedSync:(id)arg1;
- (void)_handleHomeDataSync:(id)arg1;
- (void)_handleHomesConfigSync:(id)arg1;
- (void)_handleLogAppViewEvent:(id)arg1;
- (void)_handleLogControl:(id)arg1;
- (void)_handleMergeWithCloudHomeData1:(id)arg1 cloudHomeData2:(id)arg2 cloudHomeData3:(id)arg3 migrationOptions:(unsigned long long)arg4 needConflictResolution:(bool)arg5 homeDataFetechedTransaction:(id)arg6 syncCompletion:(id)arg7;
- (void)_handleMetadataAssetUpdated;
- (void)_handleMetadataSync:(id)arg1;
- (void)_handlePrimaryAccountDeleted:(id)arg1;
- (void)_handlePrimaryAccountModified:(id)arg1;
- (void)_handleQueryMetadata:(id)arg1;
- (void)_handleQueryVersionInformation:(id)arg1;
- (void)_handleQueryiCloudSwitchState:(id)arg1;
- (void)_handleRemoteSessionTornDown:(id)arg1;
- (void)_handleRequestAddHome:(id)arg1;
- (void)_handleRequestFetchHomeConfiguration:(id)arg1;
- (void)_handleRequestForCompanionKeysSync:(id)arg1;
- (void)_handleRequestIsUserUsingHomeKit:(id)arg1;
- (void)_handleRequestRemoveHome:(id)arg1;
- (void)_handleRequestSetPrimaryHome:(id)arg1;
- (void)_handleRequestToUpdateHomeInvitationFromInviter:(id)arg1;
- (void)_handleRequestToUpdateHomeInvitationFromLocalUser:(id)arg1;
- (void)_handleResetConfiguration:(id)arg1;
- (void)_handleResetHome:(id)arg1;
- (void)_handleRetailModeConfigRequest:(id)arg1;
- (void)_handleRetrieveVendorIdentifier:(id)arg1;
- (void)_handleSaveRequest:(id)arg1;
- (void)_handleSetAppData:(id)arg1;
- (void)_handleSetMetadata:(id)arg1;
- (void)_handleShouldDisplayiCloudSwitch:(id)arg1;
- (void)_handleSysdiagnoseRequest:(id)arg1;
- (void)_handleUpdateiCloudSwitchState:(id)arg1;
- (void)_handleUserRemoved:(id)arg1;
- (id)_homeFromEventIdentifier:(id)arg1;
- (id)_homeWithName:(id)arg1;
- (id)_homeWithUUID:(id)arg1;
- (void)_iCloudSwitchModified:(bool)arg1 success:(bool)arg2 error:(id)arg3;
- (void)_installAvailableAsset:(id)arg1 version:(unsigned long long)arg2;
- (void)_loadMessageDispatcher:(id)arg1 remoteMessageDispatcher:(id)arg2 accessoryBrowser:(id)arg3 messageFilterChain:(id)arg4 homeData:(id)arg5 localDataDecryptionFailed:(bool)arg6 identityRegistry:(id)arg7 appRegistry:(id)arg8 accountRegistry:(id)arg9 reloadData:(bool)arg10;
- (void)_loadMetadataFromURL:(id)arg1 identifier:(id)arg2 remoteSource:(bool)arg3 responseHandler:(id)arg4;
- (void)_logState:(id)arg1 key:(id)arg2 indent:(id)arg3;
- (void)_mergeHomeDataWithRemoteHomes:(id)arg1 remotePrimaryHome:(id)arg2 remoteAccessories:(id)arg3 needConflictResolution:(bool)arg4 idsDataSync:(bool)arg5 idsSyncUser:(id)arg6 dataVersion:(long long)arg7 newResidentDevice:(bool*)arg8 newAppData:(id)arg9;
- (void)_migrateiCloudSwitchPreferences;
- (void)_monitorReachability;
- (unsigned short)_nextTransactionIdentifier;
- (void)_notifyCurrentHomeUpdated;
- (void)_notifyCurrentHomeUpdated:(id)arg1 isLocalUpdate:(bool)arg2;
- (void)_notifySyncDataChanged;
- (void)_pairedSyncDidStart;
- (void)_postCloudSyncNotificationWithSuccess:(bool)arg1;
- (void)_postHomesDidUpdateNotification;
- (void)_postIncomingInvitationStateChangedNotification:(id)arg1 newInvitationState:(long long)arg2;
- (void)_postMergeDataFromCloud:(bool)arg1;
- (void)_postMergeWatchPush;
- (void)_postiCloudSigninState:(bool)arg1;
- (bool)_preferLocalHomesOverCloudHomes:(id)arg1 migrationOptions:(unsigned long long)arg2;
- (id)_prepareDataForDevicesOnSameAccountForHome:(id)arg1 remoteGateway:(bool)arg2;
- (id)_prepareHomesVersionDict;
- (void)_processAnyPendingRequestsForRemoteAccess:(bool)arg1;
- (void)_pushChangesForHome:(id)arg1 toRegularUsersOfHome:(id)arg2 adminUsersOfHome:(id)arg3 deviceDestinations:(id)arg4;
- (void)_pushChangesForHome:(id)arg1 toRemoteDevicesOnSameAccount:(id)arg2 addedUser:(id)arg3;
- (void)_pushChangesToAllUsersOfAllHomes;
- (void)_pushChangesToCloud:(bool)arg1;
- (void)_pushChangesToUsers:(id)arg1 forHome:(id)arg2;
- (void)_pushChangesToUsersThatHaveNotAcknowledged;
- (void)_pushChangesToWatch:(id)arg1 paylod:(id)arg2 group:(id)arg3 completionHandler:(id)arg4;
- (void)_pushMetadataChangesToUsers;
- (void)_pushMetadataToCloud;
- (void)_pushUserRemovedForHome:(id)arg1;
- (void)_registerForLogging;
- (void)_registerForMessages;
- (void)_reloadHomeDataFromLocalStore;
- (void)_remoteAccessHealthMonitorTimerDidFire:(id)arg1;
- (id)_remotePeers;
- (void)_removeAllUsersOfHome:(id)arg1;
- (bool)_removeAndAddKeyPair:(id)arg1 userName:(id)arg2;
- (void)_removeCurrentResidentDeviceFromHomes:(id)arg1;
- (void)_removeFromAssociatedPeers:(id)arg1 home:(id)arg2;
- (void)_removeFromUnassociatedPeers:(id)arg1 home:(id)arg2;
- (void)_removeHome:(id)arg1 withMessage:(id)arg2 saveToStore:(bool)arg3 removedByLocalUser:(bool)arg4;
- (void)_removePendingDataSyncAcksForUser:(id)arg1 forHome:(id)arg2;
- (void)_requestHomeDataSync;
- (void)_resetCloudOperationRetryCounters;
- (void)_resumeXPCWithCompletionHanlder:(id)arg1;
- (void)_retryCloudOperationWithName:(id)arg1 completionHandler:(id)arg2;
- (void)_runUploadHomeConfigToCloudForcePush:(bool)arg1 syncCompletion:(id)arg2;
- (void)_saveAssistantTeamIdentifierKey:(id)arg1;
- (void)_saveMetadata:(bool)arg1;
- (void)_saveMetadata:(id)arg1 pushChangesToCloud:(bool)arg2;
- (void)_saveToPersistentStore;
- (void)_saveWithReason:(id)arg1 information:(id)arg2 postSyncNotification:(bool)arg3;
- (void)_saveWithReason:(id)arg1 information:(id)arg2 saveOptions:(unsigned long long)arg3;
- (void)_saveWithReason:(id)arg1 postSyncNotification:(bool)arg2;
- (void)_scheduleSendHomeDataToAllWatches;
- (void)_sendCurrentHomeToWatch:(id)arg1;
- (void)_sendFragmentedMessage:(id)arg1 messageIndex:(unsigned long long)arg2 messageIdentity:(id)arg3 userID:(id)arg4 destination:(id)arg5 completionHandler:(id)arg6;
- (void)_sendHomeDataToAllWatches;
- (void)_sendHomeDataToWatch:(id)arg1 performVersionCheck:(bool)arg2 completionHandler:(id)arg3;
- (void)_sendInviteRequestToUser:(id)arg1 inviteIdentifier:(id)arg2 forHome:(id)arg3 confirm:(bool)arg4 expiryDate:(id)arg5 queue:(id)arg6 completionHandler:(id)arg7;
- (void)_sendKeysToWatch:(id)arg1 completionHandler:(id)arg2;
- (void)_sendSysdiagnoseRequest;
- (void)_sendUpdateRequestToAdminForInvitation:(id)arg1 homeUUID:(id)arg2 invitationState:(long long)arg3;
- (void)_sendUserAdded:(id)arg1 destination:(id)arg2 toHome:(id)arg3;
- (void)_sendUserRemoved:(id)arg1 fromHome:(id)arg2 pairingUsername:(id)arg3 pushToCloud:(bool)arg4 completionHandler:(id)arg5;
- (void)_setAssistantTeamIdentifierKey:(id)arg1;
- (void)_setDataMigrationOptions:(id)arg1;
- (void)_setHomeConfigurationKey:(struct __CFString { }*)arg1 value:(void*)arg2;
- (void)_setHomekitAssistantConfigurationVersion:(unsigned long long)arg1;
- (bool)_setPrimaryHome:(id)arg1 idsDataSync:(bool)arg2;
- (void)_setUniqueDeviceIdSalt:(id)arg1;
- (void)_startAccessoryFinderTimer;
- (void)_startAccessoryFinderTimerExpired;
- (void)_startCloudOperationRetryWithTimeout:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)_startScanningForAccessories:(id)arg1;
- (void)_startTimerToResetCloudOperationRetryCounter;
- (void)_stopCloudOperationRetryTimer;
- (void)_suspendXPCConnectionAndMergeRemoteHomes:(id)arg1 remotePrimaryHome:(id)arg2 remoteAccessories:(id)arg3 needConflictResolution:(bool)arg4 idsDataSync:(bool)arg5 idsSyncUser:(id)arg6 dataVersion:(long long)arg7 applicationData:(id)arg8 completionHandler:(id)arg9;
- (void)_suspendXPCWithCompletionHanlder:(id)arg1;
- (void)_teardownRemoteAccessForHome:(id)arg1;
- (void)_teardownRemoteAccessForHomeCommon:(id)arg1;
- (void)_teardownRemoteAccessForHomeThroughCompanion:(id)arg1;
- (id)_trackIncomingInvitationFromUser:(id)arg1 message:(id)arg2 invitationState:(long long)arg3 error:(id*)arg4;
- (void)_updateAccessAllowedWhenLocked:(bool)arg1 message:(id)arg2;
- (bool)_updateAccessoriesConfigured;
- (void)_updateCloudDataSyncWithAccountState:(bool)arg1;
- (void)_updateHomeKitInUsePreferences;
- (void)_updateHomesAboutNetworkConnectivity:(bool)arg1;
- (void)_updateResidentEnabledOnThisDevice:(bool)arg1 message:(id)arg2;
- (void)_updateTransportInformationInstances:(id)arg1 remoteAccessories:(id)arg2;
- (void)_updateUserPushCachedForUser:(id)arg1 device:(id)arg2;
- (void)_updateiCloudSwitchState:(bool)arg1;
- (void)_uploadHomeConfigToCloud:(bool)arg1;
- (id)_userPushCachedGetDeviceForUser:(id)arg1;
- (void)accessoriesAreLocallyReachableOnTransientDevice:(bool)arg1 forHome:(id)arg2;
- (id)accessoryBrowser;
- (void)accessoryBrowserDidFindNewAccessory:(id)arg1;
- (id)accessoryFinderTimer;
- (void)account:(id)arg1 didAddDevice:(id)arg2;
- (void)account:(id)arg1 didRemoveDevice:(id)arg2;
- (void)account:(id)arg1 didUpdateDevice:(id)arg2;
- (bool)accountActive;
- (void)accountAvailabilityChanged:(id)arg1;
- (id)accountRegistry;
- (void)accountRegistry:(id)arg1 didAddAccount:(id)arg2;
- (void)accountRegistry:(id)arg1 didRemoveAccount:(id)arg2;
- (void)accountRegistry:(id)arg1 didUpdateCurrentDevice:(id)arg2;
- (bool)accountStatusFailedDueToNetworkFailure;
- (bool)accountStatusIsAuthenticated;
- (id)addName:(id)arg1 namespace:(id)arg2;
- (id)appData;
- (id)appRegistry;
- (void)archiveServerToken:(id)arg1;
- (int)assetUpdatedNotification;
- (unsigned long long)assistantGenerationCounter;
- (id)associatedRemotePeers;
- (id)associatedWatchPeers;
- (void)atHomeLevelChanged:(long long)arg1 formerLevel:(long long)arg2 home:(id)arg3;
- (id)awdLogEventObserver;
- (bool)backOffOperationInProgress;
- (void)checkAndPushMetadataToUser:(id)arg1 destination:(id)arg2 userInfo:(id)arg3;
- (void)checkForRemotePeers;
- (id)clientConnection;
- (id)clientConnectionQueue;
- (id)cloudDataSyncManager;
- (id)cloudDataSyncStateFilter;
- (unsigned long long)cloudOperationRetryCount;
- (id)cloudOperationRetryTimer;
- (id)cloudkitAccountChangedDebounceTimer;
- (bool)cloudkitAccountStatusDetermined;
- (id)companionManager;
- (void)companionManager:(id)arg1 didChangeCompanion:(id)arg2;
- (bool)companionReachable;
- (void)controllerKeyPairGenerated:(id)arg1;
- (id)currentHomeUUID;
- (void)dataSyncInProgressUpdatedNotification:(id)arg1;
- (id)dataTag;
- (void)dealloc;
- (id)demoAccessories;
- (bool)demoFinalized;
- (id)dialogCancelationContexts;
- (void)dismissBulletinOnAllMyTransientDevicesWithContext:(id)arg1;
- (void)dismissDialogOnAllMyTransientDevicesWithContext:(id)arg1 selection:(bool)arg2;
- (id)dumpCategory;
- (void)electDeviceForUser:(id)arg1 destination:(id)arg2 deviceCapabilities:(id)arg3 queue:(id)arg4 completionHandler:(id)arg5;
- (void)electRemoteAccessPeerForHome:(id)arg1;
- (void)eraseLocalHomeData;
- (void)forceCloudFetch;
- (void)forcePushLocalDataToCloud:(id)arg1;
- (void)fragmentationStream:(id)arg1 didCloseWithError:(id)arg2;
- (void)fragmentationStream:(id)arg1 didReceiveData:(id)arg2 transactionIdentifier:(unsigned short)arg3 error:(id)arg4;
- (id)fullSyncedWatchPeers;
- (id)gatherer;
- (void)generateAssistantTeamIdentifierWithCompletionHandler:(id)arg1;
- (unsigned long long)generationCounter;
- (bool)getControllerKey:(id*)arg1 controllerUsername:(id*)arg2 error:(id*)arg3;
- (unsigned long long)getDataMigrationOptions;
- (void)handleBackgroundTaskAgentJob:(const char *)arg1 forHomeWithUUID:(id)arg2;
- (void)handleEducationAccountEnabled:(id)arg1;
- (void)handleHomeKitAppInForeground:(id)arg1;
- (void)handleIsAtHome:(id)arg1;
- (void)handleNoHomeKitAppInForeground:(id)arg1;
- (void)handleVendorInfoUpdated:(id)arg1;
- (bool)homeDataLoadedFromArchive;
- (unsigned long long)homeDatabaseSize;
- (id)homeNames;
- (id)homes;
- (void)honeybeeCollect:(id)arg1 identifier:(id)arg2;
- (bool)iCloudSwitchEnabled;
- (id)identifiersOfAccessories:(id)arg1;
- (id)identityRegistry;
- (bool)ignoreFirstTimeReachabilityChanged;
- (id)incomingInvitations;
- (id)initWithMessageDispatcher:(id)arg1 remoteMessageDispatcher:(id)arg2 accessoryBrowser:(id)arg3 messageFilterChain:(id)arg4 homeData:(id)arg5 localDataDecryptionFailed:(bool)arg6 identityRegistry:(id)arg7 appRegistry:(id)arg8 accountRegistry:(id)arg9;
- (bool)isAccessAllowedWhenLocked;
- (bool)isCacheUseAllowed;
- (bool)isDataSyncInProgress;
- (bool)isDeviceLost;
- (bool)isPairedWithWatch;
- (bool)isResidentCapable;
- (bool)isResidentEnabled;
- (id)keyTransferAgent;
- (void)kickUploadForPendingTransactions;
- (bool)lastAnswerForShouldCloudSyncData;
- (id)lastCurrentHomeUUID;
- (id)locationHandler;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgFilterChain;
- (id)nameValidator;
- (bool)needToCleanUpKeys;
- (long long)networkConnectionAvailable;
- (int)newAssetInstalledNotification;
- (unsigned short)nextRequestTransactionIdentifier;
- (id)nominateCurrentHomeUUID;
- (void)notifyClientsResidentCapable:(bool)arg1;
- (void)notifyPrimaryHomeUpdated:(id)arg1;
- (long long)numberOfAccessoryWithNewFirmwareAvailable;
- (long long)numberOfPendingIncomingInvitation;
- (id)pairedAccessories;
- (id)pairedSync;
- (void)pairedSyncDidStart:(id)arg1;
- (id)pendingDataSyncAcks;
- (id)pendingFragmentationStream;
- (id)pendingRemoteSessions;
- (id)pendingResidentSetupSessions;
- (id)pendingResponsesForAccessoryFinder;
- (id)pendingTransactions;
- (void)pingDevice:(id)arg1 completionHandler:(id)arg2;
- (void)postHomesDidUpdateNotification;
- (id)powerManager;
- (id)primaryHomeUUID;
- (void)processAnyPendingRequestsForRemoteAccess;
- (void)pushMetadataToCloud;
- (struct __SCNetworkReachability { }*)reachability;
- (void)redispatchMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 toResidentForHome:(id)arg4;
- (void)registerQueriableAwdMetrics;
- (void)registerStateHandler;
- (void)relayMessage:(id)arg1;
- (void)reloadHomeDataFromLocalStore;
- (id)remoteAccessHealthMonitorTimer;
- (id)remoteGatewayCapableDevices;
- (id)remoteMessageDispatcher;
- (id)removeName:(id)arg1 namespace:(id)arg2;
- (id)replaceName:(id)arg1 withNewName:(id)arg2 inNamespaces:(id)arg3;
- (id)residentMesh;
- (void)saveMetadata:(id)arg1 pushChangesToCloud:(bool)arg2;
- (void)saveWithReason:(id)arg1 information:(id)arg2 postSyncNotification:(bool)arg3;
- (void)saveWithReason:(id)arg1 information:(id)arg2 saveOptions:(unsigned long long)arg3;
- (void)sendInviteRequestToUser:(id)arg1 inviteIdentifier:(id)arg2 forHome:(id)arg3 confirm:(bool)arg4 expiryDate:(id)arg5 queue:(id)arg6 completionHandler:(id)arg7;
- (void)sendSecureMessage:(id)arg1 target:(id)arg2 userID:(id)arg3 destination:(id)arg4 responseQueue:(id)arg5 responseHandler:(id)arg6;
- (void)sendUnsecureMessage:(id)arg1 target:(id)arg2 userID:(id)arg3 responseQueue:(id)arg4 responseHandler:(id)arg5;
- (void)sendUserAdded:(id)arg1 destination:(id)arg2 toHome:(id)arg3;
- (void)sendUserRemoved:(id)arg1 fromHome:(id)arg2 pairingUsername:(id)arg3 pushToCloud:(bool)arg4 completionHandler:(id)arg5;
- (void)setAccessAllowedWhenLocked:(bool)arg1;
- (void)setAccessoryBrowser:(id)arg1;
- (void)setAccessoryFinderTimer:(id)arg1;
- (void)setAccountActive:(bool)arg1;
- (void)setAccountStatusFailedDueToNetworkFailure:(bool)arg1;
- (void)setAccountStatusIsAuthenticated:(bool)arg1;
- (void)setAppData:(id)arg1;
- (void)setAppRegistry:(id)arg1;
- (void)setAssetUpdatedNotification:(int)arg1;
- (void)setAssistantGenerationCounter:(unsigned long long)arg1;
- (void)setAssociatedRemotePeers:(id)arg1;
- (void)setAssociatedWatchPeers:(id)arg1;
- (void)setAwdLogEventObserver:(id)arg1;
- (void)setBackOffOperationInProgress:(bool)arg1;
- (void)setCacheUseAllowed:(bool)arg1;
- (void)setClientConnection:(id)arg1;
- (void)setClientConnectionQueue:(id)arg1;
- (void)setCloudDataSyncManager:(id)arg1;
- (void)setCloudDataSyncStateFilter:(id)arg1;
- (void)setCloudOperationRetryCount:(unsigned long long)arg1;
- (void)setCloudOperationRetryTimer:(id)arg1;
- (void)setCloudkitAccountChangedDebounceTimer:(id)arg1;
- (void)setCloudkitAccountStatusDetermined:(bool)arg1;
- (void)setCompanionReachable:(bool)arg1;
- (void)setCurrentHomeUUID:(id)arg1;
- (void)setDataTag:(id)arg1;
- (void)setDemoAccessories:(id)arg1;
- (void)setDemoFinalized:(bool)arg1;
- (void)setDeviceLost:(bool)arg1;
- (void)setDialogCancelationContexts:(id)arg1;
- (void)setFullSyncedWatchPeers:(id)arg1;
- (void)setGatherer:(id)arg1;
- (void)setGenerationCounter:(unsigned long long)arg1;
- (void)setHomeConfigurationVersion:(unsigned long long)arg1;
- (void)setHomeDataLoadedFromArchive:(bool)arg1;
- (void)setHomeDatabaseSize:(unsigned long long)arg1;
- (void)setHomeNames:(id)arg1;
- (void)setHomes:(id)arg1;
- (void)setICloudSwitchEnabled:(bool)arg1;
- (void)setIdentityRegistry:(id)arg1;
- (void)setIgnoreFirstTimeReachabilityChanged:(bool)arg1;
- (void)setIncomingInvitations:(id)arg1;
- (void)setLastAnswerForShouldCloudSyncData:(bool)arg1;
- (void)setLastCurrentHomeUUID:(id)arg1;
- (void)setLocationHandler:(id)arg1;
- (void)setMessageDispatcher:(id)arg1;
- (void)setMsgFilterChain:(id)arg1;
- (void)setNameValidator:(id)arg1;
- (void)setNeedToCleanUpKeys:(bool)arg1;
- (void)setNetworkConnectionAvailable:(long long)arg1;
- (void)setNewAssetInstalledNotification:(int)arg1;
- (void)setPendingDataSyncAcks:(id)arg1;
- (void)setPendingFragmentationStream:(id)arg1;
- (void)setPendingRemoteSessions:(id)arg1;
- (void)setPendingResidentSetupSessions:(id)arg1;
- (void)setPendingResponsesForAccessoryFinder:(id)arg1;
- (void)setPendingTransactions:(id)arg1;
- (void)setPowerManager:(id)arg1;
- (void)setPrimaryHomeUUID:(id)arg1;
- (void)setReachability:(struct __SCNetworkReachability { }*)arg1;
- (void)setRemoteAccessHealthMonitorTimer:(id)arg1;
- (void)setRemoteMessageDispatcher:(id)arg1;
- (void)setResidentEnabled:(bool)arg1;
- (void)setResidentMesh:(id)arg1;
- (void)setStateHandle:(unsigned long long)arg1;
- (void)setTimeInformationMonitor:(id)arg1;
- (void)setUnassociatedRemotePeers:(id)arg1;
- (void)setUploadHomeDataToCloud:(bool)arg1;
- (void)setUploadMetadataToCloud:(bool)arg1;
- (void)setUploadToCloudIsPending:(bool)arg1;
- (void)setUuid:(id)arg1;
- (void)setUuidsOfRemovedHomes:(id)arg1;
- (void)setWatchPerformVersionCheck:(bool)arg1;
- (void)setWatchSyncStateMap:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)startLocalTransport;
- (void)startSearchingForBridgedAccessories;
- (void)startWithCompletionHandler:(id)arg1;
- (unsigned long long)stateHandle;
- (void)stopLocalTransport;
- (void)stopSearchingForBridgedAccessories;
- (id)syncManager;
- (void)teardownRemoteAccessForHome:(id)arg1;
- (id)timeInformationMonitor;
- (void)timerDidFire:(id)arg1;
- (id)unassociatedRemotePeers;
- (void)updateGenerationCounter;
- (void)updateHomesConfigured;
- (void)updateIncomingInvitesPresent;
- (void)updateUserPushCachedForUser:(id)arg1 device:(id)arg2;
- (void)updateiCloudSwitchState:(bool)arg1;
- (bool)uploadHomeDataToCloud;
- (bool)uploadMetadataToCloud;
- (bool)uploadToCloudIsPending;
- (id)userPushCacheMap;
- (id)uuid;
- (id)uuidsOfRemovedHomes;
- (id)watchManager;
- (void)watchManager:(id)arg1 didAddConnectedWatch:(id)arg2;
- (void)watchManager:(id)arg1 didRemoveConnectedWatch:(id)arg2;
- (bool)watchPerformVersionCheck;
- (id)watchPushDelayTimer;
- (id)watchSyncStateMap;
- (id)workQueue;

@end
