/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBUpdateSceneTransaction : FBTransaction <FBSceneManagerObserver, FBSynchronizedTransaction> {
    FBSSceneDefinition * _definition;
    bool  _destroyed;
    FBWaitForSceneDestructionTransaction * _destructionTransaction;
    bool  _didCommit;
    FBSSceneParameters * _parameters;
    bool  _readyToCommit;
    NSString * _sceneID;
    FBSceneManager * _sceneManager;
    <FBSynchronizedTransactionDelegate> * _synchronizationDelegate;
    unsigned long long  _transactionID;
    FBSSceneTransitionContext * _transitionContext;
    bool  _waitsForSceneCommit;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool destroyed;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) FBSSceneSettings *newSettings;
@property (nonatomic, readonly, retain) FBScene *scene;
@property (nonatomic, readonly, retain) NSString *sceneIdentifier;
@property (nonatomic, readonly, retain) FBSSceneSettings *settings;
@property (nonatomic, readonly, retain) FBSSceneSpecification *specification;
@property (readonly) Class superclass;
@property (nonatomic) <FBSynchronizedTransactionDelegate> *synchronizationDelegate;
@property (nonatomic, readonly, retain) FBSSceneTransitionContext *transitionContext;
@property (nonatomic) bool waitsForSceneCommit;

- (void).cxx_destruct;
- (void)_begin;
- (bool)_canBeInterrupted;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_commitSceneOrWait;
- (void)_commitSceneUpdate:(id /* block */)arg1;
- (void)_createScene;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void)_didInterruptWithReason:(id)arg1;
- (void)_enumerateUpdateSceneObserversWithBlock:(id /* block */)arg1;
- (id)_initWithSceneDefinition:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3;
- (void)_performCommit;
- (void)_updateScene;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (bool)destroyed;
- (id)initWithSceneDefinition:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3;
- (id)initWithSceneIdentifier:(id)arg1 process:(id)arg2 display:(id)arg3 newSettings:(id)arg4 transitionContext:(id)arg5 clientProviderProvider:(id /* block */)arg6 initialClientSettingsProvider:(id /* block */)arg7;
- (id)initWithSceneIdentifier:(id)arg1 process:(id)arg2 parameters:(id)arg3 transitionContext:(id)arg4;
- (id)initWithSceneToUpdate:(id)arg1 newSettings:(id)arg2 transitionContext:(id)arg3;
- (bool)isReadyForSynchronizedCommit;
- (id)newSettings;
- (void)performSynchronizedCommit;
- (void)removeObserver:(id)arg1;
- (id)scene;
- (id)sceneIdentifier;
- (void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3 success:(bool)arg4;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4;
- (void)setSynchronizationDelegate:(id)arg1;
- (void)setWaitsForSceneCommit:(bool)arg1;
- (id)settings;
- (id)specification;
- (id)synchronizationDelegate;
- (id)transitionContext;
- (bool)waitsForSceneCommit;

@end
