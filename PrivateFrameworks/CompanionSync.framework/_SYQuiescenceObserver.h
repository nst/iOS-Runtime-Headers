/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface _SYQuiescenceObserver : NSObject {
    NSObject<OS_dispatch_group> * _allocationGroup;
    NSMutableSet * _allocations;
    NSPointerArray * _quiescenceQueues;
}

+ (bool)isQuiescenceEnabled;
+ (void)setQuiescenceEnabled:(bool)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)decrementAllocationCount:(id)arg1;
- (void)incrementAllocationCount:(id)arg1;
- (id)init;
- (void)notifyOnDeallocationComplete:(id)arg1;
- (void)notifyOnQuiescence:(id)arg1;
- (void)registerQueue:(id)arg1;
- (bool)waitForDeallocationCompleteWithTimeout:(double)arg1;
- (bool)waitForQuiescenceWithTimeout:(double)arg1;

@end
