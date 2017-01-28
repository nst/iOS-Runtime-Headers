/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileServerRemoteProxy : GEOTileServerProxy {
    NSHashTable * _cancellingConnections;
    NSLock * _cancellingConnectionsLock;
    NSObject<OS_xpc_object> * _conn;
    NSLock * _connLock;
    NSObject<OS_dispatch_queue> * _connQueue;
    unsigned long long  _handleCounter;
    int  _suspendCount;
}

- (void)_handleEditionUpgrade:(id)arg1;
- (void)_handleError:(id)arg1;
- (void)_handleEvent:(id)arg1 fromConnection:(id)arg2;
- (void)_handleNetworkBegan:(id)arg1;
- (void)_handleTile:(id)arg1;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1 exclusive:(bool)arg2;
- (void)calculateFreeableSize;
- (void)cancel:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)close;
- (void)dealloc;
- (void)endPreloadSession;
- (void)flushPendingWrites;
- (id)initWithCacheLocation:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3;
- (void)loadTiles:(id)arg1 priorities:(unsigned int*)arg2 options:(unsigned long long)arg3 client:(id)arg4;
- (void)open;
- (void)reportCorruptTile:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)reprioritizeKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 newPriority:(unsigned int)arg2;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1;
- (bool)skipNetworkForKeysWhenPreloading:(id)arg1;

@end
