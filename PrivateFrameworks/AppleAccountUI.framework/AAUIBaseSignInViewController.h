/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIBaseSignInViewController : ACUIViewController <AAUIAccountCreationDelegate, AAUIAccountRepairRemoteUIDelegate, AAUICredentialRecoveryPresentationDelegate, AAUIGenericTermsRemoteUIDelegate> {
    ACAccount * _account;
    AAUIAccountRepairRemoteUI * _accountRepairRemoteUI;
    ACAccount * _appleAccount;
    ACAccountType * _appleAccountType;
    PSSpecifier * _createNewAccountButtonSpecifier;
    AAUICredentialRecoveryController * _credentialRecoveryUIController;
    AAUIGenericTermsRemoteUI * _genericTermsRemoteUI;
    id  _identityConsolidationCompletion;
    NSString * _initialTitle;
    bool  _isPasswordDirty;
    bool  _isPresentedModally;
    UINavigationController * _modalRemoteViewController;
    ABMonogrammer * _monogrammer;
    NSString * _recommendedUsername;
    AAUIAccountCreationRemoteUI * _remoteAccountCreationUI;
    RUILoader * _remoteUILoader;
    NSMutableArray * _remoteUIModels;
    bool  _shouldHideBackButton;
    bool  _shouldHideCreateNewAccount;
    PSSpecifier * _signInButtonSpecifier;
    UIImageView * _silhouetteView;
    id  _textFieldTextDidChangeObserver;
}

@property (nonatomic, readonly) ACAccount *account;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=setPresentedModally:, nonatomic) bool isPresentedModally;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_accountDescriptionFromEmailAddress:(id)arg1;
- (void)_accountRepairDidFail;
- (id)_appleAccountType;
- (void)_attemptHSALoginForAccount:(id)arg1;
- (void)_createNewAccountButtonTapped:(id)arg1;
- (void)_didFinishAccountVerificationWithResult:(bool)arg1 error:(id)arg2;
- (id)_displayedAccountType;
- (void)_handleAccountPromotionCompletionForAccount:(id)arg1 withSuccess:(bool)arg2 error:(id)arg3;
- (void)_handleAccountRegistrationCompletionWithSuccess:(bool)arg1 error:(id)arg2;
- (void)_handleAccountSetupCompletionWithAppleID:(id)arg1 success:(bool)arg2 error:(id)arg3;
- (double)_heightForCreateNewAccountFooterWithWidth:(double)arg1;
- (id)_learnMoreURLForErrorCode:(id)arg1;
- (void)_loadAccountRepairRemoteUIWithAccount:(id)arg1;
- (id)_monogrammer;
- (void)_openWebBasedCredentialRecoveryFlow;
- (void)_openiForgotLink:(id)arg1;
- (id)_passwordForSpecifier:(id)arg1;
- (void)_presentExistingAccountAlert:(id)arg1;
- (void)_presentInvalidUsernameAlert;
- (void)_presentNoMailServiceWhileInMailAlert;
- (void)_presentUnableToSaveAccountAlert;
- (void)_presentValidationErrorAlert:(id)arg1 forAccount:(id)arg2;
- (void)_presentWrongAccountStatusAlert;
- (void)_promoteExistingAccountToPrimary:(id)arg1;
- (bool)_runningInMail;
- (void)_saveAccountAndComplete;
- (bool)_saveAccountWithAllDataclassesEnabledIfPossible;
- (void)_saveAccountWithAllDataclassesEnabledIfPossibleWithCompletion:(id)arg1;
- (void)_setPassword:(id)arg1 withSpecifier:(id)arg2;
- (void)_setUsername:(id)arg1 withSpecifier:(id)arg2;
- (bool)_shouldShowCancelDone;
- (void)_showGenericTermsUIforAccount:(id)arg1;
- (id)_specifierForGroupWithiForgotLink;
- (id)_specifiersForCreateNewAccount;
- (id)_specifiersForLoginForm;
- (id)_specifiersForSignInButton;
- (void)_textFieldValueDidChange:(id)arg1;
- (id)_titleForError:(id)arg1 account:(id)arg2;
- (void)_updateAccountInformation:(id)arg1;
- (void)_updateDoneButton;
- (id)_usernameForSpecifier:(id)arg1;
- (void)_verifyAccount;
- (id)account;
- (void)accountCreationDidFailWithError:(id)arg1;
- (void)accountCreationDidSucceedWithAppleID:(id)arg1 password:(id)arg2 emailChoice:(id)arg3;
- (void)accountCreationWasCanceled;
- (void)accountCreationWillBeginWithAppleID:(id)arg1 password:(id)arg2;
- (void)accountRepairRemoteUI:(id)arg1 account:(id)arg2 didFinishWithSuccess:(bool)arg3;
- (void)cancelButtonTapped:(id)arg1;
- (void)confirmationView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)credentialRecoveryController:(id)arg1 didFailWithError:(id)arg2;
- (void)credentialRecoveryController:(id)arg1 finishedWithSuccess:(bool)arg2;
- (void)credentialRecoveryController:(id)arg1 needsPresentationOfViewController:(id)arg2;
- (void)dealloc;
- (id)descriptionPlaceholder;
- (void)didCancelSignIn;
- (void)didCompleteSignIn;
- (void)doneButtonTapped:(id)arg1;
- (void)genericTermsRemoteUI:(id)arg1 didFinishWithSuccess:(bool)arg2;
- (id)init;
- (bool)isPresentedModally;
- (void)loadView;
- (id)navigationControllerForPresentationWithCredentialRecoveryController:(id)arg1;
- (id)navigationItemToShowInitialLoadingForCredentialRecoveryController:(id)arg1;
- (void)returnPressedAtEnd;
- (void)setPresentedModally:(bool)arg1;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
