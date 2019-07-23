/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPTextInputSession : NSObject <RTIInputSystemPayloadDelegate> {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    <RPMessageable> * _messenger;
    RTIInputSystemSourceSession * _rtiSession;
    id /* block */  _rtiUpdatedHandler;
    bool  _started;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <RPMessageable> *messenger;
@property (nonatomic, readonly) RTIInputSystemSourceSession *rtiSession;
@property (nonatomic, copy) id /* block */ rtiUpdatedHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_handleTextInputChange:(id)arg1 started:(bool)arg2;
- (void)_handleTextInputStarted:(id)arg1;
- (void)_handleTextInputStopped:(id)arg1;
- (void)_invalidate;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)handleTextActionPayload:(id)arg1;
- (id)init;
- (void)invalidate;
- (id)messenger;
- (id)rtiSession;
- (id /* block */)rtiUpdatedHandler;
- (void)setMessenger:(id)arg1;
- (void)setRtiUpdatedHandler:(id /* block */)arg1;

@end
