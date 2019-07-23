/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUPairingDaemon : NSObject <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    CUHomeKitManager * _homeKitManager;
    int  _rpIdentityNotifier;
    NSData * _rpSelfIRK;
    unsigned long long  _stateHandle;
    bool  _testMode;
    struct NSMutableSet { Class x1; } * _xpcConnections;
    NSXPCListener * _xpcListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSXPCListenerEndpoint *testListenerEndpoint;
@property (nonatomic) bool testMode;

+ (id)sharedPairingDaemon;

- (void).cxx_destruct;
- (void)_activate;
- (void)_connectionInvalidated:(id)arg1;
- (id)_copyHomeKitExWithOptions:(unsigned long long)arg1 error:(int*)arg2;
- (id)_copyHomeKitWithOptions:(unsigned long long)arg1 error:(int*)arg2;
- (id)_copyHomeKitWithOptionsHAP:(unsigned long long)arg1 error:(int*)arg2;
- (id)_copyHomeKitWithOptionsKeychain:(unsigned long long)arg1 error:(int*)arg2;
- (id)_copyIdentityWithOptions:(unsigned long long)arg1 error:(int*)arg2;
- (id)_copyOrCreateWithOptions:(unsigned long long)arg1 error:(int*)arg2;
- (id)_copyPairedPeersWithOptions:(unsigned long long)arg1 error:(int*)arg2;
- (int)_deleteIdentityWithOptions:(unsigned long long)arg1;
- (id)_findHomeKitExPairedPeer:(id)arg1 options:(unsigned long long)arg2 error:(int*)arg3;
- (id)_findHomeKitPairedPeer:(id)arg1 options:(unsigned long long)arg2 error:(int*)arg3;
- (id)_findPairedPeer:(id)arg1 options:(unsigned long long)arg2 error:(int*)arg3;
- (void)_invalidate;
- (void)_removeDups:(id)arg1;
- (int)_removePairedPeer:(id)arg1 options:(unsigned long long)arg2 removeAdminAllowed:(bool)arg3;
- (void)_rpIdentityUpdate;
- (int)_saveIdentity:(id)arg1 options:(unsigned long long)arg2;
- (int)_savePairedPeer:(id)arg1 options:(unsigned long long)arg2 removeAdminAllowed:(bool)arg3;
- (void)activate;
- (id)copyIdentityWithOptions:(unsigned long long)arg1 error:(int*)arg2;
- (id)copyPairedPeersWithOptions:(unsigned long long)arg1 error:(int*)arg2;
- (void)dealloc;
- (int)deleteIdentityWithOptions:(unsigned long long)arg1;
- (id)description;
- (id)detailedDescription;
- (id)dispatchQueue;
- (id)findPairedPeer:(id)arg1 options:(unsigned long long)arg2 error:(int*)arg3;
- (id)init;
- (void)invalidate;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (int)removePairedPeer:(id)arg1 options:(unsigned long long)arg2;
- (int)removePairedPeer:(id)arg1 options:(unsigned long long)arg2 removeAdminAllowed:(bool)arg3;
- (void)reset;
- (int)savePairedPeer:(id)arg1 options:(unsigned long long)arg2;
- (int)savePairedPeer:(id)arg1 options:(unsigned long long)arg2 removeAdminAllowed:(bool)arg3;
- (void)setDispatchQueue:(id)arg1;
- (void)setTestMode:(bool)arg1;
- (id)testListenerEndpoint;
- (bool)testMode;

@end
