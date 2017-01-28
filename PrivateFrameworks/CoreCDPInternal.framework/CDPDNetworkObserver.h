/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDNetworkObserver : NSObject {
    NSMutableDictionary * _clientsByUUID;
    NSLock * _clientsLock;
    NSObject<OS_dispatch_queue> * _eventQueue;
    bool  _networkIsReachable;
    struct __SCNetworkReachability { } * _networkReach;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_networkReachabilityDidChangeWithFlags:(unsigned int)arg1;
- (id)addNetworkObserverWithEventHandler:(id)arg1;
- (id)init;
- (void)removeObserverWithToken:(id)arg1;
- (void)startObservingNetwork;

@end
