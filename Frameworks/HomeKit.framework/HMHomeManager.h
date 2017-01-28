/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMHomeManager : NSObject <HFPrettyDescription, HFStateDumpSerializable, HMFMessageReceiver, HMMutableApplicationData> {
    bool  _accessAllowedWhenLocked;
    HMApplicationData * _applicationData;
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMHome * _currentHome;
    HMThreadSafeMutableArrayCollection * _currentHomes;
    bool  _dataSyncInProgress;
    unsigned long long  _dataSyncState;
    <HMHomeManagerDelegate> * _delegate;
    HMDelegateCaller * _delegateCaller;
    bool  _didUpdateHomes;
    bool  _fetchInProgress;
    unsigned long long  _generationCounter;
    NSString * _homeCache;
    NSString * _homeCacheDir;
    HMThreadSafeMutableArrayCollection * _homeInvitations;
    _HMLocationHandler * _locationHandler;
    NSOperationQueue * _mergeOperationQueue;
    unsigned long long  _metadataVersion;
    HMFMessageDispatcher * _msgDispatcher;
    HMPendingRequests * _pendingRequests;
    HMHome * _primaryHome;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    bool  _residentEnabledForThisDevice;
    unsigned long long  _residentProvisioningStatus;
    bool  _thisDeviceResidentCapable;
    NSUUID * _uuid;
    bool  _viewServiceActive;
    HMXpcClient * _xpcClient;
}

