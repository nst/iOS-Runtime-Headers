/* Generated by RuntimeBrowser.
 */

@protocol VSDeveloperServiceProtocol <NSObject>

@required

- (void)addDeveloperIdentityProvider:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: VSIdentityProvider *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, VSFailable *, void*
- (void)fetchDeveloperIdentityProvidersWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, VSFailable *, void*
- (void)removeDeveloperIdentityProviderWithUniqueID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, VSFailable *, void*
- (void)updateExistingDeveloperIdentityProvider:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: VSIdentityProvider *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, VSFailable *, void*

@end
