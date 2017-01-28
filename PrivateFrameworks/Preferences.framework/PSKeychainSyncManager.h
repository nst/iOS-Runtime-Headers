/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSKeychainSyncManager : NSObject <KeychainSyncViewControllerDelegate> {
    KeychainSyncAdvancedSecurityCodeController * _advancedSecurityCodeChoiceController;
    NSString * _appleIDPasswordOrEquivalentToken;
    NSString * _appleIDRawPassword;
    NSString * _appleIDUsername;
    PSRootController * _buddyNavigationController;
    id  _changeSecurityCodeCompletion;
    id  _circleJoinCompletion;
    int  _circleNotificationToken;
    bool  _circleWasReset;
    id  _completion;
    PSKeychainSyncSecurityCodeController * _complexSecurityCodeController;
    NSTimer * _credentialExpirationTimer;
    KeychainSyncDevicePINController * _devicePinController;
    int  _flow;
    UIViewController * _hostViewController;
    NSTimer * _joinAfterRecoveryTimeoutTimer;
    bool  _joiningCircle;
    bool  _joiningCircleAfterRecovery;
    id  _passwordPromptCompletion;
    KeychainSyncPhoneNumberController * _phoneNumberController;
    id  _resetCompletion;
    UIViewController * _resetPromptControllerHost;
    NSString * _securityCodeRecoveryAttempt;
    PSKeychainSyncSecurityCodeController * _securityCodeRecoveryController;
    PSSetupController * _settingsSetupController;
    PSKeychainSyncSecurityCodeController * _simpleSecurityCodeController;
    KeychainSyncSMSVerificationController * _smsValidationController;
    unsigned int  _spinnerCount;
    UIView * _spinningView;
    NSString * _stagedSecurityCode;
    int  _stagedSecurityCodeType;
}

@property (nonatomic, readonly) NSString *appleIDPasswordOrEquivalentToken;
@property (nonatomic, copy) NSString *appleIDRawPassword;
@property (nonatomic, copy) NSString *appleIDUsername;
@property (nonatomic, retain) PSRootController *buddyNavigationController;
@property (nonatomic, copy) id changeSecurityCodeCompletion;
@property (nonatomic, copy) id circleJoinCompletion;
@property (nonatomic) bool circleWasReset;
@property (nonatomic, copy) id completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *hostViewController;
@property (nonatomic, copy) id passwordPromptCompletion;
@property (nonatomic, copy) id resetCompletion;
@property (nonatomic, retain) UIViewController *resetPromptControllerHost;
@property (getter=isRunningInBuddy, nonatomic, readonly) bool runningInBuddy;
@property (nonatomic, retain) NSString *securityCodeRecoveryAttempt;
@property (nonatomic, retain) PSSetupController *settingsSetupController;
@property (nonatomic, readonly) NSString *stagedSecurityCode;
@property (nonatomic, readonly) int stagedSecurityCodeType;
@property (readonly) Class superclass;

