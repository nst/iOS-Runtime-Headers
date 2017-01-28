/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface _HMDLegacyWatchSession : HMFMessageTransport {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSUUID * _identifier;
    HMDDevice * _peer;
    NSMutableArray * _pendingTransactions;
    long long  _role;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) HMDDevice *peer;
@property (nonatomic, readonly) NSMutableArray *pendingTransactions;
@property (nonatomic, readonly) long long role;

- (void).cxx_destruct;
- (void)_handleClientReceivedMessage:(id)arg1;
- (void)_handleServerReceivedMessage:(id)arg1;
- (id)clientQueue;
- (void)dealloc;
- (void)handleReceivedMessage:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithPeer:(id)arg1 role:(long long)arg2 identifier:(id)arg3;
- (id)peer;
- (id)pendingTransactions;
- (long long)role;
- (void)sendMessage:(id)arg1 completionHandler:(id)arg2;
- (void)stop;
- (id)transactionForIdentifier:(id)arg1;

@end
