/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFFormAutoFillController : NSObject <SFCredentialProviderExtensionManagerObserver, SFFormMetadataObserver, _SFAuthenticationClient, _SFAutoFillInputViewDelegate> {
    long long  _authenticationType;
    _SFAutoFillInputView * _autoFillInputView;
    <SFFormAutoFiller> * _autoFiller;
    <SFFormAutoFillControllerDelegate> * _delegate;
    NSDictionary * _externalCredentialIdentitiesForStreamlinedAutoFill;
    SFFormAutoFillFrameHandle * _frameHandleForAutomaticPasswords;
    _SFFormAutoFillInputSession * _inputSessionForAutomaticPasswords;
    bool  _isCurrentlyAuthenticating;
    WBSCreditCardData * _lastFilledCreditCardData;
    NSSet * _lastFilledCreditCardDataTypes;
    bool  _metadataCorrectionsEnabled;
    NSTimer * _prefillTimer;
    NSArray * _preservedLeadingBarButtonGroups;
    NSArray * _preservedTrailingBarButtonGroups;
    _WKRemoteObjectInterface * _remoteObjectInterface;
    SFFormAutocompleteState * _state;
    NSString * _uniqueIDOfFocusedPasswordElementWithAutomaticPassword;
    NSMutableSet * _uniqueIDsOfControlsThatWereAutoFilled;
    NSMutableIndexSet * _uniqueIDsOfFormsThatWereAutoFilled;
    NSArray * _uniqueIDsOfPasswordElementsForAutomaticPasswords;
    WBSFormMetadata * _unsubmittedForm;
    SFFormAutoFillFrameHandle * _unsubmittedFormFrame;
    WKWebView<WBUFormAutoFillWebView> * _webView;
}

@property (nonatomic, readonly) _SFAuthenticationContext *authenticationContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WBSCreditCardData *lastFilledCreditCardData;
@property (nonatomic, retain) NSSet *lastFilledCreditCardDataTypes;
@property (nonatomic) bool metadataCorrectionsEnabled;
@property (nonatomic, readonly) WBSOneTimeCodeMonitor *oneTimeCodeMonitor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView<WBUFormAutoFillWebView> *webView;

