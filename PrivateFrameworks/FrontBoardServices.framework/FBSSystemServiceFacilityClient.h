/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSystemServiceFacilityClient : NSObject <FBSSystemServiceClient, FBSSystemServiceClientDelegate> {
    FBSSystemServiceClient * _client;
    NSString * _identifier;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *calloutQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (readonly) Class superclass;

- (id)calloutQueue;
- (void)client:(id)arg1 configureConnectMessage:(id)arg2;
- (void)client:(id)arg1 handleError:(id)arg2;
- (void)client:(id)arg1 handleMessage:(id)arg2 withType:(long long)arg3;
- (void)configureConnectMessage:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)handleError:(id)arg1;
- (void)handleMessage:(id)arg1 withType:(long long)arg2;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 calloutQueue:(id)arg2;
- (void)invalidate;
- (void)sendMessage:(id)arg1 withType:(long long)arg2;
- (void)sendMessage:(id)arg1 withType:(long long)arg2 replyHandler:(id)arg3 waitForReply:(bool)arg4 timeout:(double)arg5;

@end
