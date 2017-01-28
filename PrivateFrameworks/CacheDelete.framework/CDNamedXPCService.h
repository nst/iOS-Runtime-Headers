/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
 */

@interface CDNamedXPCService : CDXPCService {
    unsigned long long  _options;
    NSString * _xpcServiceName;
}

@property (nonatomic) unsigned long long options;
@property (nonatomic, retain) NSString *xpcServiceName;

- (void).cxx_destruct;
- (id)initWithInfo:(id)arg1;
- (void)obtainXPCConnection:(id)arg1;
- (unsigned long long)options;
- (void)setOptions:(unsigned long long)arg1;
- (void)setXpcServiceName:(id)arg1;
- (id)xpcServiceName;

@end
