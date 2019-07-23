/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFFormDataController : WBUFormDataController <_SFAuthenticationContextDelegate> {
    _SFAuthenticationContext * _autoFillAuthenticationContext;
}

@property (nonatomic, readonly) _SFAuthenticationContext *autoFillAuthenticationContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedController;

- (void).cxx_destruct;
- (id)autoFillAuthenticationContext;
- (bool)contextRequiresSessionBasedAuthentication:(id)arg1;
- (bool)contextShouldAllowMultipleBiometricFailures:(id)arg1;
- (bool)contextShouldAllowPasscodeFallback:(id)arg1;
- (id)initWithAggressiveKeychainCaching:(bool)arg1;
- (double)invalidationTimeoutIfApplicationEntersBackgroundDuringAuthenticationForContext:(id)arg1;

@end
