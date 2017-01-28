/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlaylistItem : NSObject <AVFigPlaylistNodeConvertible, AVPlaylistNode> {
    AVPlaylistItemInternal * _ivars;
}

@property (nonatomic, readonly) bool appliesChangesImmediately;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_figPlaylistItem, nonatomic, readonly) struct OpaqueFigPlaylistItem { }*figPlaylistItem;
@property (nonatomic, readonly) struct { int x1; union { struct OpaqueFigPlaylist {} *x_2_1_1; struct OpaqueFigPlaylistItem {} *x_2_1_2; } x2; }*figPlaylistNode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (nonatomic) bool includesAllKnownRepresentations;
@property (nonatomic, copy) NSArray *metadata;
@property (nonatomic, readonly) AVPlaylist *parentPlaylist;
@property (nonatomic, copy) NSArray *representations;
@property (readonly) Class superclass;

+ (void)initialize;

- (int)_EQPreset;
- (struct OpaqueFigPlaylistItem { }*)_figPlaylistItem;
- (void)_setEQPreset:(int)arg1;
- (bool)appliesChangesImmediately;
- (void)applyPendingChangesWithCompletionHandler:(id)arg1;
- (void)dealloc;
- (id)description;
- (struct { int x1; union { struct OpaqueFigPlaylist {} *x_2_1_1; struct OpaqueFigPlaylistItem {} *x_2_1_2; } x2; }*)figPlaylistNode;
- (void)finalize;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })forwardPlaybackEndTime;
- (float)groupingSoundCheckVolumeNormalization;
- (unsigned long long)hash;
- (id)identifier;
- (bool)includesAllKnownRepresentations;
- (id)init;
- (id)initWithFigPlaylistItem:(struct OpaqueFigPlaylistItem { }*)arg1;
- (id)initWithRepresentation:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })initialCurrentTime;
- (bool)isEqual:(id)arg1;
- (id)loudnessInfoForAllAudioTracks;
- (id)mediaKind;
- (id)metadata;
- (id)parentPlaylist;
- (long long)playbackLikelyToKeepUpTrigger;
- (double)preferredPeakBitRate;
- (id)representations;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })reversePlaybackEndTime;
- (void)setForwardPlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setIncludesAllKnownRepresentations:(bool)arg1;
- (void)setInitialCurrentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setLoudnessInfoForAllAudioTracks:(id)arg1;
- (void)setMediaKind:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setPlaybackLikelyToKeepUpTrigger:(long long)arg1;
- (void)setPreferredPeakBitRate:(double)arg1;
- (void)setRepresentations:(id)arg1;
- (void)setReversePlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setSoundCheckVolumeNormalization:(float)arg1;
- (void)setWillNeverSeekBackwardsHint:(bool)arg1;
- (float)soundCheckVolumeNormalization;
- (id)soundCheckVolumeNormalizationGroupingMetadataKey;
- (bool)willNeverSeekBackwardsHint;

@end