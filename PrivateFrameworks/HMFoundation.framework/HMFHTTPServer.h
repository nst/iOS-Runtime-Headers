/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFHTTPServer : NSObject <HMFHTTPClientConnectionDelegate, HMFLogging, _HMFCFHTTPServerDelegate> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    double  _connectionIdleTimeout;
    NSMutableArray * _connections;
    <HMFHTTPServerDelegate> * _delegate;
    _HMFCFHTTPServer * _internal;
    NSString * _name;
    HMFMutableNetService * _netService;
    unsigned long long  _options;
    unsigned long long  _port;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSMutableArray * _requestHandlers;
    NSString * _serviceType;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property double connectionIdleTimeout;
@property (readonly, copy) NSArray *connections;
@property (readonly, copy) NSString *debugDescription;
@property <HMFHTTPServerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _HMFCFHTTPServer *internal;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) HMFMutableNetService *netService;
@property (nonatomic, readonly) unsigned long long options;
@property (readonly) unsigned long long port;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly, copy) NSArray *requestHandlers;
@property (nonatomic, readonly, copy) NSString *serviceType;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (void)_handleClosedConnection:(id)arg1;
- (void)_handleOpenedConnection:(id)arg1;
- (void)_handleReceivedRequest:(id)arg1 connection:(id)arg2;
- (void)_stopWithError:(id)arg1;
- (void)addConnection:(id)arg1;
- (id)clientQueue;
- (void)connection:(id)arg1 didReceiveRequest:(id)arg2;
- (double)connectionIdleTimeout;
- (id)connections;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (id)init;
- (id)initWithServiceType:(id)arg1 name:(id)arg2 port:(unsigned long long)arg3 options:(unsigned long long)arg4;
- (id)internal;
- (id)logIdentifier;
- (id)name;
- (id)netService;
- (unsigned long long)options;
- (unsigned long long)port;
- (id)propertyQueue;
- (void)registerRequestHandler:(id)arg1;
- (void)removeConnection:(id)arg1;
- (id)requestHandlers;
- (void)server:(id)arg1 didCloseConnection:(id)arg2;
- (void)server:(id)arg1 didOpenConnection:(id)arg2;
- (void)serverDidInvalidate:(id)arg1;
- (id)serviceType;
- (void)setConnectionIdleTimeout:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInternal:(id)arg1;
- (id)shortDescription;
- (void)startWithCompletionHandler:(id)arg1;
- (void)stop;
- (void)stopWithError:(id)arg1;
- (void)unregisterRequestHandler:(id)arg1;

@end
