/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUNotifyObserver : NSObject <TUNotifyObserver> {
    id  _callback;
    NSString * _notificationName;
    NSObject<OS_dispatch_queue> * _queue;
    int  _token;
}

@property (nonatomic, copy) id callback;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *notificationName;
@property (getter=isObserving, nonatomic, readonly) bool observing;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic) int token;

- (void).cxx_destruct;
- (void)_endObserving;
- (void)beginObserving;
- (id)callback;
- (void)dealloc;
- (void)endObserving;
- (id)initWithNotificationName:(id)arg1 queue:(id)arg2;
- (bool)isObserving;
- (id)notificationName;
- (id)queue;
- (void)setCallback:(id)arg1;
- (void)setNotificationName:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setToken:(int)arg1;
- (int)token;

@end
