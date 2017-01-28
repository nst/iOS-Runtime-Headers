/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAudioController : NSObject <CKAudioPlayerDelegate> {
    CKAudioPlayer * _audioPlayer;
    unsigned long long  _currentIndex;
    <CKAudioControllerDelegate> * _delegate;
    bool  _interrupted;
    CKAudioPlayer * _listenAudioPlayer;
    NSMutableArray * _mediaObjects;
    bool  _paused;
    bool  _playing;
    bool  _shouldDuckOthers;
    bool  _shouldStopPlayingWhenSilent;
    bool  _shouldUseAVPlayer;
    bool  _shouldUseSpeaker;
}

@property (setter=_setMediaObjects:, nonatomic, retain) NSMutableArray *_mediaObjects;
@property (nonatomic, retain) CKAudioPlayer *audioPlayer;
@property (nonatomic, readonly) CKMediaObject *currentMediaObject;
@property (nonatomic, readonly) double currentMediaObjectDuration;
@property (nonatomic, readonly) double currentMediaObjectTime;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKAudioControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool interrupted;
@property (nonatomic, readonly) NSArray *mediaObjects;
@property (getter=isPaused, nonatomic) bool paused;
@property (getter=isPlaying, nonatomic) bool playing;
@property (nonatomic) bool shouldDuckOthers;
@property (nonatomic) bool shouldStopPlayingWhenSilent;
@property (nonatomic) bool shouldUseAVPlayer;
@property (nonatomic) bool shouldUseSpeaker;
@property (readonly) Class superclass;
@property (nonatomic) float volume;

- (void).cxx_destruct;
- (id)_mediaObjects;
- (void)_notifyPlayerDidPrepareMediaObject:(id)arg1 successfully:(bool)arg2;
- (void)_setMediaObjects:(id)arg1;
- (void)addMediaObject:(id)arg1;
- (void)addMediaObjects:(id)arg1;
- (void)applicationWillResignActive;
- (id)audioPlayer;
- (void)audioPlayerCurrentTimeDidChange:(id)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1;
- (void)audioPlayerDidPrepareAudioToPlay:(id)arg1 successfully:(bool)arg2;
- (unsigned long long)audioSessionControllerOptions;
- (void)audioSessionInterruption:(id)arg1;
- (id)currentMediaObject;
- (double)currentMediaObjectDuration;
- (double)currentMediaObjectTime;
- (void)dealloc;
- (id)delegate;
- (id)initWithMediaObjects:(id)arg1;
- (bool)interrupted;
- (bool)isPaused;
- (bool)isPlaying;
- (id)mediaObjects;
- (void)pause;
- (void)play;
- (void)playAfterDelay:(double)arg1;
- (void)playListenEndSound:(id)arg1;
- (void)playListenSound:(id)arg1;
- (void)prepareToPlay;
- (void)setAudioPlayer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInterrupted:(bool)arg1;
- (void)setPaused:(bool)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setShouldDuckOthers:(bool)arg1;
- (void)setShouldStopPlayingWhenSilent:(bool)arg1;
- (void)setShouldUseAVPlayer:(bool)arg1;
- (void)setShouldUseSpeaker:(bool)arg1;
- (void)setVolume:(float)arg1;
- (bool)shouldDuckOthers;
- (bool)shouldStopPlayingWhenSilent;
- (bool)shouldUseAVPlayer;
- (bool)shouldUseSpeaker;
- (void)stop;
- (float)volume;

@end
