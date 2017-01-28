/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRDeviceSetupServer : NSObject <TRTransferServerDelegate> {
    NSMutableArray * _accountsToAuthenticate;
    NSMutableDictionary * _cachedAuthInfo;
    bool  _cancelledSetupInProgress;
    NSData * _dataToSend;
    NSObject<OS_dispatch_semaphore> * _dataToSendSemaphore;
    <TRDeviceSetupServerDelegate> * _delegate;
    int  _notifyToken;
    bool  _notifyTokenIsValid;
    bool  _setupInProgress;
    bool  _started;
    TRTransferServer * _transferServer;
}

@property (nonatomic, retain) NSMutableArray *accountsToAuthenticate;
@property (nonatomic, retain) NSMutableDictionary *cachedAuthInfo;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TRDeviceSetupServerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_authenticateAccount:(unsigned long long)arg1 withAuthInfo:(id)arg2 completion:(id)arg3;
- (void)_authenticateWithAction:(id)arg1 replyHandler:(id)arg2;
- (void)_cancelTransferConnection;
- (void)_cancelWithAction:(id)arg1 replyHandler:(id)arg2;
- (void)_connectWithAction:(id)arg1 replyHandler:(id)arg2;
- (void)_finishSetupWithError:(id)arg1 replyHandler:(id)arg2;
- (void)_finishWithAction:(id)arg1 replyHandler:(id)arg2;
- (void)_requestAuthenticationForAccount:(unsigned long long)arg1 replyHandler:(id)arg2;
- (void)_requestAuthenticationForNextAccountWithReplyHandler:(id)arg1;
- (void)_requestAuthenticationFromPeripheralForAccount:(unsigned long long)arg1 lastAttemptAction:(id)arg2 lastAttemptError:(id)arg3 replyHandler:(id)arg4;
- (void)_requestGeneralSetupWithReplyHandler:(id)arg1;
- (bool)_sendAction:(id)arg1 sendDataHandler:(id)arg2 shouldSendNilOnFailure:(bool)arg3 error:(id*)arg4;
- (void)_setUpWithAction:(id)arg1 replyHandler:(id)arg2;
- (id)accountsToAuthenticate;
- (id)cachedAuthInfo;
- (void)cancelActiveSetup;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)server:(id)arg1 didFailToReceiveData:(id)arg2;
- (void)server:(id)arg1 didReceiveData:(id)arg2 replyHandler:(id)arg3;
- (void)serverWillReceiveData:(id)arg1;
- (void)setAccountsToAuthenticate:(id)arg1;
- (void)setCachedAuthInfo:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)stop;

@end
