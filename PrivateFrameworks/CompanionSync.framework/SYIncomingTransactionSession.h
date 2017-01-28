/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYIncomingTransactionSession : SYSession {
    id  _completion;
    SYChangeMessage * _message;
    NSObject<OS_os_activity> * _sessionActivity;
    bool  canRestart;
    bool  canRollback;
    long long  state;
}

- (void).cxx_destruct;
- (void)_sendCancelled;
- (void)_sendChanges;
- (void)_sendComplete;
- (bool)canRestart;
- (bool)canRollback;
- (void)cancelWithError:(id)arg1;
- (void)didCompleteSession;
- (id)initWithService:(id)arg1 transaction:(id)arg2 completion:(id)arg3;
- (bool)isResetSync;
- (bool)isSending;
- (unsigned long long)protocolVersion;
- (void)setCanRestart:(bool)arg1;
- (void)setCanRollback:(bool)arg1;
- (void)setState:(long long)arg1;
- (void)start:(id)arg1;
- (long long)state;
- (bool)wasCancelled;

@end
