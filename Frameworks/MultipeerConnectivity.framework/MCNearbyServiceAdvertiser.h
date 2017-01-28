/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@interface MCNearbyServiceAdvertiser : NSObject <NSNetServiceDelegate> {
    bool  _AWDLDisabled;
    NSData * _TXTRecordData;
    <MCNearbyServiceAdvertiserDelegate> * _delegate;
    NSDictionary * _discoveryInfo;
    NSString * _formattedServiceType;
    NSMutableDictionary * _invites;
    bool  _isAdvertising;
    MCPeerID * _myPeerID;
    NSNetService * _networkServer;
    long long  _outgoingInviteID;
    NSMutableDictionary * _peers;
    NSString * _serviceType;
    NSObject<OS_dispatch_queue> * _syncQueue;
    bool  _wasAdvertising;
}

@property (getter=isAWDLDisabled, nonatomic) bool AWDLDisabled;
@property (nonatomic, retain) NSData *TXTRecordData;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MCNearbyServiceAdvertiserDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDictionary *discoveryInfo;
@property (nonatomic, copy) NSString *formattedServiceType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *invites;
@property (nonatomic) bool isAdvertising;
@property (nonatomic, readonly) MCPeerID *myPeerID;
@property (nonatomic, retain) NSNetService *networkServer;
@property (nonatomic) long long outgoingInviteID;
@property (nonatomic, retain) NSMutableDictionary *peers;
@property (nonatomic, copy) NSString *serviceType;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic) bool wasAdvertising;

- (id)TXTRecordData;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)applicationWillEnterForegroundNotification:(id)arg1;
- (void)applicationWillTerminateNotification:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)discoveryInfo;
- (id)formattedServiceType;
- (id)init;
- (id)initWithPeer:(id)arg1 discoveryInfo:(id)arg2 serviceType:(id)arg3;
- (id)invites;
- (bool)isAWDLDisabled;
- (bool)isAdvertising;
- (id)makeTXTRecordDataWithDiscoveryInfo:(id)arg1;
- (id)myPeerID;
- (void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)netServiceDidStop:(id)arg1;
- (id)networkServer;
- (long long)outgoingInviteID;
- (void)parseIDString:(id*)arg1 displayName:(id*)arg2 fromIdentifier:(id)arg3;
- (id)peers;
- (id)serviceType;
- (void)setAWDLDisabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiscoveryInfo:(id)arg1;
- (void)setFormattedServiceType:(id)arg1;
- (void)setInvites:(id)arg1;
- (void)setIsAdvertising:(bool)arg1;
- (void)setNetworkServer:(id)arg1;
- (void)setOutgoingInviteID:(long long)arg1;
- (void)setPeers:(id)arg1;
- (void)setServiceType:(id)arg1;
- (void)setSyncQueue:(id)arg1;
- (void)setTXTRecordData:(id)arg1;
- (void)setWasAdvertising:(bool)arg1;
- (void)startAdvertisingPeer;
- (void)stopAdvertisingPeer;
- (void)syncAttachConnection:(id)arg1 toPeer:(id)arg2;
- (void)syncCloseConnectionForPeer:(id)arg1;
- (void)syncHandleIncomingInputStream:(id)arg1 outputStream:(id)arg2;
- (void)syncHandleInvite:(id)arg1 fromPeer:(id)arg2;
- (void)syncHandleInviteConnect:(id)arg1 fromPeer:(id)arg2;
- (id)syncQueue;
- (void)syncReceivedData:(id)arg1 fromPeer:(id)arg2;
- (void)syncSendData:(id)arg1 toPeer:(id)arg2 withCompletionHandler:(id)arg3;
- (void)syncSendDictionary:(id)arg1 toPeer:(id)arg2 withCompletionHandler:(id)arg3;
- (void)syncStartAdvertisingPeer;
- (void)syncStopAdvertisingPeer;
- (id)txtRecordDataWithDiscoveryInfo:(id)arg1;
- (bool)wasAdvertising;

@end
