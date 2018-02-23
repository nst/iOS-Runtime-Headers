/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDStreamInterface : HMFObject <HMFLogging> {
    NSObject<OS_dispatch_queue> * _delegateQueue;
    HMDCameraNetworkConfig * _localNetworkConfig;
    int  _localRTPSocket;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    <HMDCameraRemoteStreamProtocol> * _sessionHandler;
    HMDCameraSessionID * _sessionID;
    unsigned long long  _streamInterfaceState;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDCameraNetworkConfig *localNetworkConfig;
@property (nonatomic) int localRTPSocket;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, readonly) <HMDCameraRemoteStreamProtocol> *sessionHandler;
@property (nonatomic, readonly) HMDCameraSessionID *sessionID;
@property (nonatomic) unsigned long long streamInterfaceState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegateQueue;
- (id)extractNetworkConfig:(int)arg1 peerNameExtractor:(int (*)arg2;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegateQueue:(id)arg3 localNetworkConfig:(id)arg4 sessionHandler:(id)arg5;
- (bool)loadMiscFields:(id)arg1;
- (id)localNetworkConfig;
- (int)localRTPSocket;
- (id)logIdentifier;
- (int)openSocket;
- (id)propertyQueue;
- (id)sessionHandler;
- (id)sessionID;
- (void)setLocalRTPSocket:(int)arg1;
- (void)setStreamInterfaceState:(unsigned long long)arg1;
- (unsigned long long)streamInterfaceState;
- (id)workQueue;

@end