+ (void)getStatusWithCompletion:(id)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_autoVetSMSValidationWithToken:(id)arg1;
- (void)_callCompletionWithStatus:(int)arg1 error:(id)arg2;
- (bool)_changeSecurityCode:(id)arg1 type:(int)arg2 smsTarget:(id)arg3 smsTargetCountryInfo:(id)arg4 username:(id)arg5 passwordOrEquivalentToken:(id)arg6 error:(id*)arg7;
- (void)_changeToNewSecurityCode:(id)arg1 type:(int)arg2 smsTarget:(id)arg3 smsTargetCountryInfo:(id)arg4;
- (void)_circleJoinAfterRecoveryTimerFired:(id)arg1;
- (void)_cleanup;
- (void)_cleanupAppleIDCredentials;
- (id)_defaultKeychainViewSet;
- (void)_deleteSafariAutoFillPasswords;
- (void)_disableCDPKeychainSyncOverController:(id)arg1 deletingSafariPasswords:(bool)arg2 withCompletion:(id)arg3;
- (void)_disableKeychainSyncOverController:(id)arg1 deletingSafariPasswords:(bool)arg2 withCompletion:(id)arg3;
- (void)_enableSecureBackupWithPhoneNumber:(id)arg1 countryInfo:(id)arg2;
- (bool)_errorRequiresPasswordPrompt:(id)arg1;
- (void)_finishedWithStatus:(int)arg1 error:(id)arg2;
- (void)_peerApprovalFromRecoveryFlow;
- (void)_preSetupCancelledWithCurrentStatus;
- (void)_promptUserToDeleteSafariSavedContentWithCompletion:(id)arg1;
- (void)_recoverWithSecurityCode:(id)arg1 verificationCode:(id)arg2;
- (void)_registerForCircleChangeNotifications;
- (void)_registerForCircleChangeNotificationsWithCompletion:(id)arg1;
- (bool)_registerUserCredentialsName:(id)arg1 rawPassword:(id)arg2 error:(id*)arg3;
- (bool)_resetCircleAndDisableBackupWithError:(id*)arg1;
- (void)_resetFromRecoveryFlow;
- (void)_showGenericFlowErrorAlert;
- (void)_showGenericFlowErrorAlertWithDismissalHandler:(id)arg1;
- (void)_showInvalidPhoneNumberAlertWithDigits:(id)arg1 countryInfo:(id)arg2;
- (void)_showResetFlowOverController:(id)arg1 withEnableBackupText:(bool)arg2 withCompletion:(id)arg3;
- (void)_startCircleJoinAfterRecoveryTimer;
- (void)_stopCircleJoinAfterRecoveryTimer;
- (id)appleIDPasswordOrEquivalentToken;
- (id)appleIDRawPassword;
- (id)appleIDUsername;
- (id)buddyNavigationController;
- (id)changeSecurityCodeCompletion;
- (id)circleJoinCompletion;
- (bool)circleWasReset;
- (id)completion;
- (void)dealloc;
- (void)disableKeychainSyncOverController:(id)arg1 withCompletion:(id)arg2;
- (void)dismissAppleSupportPane:(id)arg1;
- (void)handleCircleChangedNotification;
- (id)hostViewController;
- (id)init;
- (bool)isRunningInBuddy;
- (void)joinCircleAfterRecovery:(bool)arg1 withCompletion:(id)arg2;
- (void)joinCircleAndEnableSecureBackupWithPhoneNumber:(id)arg1 countryInfo:(id)arg2;
- (void)joinCircleWithCompletion:(id)arg1;
- (void)keychainSyncController:(id)arg1 didFinishWithResult:(id)arg2 error:(id)arg3;
- (void)keychainSyncControllerCancel:(id)arg1;
- (void)keychainSyncPhoneNumberController:(id)arg1 didCompleteWithPhoneNumber:(id)arg2 countryInfo:(id)arg3;
- (void)makeSettingsSetupControllerWithSpecifier:(id)arg1 parent:(id)arg2 initialController:(id)arg3;
- (id)navigationController;
- (id)passwordPromptCompletion;
- (void)pinChoiceAlertDidChooseToUseDevicePasscode:(bool)arg1;
- (id)preferencesApp;
- (void)promptForDevicePasscodeChangeToPasscode:(id)arg1 overController:(id)arg2;
- (void)promptForPasswordIfCredentialsNotCachedOverController:(id)arg1 withCompletion:(id)arg2;
- (void)promptForPasswordIfNeededForWritingOverController:(id)arg1 withCompletion:(id)arg2;
- (void)promptForPasswordIfNeededOverController:(id)arg1 withCompletion:(id)arg2;
- (void)promptForPasswordIfNeededWithCompletion:(id)arg1;
- (void)promptForPasswordOverController:(id)arg1 withCompletion:(id)arg2;
- (id)resetCompletion;
- (id)resetPromptControllerHost;
- (id)securityCodeRecoveryAttempt;
- (void)setAppleIDRawPassword:(id)arg1;
- (void)setAppleIDRawPassword:(id)arg1 equivalentToken:(id)arg2;
- (void)setAppleIDUsername:(id)arg1;
- (void)setBuddyNavigationController:(id)arg1;
- (void)setChangeSecurityCodeCompletion:(id)arg1;
- (void)setCircleJoinCompletion:(id)arg1;
- (void)setCircleWasReset:(bool)arg1;
- (void)setCompletion:(id)arg1;
- (void)setHostViewController:(id)arg1;
- (void)setPasswordPromptCompletion:(id)arg1;
- (void)setResetCompletion:(id)arg1;
- (void)setResetPromptControllerHost:(id)arg1;
- (void)setSecurityCodeRecoveryAttempt:(id)arg1;
- (void)setSettingsSetupController:(id)arg1;
- (void)setStagedSecurityCode:(id)arg1 type:(int)arg2;
- (id)settingsSetupController;
- (void)showAlert:(id)arg1;
- (void)showChangeSecurityCodeFlowWithSpecifier:(id)arg1 overController:(id)arg2 completion:(id)arg3;
- (void)showContactAppleSupportPane;
- (void)showController:(id)arg1;
- (void)showEnableEscrowFlowWithSpecifier:(id)arg1 overController:(id)arg2 completion:(id)arg3;
- (void)showEnableFlowWithNavigationController:(id)arg1 completion:(id)arg2;
- (void)showEnableSyncFlowWithSpecifier:(id)arg1 overController:(id)arg2 completion:(id)arg3;
- (void)showNetworkReachabilityError;
- (void)showPinChoiceAlert;
- (void)showRecoveryFlowWithNavigationController:(id)arg1 completion:(id)arg2;
- (void)showRecoveryFlowWithSpecifier:(id)arg1 overController:(id)arg2 completion:(id)arg3;
- (void)showResetAcknowledgementIfNeededWithCompletion:(id)arg1;
- (void)showResetAndJoinFlowOverController:(id)arg1 withCompletion:(id)arg2;
- (id)stagedSecurityCode;
- (int)stagedSecurityCodeType;
- (void)startNavigationSpinnerInViewController:(id)arg1;
- (void)stopNavigationSpinner;
- (id)viewControllerForPresentingAlerts;

@end
