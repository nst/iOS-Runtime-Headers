/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKDiscoveryPeer : NSObject <GKSimpleTimerDelegate> {
    NSMutableArray * _attemptedInterfaces;
    NSNumber * _chosenInterface;
    GKDiscoveryPeerConnection * _connection;
    NSString * _deviceID;
    double  _discoveryTimeStamp;
    NSMutableSet * _interfaces;
    NSMutableArray * _orderedInterfaces;
    NSString * _playerID;
    id  _resolveTimeoutHandler;
    GKSimpleTimer * _resolveTimer;
    NSMutableArray * _sendDataBuffer;
    NSString * _serviceName;
    bool  _shouldSignalDiscovery;
    int  _state;
    NSObject<OS_dispatch_queue> * _syncQueue;
    GKDiscoveryPeerConnection * _trialConnection;
}

@property (nonatomic, retain) NSMutableArray *attemptedInterfaces;
@property (nonatomic, retain) NSNumber *chosenInterface;
@property (nonatomic, retain) GKDiscoveryPeerConnection *connection;
@property (nonatomic, copy) NSString *deviceID;
@property (nonatomic) double discoveryTimeStamp;
@property (nonatomic, retain) NSMutableSet *interfaces;
@property (nonatomic, retain) NSMutableArray *orderedInterfaces;
@property (nonatomic, copy) NSString *playerID;
@property (nonatomic, copy) id resolveTimeoutHandler;
@property (nonatomic, retain) GKSimpleTimer *resolveTimer;
@property (nonatomic, retain) NSMutableArray *sendDataBuffer;
@property (nonatomic, copy) NSString *serviceName;
@property (nonatomic) bool shouldSignalDiscovery;
@property (nonatomic) int state;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic, retain) GKDiscoveryPeerConnection *trialConnection;

- (id)attemptedInterfaces;
- (id)chosenInterface;
- (void)cleanUpForBrowse;
- (id)connection;
- (void)dealloc;
- (id)description;
- (id)deviceID;
- (void)didLoseInterface:(id)arg1;
- (double)discoveryTimeStamp;
- (void)flushDataBuffer;
- (id)initWithServiceName:(id)arg1;
- (id)interfaces;
- (void)invalidate;
- (id)nextInterfaceIndex;
- (id)orderedInterfaces;
- (bool)parseServiceNameForInit:(id)arg1;
- (id)playerID;
- (id)resolveTimeoutHandler;
- (id)resolveTimer;
- (void)sendData:(id)arg1 withCompletionHandler:(id)arg2;
- (id)sendDataBuffer;
- (id)serviceName;
- (void)setAttemptedInterfaces:(id)arg1;
- (void)setChosenInterface:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setDiscoveryTimeStamp:(double)arg1;
- (void)setInterfaces:(id)arg1;
- (void)setOrderedInterfaces:(id)arg1;
- (void)setPlayerID:(id)arg1;
- (void)setResolveTimeoutHandler:(id)arg1;
- (void)setResolveTimer:(id)arg1;
- (void)setSendDataBuffer:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setShouldSignalDiscovery:(bool)arg1;
- (void)setState:(int)arg1;
- (void)setTrialConnection:(id)arg1;
- (bool)shouldSignalDiscovery;
- (void)startResolveTimerWithHandler:(id)arg1;
- (int)state;
- (void)stopResolveTimer;
- (id)stringForState:(int)arg1;
- (id)syncQueue;
- (void)timeout:(id)arg1;
- (id)trialConnection;

@end
