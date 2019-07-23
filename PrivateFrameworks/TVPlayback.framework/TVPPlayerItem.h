/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

@interface TVPPlayerItem : AVPlayerItem {
    bool  _audioSelectionIsAutomatic;
    TVPMediaItemLoader * _mediaItemLoader;
    bool  _muted;
    TVImageProxy * _posterProxy;
    long long  _previousStatus;
    AVMediaSelectionOption * _savedManualAudioSelection;
    id  _scrubImageLoader;
}

@property (nonatomic) bool audioSelectionIsAutomatic;
@property (nonatomic) TVPMediaItemLoader *mediaItemLoader;
@property (nonatomic) bool muted;
@property (nonatomic, retain) TVImageProxy *posterProxy;
@property (nonatomic) long long previousStatus;
@property (nonatomic, retain) AVMediaSelectionOption *savedManualAudioSelection;
@property (nonatomic, retain) id scrubImageLoader;

- (void).cxx_destruct;
- (bool)audioSelectionIsAutomatic;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;
- (id)mediaItemLoader;
- (bool)muted;
- (id)posterProxy;
- (long long)previousStatus;
- (id)savedManualAudioSelection;
- (id)scrubImageLoader;
- (void)selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2;
- (void)selectMediaOptionAutomaticallyInMediaSelectionGroup:(id)arg1;
- (void)setAudioSelectionIsAutomatic:(bool)arg1;
- (void)setMediaItemLoader:(id)arg1;
- (void)setMuted:(bool)arg1;
- (void)setPosterProxy:(id)arg1;
- (void)setPreviousStatus:(long long)arg1;
- (void)setSavedManualAudioSelection:(id)arg1;
- (void)setScrubImageLoader:(id)arg1;

@end
