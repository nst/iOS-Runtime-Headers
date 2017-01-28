/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalAccountsProvider : NSObject {
    ACAccountStore * _accountStore;
    NSMutableArray * _accountsWhenRunningUnitTests;
    bool  _runningUnitTests;
}

@property (nonatomic, retain) ACAccountStore *accountStore;
@property (nonatomic, retain) NSMutableArray *accountsWhenRunningUnitTests;
@property (nonatomic, readonly) NSArray *allAccounts;
@property (nonatomic, readonly) NSArray *enabledAccounts;
@property (nonatomic) bool runningUnitTests;

+ (id)_accountTypeWithIdentifier:(id)arg1 inStore:(id)arg2;
+ (id)_accountsWithAccountType:(id)arg1 inStore:(id)arg2 error:(id*)arg3;
+ (id)_existingAccountForAccount:(id)arg1 inStore:(id)arg2;
+ (id)_uniqueStringsForUsername:(id)arg1;
+ (bool)accountIsDuplicate:(id)arg1 inStore:(id)arg2;
+ (id)defaultProvider;
+ (id)uniqueStringsForHostname:(id)arg1;
+ (id)uniqueStringsForPrincipalPath:(id)arg1;
+ (id)verboseDescriptionForAccount:(id)arg1;

- (void).cxx_destruct;
- (id)_accountWithIdentifier:(id)arg1;
- (id)_cachedAccountWithIdentifier:(id)arg1;
- (id)_providerForCalDAVAccount:(id)arg1;
- (id)_supportedDataclassesForBundleID:(id)arg1;
- (id)_supportedDataclassesForMainBundleID;
- (bool)account:(id)arg1 hasServerURL:(id)arg2;
- (bool)accountIsDuplicate:(id)arg1;
- (id)accountStore;
- (id)accountTypeWithIdentifier:(id)arg1;
- (id)accountWithIdentifier:(id)arg1 returnCachedVersion:(bool)arg2;
- (id)accountsWhenRunningUnitTests;
- (id)accountsWithServerURL:(id)arg1;
- (id)accountsWithServerURL:(id)arg1 username:(id)arg2 returnCachedVersions:(bool)arg3;
- (id)accountsWithUsername:(id)arg1;
- (id)allAccounts;
- (id)allAccountsWithError:(id*)arg1;
- (id)clientTokenForAccountWithIdentifier:(id)arg1;
- (id)delegatePrincipalUIDsForAccount:(id)arg1;
- (id)enabledAccounts;
- (id)existingAccountForAccount:(id)arg1;
- (id)init;
- (void)messageTraceCurrentAccounts;
- (id)oauthTokenForAccount:(id)arg1 tokenType:(id)arg2;
- (void)removeAccount:(id)arg1 withCompletionHandler:(id)arg2;
- (bool)removeAccount:(id)arg1 withError:(id*)arg2;
- (bool)renewCredentialsForAccount:(id)arg1;
- (bool)renewCredentialsForAccount:(id)arg1 forceRenewal:(bool)arg2;
- (void)renewCredentialsForAccount:(id)arg1 forceRenewal:(bool)arg2 withCompletionHandler:(id)arg3;
- (bool)runningUnitTests;
- (void)saveAccount:(id)arg1 verify:(bool)arg2 withCompletionHandler:(id)arg3;
- (bool)saveAccount:(id)arg1 verify:(bool)arg2 withError:(id*)arg3;
- (void)saveAccount:(id)arg1 withCompletionHandler:(id)arg2;
- (bool)saveAccount:(id)arg1 withError:(id*)arg2;
- (void)setAccountStore:(id)arg1;
- (void)setAccountsWhenRunningUnitTests:(id)arg1;
- (void)setRunningUnitTests:(bool)arg1;

@end
