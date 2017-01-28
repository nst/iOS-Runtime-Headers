/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFBitmap : NSObject {
    unsigned int  m_bitsPerPixel;
    NSMutableData * m_bmpData;
    int  m_compression;
    int  m_height;
    unsigned int  m_infoHeaderSize;
    bool  m_isOS2;
    unsigned int  m_paletteSize;
    int  m_width;
}

- (void)appendDIBPalette:(id)arg1 :(const char *)arg2 :(unsigned int)arg3 :(int)arg4;
- (unsigned int)coloursUsed:(const char *)arg1 :(unsigned int)arg2 :(int)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithBitmap:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(const char *)arg6 :(unsigned int)arg7;
- (id)initWithDIBitmap:(id)arg1 :(const char *)arg2 :(unsigned int)arg3 :(int)arg4;
- (id)initWithDIBitmap:(id)arg1 :(const char *)arg2 :(unsigned int)arg3 :(const char *)arg4 :(unsigned int)arg5 :(int)arg6;
- (bool)isEmpty;
- (bool)parseHeader:(const char *)arg1 :(unsigned int)arg2;
- (unsigned int)pixelDataOffset:(const char *)arg1 :(unsigned int)arg2 :(int)arg3;
- (bool)processDIBHeader:(id)arg1 :(const char *)arg2 :(unsigned int)arg3 :(int)arg4;
- (void)setMonoPalette:(id)arg1;
- (void)setNull;
- (void)writeFileHeader;
- (void)writeInfoHeader;
- (void)writePaletteEntry:(id)arg1 :(int)arg2;

@end
