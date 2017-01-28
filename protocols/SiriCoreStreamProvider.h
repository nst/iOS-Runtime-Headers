/* Generated by RuntimeBrowser.
 */

@protocol SiriCoreStreamProvider <NSObject>

@required

+ (void)getMetricsContext:(void *)arg1; // needs 1 arg types, found 6: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSDictionary *, void*

- (SiriCoreAceConnectionAnalysisInfo *)analysisInfo;
- (void)close;
- (SiriCoreConnectionType *)connectionType;
- (void)getRemoteMetrics:(void *)arg1; // needs 1 arg types, found 6: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, SiriCoreConnectionMetrics *, void*
- (NSString *)getResolvedHost;
- (NSData *)headerData;
- (bool)isPeerConnectionError:(NSError *)arg1;
- (void)openStreamPairForURL:(void *)arg1 withConnectionId:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: NSURL *, NSString *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSInputStream *, NSOutputStream *, NSError *, void*
- (void)setConnectByPOPMethod:(bool)arg1;
- (void)setDelegate:(id <SiriCoreStreamProviderDelegate>)arg1;
- (bool)shouldFallbackFromError:(NSError *)arg1;
- (bool)shouldFallbackQuickly;

@end
