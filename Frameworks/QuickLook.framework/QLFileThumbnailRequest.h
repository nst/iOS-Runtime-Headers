/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLFileThumbnailRequest : NSObject {
    NSURL * _fileURL;
    struct CGSize { 
        double width; 
        double height; 
    }  _maximumSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumSize;
    double  _scale;
}

@property (nonatomic, copy) NSURL *fileURL;
@property (nonatomic) struct CGSize { double x1; double x2; } maximumSize;
@property (nonatomic) struct CGSize { double x1; double x2; } minimumSize;
@property (nonatomic) double scale;

- (void).cxx_destruct;
- (id)fileURL;
- (id)initWithMaximumSize:(struct CGSize { double x1; double x2; })arg1 minimumSize:(double)arg2 scale:(double)arg3 fileURL:(id)arg4;
- (struct CGSize { double x1; double x2; })maximumSize;
- (struct CGSize { double x1; double x2; })minimumSize;
- (double)scale;
- (void)setFileURL:(id)arg1;
- (void)setMaximumSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMinimumSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setScale:(double)arg1;

@end
