/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDAccountStore : ACAccountStore <ACDAccountStoreProtocol> {
    ACDAccessPluginManager * _accessPluginManager;
    NSMutableArray * _accountChanges;
    ACDAuthenticationDialogManager * _authenticationDialogManager;
    ACDAuthenticationPluginManager * _authenticationPluginManager;
    ACDClientAuthorizationManager * _authorizationManager;
    ACDClient * _client;
    ACDDatabase * _database;
    ACDDataclassOwnersManager * _dataclassOwnersManager;
    <ACDAccountStoreDelegate> * _delegate;
    ACDFakeRemoteAccountStoreSession * _fakeRemoteAccountStoreSession;
    ACDAccountStoreFilter * _filter;
    bool  _migrationInProgress;
    bool  _notificationsEnabled;
    ACRemoteDeviceProxy * _remoteDeviceProxy;
}

@property (nonatomic, retain) ACDAccessPluginManager *accessPluginManager;
@property (nonatomic, retain) ACDAuthenticationDialogManager *authenticationDialogManager;
@property (nonatomic, retain) ACDAuthenticationPluginManager *authenticationPluginManager;
@property (nonatomic, readonly) ACDClientAuthorizationManager *authorizationManager;
@property (nonatomic) ACDClient *client;
@property (nonatomic, retain) ACDDataclassOwnersManager *dataclassOwnersManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ACDAccountStoreDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) ACDAccountStoreFilter *filter;
@property (readonly) unsigned long long hash;
@property (getter=isMigrationInProgress, nonatomic) bool migrationInProgress;
@property (nonatomic) bool notificationsEnabled;
@property (nonatomic, retain) ACRemoteDeviceProxy *remoteDeviceProxy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_accountTypeWithIdentifier:(id)arg1;
- (id)_accountWithIdentifier:(id)arg1;
- (id)_accountsWithAcountType:(id)arg1 error:(id*)arg2;
- (id)_addAccountNoSave:(id)arg1 withDataclassActions:(id)arg2 error:(id*)arg3;
- (id)_allAccounts_sync;
- (bool)_canManagedAccountType:(id)arg1 syncManagedDataclass:(id)arg2;
- (bool)_canSaveAccount:(id)arg1;
- (id)_childAccountsForAccountWithID:(id)arg1;
- (id)_clientTokenForAccountIdentifier:(id)arg1 error:(id)arg2;
- (id)_clientTokenQueue;
- (void)_completeSave:(id)arg1 dataclassActions:(id)arg2 completion:(id)arg3;
- (id)_credentialItemWithAccountIdentifier:(id)arg1 serviceName:(id)arg2;
- (id)_dataclassWithName:(id)arg1 createIfNecessary:(bool)arg2;
- (void)_deleteAccountNoSave:(id)arg1 withDataclassActions:(id)arg2 error:(id*)arg3;
- (id)_displayAccountForAccount:(id)arg1;
- (id)_handleAccountAdd:(id)arg1 withDataclassActions:(id)arg2;
- (id)_handleAccountMod:(id)arg1 withDataclassActions:(id)arg2;
- (bool)_isManagedAccount:(id)arg1 enabledForManagedDataclass:(id)arg2;
- (id)_legacyCredentialForAccount:(id)arg1 client:(id)arg2 error:(id*)arg3;
- (id)_lockForAccountType:(id)arg1;
- (void)_noteAccountStoreDidSaveAccountsWithAccountTypeIdentifiers:(id)arg1 accountIdentifiers:(id)arg2;
- (id)_removeAccountNoSave:(id)arg1 withDataclassActions:(id)arg2;
- (void)_removeClientTokenForAccountIdentifer:(id)arg1;
- (void)_requestAccessForAccountTypeWithIdentifier:(id)arg1 options:(id)arg2 allowUserInteraction:(bool)arg3 withHandler:(id)arg4;
- (id)_save;
- (void)_setAccountManagedObjectRelationships:(id)arg1 withAccount:(id)arg2 oldAccount:(id)arg3 error:(id*)arg4;
- (void)_updateAccountNoSave:(id)arg1 withDataclassActions:(id)arg2 error:(id*)arg3;
- (void)_updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 withHandler:(id)arg2;
- (void)accessKeysForAccountType:(id)arg1 handler:(id)arg2;
- (id)accessPluginManager;
- (void)accountExistsWithDescription:(id)arg1 completion:(id)arg2;
- (void)accountIdentifiersEnabledForDataclass:(id)arg1 handler:(id)arg2;
- (void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(id)arg3;
- (void)accountIdentifiersEnabledToSyncDataclass:(id)arg1 handler:(id)arg2;
- (id)accountTypeWithIdentifier:(id)arg1;
- (void)accountTypeWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)accountTypesWithHandler:(id)arg1;
- (void)accountWithIdentifier:(id)arg1 handler:(id)arg2;
- (bool)accountsExistWithAccountTypeIdentifier:(id)arg1;
- (void)accountsOnPairedDeviceWithAccountType:(id)arg1 handler:(id)arg2;
- (void)accountsWithAccountType:(id)arg1 handler:(id)arg2;
- (id)accountsWithAccountTypeIdentifier:(id)arg1;
- (void)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 completion:(id)arg3;
- (void)accountsWithHandler:(id)arg1;
- (void)addAccountNoSave:(id)arg1 error:(id*)arg2;
- (void)addClientToken:(id)arg1 forAccountIdentifier:(id)arg2 completion:(id)arg3;
- (void)appPermissionsForAccountType:(id)arg1 withHandler:(id)arg2;
- (id)authenticationDialogManager;
- (id)authenticationPluginManager;
- (id)authorizationManager;
- (void)canSaveAccount:(id)arg1 completion:(id)arg2;
- (void)childAccountsForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)childAccountsWithAccountTypeIdentifier:(id)arg1 parentAccountIdentifier:(id)arg2 handler:(id)arg3;
- (void)clearAllPermissionsGrantedForAccountType:(id)arg1 withHandler:(id)arg2;
- (void)clearGrantedPermissionsForAccountType:(id)arg1 withHandler:(id)arg2;
- (id)client;
- (void)clientTokenForAccountIdentifier:(id)arg1 completion:(id)arg2;
- (void)connectToRemoteAccountStoreUsingEndpoint:(id)arg1;
- (void)credentialForAccount:(id)arg1 serviceID:(id)arg2 handler:(id)arg3;
- (void)credentialForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)credentialItemForAccount:(id)arg1 serviceName:(id)arg2 completion:(id)arg3;
- (void)credentialItemsWithCompletion:(id)arg1;
- (void)dataclassActionsForAccountDeletion:(id)arg1 completion:(id)arg2;
- (void)dataclassActionsForAccountSave:(id)arg1 completion:(id)arg2;
- (id)dataclassOwnersManager;
- (void)dataclassesWithHandler:(id)arg1;
- (id)delegate;
- (void)deleteAccountNoSave:(id)arg1 error:(id*)arg2;
- (void)disconnectFromRemoteAccountStore;
- (void)discoverPropertiesForAccount:(id)arg1 options:(id)arg2 completion:(id)arg3;
- (void)displayAccountTypeForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)enabledDataclassesForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (id)filter;
- (void)grantedPermissionsForAccountType:(id)arg1 withHandler:(id)arg2;
- (void)handleURL:(id)arg1;
- (id)initWithClient:(id)arg1;
- (void)insertAccountType:(id)arg1 withHandler:(id)arg2;
- (void)insertCredentialItem:(id)arg1 completion:(id)arg2;
- (bool)isMigrationInProgress;
- (void)isPerformingDataclassActionsForAccount:(id)arg1 completion:(id)arg2;
- (void)isPushSupportedForAccount:(id)arg1 completion:(id)arg2;
- (void)isTetheredSyncingEnabledForDataclass:(id)arg1 completion:(id)arg2;
- (void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(id)arg2;
- (id)masterCredentialForAccountIdentifier:(id)arg1;
- (bool)notificationsEnabled;
- (void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 withChangeType:(id)arg2;
- (void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 withChangeType:(id)arg2 completion:(id)arg3;
- (void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(bool)arg3 completion:(id)arg4;
- (void)openAuthenticationURLForAccount:(id)arg1 withDelegateClassName:(id)arg2 fromBundleAtPath:(id)arg3 shouldConfirm:(bool)arg4 completion:(id)arg5;
- (void)parentAccountForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)permissionForAccountType:(id)arg1 withHandler:(id)arg2;
- (void)provisionedDataclassesForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (id)remoteAccountStoreSession;
- (id)remoteDeviceProxy;
- (void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(id)arg3;
- (void)removeAccountType:(id)arg1 withHandler:(id)arg2;
- (void)removeAccountsFromPairedDeviceWithCompletion:(id)arg1;
- (void)removeCredentialItem:(id)arg1 completion:(id)arg2;
- (void)renewCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(id)arg3;
- (void)requestAccessForAccountTypeWithIdentifier:(id)arg1 options:(id)arg2 withHandler:(id)arg3;
- (void)saveAccount:(id)arg1 pid:(id)arg2 verify:(bool)arg3 dataclassActions:(id)arg4 completion:(id)arg5;
- (void)saveAccount:(id)arg1 toPairedDeviceWithOptions:(id)arg2 completion:(id)arg3;
- (void)saveAccount:(id)arg1 verify:(bool)arg2 dataclassActions:(id)arg3 completion:(id)arg4;
- (void)saveAccount:(id)arg1 withHandler:(id)arg2;
- (void)saveCredentialItem:(id)arg1 completion:(id)arg2;
- (void)setAccessPluginManager:(id)arg1;
- (void)setAuthenticationDialogManager:(id)arg1;
- (void)setAuthenticationPluginManager:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setClientBundleID:(id)arg1 withHandler:(id)arg2;
- (void)setCredential:(id)arg1 forAccount:(id)arg2 serviceID:(id)arg3 completion:(id)arg4;
- (void)setDataclassOwnersManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFilter:(id)arg1;
- (void)setMigrationInProgress:(bool)arg1;
- (void)setNotificationsEnabled:(bool)arg1;
- (void)setPermissionGranted:(id)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3 withHandler:(id)arg4;
- (void)setRemoteDeviceProxy:(id)arg1;
- (void)supportedDataclassesForAccountType:(id)arg1 handler:(id)arg2;
- (void)syncableDataclassesForAccountType:(id)arg1 handler:(id)arg2;
- (void)tetheredSyncSourceTypeForDataclass:(id)arg1 completion:(id)arg2;
- (void)triggerKeychainMigrationIfNecessary:(id)arg1;
- (void)typeIdentifierForDomain:(id)arg1 withHandler:(id)arg2;
- (void)updateAccountNoSave:(id)arg1 error:(id*)arg2;
- (void)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 withHandler:(id)arg2;
- (void)verifyCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(id)arg3;
- (void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)arg1 completion:(id)arg2;

@end
