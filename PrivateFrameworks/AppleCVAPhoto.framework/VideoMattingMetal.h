/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

@interface VideoMattingMetal : ImageSaverRegistrator {
    <MTLComputePipelineState> * _alphaFillKernel;
    <MTLTexture> * _alphaNoPostprocessing;
    <MTLTexture> * _bTexture;
    <MTLTexture> * _bg;
    <MTLTexture> * _bgColorLut;
    <MTLComputePipelineState> * _bgFillXKernel;
    <MTLComputePipelineState> * _bgFillYKernel;
    <MTLTexture> * _blurredBg;
    <MTLTexture> * _blurredBgX;
    CVAFilterBox * _boxFilter;
    bool  _bypassShiftCleanup;
    <MTLTexture> * _coc;
    <MTLTexture> * _coeff;
    <MTLTexture> * _coeffHistory;
    CVAFilterColorAlphaToFgBg * _colorAlphaToFgBg;
    <MTLTexture> * _colorSim;
    <MTLComputePipelineState> * _colorSimKernel;
    <MTLComputePipelineState> * _colorSimL1Kernel;
    <MTLCommandQueue> * _commandQueue;
    CVAFilterGuided * _cvaGuidedFilter;
    <MTLLibrary> * _defaultLibrary;
    <MTLDeviceSPI> * _device;
    <MTLTexture> * _deweightedDisparity;
    CVAFilterDiffusion * _diffusion;
    <MTLComputePipelineState> * _diffusionMapKernel;
    <MTLTexture> * _diffusionMapTexture;
    <MTLTexture> * _disparity;
    MPSImageBox * _disparityBlurBoxKernel;
    <MTLComputePipelineState> * _disparityCleanupKernel;
    <MTLComputePipelineState> * _disparityCleanupKernel_firstFrame;
    <MTLComputePipelineState> * _disparityConfidenceMaskKernel;
    <MTLTexture> * _disparityConfidenceMaskTexture;
    CVAPhotoMTLRingBuffer * _disparityConfig;
    <MTLComputePipelineState> * _disparityDecimateKernel;
    <MTLComputePipelineState> * _disparityIsValidKernel;
    <MTLTexture> * _disparityIsValidTexture;
    <MTLTexture> * _disparityLastValidValue;
    <MTLComputePipelineState> * _disparityMasksKernel;
    <MTLTexture> * _distanceFromKnownDisparityTexture;
    <MTLTexture> * _distanceToForegroundTexture;
    CVAFilterDistanceTransform * _distanceTransform;
    bool  _doDisparityDiffusion;
    bool  _doFaceMask;
    <MTLComputePipelineState> * _domainTransformXKernel;
    <MTLTexture> * _domainTransformXTexture;
    <MTLComputePipelineState> * _domainTransformYKernel;
    <MTLTexture> * _domainTransformYTexture;
    <MTLTexture> * _edgeAwareFillTempTexture;
    <MTLComputePipelineState> * _edgeAwareFillXKernel;
    <MTLComputePipelineState> * _edgeAwareFillYKernel;
    bool  _enableInfConvolution;
    <MTLTexture> * _facemaskDisparity;
    <MTLTexture> * _facemaskRegionTexture;
    MPSImageBox * _fgBlurBoxKernel;
    <MTLTexture> * _fgColorLut;
    MPSImageAreaMin * _fgMaskErosionKernel;
    <MTLComputePipelineState> * _fillBackgroundDisparityKernel;
    <MTLComputePipelineState> * _fillBackgroundDisparityKernel_faceMask;
    <MTLTexture> * _filledDisparityNoInvalidTexture;
    <MTLTexture> * _filledDisparityTexture;
    <MTLTexture> * _filteredBeforeSmoothDisparity;
    unsigned long long  _frameIndex;
    <MTLTexture> * _fullResCoC;
    <MTLTexture> * _gTexture;
    float  _gammaExponent;
    <MTLTexture> * _gfForegroundMask;
    <MTLTexture> * _gfWeight;
    MPSImageGuidedFilter * _guidedFilter;
    <MTLComputePipelineState> * _guidedFilterWeightKernel;
    <MTLComputePipelineState> * _halfDownSampler;
    <MTLTexture> * _halfResCoC;
    int  _height;
    int  _height2;
    struct __IOSurfaceAccelerator { } * _hwScaler;
    struct __CVBuffer { } * _hybridDownsamplingIntermediateBuffer;
    CVAFilterHybridResampling * _hybridResampler;
    CVAFilterInfimumConvolution * _infConvolution;
    float  _infConvolutionScale;
    <MTLTexture> * _initDisparity;
    <MTLComputePipelineState> * _internalDisparityToCanonicalDisparityKernel;
    <MTLComputePipelineState> * _invalidDisparityMaskKernel;
    <MTLTexture> * _invalidDisparityMaskTexture;
    bool  _isBgColorLutBlack;
    <MTLTexture> * _isForegroundTexture;
    NSData * _lastBgLutData;
    int  _lastCommittedCommand;
    NSData * _lastFgLutData;
    NSData * _lastStageLightCubeData;
    NSData * _lastStageLightProxyCubeData;
    CVAFilterMaskedVariableBlur * _maskedVariableBlur;
    NSObject<OS_dispatch_semaphore> * _mattingCallbackSemaphore;
    bool  _mattingUsesPostprocessing;
    struct CVAPhotoMetalContext { id x1; id x2; struct unique_ptr<CVAPerfEndTimeProfilerSet, std::__1::default_delete<CVAPerfEndTimeProfilerSet> > { struct __compressed_pair<CVAPerfEndTimeProfilerSet *, std::__1::default_delete<CVAPerfEndTimeProfilerSet> > { struct CVAPerfEndTimeProfilerSet {} *x_1_2_1; } x_3_1_1; } x3; bool x4; } * _metalContext;
    struct __CVBuffer { } * _msrIntermediateBuffer;
    struct CompositeConfig { 
        unsigned int frameNumber; 
        unsigned int seedGeneratorFactor; 
        int noiseBits; 
        float noiseBitsFactor; 
        float cubeIntensity; 
    }  _noiseConfig;
    <MTLTexture> * _outputCanonicalDisparity;
    bool  _printTimings;
    <MTLTexture> * _rTexture;
    CVAFilterRenderComposite * _renderComposite;
    NSObject<OS_dispatch_semaphore> * _renderingCallbackSemaphore;
    float  _renderingDisparityBlurRadius;
    <MTLComputePipelineState> * _renderingDisparityDeweightKernel;
    <MTLComputePipelineState> * _renderingDisparityFillAndFilterKernel;
    float  _renderingDisparityUpdateRate;
    float  _renderingLensFocalLength_mm;
    bool  _renderingUsesPostprocessing;
    <MTLTexture> * _roughDisparity;
    <MTLComputePipelineState> * _roughDisparityKernel;
    <MTLTexture> * _scaledSource;
    struct __CVBuffer {} * _scaledSourceCV;
    struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; } * _scaledSourceFile;
    NSObject<OS_dispatch_semaphore> * _semaphore;
    <MTLTexture> * _shift;
    <MTLComputePipelineState> * _simpleConfidenceKernel;
    <MTLTexture> * _smoothConfidence;
    <MTLTexture> * _smoothDisparity;
    MPSImageGaussianBlur * _smoothFilter;
    <MTLTexture> * _stageLightLut;
    <MTLTexture> * _stageLightProxyLut;
    CVAFilterRenderStagelight * _stagelightFilter;
    NSObject<OS_dispatch_queue> * _synchronousMattingCallbackQueue;
    NSObject<OS_dispatch_queue> * _synchronousRenderingCallbackQueue;
    <MTLTexture> * _tempFloatR32FloatTexture;
    <MTLComputePipelineState> * _temporalCoefficientsFilterKernel;
    <MTLComputePipelineState> * _temporalDisparityFilterKernel;
    <MTLComputePipelineState> * _temporalDisparityFilterKernel_fallbackToInvalid;
    <MTLTexture> * _temporallyFilteredDisparity;
    <MTLComputePipelineState> * _updateConfidenceAndLastValidDisparityKernel;
    <MTLComputePipelineState> * _updateConfidenceAndLastValidDisparityKernel_useTemporalConfidence;
    bool  _useTemporalConfidence;
    int  _width;
    int  _width2;
}

