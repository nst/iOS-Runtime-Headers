/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPlayer : NSObject {
    NSString * _activeRouteName;
    MPRemoteCommandCenter * _commandCenter;
    MPCPlayerItemContainer * _currentContainer;
    MPCPlayerItem * _currentItem;
    NSPointerArray * _nowPlayingInfoHandlers;
    NSPointerArray * _playbackErrorObservers;
    NSPointerArray * _playbackIntentObservers;
    bool  _restoringPlaybackState;
    long long  _state;
    AVPlayerLayer * _videoLayer;
}

@property (nonatomic, readonly, copy) NSString *activeRouteName;
@property (nonatomic, retain) MPRemoteCommandCenter *commandCenter;
@property (nonatomic) MPCPlayerItemContainer *currentContainer;
@property (nonatomic) MPCPlayerItem *currentItem;
@property (nonatomic, readonly, copy) NSArray *nowPlayingInfoHandlers;
@property (nonatomic, readonly, copy) NSArray *playbackErrorObservers;
@property (nonatomic, readonly, copy) NSArray *playbackIntentObservers;
@property (getter=isRestoringPlaybackState, nonatomic, readonly) bool restoringPlaybackState;
@property (nonatomic) long long state;
@property (nonatomic, readonly) AVPlayerLayer *videoLayer;

+ (Class)queueRequestOperationClass;

- (void).cxx_destruct;
- (id)activeRouteName;
- (void)addPlaybackIntent:(id)arg1 withOptions:(unsigned long long)arg2 completion:(id)arg3;
- (void)clearPlaybackQueueWithCompletion:(id)arg1;
- (id)commandCenter;
- (id)currentContainer;
- (id)currentItem;
- (bool)isRestoringPlaybackState;
- (id)nowPlayingInfoHandlers;
- (void)performCommandEvent:(id)arg1 completion:(id)arg2;
- (id)playbackErrorObservers;
- (id)playbackIntentObservers;
- (void)preservePlaybackStateImmediately;
- (void)recordLyricsViewEvent:(id)arg1;
- (void)registerNowPlayingInfoHandler:(id)arg1;
- (void)registerPlaybackErrorObserver:(id)arg1;
- (void)registerPlaybackIntentObserver:(id)arg1;
- (void)restorePlaybackStateCompletionHandler:(id)arg1;
- (void)schedulePlaybackStatePreservation;
- (void)setCommandCenter:(id)arg1;
- (void)setCurrentContainer:(id)arg1;
- (void)setCurrentItem:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (void)unregisterNowPlayingInfoHandler:(id)arg1;
- (void)unregisterPlaybackErrorObserver:(id)arg1;
- (void)unregisterPlaybackIntentObserver:(id)arg1;
- (id)videoLayer;

@end