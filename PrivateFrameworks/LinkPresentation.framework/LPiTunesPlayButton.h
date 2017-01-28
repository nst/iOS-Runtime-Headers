/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPiTunesPlayButton : LPPlayButton <MPUNowPlayingDelegate> {
    MPUNowPlayingController * _nowPlayingController;
    LPiTunesPlaybackInformation * _playbackInformation;
    LPStatisticsTimingToken * _playbackStartTimingToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)buttonPressed:(id)arg1;
- (struct _MRSystemAppPlaybackQueue { }*)createPlaybackQueue;
- (void)didMoveToWindow;
- (id)initWithPlaybackInformation:(id)arg1;
- (bool)matchesNowPlayingItem;
- (void)nowPlayingController:(id)arg1 elapsedTimeDidChange:(double)arg2;
- (void)nowPlayingController:(id)arg1 nowPlayingInfoDidChange:(id)arg2;
- (void)nowPlayingController:(id)arg1 playbackStateDidChange:(bool)arg2;
- (void)startListeningForPlayback;
- (void)startPlaying;
- (void)stopListeningForPlayback;
- (void)updatePlayState;
- (void)updateProgressForCurrentlyActiveTrackAnimated:(bool)arg1;
- (void)willMoveToWindow:(id)arg1;

@end
