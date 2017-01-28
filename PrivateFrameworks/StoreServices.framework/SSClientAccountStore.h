/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSClientAccountStore : SSAccountStore {
    NSArray * _accounts;
    bool  _accountsValid;
}

@property (copy) NSArray *accounts;

- (id)_accountWithUniqueIdentifier:(id)arg1;
- (id)_accountsFromDaemon;
- (id)_addAccount:(id)arg1 asActiveAccount:(bool)arg2 activeLockerAccount:(bool)arg3;
- (id)_copyDaemonAccounts;
- (id)_copyReloadedAccounts;
- (void)_invalidateAccounts;
- (void)_reloadAccountsIfNeeded;
- (void)_signOutWithAccountIDs:(id)arg1 completionBlock:(id)arg2;
- (id)accountWithUniqueIdentifier:(id)arg1;
- (id)accountWithUniqueIdentifier:(id)arg1 reloadIfNecessary:(bool)arg2;
- (id)accountWithUniqueIdentifier:(id)arg1 scope:(long long)arg2;
- (id)accounts;
- (id)activeAccount;
- (id)activeLockerAccount;
- (id)addAccount:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)reloadAccounts;
- (void)setAccountCredits:(id)arg1 forAccountWithUniqueIdentifier:(id)arg2;
- (void)setAccounts:(id)arg1;
- (id)setActiveAccount:(id)arg1;
- (id)setActiveLockerAccount:(id)arg1;
- (void)signOutAccount:(id)arg1;
- (void)signOutAllAccounts;
- (void)signOutAllAccountsWithCompletionBlock:(id)arg1;
- (void)updateAccountsWithMessage:(id)arg1 completionBlock:(id)arg2;

@end
