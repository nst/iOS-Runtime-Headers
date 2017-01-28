/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYOutgoingDeltaTransactionSession : SYSession {
    bool  _canRestart;
    bool  _canRollback;
    bool  _cancelled;
    _SYCountedSemaphore * _changeConcurrencySemaphore;
    NSObject<OS_dispatch_queue> * _changeFetcherQueue;
    NSObject<OS_os_activity> * _changeWaitActivity;
    NSObject<OS_os_activity> * _sessionActivity;
    long long  _state;
    NSObject<OS_dispatch_source> * _stateUpdateSource;
    _SYMessageTimerTable * _timers;
}

- (void).cxx_destruct;
- (void)_fetchNextBatch;
- (void)_installStateListener;
- (void)_messageExpiredWithSeqno:(unsigned long long)arg1 identifier:(id)arg2;
- (void)_notifySessionComplete;
- (void)_peerProcessedMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (void)_processNextState;
- (void)_sendSyncBatch:(id)arg1 nextState:(long long)arg2;
- (void)_sentMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (void)_setMessageTimerForSeqno:(unsigned long long)arg1;
- (void)_setStateQuietly:(long long)arg1;
- (void)_setupChangeConcurrency;
- (void)_waitForMessageWindow;
- (bool)canRestart;
- (bool)canRollback;
- (void)cancelWithError:(id)arg1;
- (id)initWithService:(id)arg1;
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
