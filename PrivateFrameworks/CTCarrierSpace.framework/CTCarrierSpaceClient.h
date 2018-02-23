/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
 */

@interface CTCarrierSpaceClient : NSObject {
    struct queue { 
        struct object { 
            struct dispatch_object_s {} *fObj; 
        } fObj; 
    }  _callbackQueue;
    NSXPCConnection * _connection;
    <CTCarrierSpaceClientDelegate> * _delegate;
    CTCarrierSpaceClientDelegateProxy * _delegateProxy;
    NSXPCListenerEndpoint * _endpoint;
    struct queue { 
        struct object { 
            struct dispatch_object_s {} *fObj; 
        } fObj; 
    }  _queue;
}

@property (nonatomic) <CTCarrierSpaceClientDelegate> *delegate;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_connect_sync;
- (void)_ensureConnected_sync;
- (id)_proxyWithErrorHandler:(id /* block */)arg1;
- (void)authenticationDidComplete:(id)arg1 completion:(id /* block */)arg2;
- (void)authenticationDidFail:(id)arg1 completion:(id /* block */)arg2;
- (id)delegate;
- (void)fetchAppsInfo:(id /* block */)arg1;
- (void)fetchAppsInfo:(bool)arg1 completion:(id /* block */)arg2;
- (void)fetchDataPlanMetrics:(id /* block */)arg1;
- (void)fetchPlansInfo:(id /* block */)arg1;
- (void)fetchPlansInfo:(bool)arg1 completion:(id /* block */)arg2;
- (void)fetchUsageInfo:(id /* block */)arg1;
- (void)fetchUsageInfo:(bool)arg1 completion:(id /* block */)arg2;
- (void)getCapabilities:(id /* block */)arg1;
- (void)getUserConsentFlowInfo:(id /* block */)arg1;
- (id)init;
- (id)initWithQueue:(struct dispatch_queue_s { }*)arg1;
- (id)initWithQueue:(struct dispatch_queue_s { }*)arg1 andListenerEndpoint:(id)arg2;
- (void)invalidate;
- (void)ping:(id /* block */)arg1;
- (void)purchasePlan:(id)arg1 completion:(id /* block */)arg2;
- (void)refreshAllInfo:(id /* block */)arg1;
- (void)refreshAppsInfo:(id /* block */)arg1;
- (void)refreshPlansInfo:(id /* block */)arg1;
- (void)refreshUsageInfo:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUserConsent:(bool)arg1 completion:(id /* block */)arg2;
- (void)setUserInAuthFlow:(bool)arg1 completion:(id /* block */)arg2;
- (void)testMode:(bool)arg1 config:(id)arg2 completion:(id /* block */)arg3;
- (void)userDidAcceptPlanTerms:(bool)arg1 completion:(id /* block */)arg2;

@end
