/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMPocketStateQueueBlockPair : NSObject {
    id  fQueryBlock;
    NSObject<OS_dispatch_queue> * fQueryQueue;
}

- (void)dealloc;
- (void)dispatchWithState:(long long)arg1 andError:(id)arg2;
- (id)initWithQueue:(id)arg1 andBlock:(id)arg2;

@end
