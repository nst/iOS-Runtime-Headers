/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAttachmentThumbnailOperation : NSBlockOperation {
    ICAttachmentPreviewImageLoader * _attachmentPreviewImageLoader;
    NSCache * _cache;
    NSString * _cacheKey;
    NSMutableArray * _completionBlocks;
    id  _fallbackBlock;
    unsigned long long  _imageScaling;
    bool  _isMovie;
    NSURL * _mediaURL;
    struct CGSize { 
        double width; 
        double height; 
    }  _minSize;
    id  _processingBlock;
    bool  _showAsFileIcon;
}

@property (nonatomic, retain) ICAttachmentPreviewImageLoader *attachmentPreviewImageLoader;
@property (nonatomic, retain) NSCache *cache;
@property (nonatomic, retain) NSString *cacheKey;
@property (nonatomic, retain) NSMutableArray *completionBlocks;
@property (nonatomic, copy) id fallbackBlock;
@property (nonatomic) unsigned long long imageScaling;
@property (nonatomic) bool isMovie;
@property (nonatomic, retain) NSURL *mediaURL;
@property (nonatomic) struct CGSize { double x1; double x2; } minSize;
@property (nonatomic, copy) id processingBlock;
@property (nonatomic) bool showAsFileIcon;

- (void).cxx_destruct;
- (void)addCompletionBlock:(id)arg1;
- (id)attachmentPreviewImageLoader;
- (id)cache;
- (id)cacheKey;
- (id)completionBlocks;
- (id)fallbackBlock;
- (unsigned long long)imageScaling;
- (id)initWithAttachment:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 cache:(id)arg4 cacheKey:(id)arg5 processingBlock:(id)arg6 completionBlock:(id)arg7 fallbackBlock:(id)arg8;
- (bool)isMovie;
- (void)main;
- (id)mediaURL;
- (struct CGSize { double x1; double x2; })minSize;
- (id)processingBlock;
- (void)setAttachmentPreviewImageLoader:(id)arg1;
- (void)setCache:(id)arg1;
- (void)setCacheKey:(id)arg1;
- (void)setCompletionBlocks:(id)arg1;
- (void)setFallbackBlock:(id)arg1;
- (void)setImageScaling:(unsigned long long)arg1;
- (void)setIsMovie:(bool)arg1;
- (void)setMediaURL:(id)arg1;
- (void)setMinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setProcessingBlock:(id)arg1;
- (void)setShowAsFileIcon:(bool)arg1;
- (bool)showAsFileIcon;

@end
