/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRUserNotificationManager : NSObject {
    _TRUserNotification * _activeUserNotification;
}

@property (nonatomic, retain) _TRUserNotification *activeUserNotification;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_showUserNotificationWithDictionary:(id)arg1 options:(unsigned long long)arg2 completion:(id)arg3;
- (id)activeUserNotification;
- (void)cancel;
- (void)dealloc;
- (void)presentAuthenticationFailureWithMessage:(id)arg1 completion:(id)arg2;
- (void)presentErrorWithTitle:(id)arg1 message:(id)arg2 completion:(id)arg3;
- (void)presentLegacyAuthenticationFailedDialogWithMessage:(id)arg1 completion:(id)arg2;
- (void)presentWiFiNetworkConnectionError:(bool)arg1 completion:(id)arg2;
- (void)requestAppleIDAuthenticationWithAccountID:(id)arg1 completion:(id)arg2;
- (void)requestAuthenticationWithAccountID:(id)arg1 message:(id)arg2 completion:(id)arg3;
- (void)requestLegacyAuthenticationWithAccountID:(id)arg1 completion:(id)arg2;
- (void)requestPermissionForDiagnosticSubmissionWithCompletion:(id)arg1;
- (void)requestPermissionToInitiateSetupWithCompletion:(id)arg1;
- (void)setActiveUserNotification:(id)arg1;

@end
