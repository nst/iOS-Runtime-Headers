/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMMCSItemCommandWriter : NSObject <CKDMMCSItemReaderWriterProtocol> {
    CKDMMCSItem * _MMCSItem;
    CKDMMCSItemGroupContext * _MMCSRequest;
    NSMutableIndexSet * _byteRanges;
    unsigned long long  _maximumLength;
}

@property (nonatomic, retain) CKDMMCSItem *MMCSItem;
@property (nonatomic, retain) CKDMMCSItemGroupContext *MMCSRequest;
@property (nonatomic, retain) NSMutableIndexSet *byteRanges;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maximumLength;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)MMCSItem;
- (id)MMCSRequest;
- (id)byteRanges;
- (bool)closeWithError:(id*)arg1;
- (void)dealloc;
- (id)getFileMetadataWithError:(id*)arg1;
- (id)initWithMMCSItem:(id)arg1 MMCSRequest:(id)arg2;
- (bool)isContiguous;
- (unsigned long long)maximumLength;
- (bool)openWithError:(id*)arg1;
- (bool)readBytesAtOffset:(unsigned long long)arg1 bytes:(char *)arg2 length:(unsigned long long)arg3 bytesRead:(unsigned long long*)arg4 error:(id*)arg5;
- (void)setByteRanges:(id)arg1;
- (void)setMMCSItem:(id)arg1;
- (void)setMMCSRequest:(id)arg1;
- (void)setMaximumLength:(unsigned long long)arg1;
- (bool)writeBytesAtOffset:(unsigned long long)arg1 bytes:(char *)arg2 length:(unsigned long long)arg3 bytesWritten:(unsigned long long*)arg4 error:(id*)arg5;

@end
