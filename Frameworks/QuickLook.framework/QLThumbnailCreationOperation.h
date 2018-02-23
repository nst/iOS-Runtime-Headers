/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLThumbnailCreationOperation : NSOperation {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentRect;
    NSURL * _documentURL;
    NSError * _error;
    bool  _executing;
    bool  _finished;
    bool  _generateIfNeeded;
    UIImage * _image;
    double  _maximumDimension;
    NSOperationQueue * _operationQueue;
    double  _scaleFactor;
    unsigned long long  _useMode;
}

@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentRect;
@property (retain) NSURL *documentURL;
@property (retain) NSError *error;
@property bool generateIfNeeded;
@property (retain) UIImage *image;
@property double maximumDimension;
@property double scaleFactor;
@property unsigned long long useMode;

- (void).cxx_destruct;
- (void)_finish;
- (bool)_finishIfCancelled;
- (void)_finishWithError:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRect;
- (id)documentURL;
- (id)error;
- (bool)generateIfNeeded;
- (id)image;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (void)main;
- (double)maximumDimension;
- (void)retrieveThumbnailForTaggedLogicalURL:(id)arg1;
- (double)scaleFactor;
- (void)setContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDocumentURL:(id)arg1;
- (void)setError:(id)arg1;
- (void)setExecuting:(bool)arg1;
- (void)setFinished:(bool)arg1;
- (void)setGenerateIfNeeded:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setMaximumDimension:(double)arg1;
- (void)setScaleFactor:(double)arg1;
- (void)setUseMode:(unsigned long long)arg1;
- (void)start;
- (void)updateLastHitDateOfAddition:(id)arg1 onPhysicalURL:(id)arg2;
- (unsigned long long)useMode;

@end
