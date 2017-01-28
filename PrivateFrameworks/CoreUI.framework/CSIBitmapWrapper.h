/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CSIBitmapWrapper : NSObject {
    bool  _allowsMultiPassEncoding;
    bool  _allowsOptimalPacking;
    struct CGContext { } * _bitmapContext;
    unsigned long long  _colorSpaceID;
    double  _compressionQuality;
    long long  _compressionType;
    int  _exifOrientation;
    bool  _flipped;
    unsigned int  _height;
    unsigned int  _imageAlpha;
    NSData * _pixelData;
    unsigned int  _pixelFormat;
    unsigned long long  _rowbytes;
    struct CGImage { } * _sourceImage;
    long long  _textureInterpretation;
    long long  _texturePixelFormat;
    unsigned int  _width;
}

@property bool allowsMultiPassEncoding;
@property bool allowsOptimalPacking;
@property (nonatomic) unsigned long long colorSpaceID;
@property (nonatomic) double compressionQuality;
@property long long compressionType;
@property (nonatomic) int exifOrientation;
@property (nonatomic) bool flipped;
@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic) long long textureInterpretation;

- (bool)allowsMultiPassEncoding;
- (bool)allowsOptimalPacking;
- (struct CGContext { }*)bitmapContext;
- (unsigned long long)colorSpaceID;
- (id)compressedData:(bool)arg1 usedEncoding:(int*)arg2 andRowChunkSize:(unsigned int*)arg3;
- (double)compressionQuality;
- (long long)compressionType;
- (void)dealloc;
- (int)exifOrientation;
- (bool)flipped;
- (unsigned int)height;
- (id)initWithCGImage:(struct CGImage { }*)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 texturePixelFormat:(long long)arg4;
- (id)initWithPixelWidth:(unsigned int)arg1 pixelHeight:(unsigned int)arg2;
- (id)pixelData;
- (unsigned int)pixelFormat;
- (unsigned long long)rowbytes;
- (void)setAllowsMultiPassEncoding:(bool)arg1;
- (void)setAllowsOptimalPacking:(bool)arg1;
- (void)setColorSpaceID:(unsigned long long)arg1;
- (void)setCompressionQuality:(double)arg1;
- (void)setCompressionType:(long long)arg1;
- (void)setExifOrientation:(int)arg1;
- (void)setFlipped:(bool)arg1;
- (void)setPixelData:(id)arg1;
- (void)setPixelFormat:(unsigned int)arg1;
- (void)setSourceAlphaInfo:(unsigned int)arg1;
- (void)setTextureInterpretation:(long long)arg1;
- (unsigned int)sourceAlphaInfo;
- (long long)textureInterpretation;
- (unsigned int)width;

@end
