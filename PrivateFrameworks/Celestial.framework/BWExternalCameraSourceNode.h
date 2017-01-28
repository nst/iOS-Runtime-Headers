/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWExternalCameraSourceNode : BWSourceNode <BWFigCameraSourceNode> {
    BWFigExternalVideoCaptureDevice * _captureDevice;
    int  _livePreviewFormatIndex;
    bool  _makeCurrentConfigurationLive;
    struct { 
        int width; 
        int height; 
    }  _outputDimensions;
    int  _stillImageCaptureFormatIndex;
    BWNodeOutput * _stillImageOutput;
    id  _stillImageSBufHandler;
    BWNodeOutput * _videoCaptureOutput;
    id  _videoSBufHandler;
}

@property (readonly) BWFigVideoCaptureDevice *captureDevice;
@property (readonly) BWFigVideoCaptureStream *captureStream;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BWNodeOutput *detectedFacesOutput;
@property (readonly) unsigned long long hash;
@property (readonly) BWNodeOutput *stillImageOutput;
@property (readonly) Class superclass;
@property (readonly) BWNodeOutput *videoCaptureOutput;
@property (nonatomic, copy) NSDictionary *videoCaptureOutputColorInfoOverride;
@property (nonatomic) bool videoCaptureOutputPixelBufferAttachmentModificationAllowed;

+ (id)cameraSourceNodeWithCaptureDevice:(id)arg1;
+ (void)initialize;

- (void)_handleSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)_initWithCaptureDevice:(id)arg1;
- (void)_resolveSensorFormatIndex;
- (void)_updateFormatRequirements;
- (id)captureDevice;
- (id)captureStream;
- (id)colorInfoForOutput:(id)arg1;
- (void)dealloc;
- (id)detectedFacesOutput;
- (bool)detectedFacesOutputEnabled;
- (int)livePreviewFormatIndex;
- (struct { int x1; int x2; })outputDimensions;
- (void)setDetectedFacesOutputEnabled:(bool)arg1;
- (void)setLivePreviewFormatIndex:(int)arg1;
- (void)setOutputDimensions:(struct { int x1; int x2; })arg1;
- (void)setStillImageCaptureFormatIndex:(int)arg1;
- (void)setVideoCaptureOutputColorInfoOverride:(id)arg1;
- (void)setVideoCaptureOutputPixelBufferAttachmentModificationAllowed:(bool)arg1;
- (bool)start:(id*)arg1;
- (int)stillImageCaptureFormatIndex;
- (id)stillImageOutput;
- (bool)stop:(id*)arg1;
- (id)videoCaptureOutput;
- (id)videoCaptureOutputColorInfoOverride;
- (bool)videoCaptureOutputPixelBufferAttachmentModificationAllowed;
- (void)willStop;

@end
