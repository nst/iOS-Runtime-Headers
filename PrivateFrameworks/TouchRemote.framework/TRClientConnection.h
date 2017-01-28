/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRClientConnection : TRConnection {
    SFSession * _session;
}

@property (retain) SFSession *session;

- (void).cxx_destruct;
- (void)connectToNearbyDevice:(id)arg1 withCompletion:(id)arg2;
- (id)eventMessageHandler;
- (id)interruptionHandler;
- (void)invalidate;
- (id)invalidationHandler;
- (id)requestMessageHandler;
- (void)sendEvent:(id)arg1;
- (void)sendRequest:(id)arg1;
- (void)sendResponse:(id)arg1;
- (id)session;
- (void)setEventMessageHandler:(id)arg1;
- (void)setInterruptionHandler:(id)arg1;
- (void)setInvalidationHandler:(id)arg1;
- (void)setRequestMessageHandler:(id)arg1;
- (void)setSession:(id)arg1;

@end