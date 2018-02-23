/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYLegacyStore : SYStore <IDSServiceDelegate, NMSMessageCenterDelegate> {
    bool  _alwaysWins;
    NSMutableIndexSet * _batchChunkUnackedIndices;
    unsigned long long  _batchCounter;
    NSString * _databaseFileName;
    bool  _deferredFullSync;
    bool  _encryptPayloads;
    bool  _fullSyncWasRequestedBySlave;
    struct __CFString { } * _loggingFacility;
    NMSMessageCenter * _messageCenter;
    id /* block */  _nextBatchStep;
    NSError * _overflowRetryError;
    NSObject<OS_dispatch_source> * _overflowRetryTimer;
    NSUUID * _pairedDeviceID;
    SYPersistentStore * _persistentStore;
    long long  _priority;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _registeredNotificationHandlers;
    NSMutableDictionary * _sendSignals;
    NSString * _service;
    SYRetryTimer * _syncRetryTimer;
    bool  _tracksChanges;
    SYVectorClock * _vectorClock;
}

@property (nonatomic) bool alwaysWins;
@property (nonatomic, retain) NSString *databaseFileName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool encryptPayloads;
@property (nonatomic) bool fullSyncWasRequestedBySlave;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct __CFString { }*loggingFacility;
@property (nonatomic, retain) NMSMessageCenter *messageCenter;
@property (nonatomic, copy) id /* block */ nextBatchStep;
@property (nonatomic, retain) NSUUID *pairedDeviceID;
@property (nonatomic, retain) SYPersistentStore *persistentStore;
@property (nonatomic) long long priority;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool registeredNotificationHandlers;
@property (nonatomic, retain) NSString *service;
@property (readonly) Class superclass;
@property (nonatomic, retain) SYVectorClock *vectorClock;

+ (id)fullSyncActivityDictionary;

