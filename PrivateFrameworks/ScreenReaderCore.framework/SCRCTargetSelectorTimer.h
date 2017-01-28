/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCTargetSelectorTimer : SCRCTargetSelector {
    bool  _createdTimer;
    bool  _isCanceled;
    bool  _isPending;
    id  _key;
    NSLock * _lock;
    id  _object;
    struct __CFRunLoopTimer { } * _timer;
}

+ (void)_runThread;
+ (void)initialize;

- (bool)_createdTimer;
- (void)_dispatch;
- (void)_dispatchMainThread;
- (void)_dispatchSCRCThread;
- (void)cancel;
- (void)dealloc;
- (void)dispatchAfterDelay:(double)arg1;
- (void)dispatchAfterDelay:(double)arg1 withObject:(id)arg2;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 threadKey:(id)arg3;
- (void)invalidate;
- (bool)isCanceled;
- (bool)isCancelled;
- (bool)isPending;
- (oneway void)release;
- (id)threadKey;

@end
