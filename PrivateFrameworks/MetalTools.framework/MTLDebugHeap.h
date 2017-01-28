/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLDebugHeap : MTLToolsHeap {
    MTLDebugDevice * _debugDevice;
    int  _historyLock;
    struct HeapHistoryEvent { struct HeapHistoryEvent {} *x1; void *x2; bool x3; } * _latestEvent;
    struct HeapHistoryEvent { struct HeapHistoryEvent {} *x1; void *x2; bool x3; } * _oldestEvent;
}

@property (nonatomic, readonly) MTLDebugDevice *debugDevice;
@property (nonatomic) struct HeapHistoryEvent { struct HeapHistoryEvent {} *x1; void *x2; bool x3; }*latestEvent;
@property (nonatomic) struct HeapHistoryEvent { struct HeapHistoryEvent {} *x1; void *x2; bool x3; }*oldestEvent;

- (void)addResourceToHistory:(id)arg1 madeAliasable:(bool)arg2;
- (void)dealloc;
- (id)debugDevice;
- (id)initWithHeap:(id)arg1 device:(id)arg2;
- (struct HeapHistoryEvent { struct HeapHistoryEvent {} *x1; void *x2; bool x3; }*)latestEvent;
- (unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newTextureWithDescriptor:(id)arg1;
- (struct HeapHistoryEvent { struct HeapHistoryEvent {} *x1; void *x2; bool x3; }*)oldestEvent;
- (void)removeResourceFromHistory:(id)arg1;
- (void)setLatestEvent:(struct HeapHistoryEvent { struct HeapHistoryEvent {} *x1; void *x2; bool x3; }*)arg1;
- (void)setOldestEvent:(struct HeapHistoryEvent { struct HeapHistoryEvent {} *x1; void *x2; bool x3; }*)arg1;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (void)validateHeapResourceOptions:(unsigned long long)arg1 isTexture:(bool)arg2 isIOSurface:(bool)arg3;

@end