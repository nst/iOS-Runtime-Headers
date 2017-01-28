/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableTileRowInfo : TSPContainedObject {
    unsigned short  mBufferSize;
    unsigned short  mCellCount;
    unsigned char  mMaxTileColumnIndex;
    bool  mMaxTileColumnIndexValid;
    struct __CFData { } * mStorageBuffer;
    unsigned short  mStorageOffsets;
    unsigned char  mStorageVersion;
    unsigned short  mTileRowIndex;
}

@property (nonatomic, readonly) unsigned short cellCount;
@property (nonatomic) unsigned short tileRowIndex;

- (unsigned short)cellCount;
- (void)dealloc;
- (void)debugDump;
- (id)description;
- (void)enumerateStoragesInColumnRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withBlock:(id)arg2;
- (void)i_upgradeWithDataStore:(id)arg1;
- (id)initWithArchive:(const struct TileRowInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned int x5; unsigned int x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x8; unsigned int x9; }*)arg1 owner:(id)arg2;
- (id)initWithOwner:(id)arg1 tileRowIndex:(unsigned short)arg2;
- (id)p_debugDumpCompact;
- (void)saveToArchive:(struct TileRowInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned int x5; unsigned int x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x8; unsigned int x9; }*)arg1 archiver:(id)arg2;
- (void)setTileRowIndex:(unsigned short)arg1;
- (unsigned short)tileRowIndex;
- (void)validate;

@end
