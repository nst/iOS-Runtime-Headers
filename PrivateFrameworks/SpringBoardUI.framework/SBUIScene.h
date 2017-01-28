/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIScene : NSObject <BSDescriptionProviding, FBSceneClient> {
    FBSSceneClientSettings * _clientSettings;
    FBSDisplay * _display;
    NSString * _identifier;
    NSMutableSet * _layers;
    <FBSceneHost> * _sceneHost;
    FBSSceneSettings * _settings;
    bool  _valid;
}

@property (copy) FBSSceneClientSettings *clientSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) FBSDisplay *display;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSSet *layers;
@property (copy) FBSSceneSettings *settings;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (void)attachLayer:(id)arg1;
- (id)clientSettings;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)detachLayer:(id)arg1;
- (id)display;
- (unsigned long long)hash;
- (void)host:(id)arg1 configureWithDefinition:(id)arg2 parameters:(id)arg3;
- (void)host:(id)arg1 configureWithInitialClientSettings:(id)arg2;
- (void)host:(id)arg1 didInvalidateWithTransitionContext:(id)arg2 completion:(id)arg3;
- (void)host:(id)arg1 didReceiveActions:(id)arg2;
- (void)host:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(id)arg5;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (id)layers;
- (void)sendActions:(id)arg1;
- (void)setClientSettings:(id)arg1;
- (void)setSettings:(id)arg1;
- (id)settings;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)updateClientSettingsWithBlock:(id)arg1;

@end