- (void).cxx_destruct;
- (bool)_allowDeltaSyncWithContext:(id)arg1 error:(id*)arg2;
- (id)_batchChunkUnackedIndices;
- (bool)_checkMessageHeader:(id)arg1 messageID:(id)arg2;
- (void)_copyPeerClockFromMessageHeaderIfNecessary:(id)arg1;
- (void)_devicePaired:(id)arg1;
- (void)_deviceUnpaired:(id)arg1;
- (id)_getPairedDeviceID;
- (id)_getPairingStorePath;
- (void)_handleIDSOverflowWithError:(id)arg1;
- (void)_handleObjectChanges:(id)arg1 contextInfo:(id)arg2 idsOptions:(id)arg3 blockUntilSent:(bool)arg4 reportError:(id /* block */)arg5 notifyingTransaction:(id)arg6;
- (bool)_isPairedWithDevice:(id)arg1;
- (bool)_isUsingGenericCache;
- (void)_listenForPrefsChangeNotifications;
- (id)_pathForMessageCenterCache;
- (void)_postBatchEndMessageWithState:(id)arg1 error:(id)arg2 then:(id /* block */)arg3;
- (void)_postBatchStartMessageWithState:(id)arg1 then:(id /* block */)arg2;
- (void)_postVersionRejectedForMessageID:(id)arg1;
- (void)_prefsChanged;
- (void)_recordLastSeqNo:(id)arg1;
- (void)_restartBatchSyncWithState:(id)arg1 then:(id /* block */)arg2;
- (void)_retrySync;
- (void)_sendBatchChunk:(id)arg1 withState:(id)arg2 then:(id /* block */)arg3;
- (void)_setupMessageCenter_LOCKED;
- (bool)_shouldIgnoreSyncID:(id)arg1;
- (bool)_shouldSkipNonSyncMessages;
- (void)_syncEndedWithSyncID:(id)arg1;
- (void)_transaction:(id /* block */)arg1 context:(id)arg2 idsOptions:(id)arg3 blockUntilSent:(bool)arg4 reportError:(id /* block */)arg5;
- (void)_updateMessageCenterPrefs:(id)arg1;
- (void)_vectorClockUpdated;
- (bool)addObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 error:(id*)arg4;
- (bool)alwaysWins;
- (id)databaseFileName;
- (void)dealloc;
- (bool)deleteObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 error:(id*)arg4;
- (void)didEndDeltaSync;
- (bool)encryptPayloads;
- (bool)fullSyncWasRequestedBySlave;
- (void)handleBatchSyncChunk:(id)arg1 response:(id)arg2;
- (void)handleBatchSyncEnd:(id)arg1 response:(id)arg2;
- (void)handleBatchSyncStart:(id)arg1;
- (void)handleChangeMessage:(id)arg1;
- (void)handleFullSyncRequest:(id)arg1 response:(id)arg2;
- (void)handleObjectChanges:(id)arg1 contextInfo:(id)arg2 idsOptions:(id)arg3 blockUntilSent:(bool)arg4 reportError:(id /* block */)arg5;
- (void)handleSyncAllObjects:(id)arg1 response:(id)arg2;
- (bool)hasCompletedFullSync;
- (bool)inDeltaSync;
- (bool)inFullSync;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 isGStore:(bool)arg2 highPriority:(bool)arg3;
- (id)initWithService:(id)arg1;
- (id)initWithService:(id)arg1 isGStore:(bool)arg2 highPriority:(bool)arg3;
- (id)initWithService:(id)arg1 isGStore:(bool)arg2 highPriority:(bool)arg3 isMasterStore:(bool)arg4;
- (id)initWithService:(id)arg1 isGStore:(bool)arg2 highPriority:(bool)arg3 isMasterStore:(bool)arg4 tracksChanges:(bool)arg5;
- (id)initWithService:(id)arg1 isGStore:(bool)arg2 priority:(long long)arg3 isMasterStore:(bool)arg4;
- (id)initWithService:(id)arg1 isGStore:(bool)arg2 priority:(long long)arg3 isMasterStore:(bool)arg4 tracksChanges:(bool)arg5;
- (bool)isPaired;
- (void)logChanges:(id)arg1;
- (struct __CFString { }*)loggingFacility;
- (long long)maxBytesInFlight;
- (id)messageCenter;
- (void)messageCenter:(id)arg1 didReceiveUnknownRequest:(id)arg2;
- (void)messageCenter:(id)arg1 didResolveIDSIdentifier:(id)arg2 forResponse:(id)arg3;
- (void)messageCenter:(id)arg1 didResolveIDSIdentifierForRequest:(id)arg2;
- (void)messageCenter:(id)arg1 didSuccessfullyDeliverRequestWithIdentifier:(id)arg2 userInfo:(id)arg3;
- (void)messageCenter:(id)arg1 didSuccessfullySendRequestWithIdentifier:(id)arg2 userInfo:(id)arg3;
- (id)newFullSyncContext;
- (id)newMessageHeader;
- (id /* block */)nextBatchStep;
- (bool)objectChanged:(id)arg1 sinceVersion:(unsigned long long)arg2;
- (id)pairedDeviceID;
- (bool)peerState:(id)arg1 fromPeer:(id)arg2 matchesExpectationForChangeCount:(unsigned long long)arg3 offsetAmount:(unsigned long long*)arg4;
- (bool)performBatchedSyncToCurrentDBVersion;
- (void)performFullSync;
- (void)performFullSyncIfNecessary;
- (void)performFullSyncIfNecessaryAskingDelegate:(bool)arg1;
- (void)performFullSyncToCurrentDBVersion;
- (id)persistentStore;
- (void)postUserNotification:(id)arg1 message:(id)arg2;
- (long long)priority;
- (void)processBatchChunkAck:(unsigned int)arg1;
- (bool)processBatchChunkAtIndex:(unsigned int)arg1 encodedObjects:(id)arg2 error:(id*)arg3;
- (void)processBatchSyncEnd:(unsigned long long)arg1;
- (void)processBatchSyncStart;
- (id)queue;
- (bool)registeredNotificationHandlers;
- (void)remoteStoreAllObjects:(id)arg1 fromPeer:(id)arg2 clock:(id)arg3;
- (void)remoteStoreRequestFullSync;
- (void)sendChanges:(id)arg1 context:(id)arg2 options:(id)arg3 sentSignal:(id)arg4;
- (void)sendMessage:(id)arg1 ofType:(unsigned short)arg2 respondingTo:(id)arg3 userInfo:(id)arg4 idsOptions:(id)arg5;
- (id)service;
- (void)setAlwaysWins:(bool)arg1;
- (void)setDatabaseFileName:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeliveryQOS:(unsigned int)arg1;
- (void)setEncryptPayloads:(bool)arg1;
- (void)setFullSyncWasRequestedBySlave:(bool)arg1;
- (void)setLoggingFacility:(struct __CFString { }*)arg1;
- (void)setMaxBytesInFlight:(long long)arg1;
- (void)setMessageCenter:(id)arg1;
- (void)setNeedsFullSyncWithContext:(id)arg1 idsOptions:(id)arg2;
- (void)setNextBatchStep:(id /* block */)arg1;
- (void)setPairedDeviceID:(id)arg1;
- (void)setPersistentStore:(id)arg1;
- (void)setPriority:(long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setRegisteredNotificationHandlers:(bool)arg1;
- (void)setService:(id)arg1;
- (void)setTimeToLive:(double)arg1;
- (void)setTracksChanges:(bool)arg1;
- (void)setVectorClock:(id)arg1;
- (void)setupDatabase;
- (void)setupMessageCenter;
- (void)setupPairingNotifications;
- (long long)state;
- (double)timeToLive;
- (bool)tracksChanges;
- (bool)updateObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 error:(id*)arg4;
- (id)vectorClock;
- (void)willBeginDeltaSync;
- (id)wrapMessage:(id)arg1 ofType:(unsigned short)arg2 respondingTo:(id)arg3 userInfo:(id)arg4;

@end
