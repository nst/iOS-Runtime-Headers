/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
 */

@interface CDAppExtensionService : CDXPCService {
    NSExtension * _extension;
    <NSCopying> * _requestId;
}

@property (nonatomic, readonly) NSExtension *extension;
@property (nonatomic, retain) <NSCopying> *requestId;

- (void).cxx_destruct;
- (id)extension;
- (id)initWithInfo:(id)arg1 extension:(id)arg2;
- (void)invalidateConnection;
- (void)obtainXPCConnection:(id)arg1;
- (id)requestId;
- (void)resumeConnection;
- (void)setCompletionBlock:(id)arg1;
- (void)setInterruptionBlock:(id)arg1;
- (void)setInvalidationBlock:(id)arg1;
- (void)setRequestId:(id)arg1;

@end