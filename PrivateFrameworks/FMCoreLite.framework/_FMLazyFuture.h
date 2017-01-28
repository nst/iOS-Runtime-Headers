/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

@interface _FMLazyFuture : FMFuture {
    NSObject<OS_dispatch_queue> * _accessQueue;
    id  _block;
    <FMScheduler> * _scheduler;
    bool  _started;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, copy) id block;
@property (nonatomic, retain) <FMScheduler> *scheduler;
@property (nonatomic) bool started;

- (void).cxx_destruct;
- (void)_runIfNecessary;
- (id)accessQueue;
- (void)addCompletionBlock:(id)arg1;
- (void)addFailureBlock:(id)arg1;
- (void)addSuccessBlock:(id)arg1;
- (id)block;
- (id)initWithBlock:(id)arg1 scheduler:(id)arg2;
- (id)scheduler;
- (void)setAccessQueue:(id)arg1;
- (void)setBlock:(id)arg1;
- (void)setScheduler:(id)arg1;
- (void)setStarted:(bool)arg1;
- (bool)started;

@end
