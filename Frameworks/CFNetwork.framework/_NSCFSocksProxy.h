/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface _NSCFSocksProxy : NSObject <NSProxyConnectionDelegate> {
    NSDictionary * _configuration;
    NSProxyConnection * _inbound;
    NSString * _outHost;
    int  _outPort;
    NSProxyConnection * _outbound;
    NSObject<OS_dispatch_queue> * _queue;
    SocksHandshake * _socksHandshake;
}

@property (retain) NSDictionary *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSProxyConnection *inbound;
@property (retain) NSProxyConnection *outbound;
@property (readonly) Class superclass;

+ (void)handleIncomingConnection:(id)arg1 queue:(id)arg2 configuration:(id)arg3;
+ (id)proxyServers;

- (void).cxx_destruct;
- (void)cleanup;
- (id)configuration;
- (void)connected:(int)arg1;
- (void)dealloc;
- (void)handshakeRead;
- (id)inbound;
- (id)initWithConnection:(id)arg1 queue:(id)arg2;
- (id)outbound;
- (void)outboundConnectionCompleteWithError:(int)arg1;
- (void)outboundConnectionReceivedData:(id)arg1 handler:(id /* block */)arg2;
- (void)readInbound;
- (void)readOutbound;
- (void)setConfiguration:(id)arg1;
- (void)setInbound:(id)arg1;
- (void)setOutbound:(id)arg1;

@end
