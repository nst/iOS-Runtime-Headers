/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLTThumbnailOperation : NSOperation {
    NSDate * _beginDate;
    NSError * _error;
    bool  _executing;
    bool  _finished;
    UIImage * _image;
    id /* block */  _needsAdditionalTime;
    QLTThumbnailRequest * _request;
}

@property (retain) NSError *error;
@property (retain) UIImage *image;
@property (copy) id /* block */ needsAdditionalTime;
@property (retain) QLTThumbnailRequest *request;

+ (id)operationWithThumbnailRequest:(id)arg1;

- (void).cxx_destruct;
- (void)_finish;
- (bool)_finishIfCancelled;
- (void)_finishWithError:(id)arg1;
- (void)_logOperationDuration;
- (id)error;
- (id)image;
- (id)initWithThumbnailRequest:(id)arg1;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (void)main;
- (id /* block */)needsAdditionalTime;
- (id)request;
- (void)setError:(id)arg1;
- (void)setExecuting:(bool)arg1;
- (void)setFinished:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setNeedsAdditionalTime:(id /* block */)arg1;
- (void)setRequest:(id)arg1;
- (void)start;

@end
