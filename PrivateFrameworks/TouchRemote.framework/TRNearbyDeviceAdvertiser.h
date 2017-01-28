/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRNearbyDeviceAdvertiser : NSObject {
    NSObject<OS_dispatch_queue> * _advertiserQ;
    <TRNearbyDeviceAdvertiserDelegate> * _delegate;
    unsigned long long  _requestedService;
    SFService * _service;
    NSMapTable * _sessionsTable;
    NSObject<OS_dispatch_queue> * _sessionsTableQ;
    unsigned long long  _state;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *advertiserQ;
@property <TRNearbyDeviceAdvertiserDelegate> *delegate;
@property unsigned long long requestedService;
@property (nonatomic, retain) SFService *service;
@property (nonatomic, retain) NSMapTable *sessionsTable;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *sessionsTableQ;
@property (nonatomic) unsigned long long state;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_handleActivationWithError:(id)arg1;
- (void)_handleEventMessage:(id)arg1;
- (void)_handleInterruption;
- (void)_handleInvalidation;
- (void)_handleNewConnectionFromPeerDevice:(id)arg1 withCompletionHandler:(id)arg2;
- (void)_handleRequestMessage:(id)arg1;
- (void)_requestSessionForMessage:(id)arg1 withCallback:(id)arg2;
- (void)_respondToRequest:(id)arg1 withError:(id)arg2;
- (id)advertiserQ;
- (id)delegate;
- (id)init;
- (unsigned long long)requestedService;
- (id)service;
- (id)sessionsTable;
- (id)sessionsTableQ;
- (void)setAdvertiserQ:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRequestedService:(unsigned long long)arg1;
- (void)setService:(id)arg1;
- (void)setSessionsTable:(id)arg1;
- (void)setSessionsTableQ:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)startAdvertisingWithService:(unsigned long long)arg1;
- (unsigned long long)state;
- (void)stopAdvertising;

@end
