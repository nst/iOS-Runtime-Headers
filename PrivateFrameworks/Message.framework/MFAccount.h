/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFAccount : NSObject {
    ACAccount * _persistentAccount;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _persistentAccountLock;
    NSString * _sourceApplicationBundleIdentifier;
    NSMutableDictionary * _unsavedAccountProperties;
}

@property (readonly) ACAccount *accountForRenewingCredentials;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSString *hostname;
@property (readonly) NSString *identifier;
@property (readonly) NSString *managedTag;
@property (readonly) ACAccount *parentAccount;
@property (readonly) NSString *parentAccountIdentifier;
@property (readonly) ACAccount *persistentAccount;
@property (readonly) NSDictionary *properties;
@property (nonatomic, copy) NSString *sourceApplicationBundleIdentifier;
@property (readonly) NSString *syncStoreIdentifier;
@property (readonly) NSString *type;
@property (readonly) NSString *uniqueId;
@property (nonatomic, retain) NSString *username;

+ (id)_accountClass;
+ (id)_basicPropertyForKey:(id)arg1 persistentAccount:(id)arg2;
+ (id)_newPersistentAccount;
+ (bool)_setBasicProperty:(id)arg1 forKey:(id)arg2 persistentAccount:(id)arg3;
+ (id)accountPropertiesValueForKey:(id)arg1 value:(id)arg2;
+ (id)accountTypeIdentifier;
+ (id)accountTypeString;
+ (id)accountWithPersistentAccount:(id)arg1;
+ (id)accountWithProperties:(id)arg1;
+ (id)authSchemesForAccountClass;
+ (unsigned int)defaultPortNumber;
+ (unsigned int)defaultSecurePortNumber;
+ (id)displayedAccountTypeString;
+ (id)displayedShortAccountTypeString;
+ (id)excludedAccountPropertyKeys;
+ (id)existingAccountForUniqueID:(id)arg1;
+ (id)hostname;
+ (bool)isCommonPortNumber:(unsigned int)arg1;
+ (bool)isPredefinedAccountType;
+ (bool)isSSLEditable;
+ (void*)legacyKeychainProtocol;
+ (id)newAccountWithDictionary:(id)arg1;
+ (id)predefinedValueForKey:(id)arg1;
+ (id)propertiesWhichRequireValidation;
+ (id)saslProfileName;
+ (void)setShouldHealAccounts:(bool)arg1;
+ (bool)shouldHealAccounts;
+ (id)supportedDataclasses;
+ (bool)usesSSL;

- (bool)_boolForAccountInfoKey:(id)arg1 defaultValue:(bool)arg2;
- (bool)_connectAndAuthenticate:(id)arg1;
- (id)_credential;
- (id)_credentialCreateIfNecessary:(bool)arg1;
- (id)_credentialCreateIfNecessary:(bool)arg1 error:(id*)arg2;
- (id)_newConnection;
- (id)_objectForAccountInfoKey:(id)arg1;
- (id)_password;
- (id)_passwordWithError:(id*)arg1;
- (void)_queueAccountInfoDidChange;
- (bool)_renewCredentialsWithOptions:(id)arg1 completion:(id)arg2;
- (void)_setAccountProperties:(id)arg1;
- (bool)_shouldTryDirectSSLConnectionOnPort:(unsigned int)arg1;
- (id)accountClass;
- (id)accountForRenewingCredentials;
- (void)accountInfoDidChange;
- (id)accountPropertyForKey:(id)arg1;
- (bool)allowsTrustPrompt;
- (id)alternateConnectionSettings;
- (void)applySettingsAsDefault:(id)arg1;
- (id)authenticatedConnection;
- (bool)canGoOffline;
- (id)certUIService;
- (id)clientCertificates;
- (Class)connectionClass;
- (struct __CFString { }*)connectionServiceType;
- (id)copyDiagnosticInformation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)credentialAccessibility;
- (id)credentialItemForKey:(id)arg1;
- (id)credentialItemForKey:(id)arg1 error:(id*)arg2;
- (id)customDescriptionForError:(id)arg1 authScheme:(id)arg2 defaultDescription:(id)arg3;
- (void)dealloc;
- (id)defaultConnectionSettings;
- (unsigned int)defaultPortNumber;
- (unsigned int)defaultSecurePortNumber;
- (id)displayName;
- (id)domain;
- (bool)enableAccount;
- (id)enabledDataclasses;
- (bool)fetchTokensIfNecessary:(id*)arg1;
- (unsigned long long)hash;
- (id)hostname;
- (id)identifier;
- (id)inaccessiblePasswordErrorWithTitle:(id)arg1;
- (id)init;
- (id)initWithPersistentAccount:(id)arg1;
- (id)initWithProperties:(id)arg1;
- (id)insecureConnectionSettings;
- (bool)isActive;
- (bool)isEnabledForDataclass:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isManaged;
- (bool)isSyncingNotes;
- (id)loginDisabledErrorWithTitle:(id)arg1;
- (id)managedTag;
- (id)missingPasswordErrorWithTitle:(id)arg1;
- (id)nameForMailboxUid:(id)arg1;
- (id)oauth2Token;
- (id)parentAccount;
- (id)parentAccountIdentifier;
- (id)password;
- (id)persistentAccount;
- (void)persistentAccountDidChange:(id)arg1 previousAccount:(id)arg2;
- (unsigned int)portNumber;
- (id)preferredAuthScheme;
- (bool)promptUserForPasswordWithTitle:(id)arg1 message:(id)arg2 completionHandler:(id)arg3;
- (bool)promptUserForWebLoginWithURL:(id)arg1 shouldConfirm:(bool)arg2 completionHandler:(id)arg3;
- (id)properties;
- (void)releaseAllConnections;
- (void)releaseAllForcedConnections;
- (void)removeAccountPropertyForKey:(id)arg1;
- (void)removePersistentAccount;
- (void)removeValueInAccountPropertiesForKey:(id)arg1;
- (bool)renewCredentialsWithCompletion:(id)arg1;
- (void)reportAuthenticationError:(id)arg1 authScheme:(id)arg2;
- (bool)requiresAuthentication;
- (void)savePersistentAccount;
- (id)secureConnectionSettings;
- (id)secureServiceName;
- (id)serviceName;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (void)setActive:(bool)arg1;
- (void)setClientCertificates:(id)arg1;
- (void)setCredentialItem:(id)arg1 forKey:(id)arg2;
- (bool)setCredentialItem:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)setDisplayName:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setHostname:(id)arg1;
- (bool)setOAuth2Token:(id)arg1 refreshToken:(id)arg2 error:(id*)arg3;
- (void)setPassword:(id)arg1;
- (void)setPersistentAccount:(id)arg1;
- (void)setPortNumber:(unsigned int)arg1;
- (void)setPreferredAuthScheme:(id)arg1;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setTryDirectSSL:(bool)arg1;
- (void)setUsername:(id)arg1;
- (void)setUsesSSL:(bool)arg1;
- (void)setValueInAccountProperties:(id)arg1 forKey:(id)arg2;
- (bool)shouldDisplayHostnameInErrorMessages;
- (bool)shouldEnableAfterError:(id)arg1;
- (bool)shouldFetchACEDBInfoForError:(id)arg1;
- (id)sourceApplicationBundleIdentifier;
- (bool)supportsMailDrop;
- (id)syncStoreIdentifier;
- (id)type;
- (id)uniqueId;
- (id)username;
- (bool)usesSSL;
- (void)validateConnections;
- (id)valueInAccountPropertiesForKey:(id)arg1;

@end
