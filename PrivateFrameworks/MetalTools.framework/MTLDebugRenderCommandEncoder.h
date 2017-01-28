/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLDebugRenderCommandEncoder : MTLToolsRenderCommandEncoder {
    struct { 
        unsigned long long pixelFormat; 
        unsigned long long sampleCount; 
    }  _attachmentInfo;
    unsigned int  _backStencilRef;
    float  _blendColorAlpha;
    float  _blendColorBlue;
    float  _blendColorGreen;
    float  _blendColorRed;
    <MTLDevice> * _cachedDevice;
    unsigned long long  _cullMode;
    MTLDepthStencilDescriptor * _defaultDepthStencilDescriptor;
    struct ResourceTrackingDeferredAttachments { 
        NSMutableArray *colorAttachments; 
        MTLRenderPassDepthAttachmentDescriptorInternal *depthAttachment; 
        MTLRenderPassStencilAttachmentDescriptorInternal *stencilAttachment; 
    }  _deferredAttachments;
    float  _depthBias;
    float  _depthBiasClamp;
    float  _depthBiasSlopeScale;
    unsigned long long  _depthClipMode;
    <MTLDepthStencilState> * _depthStencilState;
    MTLRenderPassDescriptor * _descriptor;
    unsigned int  _dirtyBits;
    unsigned int  _encoderState;
    /* Warning: unhandled struct encoding: '{?="isValid"B"hasBeenUsed"B"type"Q"object"@"baseLevel"Q"bufferLength"Q"bufferOffset"Q"threadgroupMemoryLength"Q"hasLodClamp"B"lodMinClamp"f"lodMaxClamp"f}]' */ struct { 
        bool isValid; 
        bool hasBeenUsed; 
        unsigned long long type; 
        id object; 
    }  _fragmentBuffers;
    /* Warning: unhandled struct encoding: '{?="isValid"B"hasBeenUsed"B"type"Q"object"@"baseLevel"Q"bufferLength"Q"bufferOffset"Q"threadgroupMemoryLength"Q"hasLodClamp"B"lodMinClamp"f"lodMaxClamp"f}]' */ struct { 
        bool isValid; 
        bool hasBeenUsed; 
        unsigned long long type; 
        id object; 
    }  _fragmentSamplers;
    /* Warning: unhandled struct encoding: '{?="isValid"B"hasBeenUsed"B"type"Q"object"@"baseLevel"Q"bufferLength"Q"bufferOffset"Q"threadgroupMemoryLength"Q"hasLodClamp"B"lodMinClamp"f"lodMaxClamp"f}]' */ struct { 
        bool isValid; 
        bool hasBeenUsed; 
        unsigned long long type; 
        id object; 
    }  _fragmentTextures;
    unsigned long long  _frontFacingWinding;
    unsigned int  _frontStencilRef;
    unsigned long long  _height;
    struct { 
        unsigned int maxColorAttachments; 
        unsigned int maxVertexAttributes; 
        unsigned int maxVertexBuffers; 
        unsigned int maxVertexTextures; 
        unsigned int maxVertexSamplers; 
        unsigned int maxVertexInlineDataSize; 
        unsigned int maxInterpolants; 
        unsigned int maxFragmentBuffers; 
        unsigned int maxFragmentTextures; 
        unsigned int maxFragmentSamplers; 
        unsigned int maxFragmentInlineDataSize; 
        unsigned int maxComputeBuffers; 
        unsigned int maxComputeTextures; 
        unsigned int maxComputeSamplers; 
        unsigned int maxComputeInlineDataSize; 
        unsigned int maxComputeLocalMemorySizes; 
        unsigned int maxTotalComputeThreadsPerThreadgroup; 
        unsigned int maxComputeThreadgroupMemory; 
        float maxLineWidth; 
        float maxPointSize; 
        unsigned int maxVisibilityQueryOffset; 
        unsigned int maxBufferLength; 
        unsigned int minConstantBufferAlignmentBytes; 
        unsigned int minBufferNoCopyAlignmentBytes; 
        unsigned int maxTextureWidth1D; 
        unsigned int maxTextureWidth2D; 
        unsigned int maxTextureHeight2D; 
        unsigned int maxTextureWidth3D; 
        unsigned int maxTextureHeight3D; 
        unsigned int maxTextureDepth3D; 
        unsigned int maxTextureDimensionCube; 
        unsigned int maxTextureLayers; 
        unsigned int linearTextureAlignmentBytes; 
        unsigned int iosurfaceTextureAlignmentBytes; 
        unsigned int iosurfaceReadOnlyTextureAlignmentBytes; 
        unsigned int deviceLinearTextureAlignmentBytes; 
        unsigned int deviceLinearReadOnlyTextureAlignmentBytes; 
        unsigned int maxFunctionConstantIndices; 
        unsigned int maxComputeThreadgroupMemoryAlignmentBytes; 
        unsigned int maxInterpolatedComponents; 
        unsigned int maxFramebufferStorageBits; 
    }  _limits;
    float  _lineWidth;
    <MTLRenderPipelineState> * _renderPipelineState;
    struct { 
        unsigned long long x; 
        unsigned long long y; 
        unsigned long long width; 
        unsigned long long height; 
    }  _scissorRect;
    /* Warning: unhandled struct encoding: '{?="isValid"B"hasBeenUsed"B"type"Q"object"@"baseLevel"Q"bufferLength"Q"bufferOffset"Q"threadgroupMemoryLength"Q"hasLodClamp"B"lodMinClamp"f"lodMaxClamp"f}' */ struct { 
        bool isValid; 
        bool hasBeenUsed; 
        unsigned long long type; 
        id object; 
    }  _tessellationFactorBufferArgument;
    unsigned long long  _tessellationFactorBufferInstanceStride;
    float  _tessellationFactorScale;
    unsigned long long  _triangleFillMode;
    unsigned int  _unknownStoreActions;
    unsigned long long  _vertexBufferStride;
    /* Warning: unhandled struct encoding: '{?="isValid"B"hasBeenUsed"B"type"Q"object"@"baseLevel"Q"bufferLength"Q"bufferOffset"Q"threadgroupMemoryLength"Q"hasLodClamp"B"lodMinClamp"f"lodMaxClamp"f}]' */ struct { 
        bool isValid; 
        bool hasBeenUsed; 
        unsigned long long type; 
        id object; 
    }  _vertexBuffers;
    unsigned long long  _vertexBuiltinArgumentCapacity;
    unsigned long long  _vertexBuiltinArgumentCount;
    struct { unsigned long long x1; unsigned long long x2; } * _vertexBuiltinArguments;
    /* Warning: unhandled struct encoding: '{?="isValid"B"hasBeenUsed"B"type"Q"object"@"baseLevel"Q"bufferLength"Q"bufferOffset"Q"threadgroupMemoryLength"Q"hasLodClamp"B"lodMinClamp"f"lodMaxClamp"f}]' */ struct { 
        bool isValid; 
        bool hasBeenUsed; 
        unsigned long long type; 
        id object; 
    }  _vertexSamplers;
    /* Warning: unhandled struct encoding: '{?="isValid"B"hasBeenUsed"B"type"Q"object"@"baseLevel"Q"bufferLength"Q"bufferOffset"Q"threadgroupMemoryLength"Q"hasLodClamp"B"lodMinClamp"f"lodMaxClamp"f}]' */ struct { 
        bool isValid; 
        bool hasBeenUsed; 
        unsigned long long type; 
        id object; 
    }  _vertexTextures;
    struct { 
        double originX; 
        double originY; 
        double width; 
        double height; 
        double znear; 
        double zfar; 
    }  _viewport;
    struct set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > { struct __tree<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > { struct __tree_node<unsigned int, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<unsigned int, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::less<unsigned int> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; } * _visibilityOffsets;
    unsigned long long  _visibilityResultMode;
    unsigned long long  _visibilityResultOffset;
    unsigned long long  _width;
    struct deque<__weak id, std::__1::allocator<__weak id> > { 
        /* Warning: unhandled struct encoding: '{__split_buffer<__weak id *, std::__1::allocator<__weak id *> >="__first_"^^@"__begin_"^^@"__end_"^^@"__end_cap_"{__compressed_pair<__weak id **, std::__1::allocator<__weak id *> >="__first_"^^@}}"__start_"Q"__size_"{__compressed_pair<unsigned long, std::__1::allocator<__weak id> >="__first_"Q}}' */ struct __split_buffer<__weak id *, std::__1::allocator<__weak id *> > { 
            __begin_ ***__first_; 
        } __map_; 
    }  updatedFences;
}

@property (nonatomic, readonly) unsigned int backStencilRef;
@property (nonatomic, readonly) float blendColorAlpha;
@property (nonatomic, readonly) float blendColorBlue;
@property (nonatomic, readonly) float blendColorGreen;
@property (nonatomic, readonly) float blendColorRed;
@property (nonatomic, readonly) <MTLDevice> *cachedDevice;
@property (nonatomic, readonly) unsigned long long cullMode;
@property (nonatomic, readonly) MTLDepthStencilDescriptor *defaultDepthStencilDescriptor;
@property (nonatomic, readonly) float depthBias;
@property (nonatomic, readonly) float depthBiasClamp;
@property (nonatomic, readonly) float depthBiasSlopeScale;
@property (nonatomic, readonly) unsigned long long depthClipMode;
@property (nonatomic, readonly) <MTLDepthStencilState> *depthStencilState;
@property (nonatomic, readonly, copy) MTLRenderPassDescriptor *descriptor;
@property (nonatomic, readonly) unsigned long long frontFacingWinding;
@property (nonatomic, readonly) unsigned int frontStencilRef;
@property (readonly) unsigned long long height;
@property (nonatomic, readonly) float lineWidth;
@property (nonatomic, readonly) <MTLRenderPipelineState> *renderPipelineState;
@property (nonatomic, readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } scissorRect;
@property (nonatomic, readonly) struct { bool x1; bool x2; unsigned long long x3; id x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; float x9; float x10; } tessellationFactorBufferArgument;
@property (nonatomic, readonly) unsigned long long tessellationFactorBufferInstanceStride;
@property (nonatomic, readonly) float tessellationFactorScale;
@property (nonatomic, readonly) unsigned long long triangleFillMode;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; double x4; double x5; double x6; } viewport;
@property (nonatomic, readonly) unsigned long long visibilityResultMode;
@property (nonatomic, readonly) unsigned long long visibilityResultOffset;
@property (readonly) unsigned long long width;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_resourceTrackingRecordBoundResourceAccesses;
- (void)_resourceTrackingRecordDrawAccesses;
- (void)_resourceTrackingRecordRenderTargetAccessesForEndEncoding:(bool)arg1;
- (void)_setDefaults;
- (void)_validateAllFunctionArguments;
- (unsigned int)backStencilRef;
- (float)blendColorAlpha;
- (float)blendColorBlue;
- (float)blendColorGreen;
- (float)blendColorRed;
- (id)cachedDevice;
- (unsigned long long)cullMode;
- (void)dealloc;
- (id)defaultDepthStencilDescriptor;
- (float)depthBias;
- (float)depthBiasClamp;
- (float)depthBiasSlopeScale;
- (unsigned long long)depthClipMode;
- (id)depthStencilState;
- (id)description;
- (id)descriptor;
- (void)drawIndexedPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 controlPointIndexBuffer:(id)arg6 controlPointIndexBufferOffset:(unsigned long long)arg7 instanceCount:(unsigned long long)arg8 baseInstance:(unsigned long long)arg9;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseVertex:(long long)arg7 baseInstance:(unsigned long long)arg8;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexType:(unsigned long long)arg2 indexBuffer:(id)arg3 indexBufferOffset:(unsigned long long)arg4 indirectBuffer:(id)arg5 indirectBufferOffset:(unsigned long long)arg6;
- (void)drawPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseInstance:(unsigned long long)arg7;
- (void)drawPrimitives:(unsigned long long)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3;
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3;
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4;
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 baseInstance:(unsigned long long)arg5;
- (void)endEncoding;
- (void)enumerateFragmentBuffersUsingBlock:(id)arg1;
- (void)enumerateFragmentSamplersUsingBlock:(id)arg1;
- (void)enumerateFragmentTexturesUsingBlock:(id)arg1;
- (void)enumerateVertexBuffersUsingBlock:(id)arg1;
- (void)enumerateVertexSamplersUsingBlock:(id)arg1;
- (void)enumerateVertexTexturesUsingBlock:(id)arg1;
- (unsigned long long)frontFacingWinding;
- (unsigned int)frontStencilRef;
- (unsigned long long)height;
- (id)initWithRenderCommandEncoder:(id)arg1 parent:(id)arg2 descriptor:(id)arg3;
- (float)lineWidth;
- (id)renderPipelineState;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })scissorRect;
- (void)setBlendColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)setColorResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 atIndex:(unsigned long long)arg5;
- (void)setColorResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 yInvert:(bool)arg5 atIndex:(unsigned long long)arg6;
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setCullMode:(unsigned long long)arg1;
- (void)setDepthBias:(float)arg1 slopeScale:(float)arg2 clamp:(float)arg3;
- (void)setDepthClipMode:(unsigned long long)arg1;
- (void)setDepthResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4;
- (void)setDepthResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 yInvert:(bool)arg5;
- (void)setDepthStencilState:(id)arg1;
- (void)setDepthStoreAction:(unsigned long long)arg1;
- (void)setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setFragmentBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setFragmentBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setFragmentBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setFragmentSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setFragmentSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)setFragmentSamplerStates:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setFragmentTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setFragmentTexture:(id)arg1 atTextureIndex:(unsigned long long)arg2 samplerState:(id)arg3 atSamplerIndex:(unsigned long long)arg4;
- (void)setFragmentTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setFrontFacingWinding:(unsigned long long)arg1;
- (void)setLineWidth:(float)arg1;
- (void)setRenderPipelineState:(id)arg1;
- (void)setScissorRect:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1;
- (void)setStencilFrontReferenceValue:(unsigned int)arg1 backReferenceValue:(unsigned int)arg2;
- (void)setStencilReferenceValue:(unsigned int)arg1;
- (void)setStencilStoreAction:(unsigned long long)arg1;
- (void)setTessellationFactorBuffer:(id)arg1 offset:(unsigned long long)arg2 instanceStride:(unsigned long long)arg3;
- (void)setTessellationFactorScale:(float)arg1;
- (void)setTriangleFillMode:(unsigned long long)arg1;
- (void)setVertexBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setVertexBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setVertexBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setVertexBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setVertexSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setVertexSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setVertexSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)setVertexSamplerStates:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setVertexTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setVertexTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setViewport:(struct { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setVisibilityResultMode:(unsigned long long)arg1 offset:(unsigned long long)arg2;
- (struct { bool x1; bool x2; unsigned long long x3; id x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; float x9; float x10; })tessellationFactorBufferArgument;
- (unsigned long long)tessellationFactorBufferInstanceStride;
- (float)tessellationFactorScale;
- (unsigned long long)triangleFillMode;
- (void)updateFence:(id)arg1 afterStages:(unsigned long long)arg2;
- (void)updatePipelineData;
- (void)validateCommonDrawErrors:(unsigned long long)arg1 instanceCount:(unsigned long long)arg2 baseInstance:(unsigned long long)arg3 maxVertexID:(unsigned long long)arg4;
- (void)validateDrawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 function:(const char *)arg7;
- (void)validateDrawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 function:(const char *)arg5;
- (void)validateFramebufferWithRenderPipelineState:(id)arg1;
- (struct { double x1; double x2; double x3; double x4; double x5; double x6; })viewport;
- (unsigned long long)visibilityResultMode;
- (unsigned long long)visibilityResultOffset;
- (void)waitForFence:(id)arg1 beforeStages:(unsigned long long)arg2;
- (unsigned long long)width;

@end
