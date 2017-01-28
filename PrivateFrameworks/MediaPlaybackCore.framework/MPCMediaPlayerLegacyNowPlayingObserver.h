/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCMediaPlayerLegacyNowPlayingObserver : MPNowPlayingObserver {
    MPCMediaPlayerLegacyPlayer * _mpcPlayer;
}

@property (nonatomic) MPCMediaPlayerLegacyPlayer *mpcPlayer;

- (void).cxx_destruct;
- (id)_additionalKeysForNowPlayingItem:(id)arg1;
- (void)_createNowPlayingInfoForItem:(id)arg1 completionHandler:(id)arg2;
- (id)mpcPlayer;
- (void)setMpcPlayer:(id)arg1;

@end
