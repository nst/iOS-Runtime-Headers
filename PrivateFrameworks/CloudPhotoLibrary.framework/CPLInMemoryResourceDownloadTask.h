/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLInMemoryResourceDownloadTask : CPLResourceTransferTask {
    id  _completionHandler;
    id  _launchHandler;
    NSObject<OS_dispatch_queue> * _queue;
    <CPLEngineTransportTask> * _transportTask;
}

@property (nonatomic, readonly) id completionHandler;
@property (nonatomic, readonly) id launchHandler;

+ (id)failedTaskForResource:(id)arg1 error:(id)arg2 completionHandler:(id)arg3;

- (void).cxx_destruct;
- (void)cancelTask;
- (id)completionHandler;
- (void)finishWithData:(id)arg1 error:(id)arg2;
- (id)initWithLaunchHandler:(id)arg1 completionHandler:(id)arg2;
- (void)launch;
- (id)launchHandler;
- (void)launchTransportTask:(id)arg1;

@end