/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKContinuityPaymentViewController : UIViewController <PKAuthenticatorDelegate, PKPaymentAuthorizationStateMachineDelegate> {
    bool  _attemptedTimeout;
    PKAuthenticator * _authenticator;
    PKPaymentAuthorizationFooterView * _authorizationView;
    _UIBackdropView * _backdropView;
    PKContinuityPaymentCardSummaryView * _cardView;
    <PKPaymentAuthorizationHostProtocol> * _delegate;
    UIView * _dimmingBackgroundView;
    PKContinuityPaymentFaviconView * _faviconImage;
    UIViewController * _passphraseViewController;
    UILabel * _priceLabel;
    UIView * _priceView;
    PKRemotePaymentRequest * _remoteRequest;
    UILabel * _requestingDeviceLabel;
    UILabel * _requestingSiteLabel;
    PKPaymentAuthorizationStateMachine * _stateMachine;
    UIStackView * _summaryContainerView;
    NSTimer * _timeoutTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaymentAuthorizationHostProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKRemotePaymentRequest *remoteRequest;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_authenticatorPolicy;
- (void)_cancelPassphrasePressed;
- (void)_didCancel;
- (void)_didFailWithError:(id)arg1;
- (void)_didFailWithFatalError:(id)arg1;
- (void)_didSucceed;
- (id)_evaluationRequest;
- (void)_invalidPaymentDataWithParam:(id)arg1;
- (void)_payWithPasscodePressed:(id)arg1;
- (void)_processClientCallback:(id)arg1;
- (void)_resetAndScheduleTimeout;
- (void)_resumeAuthenticationWithPreviousError:(id)arg1;
- (void)_startEvaluation;
- (void)_suspendAuthentication;
- (void)_timeoutFired;
- (void)authenticatorDidEncounterFingerOff:(id)arg1;
- (void)authenticatorDidEncounterFingerOn:(id)arg1;
- (void)authenticatorDidEncounterMatchMiss:(id)arg1;
- (void)authorizationDidAuthorizePaymentCompleteWithStatus:(long long)arg1;
- (void)cancelPressed;
- (void)dealloc;
- (id)delegate;
- (void)dismissPasscodeViewController;
- (void)dismissPassphraseViewController;
- (id)initWithRemotePaymentRequest:(id)arg1;
- (void)loadView;
- (bool)paymentAuthorizationStateMachine:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 withParam:(id)arg4;
- (void)presentPasscodeViewController:(id)arg1 completionHandler:(id)arg2 reply:(id)arg3;
- (void)presentPassphraseViewController:(id)arg1 completionHandler:(id)arg2 reply:(id)arg3;
- (id)remoteRequest;
- (void)setDelegate:(id)arg1;
- (void)updatePaymentWithClientUpdate:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
