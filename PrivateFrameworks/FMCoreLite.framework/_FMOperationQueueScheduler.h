/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

@interface _FMOperationQueueScheduler : NSObject <FMScheduler> {
    NSOperationQueue * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)afterDelay:(double)arg1 performBlock:(id)arg2;
- (id)initWithMaxConcurrentOperationCount:(long long)arg1;
- (void)performBlock:(id)arg1;
- (id)performCancelableBlock:(id)arg1;

@end