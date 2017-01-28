/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDDeviceSecretValidator : NSObject <CDPRemoteDeviceSecretValidatorProtocol> {
    CDPContext * _context;
    CDPDevice * _currentDevice;
    <CDPDDeviceSecretValidatorDelegate> * _delegate;
    bool  _depletedRemainingAttempts;
    unsigned long long  _failedAttempts;
    NSMutableDictionary * _failedSecrets;
    NSMutableSet * _failedSingleICSCs;
    bool  _isAttemptingRecovery;
    bool  _isUsingMultipleICSC;
    NSMutableDictionary * _recoveryErrors;
    id  _validSecretHandler;
    unsigned long long  supportedEscapeOfferMask;
}

@property (nonatomic) <CDPDDeviceSecretValidatorDelegate> *delegate;
@property (nonatomic) bool isUsingMultipleICSC;
@property (nonatomic) unsigned long long supportedEscapeOfferMask;
@property (nonatomic, copy) id validSecretHandler;

- (void).cxx_destruct;
- (void)_attemptToRecoverDevice:(id)arg1 withSecret:(id)arg2 completion:(id)arg3;
- (id)_failedSecretsForDevice:(id)arg1;
- (id)_failedSingleICSCs;
- (void)_handleDelegateValidationError:(id)arg1;
- (id)_handleMultiCSCRecoveryFailureForDevice:(id)arg1 recoveryError:(id)arg2 secret:(id)arg3;
- (void)_handleMultiCSCRecoveryResults:(id)arg1 type:(unsigned long long)arg2 secret:(id)arg3 device:(id)arg4 completion:(id)arg5;
- (void)_handleRecoveryFailureForFinalDevice:(id)arg1 completion:(id)arg2;
- (bool)_isFailedSecret:(id)arg1 forDevice:(id)arg2;
- (bool)_isInvalidICSCError:(id)arg1;
- (void)_performSingleiCSCRecoveryWithSecret:(id)arg1 type:(unsigned long long)arg2 completion:(id)arg3;
- (void)approveFromAnotherDeviceWithCompletion:(id)arg1;
- (void)cancelApproveFromAnotherDevice;
- (void)cancelValidationWithError:(id)arg1;
- (id)delegate;
- (unsigned long long)failedAttempts;
- (id)init;
- (id)initWithContext:(id)arg1 delegate:(id)arg2;
- (bool)isAttemptingRecovery;
- (bool)isUsingMultipleICSC;
- (void)resetAccountCDPState;
- (void)setDelegate:(id)arg1;
- (void)setIsUsingMultipleICSC:(bool)arg1;
- (void)setSupportedEscapeOfferMask:(unsigned long long)arg1;
- (void)setValidSecretHandler:(id)arg1;
- (unsigned long long)supportedEscapeOfferMask;
- (void)supportedEscapeOfferMaskCompletion:(id)arg1;
- (id)validSecretHandler;
- (void)validateSecret:(id)arg1 devices:(id)arg2 type:(unsigned long long)arg3 withCompletion:(id)arg4;

@end
