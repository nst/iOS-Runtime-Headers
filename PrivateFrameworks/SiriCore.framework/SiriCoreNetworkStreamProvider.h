/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface SiriCoreNetworkStreamProvider : NSObject <NSURLSessionDelegate, SiriCoreStreamProvider> {
    id  _completion_block;
    bool  _connectByPOPEnabled;
    NSString * _connectionId;
    SiriCoreConnectionType * _connectionType;
    <SiriCoreStreamProviderDelegate> * _delegate;
    NSInputStream * _inputStream;
    int  _interfaceIndex;
    NSString * _interfaceName;
    bool  _isCanceled;
    NSOperationQueue * _opQueue;
    NSOutputStream * _outputStream;
    bool  _prefersWWAN;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _resolvedHost;
    SAConnectionPolicyRoute * _route;
    AFWatchdogTimer * _streamCaptureTimer;
    NSURL * _url;
    NSURLSession * _urlSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)getMetricsContext:(id)arg1;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 betterRouteDiscoveredForStreamTask:(id)arg2;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4;
- (void)_getConfiguredStreamPair:(id)arg1;
- (id)analysisInfo;
- (void)close;
- (id)connectionType;
- (id)delegate;
- (void)getRemoteMetrics:(id)arg1;
- (id)getResolvedHost;
- (id)headerData;
- (id)initWithQueue:(id)arg1;
- (bool)isPeerConnectionError:(id)arg1;
- (void)openStreamPairForURL:(id)arg1 withConnectionId:(id)arg2 completion:(id)arg3;
- (void)setConnectByPOPMethod:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPolicyRoute:(id)arg1;
- (void)setPrefersWWAN:(bool)arg1;
- (bool)shouldFallbackFromError:(id)arg1;
- (bool)shouldFallbackQuickly;

@end
