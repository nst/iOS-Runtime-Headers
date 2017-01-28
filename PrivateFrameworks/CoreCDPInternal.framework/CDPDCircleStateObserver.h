/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDCircleStateObserver : NSObject {
    int  _circleChangeToken;
    <CDPDCircleProxy> * _circleProxy;
    NSObject<OS_dispatch_queue> * _eventQueue;
    bool  _isObserving;
}

- (void).cxx_destruct;
- (const char *)_notificationName;
- (void)dealloc;
- (id)initWithProxy:(id)arg1;
- (void)observeChangeToState:(int)arg1 handler:(id)arg2;
- (void)observeCircleStateWithChangeHandler:(id)arg1;
- (void)stopObservingCircleStatusChange;

@end
