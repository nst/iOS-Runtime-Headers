/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFFileArchiveEntry : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _compressedRange;
    NSData * _contents;
    bool  _isDeflated;
    NSString * _path;
    long long  _uncompressedSize;
}

@property struct _NSRange { unsigned long long x1; unsigned long long x2; } compressedRange;
@property (retain) NSData *contents;
@property bool isDeflated;
@property (retain) NSString *path;
@property long long uncompressedSize;

+ (id)_inflateError:(int)arg1;
+ (id)archiveEntry;
+ (id)archiveEntryWithCentralHeader:(struct CentralHeader { unsigned char x1[4]; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned short x6; unsigned short x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned short x15; unsigned short x16; unsigned int x17; unsigned int x18; char *x19; }*)arg1 archiveData:(id)arg2;

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })compressedRange;
- (long long)compressedSize;
- (id)contents;
- (void)dealloc;
- (id)description;
- (id)fileName;
- (id)inflate;
- (void)inflateWithWriter:(id)arg1;
- (id)initWithContents:(id)arg1 path:(id)arg2;
- (bool)isDeflated;
- (void)merge:(id)arg1;
- (id)path;
- (void)setCompressedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setContents:(id)arg1;
- (void)setIsDeflated:(bool)arg1;
- (void)setPath:(id)arg1;
- (void)setUncompressedSize:(long long)arg1;
- (long long)uncompressedSize;

@end
