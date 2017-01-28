/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWPixelTransferNode : BWNode {
    int  _cropMode;
    NSObject<OS_dispatch_semaphore> * _emitSampleBufferSemaphore;
    bool  _flipHorizontal;
    bool  _flipVertical;
    bool  _haveLiveInputCropRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _inputCropRect;
    BWPixelBufferPool * _intermediateBufferPool;
    struct { 
        int width; 
        int height; 
    }  _intermediatePoolDimensions;
    int  _liveCropMode;
    bool  _liveFlipHorizontal;
    bool  _liveFlipVertical;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _liveInputCropRect;
    bool  _liveLowSpeed;
    bool  _livePassesBuffersThroughWhenPossible;
    int  _liveRotationDegrees;
    bool  _liveUpdatesSampleBufferMetadataForIrisVIS;
    bool  _liveZeroFillBuffers;
    bool  _lowSpeed;
    bool  _makeCurrentConfigurationLiveOnNextRenderCallback;
    int  _outputColorSpaceProperties;
    struct opaqueCMFormatDescription { } * _outputFormatDescription;
    unsigned long long  _outputHeight;
    unsigned int  _outputPixelFormat;
    unsigned long long  _outputWidth;
    bool  _passesBuffersThroughWhenPossible;
    int  _rotationDegrees;
    struct OpaqueVTImageRotationSession { } * _rotationSession;
    int  _rotationSessionColorSpaceProperties;
    bool  _rotationSessionFlipHorizontal;
    bool  _rotationSessionFlipVertical;
    bool  _rotationSessionLowSpeed;
    int  _rotationSessionRotationDegrees;
    bool  _rotationSessionZeroFillBuffers;
    struct OpaqueVTPixelTransferSession { } * _transferSession;
    bool  _updatesSampleBufferMetadataForIrisVIS;
}

+ (void)initialize;

- (bool)_emitIfMarkerBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (int)_ensureIntermediatePoolWithDimensions:(struct { int x1; int x2; })arg1;
- (void)_ensureRotationSession;
- (void)_ensureTransferSession;
- (struct { int x1; int x2; })_intermediateBufferDimensionsForInputDimensions:(struct { int x1; int x2; })arg1 outputDimensions:(struct { int x1; int x2; })arg2;
- (void)_makeCurrentConfigurationLive;
- (id)_preferredPixelFormats;
- (id)_preferredPixelFormatsWithInputPixelFormatFirst;
- (void)_updateOutputRequirements;
- (bool)_zeroFillBuffers;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (int)cropMode;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)emitSampleBufferSemaphore;
- (bool)flipHorizontal;
- (bool)flipVertical;
- (bool)hasNonLiveConfigurationChanges;
- (id)init;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inputCropRect;
- (bool)lowSpeed;
- (void)makeCurrentConfigurationLive;
- (id)nodeSubType;
- (id)nodeType;
- (int)outputColorSpaceProperties;
- (unsigned long long)outputHeight;
- (unsigned int)outputPixelFormat;
- (unsigned long long)outputWidth;
- (bool)passesBuffersThroughWhenPossible;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (int)rotationDegrees;
- (void)setCropMode:(int)arg1;
- (void)setEmitSampleBufferSemaphore:(id)arg1;
- (void)setFlipHorizontal:(bool)arg1;
- (void)setFlipVertical:(bool)arg1;
- (void)setInputCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLowSpeed:(bool)arg1;
- (void)setOutputColorSpaceProperties:(int)arg1;
- (void)setOutputHeight:(unsigned long long)arg1;
- (void)setOutputPixelFormat:(unsigned int)arg1;
- (void)setOutputWidth:(unsigned long long)arg1;
- (void)setPassesBuffersThroughWhenPossible:(bool)arg1;
- (void)setRotationDegrees:(int)arg1;
- (void)setUpdatesSampleBufferMetadataForIrisVIS:(bool)arg1;
- (bool)updatesSampleBufferMetadataForIrisVIS;

@end
