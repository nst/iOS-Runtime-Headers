/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFRemoteInteractionSession : NSObject <NSSecureCoding, SFXPCInterface> {
    bool  _activateCalled;
    SDRemoteInteractionAgent * _agent;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id  _invalidationHandler;
    SFDevice * _peerDevice;
    SFSession * _remoteSession;
    id  _textSessionDidBegin;
    id  _textSessionDidChange;
    id  _textSessionDidEnd;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic, retain) SDRemoteInteractionAgent *agent;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id interruptionHandler;
@property (nonatomic, copy) id invalidationHandler;
@property (nonatomic, retain) SFDevice *peerDevice;
@property (nonatomic, copy) id textSessionDidBegin;
@property (nonatomic, copy) id textSessionDidChange;
@property (nonatomic, copy) id textSessionDidEnd;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id)arg1;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidate;
- (void)_invalidated;
- (void)_sessionClearText;
- (void)_sessionCommitText;
- (void)_sessionDeleteTextBackward;
- (void)_sessionHandleEvent:(id)arg1;
- (void)_sessionInsertText:(id)arg1;
- (void)_sessionSetText:(id)arg1;
- (void)_sessionStart;
- (void)activateWithCompletion:(id)arg1;
- (id)agent;
- (void)clearText;
- (void)commitText;
- (void)deleteTextBackward;
- (id)description;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)insertText:(id)arg1;
- (id)interruptionHandler;
- (void)invalidate;
- (id)invalidationHandler;
- (id)peerDevice;
- (void)remoteInteractionSessionTextSessionDidBegin:(id)arg1;
- (void)remoteInteractionSessionTextSessionDidChange:(id)arg1;
- (void)remoteInteractionSessionTextSessionDidEnd:(id)arg1;
- (void)setAgent:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id)arg1;
- (void)setInvalidationHandler:(id)arg1;
- (void)setPeerDevice:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextSessionDidBegin:(id)arg1;
- (void)setTextSessionDidChange:(id)arg1;
- (void)setTextSessionDidEnd:(id)arg1;
- (id)textSessionDidBegin;
- (id)textSessionDidChange;
- (id)textSessionDidEnd;

@end
