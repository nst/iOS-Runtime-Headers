/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDStateMachine : NSObject <CDPDCircleDelegate, CDPDSecureBackupDelegate> {
    bool  _attemptedCDPEnable;
    CDPDCircleController * _circleController;
    CDPContext * _context;
    CDPDPCSController * _pcsController;
    CDPDSecureBackupController * _secureBackupController;
    <CDPStateUIProviderInternal> * _uiProvider;
}

@property (nonatomic) bool attemptedCDPEnable;
@property (nonatomic, retain) CDPDCircleController *circleController;
@property (nonatomic, retain) CDPContext *context;
@property (nonatomic, retain) CDPDPCSController *pcsController;
@property (nonatomic, retain) CDPDSecureBackupController *secureBackupController;
@property (nonatomic, retain) <CDPStateUIProviderInternal> *uiProvider;

- (void).cxx_destruct;
- (void)_attemptBackupRecoveryByPromptingForRemoteSecretWithLocalSecret:(id)arg1 localSecretType:(unsigned long long)arg2 useCachedSecret:(bool)arg3 hasPeersForRemoteApproval:(bool)arg4 completion:(id)arg5;
- (void)_attemptBackupRecoveryWithLocalSecret:(id)arg1 type:(unsigned long long)arg2 useCachedSecret:(bool)arg3 hasPeersForRemoteApproval:(bool)arg4 completion:(id)arg5;
- (void)_attemptCDPEnable:(id)arg1;
- (void)_authenticatedRepairCloudDataProtectionStateWithCompletion:(id)arg1;
- (void)_authenticatedShouldPerformRepairWithCompletion:(id)arg1;
- (void)_confirmCDPEligibilityWithCompletion:(id)arg1;
- (void)_disableCloudDataProtectionWithCompletion:(id)arg1;
- (void)_enableKVSForAccount:(id)arg1 store:(id)arg2 completion:(id)arg3;
- (void)_enableSecureBackupWithCompletion:(id)arg1;
- (void)_enrollOrDisableCDPAfterEnabledStateVerified:(id)arg1;
- (void)_handleBackupRecoveryWithPeersForRemoteApproval:(bool)arg1 circleStatus:(int)arg2 completion:(id)arg3;
- (void)_handleCloudDataProtectionStateWithCompletion:(id)arg1;
- (void)_handleJoinCircleEvent:(id)arg1;
- (void)_handlePreflightError:(id)arg1 completion:(id)arg2;
- (void)_handleiCDPStatusCheckError:(id)arg1 completion:(id)arg2;
- (void)_performInteractivelyAuthenticatedRepair:(id)arg1;
- (id)_predicateForRecordUpgradeCheck;
- (void)_preflightAccountStateWithContext:(id)arg1 completion:(id)arg2;
- (void)_recoverSecureBackupWithHasPeersForRemoteApproval:(bool)arg1 completion:(id)arg2;
- (void)_recoverSecureBackupWithRemotePeers:(bool)arg1 completion:(id)arg2;
- (void)_refreshWithContext:(id)arg1;
- (void)_requestPostLockoutAccountReset:(id)arg1;
- (void)_resetAccountCDPStateWithCompletion:(id)arg1;
- (bool)attemptedCDPEnable;
- (id)circleController;
- (void)circleController:(id)arg1 secureBackupRecordsArePresentWithCompletion:(id)arg2;
- (id)circlePeerIDForSecureBackupController:(id)arg1;
- (id)context;
- (id)contextForController:(id)arg1;
- (void)dealloc;
- (void)getStingrayDisableEligibilityWithCompletion:(id)arg1;
- (void)handleCloudDataProtectionStateWithCompletion:(id)arg1;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2;
- (id)pcsController;
- (void)preflightStingrayDisableWithCompletion:(id)arg1;
- (void)promotForLocalSecretWithCompletion:(id)arg1;
- (void)promptForAdoptionOfMultipleICSCWithCompletion:(id)arg1;
- (void)repairCloudDataProtectionStateWithCompletion:(id)arg1;
- (id)secureBackupController;
- (void)setAttemptedCDPEnable:(bool)arg1;
- (void)setCircleController:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setPcsController:(id)arg1;
- (void)setSecureBackupController:(id)arg1;
- (void)setUiProvider:(id)arg1;
- (bool)shouldAllowCDPEnrollment;
- (void)shouldPerformRepairWithCompletion:(id)arg1;
- (bool)synchronizeCircleViewsForSecureBackupController:(id)arg1;
- (id)uiProvider;

@end
