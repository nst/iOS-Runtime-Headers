/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

@interface TVPStateMachine : NSObject {
    NSMutableArray * _blocksToExecuteAfterStateTransition;
    bool  _callsStateChangeHandlerSynchronously;
    NSString * _currentState;
    NSMutableDictionary * _defaultHandlers;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableArray * _events;
    NSMutableDictionary * _handlers;
    bool  _handlingEvent;
    NSArray * _ignorableEvents;
    NSObject<OS_os_log> * _logObject;
    NSString * _loggingComponent;
    long long  _mode;
    NSString * _name;
    bool  _shouldAcceptEvents;
    id /* block */  _stateChangeHandler;
}

@property (nonatomic) bool callsStateChangeHandlerSynchronously;
@property (copy) NSString *currentState;
@property (copy) NSArray *ignorableEvents;
@property (nonatomic, retain) NSObject<OS_os_log> *logObject;
@property (nonatomic, copy) NSString *loggingComponent;
@property (nonatomic, readonly) long long mode;
@property (nonatomic, readonly, copy) NSString *name;
@property bool shouldAcceptEvents;

+ (void)deregisterStateMachine:(id)arg1;
+ (void)initialize;
+ (void)registerStateMachine:(id)arg1;
+ (id)stateMachineWithName:(id)arg1;
+ (id)stateMachinesOfType:(Class)arg1;

- (void).cxx_destruct;
- (void)_dispatchEvent:(id)arg1;
- (id /* block */)_eventHandlerForEvent:(id)arg1;
- (void)_executePostTransitionBlocks;
- (void)_processEvent:(id)arg1;
- (void)_processNextEvent;
- (void)_transitionToState:(id)arg1 withEvent:(id)arg2 context:(id)arg3 userInfo:(id)arg4;
- (bool)callsStateChangeHandlerSynchronously;
- (id)currentState;
- (void)deregisterHandlers;
- (void)executeBlockAfterCurrentStateTransition:(id /* block */)arg1;
- (id)ignorableEvents;
- (id)initWithName:(id)arg1 initialState:(id)arg2 mode:(long long)arg3;
- (id)initWithName:(id)arg1 initialState:(id)arg2 mode:(long long)arg3 stateChangeHandler:(id /* block */)arg4;
- (id)logObject;
- (void)logUnhandledEvents;
- (id)loggingComponent;
- (long long)mode;
- (id)name;
- (void)postEvent:(id)arg1;
- (void)postEvent:(id)arg1 withContext:(id)arg2;
- (void)postEvent:(id)arg1 withContext:(id)arg2 userInfo:(id)arg3;
- (void)purgeEventQueue;
- (void)registerDefaultHandlerForEvent:(id)arg1 withBlock:(id /* block */)arg2;
- (void)registerHandlerForEvent:(id)arg1 onState:(id)arg2 withBlock:(id /* block */)arg3;
- (void)registerHandlerForEvent:(id)arg1 onStates:(id)arg2 withBlock:(id /* block */)arg3;
- (void)registerHandlerForEvents:(id)arg1 onStates:(id)arg2 withBlock:(id /* block */)arg3;
- (void)registerStateTransitionFromState:(id)arg1 onEvent:(id)arg2 toState:(id)arg3;
- (void)setCallsStateChangeHandlerSynchronously:(bool)arg1;
- (void)setCurrentState:(id)arg1;
- (void)setIgnorableEvents:(id)arg1;
- (void)setLogObject:(id)arg1;
- (void)setLoggingComponent:(id)arg1;
- (void)setShouldAcceptEvents:(bool)arg1;
- (bool)shouldAcceptEvents;

@end
