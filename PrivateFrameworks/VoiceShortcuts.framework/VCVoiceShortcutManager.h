/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCVoiceShortcutManager : NSObject <HMHomeManagerDelegate, VCSyncDataHandling> {
    NSObject<OS_dispatch_queue> * _dataMigratorQueue;
    VCCoreDataStore * _dataStore;
    HMHomeManager * _hmHomeManager;
    <VCVoiceShortcutSyncService> * _masterSyncService;
    unsigned long long  _persistenceType;
    NSMapTable * _syncServices;
    NSObject<OS_dispatch_queue> * _syncServicesIsolationQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dataMigratorQueue;
@property (nonatomic, readonly) VCCoreDataStore *dataStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHomeManager *hmHomeManager;
@property (nonatomic) <VCVoiceShortcutSyncService> *masterSyncService;
@property (nonatomic) bool needsToBeRehydratedFromMasterSyncService;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMapTable *syncServices;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *syncServicesIsolationQueue;

+ (void)initialize;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)addExtraVocabForDemoIfAppropriate:(id)arg1;
- (void)addVoiceShortcut:(id)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (void)applyChangeSet:(struct NSOrderedSet { Class x1; }*)arg1 fromSyncServiceWithIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)cleanUpAfterDeletedApps;
- (id)createMessageFromData:(id)arg1;
- (id)dataMigratorQueue;
- (id)dataStore;
- (id)dataStoreWithError:(id*)arg1;
- (void)dataWasUpdatedFromSyncServiceWithIdentifier:(id)arg1;
- (void)dataWasUpdatedInResponseToUserAction;
- (bool)deleteSyncedData:(id*)arg1;
- (void)deleteVoiceShortcutWithIdentifier:(id)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (void)deregisterSyncServiceWithIdentifier:(id)arg1;
- (void)describeSyncStateIncludingDeleted:(bool)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (void)enumerateSyncServicesUsingBlock:(id /* block */)arg1;
- (void)getInactiveAppsWithAccessSpecifier:(id)arg1 completion:(id /* block */)arg2;
- (void)getNumberOfVoiceShortcutsWithAccessSpecifier:(id)arg1 completion:(id /* block */)arg2;
- (void)getShortcutSuggestionsForAllAppsWithLimit:(unsigned long long)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (void)getShortcutSuggestionsForAppWithBundleIdentifier:(id)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (void)getUnsyncedChangesForSyncServiceWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)getVoiceShortcutWithIdentifier:(id)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (void)getVoiceShortcutWithPhrase:(id)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (void)getVoiceShortcutsForAppsWithBundleIdentifiers:(id)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (void)getVoiceShortcutsWithAccessSpecifier:(id)arg1 completion:(id /* block */)arg2;
- (void)handleAssistantPrefChangedNotification;
- (int)handledMessageType;
- (id)hmHomeManager;
- (id)initWithPersistenceType:(unsigned long long)arg1 error:(id*)arg2;
- (bool)isSyncServiceRegisteredWithIdentifier:(id)arg1;
- (void)markChangesAsSynced:(struct NSOrderedSet { Class x1; }*)arg1 withSyncServiceWithIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)masterSyncService;
- (bool)needsToBeRehydratedFromMasterSyncService;
- (bool)phraseHasHomeKitConflict:(id)arg1;
- (void)populateBlacklistStatusOnVoiceShortcut:(id)arg1 withAccessSpecifier:(id)arg2;
- (void)registerSyncService:(id)arg1 asMaster:(bool)arg2;
- (void)rehydrateFromMasterSyncServiceIfNeeded;
- (void)removeSyncStateForChanges:(id)arg1 withSyncServiceWithIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)removeSyncStateForSyncServiceWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)requestDataMigrationWithAccessSpecifier:(id)arg1 completion:(id /* block */)arg2;
- (void)requestSyncForServiceClassName:(id)arg1 forceReset:(bool)arg2 accessSpecifier:(id)arg3 completion:(id /* block */)arg4;
- (void)requestVoiceShortuctsSpotlightIndexUpdate;
- (id)sanitizePhrase:(id)arg1;
- (void)setHmHomeManager:(id)arg1;
- (void)setMasterSyncService:(id)arg1;
- (void)setNeedsToBeRehydratedFromMasterSyncService:(bool)arg1;
- (void)setShortcutSuggestions:(id)arg1 forAppWithBundleIdentifier:(id)arg2 accessSpecifier:(id)arg3;
- (id)syncServices;
- (id)syncServicesIsolationQueue;
- (void)syncVocabularyToServer;
- (void)updateVoiceShortcutWithIdentifier:(id)arg1 phrase:(id)arg2 workflow:(id)arg3 accessSpecifier:(id)arg4 completion:(id /* block */)arg5;
- (void)updateVoiceShortcutsSharedVocabularyWithAccessSpecifier:(id)arg1 completion:(id /* block */)arg2;
- (void)validateVoiceShortcutPhrases:(id)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;

@end
