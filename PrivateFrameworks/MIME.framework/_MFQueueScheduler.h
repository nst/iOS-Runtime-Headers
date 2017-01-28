/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface _MFQueueScheduler : NSObject <MFScheduler> {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)_prefersImmediateExecution;
- (id)afterDelay:(double)arg1 performBlock:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)performBlock:(id)arg1;
- (id)performCancelableBlock:(id)arg1;

@end
