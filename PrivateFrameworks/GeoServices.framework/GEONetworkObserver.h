/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONetworkObserver : NSObject {
    bool  _initialized;
    NSLock * _lock;
    bool  _networkNotified;
    struct __SCNetworkReachability { } * _networkReach;
    unsigned int  _networkReachability;
    bool  _networkReachable;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedNetworkObserver;

- (void)_networkObserversInitialize;
- (void)_networkReachableCallBack:(unsigned int)arg1;
- (void)_networkReachableFirstCallBack:(id)arg1;
- (void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2;
- (void)dealloc;
- (id)init;
- (void)initializeIfNecessary;
- (bool)isCellConnection;
- (bool)isConnectionRequired;
- (bool)isNetworkReachable;
- (void)removeNetworkReachableObserver:(id)arg1;

@end
