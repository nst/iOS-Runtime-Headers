/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYDecompressingInputStream : NSInputStream <NSStreamDelegate, SYCompressionBufferOptimization, SYStreamEventHandlerBlocks, SYStreamProgress, SYStreamThroughputCounter, _SYStreamRunLoopSourceHandler> {
    unsigned long long  _byteCount;
    _SYZlibStreamInternal * _internal;
    id  _onBytesAvailable;
    id  _onClose;
    id  _onEndOfFile;
    id  _onError;
    id  _onOpenComplete;
    id  _onSpaceAvailable;
    NSProgress * _progress;
    NSInputStream * _stream;
}

@property (nonatomic, readonly) unsigned long long bytesThroughput;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long inputBufferSize;
@property (getter=_internal, nonatomic, readonly) _SYStreamGuts *internal;
@property (nonatomic, copy) id onBytesAvailable;
@property (nonatomic, copy) id onClose;
@property (nonatomic, copy) id onEndOfFile;
@property (nonatomic, copy) id onError;
@property (nonatomic, copy) id onOpenComplete;
@property (nonatomic, copy) id onSpaceAvailable;
@property (nonatomic) unsigned long long outputBufferSize;
@property (nonatomic, retain) NSProgress *progress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_SY_notifyOnQueue:(id)arg1 handler:(id)arg2;
- (void)_dispatchMyEvent:(unsigned long long)arg1;
- (void)_handlePendingInput;
- (id)_internal;
- (void)_postEventToDelegate:(unsigned long long)arg1;
- (unsigned long long)bytesThroughput;
- (void)close;
- (void)dealloc;
- (id)delegate;
- (bool)getBuffer:(char **)arg1 length:(unsigned long long*)arg2;
- (bool)hasBytesAvailable;
- (id)initWithCompressedDataStream:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithFileAtPath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (unsigned long long)inputBufferSize;
- (id)onBytesAvailable;
- (id)onClose;
- (id)onEndOfFile;
- (id)onError;
- (id)onOpenComplete;
- (id)onSpaceAvailable;
- (void)open;
- (unsigned long long)outputBufferSize;
- (id)progress;
- (id)propertyForKey:(id)arg1;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setInputBufferSize:(unsigned long long)arg1;
- (void)setOnBytesAvailable:(id)arg1;
- (void)setOnClose:(id)arg1;
- (void)setOnEndOfFile:(id)arg1;
- (void)setOnError:(id)arg1;
- (void)setOnOpenComplete:(id)arg1;
- (void)setOnSpaceAvailable:(id)arg1;
- (void)setOutputBufferSize:(unsigned long long)arg1;
- (void)setProgress:(id)arg1;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)streamError;
- (unsigned long long)streamStatus;

@end
