/* Generated by RuntimeBrowser.
 */

@protocol UMUserManagement <NSObject>

@required

- (bool)canAccessUserProperties;
- (void)createUser:(void *)arg1 passcodeData:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: UMUser *, NSData *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSError *, void*
- (UMUser *)currentUser;
- (void)deleteUser:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: UMUser *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSError *, void*
- (void)disableUser:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: UMUser *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSError *, void*
- (bool)isMultiUser;
- (void)loadUser:(void *)arg1 passcodeData:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: UMUser *, NSData *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSError *, void*
- (unsigned long long)maxNumberOfUsers;
- (void)registerUserListUpdateObserver:(id <UMUserListUpdateObserver>)arg1;

@end
