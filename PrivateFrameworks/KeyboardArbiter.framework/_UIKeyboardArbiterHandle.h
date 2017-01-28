/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
 */

@interface _UIKeyboardArbiterHandle : NSObject <_UIKeyboardArbitration> {
    bool  _active;
    NSString * _bundleIdentifier;
    bool  _checkingShowability;
    NSXPCConnection * _connection;
    NSMutableSet * _hostedPids;
    bool  _invalidated;
    double  _level;
    _UIKeyboardArbiter * _owner;
    BKSProcessAssertion * _remoteKeepAliveAssertion;
    unsigned long long  _remoteKeepAliveAssertionCount;
    unsigned long long  _remoteKeepAliveTimerCount;
    NSString * _remoteSceneID;
    bool  _running;
    FBSCAContextSceneLayer * _sceneLayer;
    int  _suppressionCount;
    bool  _wantedActive;
}

@property (readonly) bool active;
@property (readonly, retain) NSString *bundleIdentifier;
@property (readonly) NSXPCConnection *connection;
@property (readonly) double level;
@property (readonly) int processIdentifier;
@property (readonly, retain) NSString *remoteSceneID;
@property bool running;
@property (readonly, retain) FBSCAContextSceneLayer *sceneLayer;
@property (readonly) bool wantedActive;

+ (id)handlerWithArbiter:(id)arg1 forConnection:(id)arg2;

- (void).cxx_destruct;
- (void)_deactivateScene;
- (bool)active;
- (void)applicationShouldFocusWithBundle:(id)arg1 onCompletion:(id)arg2;
- (id)bundleIdentifier;
- (id)connection;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (bool)isHandlerShowableWithHandler:(id)arg1;
- (double)level;
- (void)notifyHostedPIDsOfSuppression:(bool)arg1;
- (int)processIdentifier;
- (void)releaseProcessAssertion;
- (id)remoteSceneID;
- (void)retrieveDebugInformation:(id)arg1;
- (void)retrieveMoreDebugInformationWithCompletion:(id)arg1;
- (bool)running;
- (id)sceneLayer;
- (void)setRunning:(bool)arg1;
- (void)setWindowContextID:(unsigned int)arg1 sceneIdentifier:(id)arg2 forKeyboard:(bool)arg3 withLevel:(double)arg4;
- (void)setWindowHostingPID:(int)arg1 active:(bool)arg2;
- (void)signalKeyboardChangeComplete;
- (void)signalKeyboardChanged:(id)arg1 onCompletion:(id)arg2;
- (void)startArbitrationWithExpectedState:(id)arg1 hostingPIDs:(id)arg2 withSuppression:(int)arg3 onConnected:(id)arg4;
- (void)takeProcessAssertionOnRemoteWithQueue:(id)arg1;
- (void)transition:(id)arg1 eventStage:(unsigned long long)arg2 withInfo:(id)arg3;
- (bool)wantedActive;

@end
