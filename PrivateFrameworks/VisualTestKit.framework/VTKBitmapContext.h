/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisualTestKit.framework/VisualTestKit
 */

@interface VTKBitmapContext : NSObject {
    struct CGContext { } * _CGContext;
    void * _CGContextDataBytes;
    unsigned long long  _CGContextDataBytesLength;
    unsigned long long  _bytesPerPixel;
    unsigned long long  _bytesPerRow;
    struct CGColorSpace { } * _colorSpace;
    unsigned long long  _contextType;
    double  _height;
    double  _scale;
    double  _width;
}

@property (readonly) struct CGContext { }*CGContext;
@property (readonly) void*CGContextDataBytes;
@property (readonly) unsigned long long CGContextDataBytesLength;
@property (readonly) unsigned long long bytesPerPixel;
@property (readonly) unsigned long long bytesPerRow;
@property (readonly) double height;
@property (nonatomic, readonly) UIImage *image;
@property (readonly) unsigned long long pixelHeight;
@property (readonly) unsigned long long pixelWidth;
@property (readonly) double scale;
@property (readonly) double width;

+ (id)contextType:(unsigned long long)arg1 width:(double)arg2 height:(double)arg3 scale:(double)arg4;

- (struct CGContext { }*)CGContext;
- (void*)CGContextDataBytes;
- (unsigned long long)CGContextDataBytesLength;
- (id)_16BitColor:(/* Warning: Unrecognized filer type: ' ' using 'void*' */ void**)arg1;
- (id)_8BitColor:(char *)arg1;
- (void)_draw16BitColor:(id)arg1 at:(/* Warning: Unrecognized filer type: ' ' using 'void*' */ void**)arg2;
- (void)_draw8BitColor:(id)arg1 at:(char *)arg2;
- (unsigned long long)bytesPerPixel;
- (unsigned long long)bytesPerRow;
- (id)colorAt:(void*)arg1;
- (id)colorForAntiAliased;
- (id)colorForDifferent;
- (id)colorForSame;
- (void*)dataAtPixel:(struct VTKPoint { unsigned long long x1; unsigned long long x2; })arg1;
- (void)dealloc;
- (void)drawColor:(id)arg1 at:(void*)arg2;
- (double)height;
- (id)image;
- (id)initWithColorSpaceName:(struct __CFString { }*)arg1 contextType:(unsigned long long)arg2 width:(double)arg3 height:(double)arg4 scale:(double)arg5 bitsPerComponent:(unsigned long long)arg6 bytesPerPixel:(unsigned long long)arg7 bitmapInfo:(unsigned int)arg8;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (double)scale;
- (double)width;

@end
