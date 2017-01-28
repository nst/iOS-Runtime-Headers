/* Generated by RuntimeBrowser.
 */

@protocol CDPRemoteSecretEntryDelegate

@required

- (void)cancelledRemoteSecretEntry:(CDPRemoteSecretEntryViewController *)arg1;
- (void)dismissRecoveryFlow:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: CDPRemoteSecretEntryViewController *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, void*
- (void)exceededMaximumAttemptsForRemoteSecretEntry:(CDPRemoteSecretEntryViewController *)arg1;
- (void)finishValidation:(CDPRemoteSecretEntryViewController *)arg1 withError:(NSError *)arg2;
- (void)performAccountReset:(CDPRemoteSecretEntryViewController *)arg1;
- (void)performRemoteApproval:(CDPRemoteSecretEntryViewController *)arg1;
- (bool)performingAccountRecovery;
- (void)remoteSecretEntry:(CDPRemoteSecretEntryViewController *)arg1 depletedRemainingAttemptsForDevice:(CDPDevice *)arg2;
- (void)remoteSecretEntry:(CDPRemoteSecretEntryViewController *)arg1 didAcceptValidRemoteSecretForDevice:(CDPDevice *)arg2;

@end
