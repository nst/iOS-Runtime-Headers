/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSDatagramChannel : NSObject {
    _IDSDatagramChannel * _internal;
}

@property (readonly) NSArray *connectedLinks;
@property (readonly) IDSDataChannelLinkContext *defaultLink;

- (void)addNewIDSDataChannelLinkWithAttributes:(char *)arg1;
- (void)close;
- (id)connectedLinks;
- (void)dealloc;
- (id)defaultLink;
- (id)description;
- (id)initWithDestination:(id)arg1;
- (id)initWithSocketDescriptor:(int)arg1;
- (void)invalidate;
- (void)processMetadataForDatagram:(char *)arg1 size:(unsigned long long)arg2 datagramInfo:(struct { BOOL x1; unsigned short x2; }*)arg3;
- (void)readDatagramWithCompletionHandler:(id)arg1;
- (void)readyToRead;
- (void)removeIDSDataChannelLinkContext:(BOOL)arg1;
- (void)selectDefaultLink:(BOOL)arg1;
- (void)sendEventConnectedWithDummyLinkInfo;
- (void)sendMetadata;
- (void)setChannelPreferences:(id)arg1;
- (void)setEventHandler:(id)arg1;
- (void)setReadHandler:(id)arg1;
- (void)start;
- (int)underlyingFileDescriptor;
- (void)writeDatagram:(const void*)arg1 datagramSize:(unsigned int)arg2 flags:(struct { BOOL x1; unsigned short x2; })arg3 completionHandler:(id)arg4;
- (void)writeDatagrams:(const void**)arg1 datagramSizes:(unsigned int*)arg2 datagramInfo:(struct { BOOL x1; unsigned short x2; })arg3 datagramCount:(int)arg4 completionHandler:(id)arg5;

@end
