/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMusicPlayerControllerServerInternal : MPServerObject <MPMusicPlayerController> {
    int  _activeClientPID;
    BKSApplicationStateMonitor * _applicationStateMonitor;
    long long  _applicationStateMonitorCount;
    NSMutableArray * _clientPorts;
    NSMutableDictionary * _clientPortsForPIDs;
    NSMutableDictionary * _clientStateForPIDs;
    <MPMusicPlayerControllerServerDelegate> * _delegate;
    unsigned int  _hasSentQueuePrepared;
    MPMusicPlayerControllerServer * _musicPlayerServer;
    unsigned int  _queuePrepared;
    MPVideoViewController * _videoViewController;
}

+ (bool)_canSeedGeniusWithItem:(id)arg1;

- (void).cxx_destruct;
- (void)_applicationStateChangedWithUserInfo:(id)arg1;
- (id)_avController;
- (id)_avControllerForClientPID:(int)arg1;
- (bool)_clientPIDHasPermissionToPlay:(int)arg1;
- (void)_clientPortInvalidated:(id)arg1;
- (void)_clientPortInvalidatedNotification:(id)arg1;
- (id)_clientState;
- (id)_clientStateForPID:(int)arg1;
- (bool)_currentClientPIDHasPermissionToPlay;
- (void)_endPlayback;
- (void)_endPlaybackForClientIfNecessary:(int)arg1;
- (void)_itemDidChangeNotification:(id)arg1;
- (void)_itemPlaybackDidEndNotification:(id)arg1;
- (unsigned long long)_numberOfItems;
- (void)_playbackBufferingStateDidChangeNotification:(id)arg1;
- (void)_playbackErrorPostedNotification:(id)arg1;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (void)_prepareQueueIfNecessary;
- (void)_registerClientPort:(unsigned int)arg1 forProcessID:(int)arg2 hasAudioBackgroundMode:(bool)arg3;
- (void)_setQueuePrepared:(bool)arg1;
- (void)_setQueueWithQuery:(id)arg1;
- (void)_tearDownVideoView;
- (void)_tvOutCapabilityDidChangeNotification:(id)arg1;
- (void)_updateVideoView;
- (id)allowsBackgroundVideo;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (id)currentChapterIndex;
- (id)currentPlaybackRate;
- (id)currentPlaybackTime;
- (void)dealloc;
- (void)endSeeking;
- (id)indexOfNowPlayingItem;
- (id)init;
- (id)isGeniusAvailable;
- (id)isGeniusAvailableForSeedItems:(id)arg1;
- (id)isNowPlayingItemFromGeniusMix;
- (id)nowPlayingItem;
- (id)nowPlayingItemAtIndex:(id)arg1;
- (id)numberOfItems;
- (void)pause;
- (void)pauseWithFadeoutDuration:(id)arg1;
- (void)play;
- (void)playItem:(id)arg1;
- (id)playbackSpeed;
- (id)playbackState;
- (void)prepareQueueForPlayback;
- (void)prepareToPlay;
- (id)queueAsQuery;
- (id)queueAsRadioStation;
- (void)registerForServerDiedNotifications;
- (id)repeatMode;
- (id)serverIsAlive;
- (void)setAllowsBackgroundVideo:(id)arg1;
- (void)setCurrentChapterIndex:(id)arg1;
- (void)setCurrentPlaybackRate:(id)arg1;
- (void)setCurrentPlaybackTime:(id)arg1;
- (void)setNowPlayingItem:(id)arg1;
- (void)setPlaybackSpeed:(id)arg1;
- (void)setQueueWithDescriptor:(id)arg1;
- (void)setQueueWithGeniusMixPlaylist:(id)arg1;
- (void)setQueueWithItemCollection:(id)arg1;
- (void)setQueueWithQuery:(id)arg1;
- (void)setQueueWithQuery:(id)arg1 firstItem:(id)arg2;
- (void)setQueueWithRadioStation:(id)arg1;
- (id)setQueueWithSeedItems:(id)arg1;
- (id)setQueueWithStoreIDs:(id)arg1;
- (void)setRepeatMode:(id)arg1;
- (void)setShuffleMode:(id)arg1;
- (void)setUseApplicationSpecificQueue:(id)arg1;
- (void)setUserQueueModificationsDisabled:(id)arg1;
- (bool)shouldDelayInvocation:(id)arg1;
- (void)shuffle;
- (id)shuffleMode;
- (id)skipInDirection:(id)arg1;
- (void)skipToBeginning;
- (void)skipToBeginningOrPreviousItem;
- (void)skipToNextChapter;
- (void)skipToNextItem;
- (void)skipToPreviousChapter;
- (void)skipToPreviousItem;
- (void)stop;
- (id)unshuffledIndexOfNowPlayingItem;
- (bool)useApplicationSpecificQueue;
- (id)userQueueModificationsDisabled;

@end
