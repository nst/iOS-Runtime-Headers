/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISLivePhotoPlayer : ISBasePlayer <ISChangeObserver, ISLivePhotoSettleBehaviorDelegate> {
    long long  __playbackIdentifier;
    bool  __settleAutomaticallyWhenReady;
    bool  __shouldPlayVitalityWhenReady;
    bool  __shouldPrepareForHintWhenReady;
    bool  __shouldPrepareForVitalityWhenReady;
    long long  __styleToPlayWhenReady;
    NSDate * __vitalityTimeoutDate;
    long long  _currentPlaybackStyle;
    bool  _hinting;
    bool  _immediatelyShowsPhotoWhenPlaybackEnds;
    bool  _playbackAllowed;
    NSMutableSet * _playbackFilters;
    bool  _playingVitality;
    long long  _targetReadiness;
    ISLivePhotoVitalityFilter * _vitalityFilter;
}

@property (setter=_setPlaybackIdentifier:, nonatomic) long long _playbackIdentifier;
@property (setter=_setSettleAutomaticallyWhenReady:, nonatomic) bool _settleAutomaticallyWhenReady;
@property (setter=_setShouldPlayVitalityWhenReady:, nonatomic) bool _shouldPlayVitalityWhenReady;
@property (setter=_setShouldPrepareForHintWhenReady:, nonatomic) bool _shouldPrepareForHintWhenReady;
@property (setter=_setShouldPrepareForVitalityWhenReady:, nonatomic) bool _shouldPrepareForVitalityWhenReady;
@property (setter=_setStyleToPlayWhenReady:, nonatomic) long long _styleToPlayWhenReady;
@property (setter=_setVitalityTimeoutDate:, nonatomic, retain) NSDate *_vitalityTimeoutDate;
@property (setter=_setCurrentPlaybackStyle:, nonatomic) long long currentPlaybackStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHinting, setter=_setHinting:, nonatomic) bool hinting;
@property (nonatomic) bool immediatelyShowsPhotoWhenPlaybackEnds;
@property (getter=isPlaybackAllowed, nonatomic) bool playbackAllowed;
@property (nonatomic, readonly) NSSet *playbackFilters;
@property (getter=isPlayingVitality, setter=_setPlayingVitality:, nonatomic) bool playingVitality;
@property (readonly) Class superclass;
@property (nonatomic) long long targetReadiness;
@property (nonatomic, retain) ISLivePhotoVitalityFilter *vitalityFilter;

- (void).cxx_destruct;
- (double)_coalescedPlaybackFilterHintProgress;
- (long long)_coalescedPlaybackFilterState;
- (void)_configurePlaybackFilter:(id)arg1;
- (void)_configurePlaybackFilters;
- (void)_handlePlaybackFilterDidChange;
- (void)_handleVitalityFilterDidChange:(id)arg1;
- (long long)_incrementedPlaybackIdentifier;
- (double)_photoTransitionDuration;
- (void)_playIfNeeded;
- (long long)_playbackIdentifier;
- (void)_prepareForVitalityIfNeeded;
- (void)_resetPlaybackFilters;
- (void)_setCurrentPlaybackStyle:(long long)arg1;
- (void)_setHinting:(bool)arg1;
- (void)_setPlaybackIdentifier:(long long)arg1;
- (void)_setPlayingVitality:(bool)arg1;
- (void)_setSettleAutomaticallyWhenReady:(bool)arg1;
- (void)_setShouldPlayVitalityWhenReady:(bool)arg1;
- (void)_setShouldPrepareForHintWhenReady:(bool)arg1;
- (void)_setShouldPrepareForVitalityWhenReady:(bool)arg1;
- (void)_setStyleToPlayWhenReady:(long long)arg1;
- (void)_setVitalityTimeoutDate:(id)arg1;
- (bool)_settleAutomaticallyWhenReady;
- (bool)_shouldPlayVitalityWhenReady;
- (bool)_shouldPrepareForHintWhenReady;
- (bool)_shouldPrepareForVitalityWhenReady;
- (long long)_styleToPlayWhenReady;
- (void)_updateHintingAndVitality;
- (void)_updatePlayerItemLoadingTarget;
- (id)_vitalityTimeoutDate;
- (void)activeBehaviorDidChange;
- (void)addPlaybackFilter:(id)arg1;
- (void)configurePlayerItem;
- (long long)currentPlaybackStyle;
- (bool)immediatelyShowsPhotoWhenPlaybackEnds;
- (id)init;
- (bool)isHinting;
- (bool)isPlaybackAllowed;
- (bool)isPlayingVitality;
- (void)livePhotoPlaybackBehaviorDidFinish:(id)arg1;
- (void)livePhotoSettleBehaviorDidFinish:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)playHintWhenReady;
- (void)playVitality;
- (id)playbackFilters;
- (void)playerItemDidChange;
- (void)prepareForHintWhenReady;
- (void)prepareForVitality;
- (void)removePlaybackFilter:(id)arg1;
- (void)setImmediatelyShowsPhotoWhenPlaybackEnds:(bool)arg1;
- (void)setPlaybackAllowed:(bool)arg1;
- (void)setTargetReadiness:(long long)arg1;
- (void)setVitalityFilter:(id)arg1;
- (void)showPlaybackHintWithProgress:(float)arg1;
- (void)startPlaybackWithStyle:(long long)arg1;
- (void)startPlaybackWithStyle:(long long)arg1 settleAutomatically:(bool)arg2;
- (void)startPlaybackWithStyleWhenReady:(long long)arg1;
- (void)startPlaybackWithStyleWhenReady:(long long)arg1 settleAutomatically:(bool)arg2;
- (void)statusDidChange;
- (void)stopPlayback;
- (void)stopPlaybackAnimated:(bool)arg1;
- (long long)targetReadiness;
- (double)videoWillPlayToEndInterval;
- (void)vitalityBehaviorDidBeginPlaying:(id)arg1;
- (void)vitalityBehaviorDidEndPlaying:(id)arg1;
- (id)vitalityFilter;

@end
