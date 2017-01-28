/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface _MFOperationQueueScheduler : NSObject <MFScheduler> {
    NSOperationQueue * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)afterDelay:(double)arg1 performBlock:(id)arg2;
- (void)dealloc;
- (id)initWithMaxConcurrentOperationCount:(unsigned long long)arg1;
- (void)performBlock:(id)arg1;
- (id)performCancelableBlock:(id)arg1;

@end