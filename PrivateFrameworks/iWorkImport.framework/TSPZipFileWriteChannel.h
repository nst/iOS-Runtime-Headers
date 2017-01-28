/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPZipFileWriteChannel : NSObject <TSUStreamWriteChannel> {
    TSUZipFileWriter * _archiveWriter;
    bool  _isClosed;
    NSObject<OS_dispatch_queue> * _writerQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isValid;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addBarrier:(id)arg1;
- (void)close;
- (id)init;
- (id)initWithArchiveWriter:(id)arg1;
- (bool)isValid;
- (void)setLowWater:(unsigned long long)arg1;
- (void)writeData:(id)arg1 handler:(id)arg2;

@end
