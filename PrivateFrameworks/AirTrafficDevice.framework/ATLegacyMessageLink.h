/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATLegacyMessageLink : ATLockdownMessageLink <ATLegacyMessageLink, ATSocketDelegate> {
    long long  _expectedBytesRemaining;
    NSMutableData * _incomingData;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _requestHandlerTable;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_checkMessageTimeouts;
- (void)_handlePingMessage:(id)arg1 fromLink:(id)arg2;
- (void)_handlePongMessage:(id)arg1 fromLink:(id)arg2;
- (bool)_sendData:(const char *)arg1 offset:(unsigned int)arg2 len:(unsigned int)arg3 error:(id*)arg4;
- (void)_sendPingMessage;
- (void)close;
- (id)description;
- (id)initWithSocket:(id)arg1;
- (bool)open;
- (void)removeHandlerForMessage:(id)arg1;
- (void)sendMessage:(id)arg1 withCompletion:(id)arg2;
- (void)setHandlerForMessage:(id)arg1 handler:(id)arg2;
- (void)socket:(id)arg1 hasDataAvailable:(const char *)arg2 length:(long long)arg3;
- (void)socketDidClose:(id)arg1;

@end
