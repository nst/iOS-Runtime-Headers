/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface AVHapticPlayer : NSObject {
    NSArray * _channelArray;
    HapticClient * _client;
    bool  _resourcesAllocated;
}

@property (nonatomic, readonly) NSArray *channels;
@property (readonly) HapticClient *client;
@property (readonly) bool resourcesAllocated;

- (void).cxx_destruct;
- (void)allocateRenderResourcesWithCompletionHandler:(id)arg1;
- (id)channels;
- (id)client;
- (void)dealloc;
- (void)deallocateRenderResources;
- (bool)detachHapticSequence:(unsigned long long)arg1 atTime:(double)arg2;
- (bool)enableSequenceLooping:(unsigned long long)arg1 enable:(bool)arg2 error:(id*)arg3;
- (bool)finishWithCompletionHandler:(id)arg1;
- (id)initAndReturnError:(id*)arg1;
- (void)invalidateChannels;
- (bool)loadHapticPreset:(id)arg1 reply:(id)arg2;
- (bool)loadHapticSequence:(id)arg1 reply:(id)arg2;
- (bool)playHapticSequence:(unsigned long long)arg1 atTime:(double)arg2 offset:(double)arg3;
- (bool)prepareHapticSequence:(unsigned long long)arg1 error:(id*)arg2;
- (void)prewarmWithCompletionHandler:(id)arg1;
- (void)releaseChannels;
- (bool)resourcesAllocated;
- (bool)setNumberOfChannels:(unsigned long long)arg1 error:(id*)arg2;
- (void)startRunningWithCompletionHandler:(id)arg1;
- (bool)stopHapticSequence:(unsigned long long)arg1 atTime:(double)arg2;
- (void)stopPrewarm;
- (void)stopRunning;

@end
