/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIOAccelDevice : _MTLDevice {
    unsigned int  _accelID;
    unsigned int  _acceleratorPort;
    struct MTLIOAccelBufferHeap { 
        MTLIOAccelBuffer *buffers[64]; 
        struct MTLRangeAllocator { 
            struct MTLRangeAllocatorElement {} *elements; 
            unsigned int numElements; 
            unsigned int capacity; 
            unsigned int capacityIncrement; 
            unsigned int defaultAlignmentMask; 
        } allocators[64]; 
        unsigned int count; 
    }  _bufferHeaps;
    /* Warning: unhandled struct encoding: '{MTLIOAccelCommandBufferStoragePool={storageQueue=^{MTLIOAccelCommandBufferStorage}^^{MTLIOAccelCommandBufferStorage}}iii@}' */ struct MTLIOAccelCommandBufferStoragePool { struct storageQueue { struct MTLIOAccelCommandBufferStorage {} *x_1_1_1; struct MTLIOAccelCommandBufferStorage {} **x_1_1_2; } x1; int x2; int x3; int x4; id x5; } * _commandBufferStoragePool;
    unsigned int  _configBits;
    unsigned int  _deviceBits;
    struct __IOAccelDevice { } * _deviceRef;
    NSObject<OS_dispatch_queue> * _device_dispatch_queue;
    unsigned int  _fenceAllocatedCount;
    unsigned long long * _fenceAllocationBitmap;
    unsigned int  _fenceBitmapCount;
    unsigned int  _fenceBitmapSearchStart;
    unsigned int  _fenceMaximumCount;
    int  _numCommandBuffers;
    unsigned long long  _segmentByteThreshold;
    unsigned long long  _sharedMemorySize;
    struct __IOAccelShared { } * _sharedRef;
    /* Warning: unhandled struct encoding: '{?="segmentListShmemPool"@"MTLIOAccelDeviceShmemPool""kernelCommandShmemPool"@"MTLIOAccelDeviceShmemPool""hwResourcePools"^@"hwResourcePoolCount"I"akResourceListPool"@"MTLResourceListPool""akPrivateResourceListPool"@"MTLResourceListPool"}' */ struct { 
        MTLIOAccelDeviceShmemPool *segmentListShmemPool; 
        MTLIOAccelDeviceShmemPool *kernelCommandShmemPool; 
        hwResourcePoolCount **hwResourcePools; 
    }  _storageCreateParams;
    unsigned long long  _textureRam;
    unsigned long long  _videoRam;
}

@property (readonly) unsigned int acceleratorPort;
@property (readonly) unsigned long long dedicatedMemorySize;
@property (readonly) unsigned int hwResourcePoolCount;
@property (readonly) id*hwResourcePools;
@property (readonly) int numCommandBuffers;
@property (readonly) unsigned long long recommendedMaxWorkingSetSize;
@property (readonly) unsigned long long sharedMemorySize;

+ (void)registerDevices;

- (void)_purgeDevice;
- (unsigned int)acceleratorPort;
- (id)akPrivateResourceListPool;
- (id)akResourceListPool;
- (id)allocBufferSubDataWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 alignment:(int)arg3 heapIndex:(short*)arg4 bufferIndex:(short*)arg5 bufferOffset:(int*)arg6;
- (void)dealloc;
- (void)deallocBufferSubData:(id)arg1 heapIndex:(short)arg2 bufferIndex:(short)arg3 bufferOffset:(int)arg4 length:(int)arg5;
- (unsigned long long)dedicatedMemorySize;
- (struct __IOAccelDevice { }*)deviceRef;
- (short)heapIndexWithOptions:(unsigned long long)arg1;
- (unsigned int)hwResourcePoolCount;
- (id*)hwResourcePools;
- (id)initWithAcceleratorPort:(unsigned int)arg1;
- (unsigned int)initialKernelCommandShmemSize;
- (unsigned int)initialSegmentListShmemSize;
- (id)newCommandQueueWithDescriptor:(id)arg1;
- (id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1;
- (id)newFence;
- (int)numCommandBuffers;
- (unsigned long long)recommendedMaxWorkingSetSize;
- (void)releaseFenceIndex:(unsigned int)arg1;
- (void)setComputePipelineStateCommandShmemSize:(unsigned int)arg1;
- (void)setHwResourcePool:(id*)arg1 count:(int)arg2;
- (void)setSegmentListShmemSize:(unsigned int)arg1;
- (unsigned long long)sharedMemorySize;
- (struct __IOAccelShared { }*)sharedRef;

@end
