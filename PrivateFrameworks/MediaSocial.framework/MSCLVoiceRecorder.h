/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLVoiceRecorder : NSObject <AVVoiceControllerRecordDelegate> {
    NSString * _assetPath;
    id  _capturedSelf;
    <MSCLVoiceRecorderDelegate> * _delegate;
    struct OpaqueAudioFileID { } * _fileID;
    double  _maximumRecordingDuration;
    NSObject<OS_dispatch_source> * _powerMeterTimer;
    NSObject<OS_dispatch_source> * _recordingTimeoutTimer;
    NSMutableArray * _stopBlocks;
    long long  _totalRecordedPacketCount;
    AVVoiceController * _voiceController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MSCLVoiceRecorderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maximumRecordingDuration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishRecordingWithReason:(long long)arg1;
- (void)_startPowerMeterTimer;
- (void)_startRecordingTimeoutTimer;
- (void)_stopPowerMeterTimer;
- (void)_stopRecordingTimeoutTimer;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithAssetPath:(id)arg1;
- (double)maximumRecordingDuration;
- (void)setDelegate:(id)arg1;
- (void)setMaximumRecordingDuration:(double)arg1;
- (bool)startRecordingUsingActivationMode:(long long)arg1 error:(id*)arg2;
- (void)stopRecordingWithCompletionHandler:(id)arg1;
- (void)voiceControllerDidStartRecording:(id)arg1 successfully:(bool)arg2;
- (void)voiceControllerDidStopRecording:(id)arg1 forReason:(long long)arg2;
- (void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;

@end
