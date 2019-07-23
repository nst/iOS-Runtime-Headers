/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@interface PBBridgeIDSServiceDelegate : NSObject <IDSServiceDelegate> {
    NSMutableDictionary * _inflightMessages;
    NSMutableDictionary * _pendingMessages;
    IDSService * _service;
    bool  _shouldSuppressTransportReachabilityTimeout;
    BKSProcessAssertion * _suspendAssertion;
    NSTimer * _transportReachabilityTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *inflightMessages;
@property (nonatomic, retain) NSMutableDictionary *pendingMessages;
@property (nonatomic, retain) IDSService *service;
@property (nonatomic) bool shouldSuppressTransportReachabilityTimeout;
@property (readonly) Class superclass;
@property (nonatomic, retain) BKSProcessAssertion *suspendAssertion;
@property (nonatomic, retain) NSTimer *transportReachabilityTimer;

- (void).cxx_destruct;
- (id)_sendProtoBuf:(id)arg1 service:(id)arg2 priority:(long long)arg3 responseIdentifier:(id)arg4 expectsResponse:(bool)arg5;
- (void)beginSetupTransaction;
- (void)cancelReachabilityTimer;
- (void)checkReachability;
- (void)clearPowerAssertionIfNotPairing:(id)arg1;
- (bool)connectionStateWithDevices:(id)arg1 accounts:(id)arg2;
- (id)customDescriptionOfMessageType:(unsigned short)arg1;
- (void)endSetupTransaction;
- (id)inflightMessages;
- (id)pendingMessages;
- (void)reportConnectionForService:(id)arg1 accounts:(id)arg2 devices:(id)arg3;
- (void)resetTransportReachabilityTimer;
- (id)sendProtoBuf:(id)arg1 service:(id)arg2 priority:(long long)arg3 responseIdentifier:(id)arg4 expectsResponse:(bool)arg5 retryCount:(long long)arg6 retryInterval:(double)arg7;
- (id)service;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (id)serviceIdentifier;
- (void)setInflightMessages:(id)arg1;
- (void)setPendingMessages:(id)arg1;
- (void)setService:(id)arg1;
- (void)setShouldSuppressTransportReachabilityTimeout:(bool)arg1;
- (void)setSuspendAssertion:(id)arg1;
- (void)setTransportReachabilityTimer:(id)arg1;
- (void)setupServiceMessageSelectorMappings;
- (bool)shouldSuppressTransportReachabilityTimeout;
- (void)startReachabilityTimer;
- (id)suspendAssertion;
- (void)transportBecameReachable;
- (void)transportBecameUnreachable;
- (id)transportReachabilityTimer;

@end