@property bool bypassShiftCleanup;
@property (readonly) <MTLTexture> *colorSim;
@property (readonly) <MTLTexture> *filteredBeforeSmoothDisparity;
@property bool isBgColorLutBlack;
@property float renderingDisparityUpdateRate;

+ (void)decomposeYuvPixelBuffer:(struct __CVBuffer { }*)arg1 yTexture:(id*)arg2 uvTexture:(id*)arg3 device:(id)arg4;
+ (void)prewarmBox:(id)arg1 device:(id)arg2 commandBuffer:(id)arg3;
+ (void)prewarmGuidedFilter:(id)arg1 device:(id)arg2 commandBuffer:(id)arg3 width:(int)arg4 height:(int)arg5 width2:(int)arg6 height2:(int)arg7;
+ (void)saveTexture:(id)arg1 toFilename:(id)arg2;

- (void).cxx_destruct;
- (void)alphaMattingWithPostprocessedDisparity:(struct __CVBuffer { }*)arg1 source:(struct __CVBuffer { }*)arg2 inSegmentation:(struct __CVBuffer { }*)arg3 alpha:(struct __CVBuffer { }*)arg4 staticParams:(const struct VideoMattingStaticParams { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; int x8; unsigned int x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; unsigned int x21; unsigned int x22; int x23; float x24; float x25; }*)arg5 dynamicParams:(const struct VideoMattingDynamicParams { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; struct array<float, 3> { float x_9_1_1[3]; } x9; float x10; }*)arg6 usePostprocessedDisparity:(bool)arg7 isFinalStage:(bool)arg8 dilateForegroundMask:(bool)arg9 callbackQueue:(id)arg10 callback:(id /* block */)arg11;
- (bool)bypassShiftCleanup;
- (float)cocAtInfinityForFocalLength:(float)arg1 focusCanonicalDisparity:(float)arg2 focalRatio:(float)arg3 xResolution:(float)arg4;
- (id)colorSim;
- (struct __CVBuffer { }*)createCVBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3;
- (void)cropFrame:(struct __CVBuffer { }*)arg1 destination:(struct __CVBuffer { }*)arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)dealloc;
- (void)disparityPostprocessingWithCanonicalDisparity:(struct __CVBuffer { }*)arg1 color:(struct __CVBuffer { }*)arg2 postProcessedDisparity:(struct __CVBuffer { }*)arg3 staticParams:(const struct VideoMattingStaticParams { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; int x8; unsigned int x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; unsigned int x21; unsigned int x22; int x23; float x24; float x25; }*)arg4 dynamicParams:(const struct VideoMattingDynamicParams { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; struct array<float, 3> { float x_9_1_1[3]; } x9; float x10; }*)arg5 postProcessingParams:(const struct VideoPostprocessingParams { bool x1; float x2; bool x3; float x4; float x5; bool x6; }*)arg6 facesArray:(id)arg7 faceModel:(id)arg8 isFinalStage:(bool)arg9 callbackQueue:(id)arg10 callback:(id /* block */)arg11;
- (void)downsampleWithHWScalerSource:(struct __CVBuffer { }*)arg1 destination:(struct __CVBuffer { }*)arg2;
- (void)encode420BilinearScalingToCommandBuffer:(id)arg1 source:(struct __CVBuffer { }*)arg2 destination:(struct __CVBuffer { }*)arg3;
- (void)encode420HybridDownsamplingToCommandBuffer:(id)arg1 source:(struct __CVBuffer { }*)arg2 destination:(struct __CVBuffer { }*)arg3;
- (void)encode420ScalingByMPSToCommandBuffer:(id)arg1 source:(struct __CVBuffer { }*)arg2 destination:(struct __CVBuffer { }*)arg3;
- (void)encodeBackgroundFillToCommandBuffer:(id)arg1 inputDisparity:(id)arg2 inputMask:(id)arg3 outputDisparity:(id)arg4;
- (void)encodeColorSimL1ToCommandBuffer:(id)arg1 prevSource:(id)arg2 currSource:(id)arg3 destination:(id)arg4;
- (void)encodeColorSimToCommandBuffer:(id)arg1 prevSource:(id)arg2 currSource:(id)arg3 destination:(id)arg4 similarityScaleFactor:(float)arg5;
- (void)encodeConfidenceMaskToCommandBuffer:(id)arg1 inputDisparity:(id)arg2 inputDisparityNoInvalid:(id)arg3 outputConfidenceMask:(id)arg4;
- (void)encodeCopyTextureToCommandBuffer:(id)arg1 inTexture:(id)arg2 outTexture:(id)arg3;
- (void)encodeDiffusionMapToCommandBuffer:(id)arg1 color:(id)arg2 diffusionMap:(id)arg3;
- (void)encodeDisparityCleanupToCommandBuffer:(id)arg1 prevDisparity:(id)arg2 currDisparity:(id)arg3 colorSim:(id)arg4 cleanDisparity:(id)arg5;
- (void)encodeDisparityDecimateToCommandBuffer:(id)arg1 canonicalDisparity:(struct __CVBuffer { }*)arg2 disparityOut:(id)arg3;
- (void)encodeDisparityMasksToCommandBuffer:(id)arg1 inputDisparity:(id)arg2 inputSegmentation:(id)arg3 useSegmentationOnly:(bool)arg4 outputForegroundMask:(id)arg5 outputIsForeground:(id)arg6 disparityMin:(float)arg7 focusDisparity:(float)arg8 hardness:(float)arg9 minDistToDeweight:(float)arg10 unconfidentWeight:(float)arg11;
- (void)encodeDisparitySmoothingToCommandBuffer:(id)arg1 disparity:(id)arg2;
- (void)encodeDisparityTemporalFilterToCommandBuffer:(id)arg1 currentDisparity:(id)arg2 previousDisparity:(id)arg3 currConfidence:(id)arg4 prevSmoothConfidence:(id)arg5 colorSim:(id)arg6 outPrevSmoothConfidence:(id)arg7 outTemporallyFilteredDisparity:(id)arg8 disparityFallbackToInvalid:(bool)arg9 disparityFilterUpdateRate:(float)arg10 minimumConfidenceToKeepDisparity:(float)arg11 maximumSimilarityToKeepDisparity:(float)arg12;
- (void)encodeDomainTransformToCommandBuffer:(id)arg1 inputDiffusionMap:(id)arg2 inputDistanceFromKnownDisparity:(id)arg3 outputDomainTransformX:(id)arg4 outputDomainTransformY:(id)arg5;
- (void)encodeEdgeAwareFillToCommandBuffer:(id)arg1 inputDisparity:(id)arg2 inputDomainTransformX:(id)arg3 inputDomainTransformY:(id)arg4 outputDisparity:(id)arg5;
- (void)encodeFillAlphaToCommandBuffer:(id)arg1 alpha:(id)arg2;
- (void)encodeFillBackgroundDisparityToCommandBuffer:(id)arg1 inputDisparity:(id)arg2 inputFacemask:(id)arg3 outputDistanceFromKnownDisparity:(id)arg4 outputDisparity:(id)arg5 backgroundDisparityValue:(float)arg6 minimumDistanceFromValidDisparity:(float)arg7;
- (void)encodeFilterCoefficientToBuffer:(id)arg1 inputCoeff:(id)arg2 prevCoeff:(id)arg3 outCoeff:(id)arg4 inColorSim:(id)arg5 updateRate:(float)arg6;
- (void)encodeForegroundMaskToBuffer:(id)arg1 disparity:(id)arg2 inSegmentation:(id)arg3 useSegmentationOnly:(bool)arg4 weight:(id)arg5 foregroundMask:(id)arg6 erodedForegroundMask:(id)arg7 disparityMin:(float)arg8 focusDisparity:(float)arg9 hardness:(float)arg10 minDistToDeweight:(float)arg11 unconfidentWeight:(float)arg12 dilateForegroundMask:(bool)arg13 foregroundMaskDilationRadius:(float)arg14;
- (void)encodeGuidedFilterWeightToCommandBuffer:(id)arg1 inputDisparity:(id)arg2 inputSegmentation:(id)arg3 useSegmentationOnly:(bool)arg4 inputForegroundDistance:(id)arg5 outputForegroundMask:(id)arg6 outputWeight:(id)arg7 minDistToDeweight:(float)arg8 unconfidentWeight:(float)arg9 dilateForegroundMask:(bool)arg10 foregroundMaskDilationRadius:(float)arg11;
- (void)encodeInvalidDisparityMaskToCommandBuffer:(id)arg1 inputDisparity:(id)arg2 outputMask:(id)arg3;
- (void)encodeOutputDisparityToCommandBuffer:(id)arg1 inputDisparity:(id)arg2 outputDisparity:(id)arg3;
- (void)encodeScaleSourceToCommandBuffer:(id)arg1 source:(struct __CVBuffer { }*)arg2 targetWidth:(unsigned long long)arg3 targetHeight:(unsigned long long)arg4;
- (void)encodeSimpleConfidenceToCommandBuffer:(id)arg1 disparity:(id)arg2 outConfidence:(id)arg3;
- (void)encodeUpdateConfidenceAndLastValidDisparityToCommandBuffer:(id)arg1 disparity:(id)arg2 prevSmoothConfidence:(id)arg3 lastValidDisparityIn:(id)arg4 lastValidDisparityOut:(id)arg5 currConfidenceOut:(id)arg6 useTemporalConfidence:(bool)arg7;
- (id)filteredBeforeSmoothDisparity;
- (void)initSourceTexture:(struct __CVBuffer { }*)arg1;
- (id)initWithStaticParams:(const struct VideoMattingStaticParams { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; int x8; unsigned int x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; unsigned int x21; unsigned int x22; int x23; float x24; float x25; }*)arg1 renderingDisparityUpdateRate:(float)arg2 renderingDisparityBlurRadius:(float)arg3 renderingLensFocalLength_mm:(float)arg4 useTemporalConfidence:(bool)arg5 metalContext:(struct CVAPhotoMetalContext { id x1; id x2; struct unique_ptr<CVAPerfEndTimeProfilerSet, std::__1::default_delete<CVAPerfEndTimeProfilerSet> > { struct __compressed_pair<CVAPerfEndTimeProfilerSet *, std::__1::default_delete<CVAPerfEndTimeProfilerSet> > { struct CVAPerfEndTimeProfilerSet {} *x_1_2_1; } x_3_1_1; } x3; bool x4; }*)arg6 error:(id*)arg7;
- (bool)isBgColorLutBlack;
- (void)renderContinuousWithSource:(struct __CVBuffer { }*)arg1 alpha:(struct __CVBuffer { }*)arg2 canonicalDisparity:(struct __CVBuffer { }*)arg3 disparityInFocus:(float)arg4 focusCanonicalDisparity:(float)arg5 fNumber:(float)arg6 infConvolutionScale:(float)arg7 noiseBits:(float)arg8 disparityUpdateRate:(float)arg9 focusThresholdHardness:(float)arg10 cubeIntensity:(float)arg11 usePostprocessedDisparity:(bool)arg12 dstColor:(struct __CVBuffer { }*)arg13 isFinalStage:(bool)arg14 callbackQueue:(id)arg15 withCallback:(id /* block */)arg16;
- (void)renderStageLightWithSource:(struct __CVBuffer { }*)arg1 alpha:(struct __CVBuffer { }*)arg2 canonicalDisparity:(struct __CVBuffer { }*)arg3 dstColor:(struct __CVBuffer { }*)arg4 blackBackgroundIntensity:(float)arg5 vignetteIntensity:(float)arg6 isFinalStage:(bool)arg7 callbackQueue:(id)arg8 withCallback:(id /* block */)arg9;
- (float)renderingDisparityUpdateRate;
- (void)setAlphaLut:(float)arg1 gammaExponent:(float)arg2;
- (void)setBgLut:(id)arg1;
- (void)setBypassShiftCleanup:(bool)arg1;
- (void)setFgLut:(id)arg1;
- (void)setIsBgColorLutBlack:(bool)arg1;
- (void)setPortraitForegroundCubeData:(id)arg1 backgroundCubeData:(id)arg2;
- (void)setRenderingDisparityUpdateRate:(float)arg1;
- (void)setStageLightProxyCubeData:(id)arg1 cubeData:(id)arg2;

@end
