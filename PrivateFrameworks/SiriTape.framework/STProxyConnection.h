/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
 */

@interface STProxyConnection : NSObject {
    NSObject<OS_dispatch_data> * _bufferedInputData;
    struct __CFHTTPMessage { } * _httpRequestHeader;
    SiriCoreDataDecompressor * _inputDecompressor;
    bool  _isCanceled;
    bool  _isFinished;
    bool  _isOpened;
    NSObject<OS_dispatch_queue> * _queue;
    GCDAsyncSocket * _socket;
    STAceRecorder * recorder;
}

- (void).cxx_destruct;
- (id)_aceHeaderData;
- (void)_cancelWithError:(id)arg1;
- (void)_connectionHasBytesAvailable:(id)arg1;
- (bool)_consumeAceDataWithData:(id)arg1 bytesRead:(unsigned long long*)arg2 error:(id*)arg3;
- (bool)_consumeAceHeaderWithData:(id)arg1 bytesRead:(unsigned long long*)arg2 error:(id*)arg3;
- (bool)_consumeHTTPHeaderWithData:(id)arg1 bytesRead:(unsigned long long*)arg2 error:(id*)arg3;
- (bool)_hasReadAceHeader;
- (bool)_hasReadHTTPHeader;
- (id)_httpHeaderData;
- (id)_tryReadingAceHeaderFromData:(id)arg1 bytesParsed:(unsigned long long*)arg2 error:(id*)arg3;
- (bool)_tryReadingParsedDataFromBytes:(const void*)arg1 length:(unsigned long long)arg2 packet:(struct { unsigned char x1; unsigned int x2; }*)arg3 object:(id*)arg4 bytesParsed:(unsigned long long*)arg5 error:(id*)arg6;
- (void)handleAceObject:(id)arg1;
- (void)handlePacket:(struct { unsigned char x1; unsigned int x2; }*)arg1;
- (id)initWithSocket:(id)arg1 isRecording:(bool)arg2 replayFileURL:(id)arg3;
- (void)parseData:(id)arg1;

@end
