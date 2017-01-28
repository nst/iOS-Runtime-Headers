/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUVideoEditScrubberImageSource : NSObject {
    NSMutableDictionary * _cachedImages;
    AVAssetImageGenerator * _imageGenerator;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    struct CGSize { 
        double width; 
        double height; 
    }  _maximumThumbnailSize;
    NSMutableArray * _pendingTimestampRequests;
    NSMutableDictionary * _requestCompletionHandlers;
}

@property (nonatomic) struct CGSize { double x1; double x2; } maximumThumbnailSize;

- (void).cxx_destruct;
- (void)enqueueThumbnailRequestForTimestamp:(id)arg1 withResultHandler:(id)arg2;
- (id)init;
- (id)initWithAVAsset:(id)arg1;
- (struct CGSize { double x1; double x2; })maximumThumbnailSize;
- (void)processPendingThumbnailRequests;
- (void)setMaximumThumbnailSize:(struct CGSize { double x1; double x2; })arg1;

@end
