/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUPairingManager : NSObject <CUPairingManagerXPCInterface> {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id  _invalidationHandler;
    NSXPCListenerEndpoint * _testListenerEndpoint;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id interruptionHandler;
@property (nonatomic, copy) id invalidationHandler;
@property (nonatomic, retain) NSXPCListenerEndpoint *testListenerEndpoint;

- (void).cxx_destruct;
- (void)_deletePairingIdentityWithOptions:(unsigned long long)arg1 completion:(id)arg2;
- (int)_ensureXPCStarted;
- (void)_findPairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(id)arg3;
- (void)_getPairedPeersWithOptions:(unsigned long long)arg1 completion:(id)arg2;
- (void)_getPairingIdentityWithOptions:(unsigned long long)arg1 completion:(id)arg2;
- (void)_interrupted;
- (void)_invalidate;
- (void)_invalidated;
- (void)_removePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(id)arg3;
- (void)_savePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(id)arg3;
- (void)_showWithCompletion:(id)arg1;
- (void)dealloc;
- (void)deletePairingIdentityWithOptions:(unsigned long long)arg1 completion:(id)arg2;
- (id)dispatchQueue;
- (void)findPairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(id)arg3;
- (void)getPairedPeersWithOptions:(unsigned long long)arg1 completion:(id)arg2;
- (void)getPairingIdentityWithOptions:(unsigned long long)arg1 completion:(id)arg2;
- (id)init;
- (id)interruptionHandler;
- (void)invalidate;
- (id)invalidationHandler;
- (void)removePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(id)arg3;
- (void)savePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(id)arg3;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id)arg1;
- (void)setInvalidationHandler:(id)arg1;
- (void)setTestListenerEndpoint:(id)arg1;
- (void)showWithCompletion:(id)arg1;
- (id)testListenerEndpoint;

@end
