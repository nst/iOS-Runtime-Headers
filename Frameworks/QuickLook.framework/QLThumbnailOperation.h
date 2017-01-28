/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLThumbnailOperation : NSOperation {
    UIImage * _image;
    long long  _index;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (retain) UIImage *image;
@property long long index;
@property struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (id)image;
- (long long)index;
- (void)setImage:(id)arg1;
- (void)setIndex:(long long)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
