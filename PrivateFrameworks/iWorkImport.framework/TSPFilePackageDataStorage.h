/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPFilePackageDataStorage : TSPStreamDataStorage {
    unsigned int  _CRC;
    <TSPCryptoInfo> * _decryptionInfo;
    unsigned long long  _encodedLength;
    struct { 
        unsigned int didCalculateIsReadable : 1; 
        unsigned int didCalculateEncodedLength : 1; 
        unsigned int didCalculateCRC : 1; 
        unsigned int isReadable : 1; 
        unsigned int isMissingData : 1; 
    }  _flags;
    TSPFilePackage * _package;
    NSString * _path;
}

- (void).cxx_destruct;
- (unsigned int)CRC;
- (id)decryptionInfo;
- (void)didInitializeFromDocumentURL:(id)arg1;
- (unsigned long long)encodedLength;
- (id)init;
- (id)initWithPath:(id)arg1 package:(id)arg2 decryptionInfo:(id)arg3;
- (bool)isInPackage:(id)arg1;
- (bool)isMissingData;
- (bool)isReadable;
- (unsigned long long)length;
- (bool)linkOrCopyToURL:(id)arg1 encryptionInfo:(id)arg2 canLink:(bool)arg3;
- (unsigned char)packageIdentifier;
- (id)packageLocator;
- (void)performIOChannelReadWithAccessor:(id /* block */)arg1;
- (void)resetFlags;
- (void)setIsMissingData:(bool)arg1;
- (id)streamReadChannel;
- (id)writeData:(id)arg1 toPackageWriter:(id)arg2 infoMessage:(struct DataInfo { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_6_1_1; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_7_1_1; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_8_1_1; } x8; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_9_1_1; } x9; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_10_1_1; } x10; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_11_1_1; } x11; }*)arg3 preferredFilename:(id)arg4;

@end