@property (getter=isAccessAllowedWhenLocked) bool accessAllowedWhenLocked;
@property (nonatomic, readonly) HMApplicationData *applicationData;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, retain) HMHome *currentHome;
@property (nonatomic, retain) HMThreadSafeMutableArrayCollection *currentHomes;
@property (getter=isDataSyncInProgress, nonatomic) bool dataSyncInProgress;
@property (nonatomic) unsigned long long dataSyncState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMHomeManagerDelegate> *delegate;
@property (nonatomic, retain) HMDelegateCaller *delegateCaller;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didUpdateHomes;
@property (nonatomic) bool fetchInProgress;
@property (nonatomic) unsigned long long generationCounter;
@property (readonly) unsigned long long hash;
@property (retain) NSString *homeCache;
@property (retain) NSString *homeCacheDir;
@property (nonatomic, retain) HMThreadSafeMutableArrayCollection *homeInvitations;
@property (nonatomic, readonly, copy) NSArray *homes;
@property (nonatomic, readonly) _HMLocationHandler *locationHandler;
@property (nonatomic, retain) NSOperationQueue *mergeOperationQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic) unsigned long long metadataVersion;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, retain) HMPendingRequests *pendingRequests;
@property (nonatomic, retain) HMHome *primaryHome;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (getter=isResidentEnabledForThisDevice) bool residentEnabledForThisDevice;
@property unsigned long long residentProvisioningStatus;
@property (readonly) Class superclass;
@property (getter=isThisDeviceResidentCapable) bool thisDeviceResidentCapable;
@property (nonatomic, retain) NSUUID *uuid;
@property (getter=isViewServiceActive, nonatomic) bool viewServiceActive;
@property (nonatomic, retain) HMXpcClient *xpcClient;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)dataSyncInProgressFromDataSyncState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_acceptInvitation:(id)arg1 completionHandler:(id)arg2;
- (void)_addHomeWithName:(id)arg1 completionHandler:(id)arg2;
- (void)_checkEventValidity:(id)arg1 completion:(id)arg2;
- (void)_declineInvitation:(id)arg1 completionHandler:(id)arg2;
- (void)_deleteDuetEvents:(id)arg1 completion:(id)arg2;
- (void)_determineCacheDirectory;
- (void)_determineCacheFile;
- (void)_dumpCache:(id)arg1;
- (void)_dumpState:(id)arg1 payload:(id)arg2 completion:(id)arg3;
- (void)_eraseHomeDataAndDeleteMetadata:(bool)arg1 completionHandler:(id)arg2;
- (void)_fetchHomeConfigurationWithCache:(bool)arg1 refreshRequested:(bool)arg2;
- (void)_fetchHomeConfigurationWithPrivacyCheckWithCache:(bool)arg1 refreshRequested:(bool)arg2;
- (void)_handleAccessAllowedWhenLockedUpdatedNotification:(id)arg1;
- (void)_handleAppDataUpdatedNotification:(id)arg1;
- (void)_handleCurrentHomeChangedNotification:(id)arg1;
- (void)_handleDataStateChangedChangedNotification:(id)arg1;
- (void)_handleHomeAddedNotification:(id)arg1;
- (void)_handleHomeRemovedNotification:(id)arg1;
- (void)_handleHomesDidUpdateNotification:(id)arg1;
- (void)_handleMetadataUpdatedNotification:(id)arg1;
- (void)_handlePrimaryChangedNotification:(id)arg1;
- (void)_handleQueryHomeKitUsageStateResponse:(id)arg1 completionHandler:(id)arg2;
- (void)_handleResidentDeviceCapableUpdatedNotification:(id)arg1;
- (void)_handleResidentEnabledForThisDeviceUpdatedNotification:(id)arg1;
- (void)_handleResidentProvisioningStatusChanged:(id)arg1;
- (void)_handleUserInvitationsUpdatedNotification:(id)arg1;
- (id)_homeWithUUID:(id)arg1;
- (bool)_isValidCachedHomeConfiguration:(id)arg1;
- (void)_logAppViewEvent:(id)arg1 name:(id)arg2 uuid:(id)arg3 information:(id)arg4 completion:(id)arg5;
- (void)_logControl:(id)arg1 completionHandler:(id)arg2;
- (void)_mergeCurrentAppDataWithNewAppData:(id)arg1 operations:(id)arg2;
- (void)_mergeCurrentHomeInvitationsWithNewHomeInvitations:(id)arg1 operations:(id)arg2;
- (void)_mergeCurrentHomesWithNewHomes:(id)arg1 newPrimaryHome:(id)arg2 newCurrentHome:(id)arg3 newInvitations:(id)arg4 newAppData:(id)arg5 refreshRequested:(bool)arg6;
- (void)_notifyAccessAllowedWhenLockedUpdated:(bool)arg1;
- (void)_notifyDelegateOfAppDataUpdate;
- (void)_notifyResidentProvisioningStatus:(unsigned long long)arg1;
- (void)_pingDeviceWithUUID:(id)arg1 completionHandler:(id)arg2;
- (void)_primaryAccountDidChange:(id)arg1 modified:(bool)arg2 completionHandler:(id)arg3;
- (void)_primaryAccountWasDeletedWithCompletionHandler:(id)arg1;
- (id)_privateDelegate;
- (void)_processHomeConfigurationRequest:(id)arg1 refreshRequested:(bool)arg2;
- (void)_queryHomeKitUsageStateWithCompletionHandler:(id)arg1;
- (void)_queryMetadata:(id)arg1 completionHandler:(id)arg2;
- (void)_queryVersionWithCompletionHandler:(id)arg1;
- (void)_queryiCloudSwitchStateWithCompletionHandler:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)_removeCacheFile;
- (void)_removeHome:(id)arg1 completionHandler:(id)arg2;
- (void)_setMetadata:(id)arg1 completionHandler:(id)arg2;
- (void)_setResidentProvisioningStatus:(unsigned long long)arg1;
- (void)_shouldDisplayiCloudSwitchWithCompletionHandler:(id)arg1;
- (void)_start;
- (void)_updateAccessAllowedWhenLocked:(bool)arg1 completionHandler:(id)arg2;
- (void)_updateAppData:(id)arg1;
- (void)_updateApplicationData:(id)arg1 completionHandler:(id)arg2;
- (void)_updateCurrentHome:(id)arg1;
- (void)_updateDataSyncState:(id)arg1;
- (void)_updateHomes:(id)arg1;
- (void)_updateInvitation:(id)arg1 invitationState:(long long)arg2 completionHandler:(id)arg3;
- (void)_updatePrimaryHome:(id)arg1 completionHandler:(id)arg2;
- (void)_updateResidentEnabledForThisDevice:(bool)arg1 completionHandler:(id)arg2;
- (void)_updateiCloudSwitchState:(bool)arg1 completionHandler:(id)arg2;
- (void)addHomeWithName:(id)arg1 completionHandler:(id)arg2;
- (id)applicationData;
- (void)checkEventValidity:(id)arg1 completion:(id)arg2;
- (id)clientQueue;
- (id)currentHome;
- (id)currentHomes;
- (unsigned long long)dataSyncState;
- (void)dealloc;
- (id)delegate;
- (id)delegateCaller;
- (void)deleteDuetEvents:(id)arg1 completion:(id)arg2;
- (bool)didUpdateHomes;
- (void)dumpState:(id)arg1 payload:(id)arg2 completion:(id)arg3;
- (void)eraseHomeDataAndDeleteMetadata:(bool)arg1 completionHandler:(id)arg2;
- (void)eraseHomeDataWithCompletionHandler:(id)arg1;
- (bool)fetchInProgress;
- (unsigned long long)generationCounter;
- (id)homeCache;
- (id)homeCacheDir;
- (id)homeInvitations;
- (id)homes;
- (id)incomingHomeInvitations;
- (id)init;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (bool)isAccessAllowedWhenLocked;
- (bool)isDataSyncInProgress;
- (bool)isResidentEnabledForThisDevice;
- (bool)isThisDeviceResidentCapable;
- (bool)isViewServiceActive;
- (id)locationHandler;
- (void)logAppViewEvent:(id)arg1 name:(id)arg2 uuid:(id)arg3 information:(id)arg4 completion:(id)arg5;
- (void)logControl:(id)arg1 completionHandler:(id)arg2;
- (id)mergeOperationQueue;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (unsigned long long)metadataVersion;
- (id)msgDispatcher;
- (void)notifyResidentCapableUpdated:(bool)arg1;
- (void)notifyResidentEnabledUpdated:(bool)arg1;
- (id)pendingRequests;
- (void)primaryAccountDidChange:(id)arg1 completionHandler:(id)arg2;
- (void)primaryAccountWasDeletedWithCompletionHandler:(id)arg1;
- (void)primaryAccountWasModified:(id)arg1 completionHandler:(id)arg2;
- (id)primaryHome;
- (id)propertyQueue;
- (void)queryHomeKitUsageStateWithCompletionHandler:(id)arg1;
- (void)queryMetadata:(id)arg1 completionHandler:(id)arg2;
- (void)queryVersionWithCompletionHandler:(id)arg1;
- (void)queryiCloudSwitchStateWithCompletionHandler:(id)arg1;
- (void)removeHome:(id)arg1 completionHandler:(id)arg2;
- (void)resetConfiguration:(bool)arg1 withoutPopup:(bool)arg2 completionHandler:(id)arg3;
- (unsigned long long)residentProvisioningStatus;
- (void)setAccessAllowedWhenLocked:(bool)arg1;
- (void)setApplicationData:(id)arg1;
- (void)setCurrentHome:(id)arg1;
- (void)setCurrentHomes:(id)arg1;
- (void)setDataSyncInProgress:(bool)arg1;
- (void)setDataSyncState:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateCaller:(id)arg1;
- (void)setDidUpdateHomes:(bool)arg1;
- (void)setFetchInProgress:(bool)arg1;
- (void)setGenerationCounter:(unsigned long long)arg1;
- (void)setHomeCache:(id)arg1;
- (void)setHomeCacheDir:(id)arg1;
- (void)setHomeInvitations:(id)arg1;
- (void)setMergeOperationQueue:(id)arg1;
- (void)setMetadata:(id)arg1 completionHandler:(id)arg2;
- (void)setMetadataVersion:(unsigned long long)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setPendingRequests:(id)arg1;
- (void)setPrimaryHome:(id)arg1;
- (void)setResidentEnabledForThisDevice:(bool)arg1;
- (void)setResidentProvisioningStatus:(unsigned long long)arg1;
- (void)setThisDeviceResidentCapable:(bool)arg1;
- (void)setUuid:(id)arg1;
- (void)setViewServiceActive:(bool)arg1;
- (void)setXpcClient:(id)arg1;
- (void)shouldDisplayiCloudSwitchWithCompletionHandler:(id)arg1;
- (void)updateAccessAllowedWhenLocked:(bool)arg1 completionHandler:(id)arg2;
- (void)updateApplicationData:(id)arg1 completionHandler:(id)arg2;
- (void)updatePrimaryHome:(id)arg1 completionHandler:(id)arg2;
- (void)updateResidentEnabledForThisDevice:(bool)arg1 completionHandler:(id)arg2;
- (void)updateiCloudSwitchState:(bool)arg1 completionHandler:(id)arg2;
- (id)uuid;
- (id)xpcClient;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (bool)hf_hasSeenOnboardingWelcomeView;
- (id)hf_homeWithIdentifier:(id)arg1;
- (id)hf_orderedHomes;
- (id)hf_orderedHomesList;
- (id)hf_prettyDescriptionOfType:(unsigned long long)arg1;
- (id)hf_serializedStateDumpRepresentation;
- (id)hf_setHasSeenOnboardingWelcomeView:(bool)arg1;
- (id)hf_setOrderedHomes:(id)arg1;

@end