+ (id)_filterAndSortCredentialIdentities:(id)arg1 pageURL:(id)arg2 exactMatchesOnly:(bool)arg3;
+ (void)_getExternalLoginCredentialSuggestionsForDomains:(id)arg1 completion:(id /* block */)arg2;
+ (void)_getExternalLoginCredentialSuggestionsForDomains:(id)arg1 pageURL:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_addUniqueIDsOfAutoFilledForm:(id)arg1;
- (void)_authenticateForAutoFillForHighLevelDomain:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)_beginAutomaticPasswordInteractionWithInputSession:(id)arg1 generatedPassword:(id)arg2 ignorePreviousDecision:(bool)arg3;
- (void)_didFocusSensitiveFormField;
- (void)_fieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4;
- (void)_fieldFocusedWithInputSession:(id)arg1;
- (void)_hideInputAssistantItemsIfNecessary;
- (id)_preFillDisabledHosts;
- (void)_prefillTimerFired:(id)arg1;
- (void)_removeAutomaticPasswordButtonInitiatedByUser:(bool)arg1 removeVisualTreatmentOnly:(bool)arg2;
- (void)_removeUniqueIDsOfAutoFilledForm:(id)arg1;
- (void)_restoreInputAssistantItemsIfNecessary;
- (bool)_showingAutoFillInputView;
- (void)_simulateCarriageReturnKeyEvents;
- (id)_simulatedWebEventForReturnKeyWithType:(int)arg1;
- (id)_websiteForAuthenticationPrompt;
- (void)annotateForm:(long long)arg1 inFrame:(id)arg2 withValues:(id)arg3;
- (void)authenticateForAutoFillAuthenticationType:(long long)arg1 withCompletion:(id /* block */)arg2;
- (id)authenticationContext;
- (id)authenticationCustomUIProgressObserverForContext:(id)arg1;
- (id)authenticationMessageForContext:(id)arg1;
- (void)autoFill;
- (void)autoFillDidFinishWithUpdatedFormMetadata:(id)arg1 inFrame:(id)arg2 shouldSubmit:(bool)arg3;
- (void)autoFillForm:(long long)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(bool)arg3 focusFieldAfterFilling:(bool)arg4 fieldToFocus:(id)arg5 submitForm:(bool)arg6;
- (void)autoFillInputViewDidSelectMorePasswords:(id)arg1;
- (void)autoFillInputViewDidSelectUseKeyboard:(id)arg1;
- (void)autoFillOneTimeCodeFieldsInFrame:(id)arg1 withValue:(id)arg2;
- (id)automaticPasswordForPasswordField:(id)arg1 inForm:(id)arg2 isFrame:(id)arg3;
- (void)automaticPasswordSheetDismissed;
- (id)beginAutomaticPasswordInteractionWithInputSession:(id)arg1;
- (void)beginAutomaticPasswordInteractionWithInputSession:(id)arg1 generatedPassword:(id)arg2;
- (void)credentialProviderExtensionManagerExtensionListDidChange:(id)arg1;
- (void)dealloc;
- (void)didCollectFormMetadataForPreFilling:(id)arg1 atURL:(id)arg2 ancestorFramesOfFormToPreFill:(id)arg3;
- (void)didCollectURLsForPreFilling:(id)arg1 atURL:(id)arg2;
- (void)didFillGeneratedPasswordInForm:(id)arg1 inFrame:(id)arg2;
- (void)didRemoveAutomaticStrongPasswordInForm:(id)arg1 inputSessionUserObject:(id)arg2 inFrame:(id)arg3;
- (void)didUpdateUnsubmittedForm:(id)arg1 inFrame:(id)arg2;
- (bool)displayMessageAsTitleForContext:(id)arg1;
- (bool)elementIsBeingFocusedForStreamlinedLogin:(id)arg1;
- (void)fetchMetadataForTextField:(id)arg1 inFrame:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)fieldDidFocusWithInputSession:(id)arg1;
- (void)fieldFocusedWithInputSession:(id)arg1;
- (void)fieldWillFocusWithInputSession:(id)arg1;
- (void)fillTextField:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;
- (id)initWithWebView:(id)arg1 delegate:(id)arg2;
- (void)insertTextSuggestion:(id)arg1;
- (void)invalidate;
- (id)lastFilledCreditCardData;
- (id)lastFilledCreditCardDataTypes;
- (bool)metadataCorrectionsEnabled;
- (void)offerToSaveUnsubmittedFormDataIfNeeded;
- (id)oneTimeCodeMonitor;
- (id)passcodePromptForContext:(id)arg1;
- (void)passwordFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4;
- (void)prefillFormsSoonIfNeeded;
- (void)prepareForShowingAutomaticStrongPasswordWithInputSession:(id)arg1;
- (void)removeAutomaticPasswordButtonInitiatedByUser:(bool)arg1;
- (void)removeAutomaticPasswordVisualTreatment;
- (void)setFormControls:(id)arg1 areAutoFilled:(bool)arg2 andClearField:(id)arg3 inFrame:(id)arg4;
- (void)setLastFilledCreditCardData:(id)arg1;
- (void)setLastFilledCreditCardDataTypes:(id)arg1;
- (void)setMetadataCorrectionsEnabled:(bool)arg1;
- (bool)shouldShowIconsInPasswordPicker;
- (void)textDidChangeInTextField:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3;
- (void)textFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4;
- (void)updateSuggestions;
- (void)usernameFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4;
- (id)webView;
- (void)willNavigateFrame:(id)arg1 withUnsubmittedForm:(id)arg2 loadingIsDeferred:(bool)arg3;
- (void)willSubmitForm:(id)arg1 inFrame:(id)arg2 submissionHandler:(id /* block */)arg3;
- (void)willSubmitFormValues:(id)arg1 userObject:(id)arg2 submissionHandler:(id /* block */)arg3;

@end
