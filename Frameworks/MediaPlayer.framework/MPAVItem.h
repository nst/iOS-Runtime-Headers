/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVItem : NSObject <MPAVMetadataItem, MusicEntityValueProviding> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    bool  _activeItem;
    unsigned int  _advancedDuringPlayback;
    NSString * _aggregateDictionaryItemIdentifier;
    long long  _albumStoreID;
    bool  _allowsAirPlayFromCloud;
    bool  _allowsExternalPlayback;
    MPAlternateTracks * _alternateTracks;
    NSArray * _artworkTimeMarkers;
    AVAsset * _asset;
    bool  _assetLoaded;
    NSObject<OS_dispatch_queue> * _assetQueue;
    AVPlayerItem * _avPlayerItem;
    NSArray * _buyOffers;
    double  _cachedDuration;
    double  _cachedPlayableDuration;
    NSArray * _cachedSeekableTimeRanges;
    bool  _canReusePlayerItem;
    NSArray * _chapterTimeMarkers;
    NSArray * _closedCaptionTimeMarkers;
    MPNowPlayingContentItem * _contentItem;
    NSString * _contentItemID;
    NSString * _copyrightText;
    float  _currentPlaybackRate;
    float  _defaultPlaybackRate;
    bool  _didAttemptToLoadAsset;
    long long  _exportableArtworkRevision;
    NSString * _externalContentIdentifier;
    bool  _externalDisplay;
    NSString * _feedUniqueIdentifier;
    MPQueueFeeder * _feeder;
    unsigned int  _handledFinishTime;
    bool  _hasFinishedDownloading;
    bool  _hasLoadedHasProtectedContent;
    bool  _hasLoadedPlaybackMode;
    bool  _hasPerformedErrorResolution;
    unsigned int  _hasPlayedThisSession;
    bool  _hasPostedNaturalSizeChange;
    bool  _hasProtectedContent;
    bool  _hasRegisteredForCaptionsAppearanceChanged;
    bool  _hasValidPlayerItemDuration;
    bool  _isAssetLoaded;
    unsigned int  _isStreamable;
    NSError * _itemError;
    double  _lastLoggedTotalDuration;
    long long  _likedState;
    bool  _likedStateEnabled;
    bool  _limitReadAhead;
    float  _loudnessInfoVolumeNormalization;
    unsigned int  _lyricsAvailable;
    MPMediaItem * _mediaItem;
    MPModelGenericObject * _modelGenericObject;
    long long  _playbackMode;
    MPAVController * _player;
    NSString * _playerIdentifier;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _playerItemDuration;
    <MPAVItemPlaylistIdentifier> * _playlistIdentifier;
    bool  _prefersSeekOverSkip;
    <MPAVItemQueueIdentifier> * _queueIdentifier;
    bool  _requiresLoadedAssetForAirPlayProperties;
    double  _seekableTimeRangesCacheTime;
    bool  _shouldPreventPlayback;
    float  _soundCheckVolumeNormalization;
    bool  _startItem;
    NSString * _storeFrontIdentifier;
    long long  _storeItemInt64ID;
    long long  _storeSubscriptionAdamID;
    bool  _supportsLikedState;
    unsigned int  _timeMarkersNeedLoading;
    long long  _type;
    NSArray * _urlTimeMarkers;
    unsigned int  _userChangedItemsDuringPlayback;
    unsigned int  _wasCountedAsSkipped;
    unsigned int  _watchingAttributes;
}

@property (nonatomic, readonly) MPCContentItemIdentifierCollection *MPC_contentItemIdentifierCollection;
@property (nonatomic, readonly) MPUContentItemIdentifierCollection *MPU_contentItemIdentifierCollection;
@property (getter=_currentPlaybackRate, setter=_setCurrentPlaybackRate:, nonatomic) float _currentPlaybackRate;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } _playerItemDurationIfAvailable;
@property (nonatomic, readonly) AVPlayerItemAccessLog *accessLog;
@property (getter=isActiveItem, nonatomic) bool activeItem;
@property (nonatomic, readonly, copy) NSString *aggregateDictionaryItemIdentifier;
@property (nonatomic, readonly) NSString *album;
@property (nonatomic, readonly) NSString *albumArtist;
@property (nonatomic, readonly) unsigned long long albumArtistPersistentID;
@property (nonatomic, readonly) unsigned long long albumPersistentID;
@property (nonatomic, readonly) long long albumStoreID;
@property (nonatomic, readonly) unsigned long long albumTrackCount;
@property (nonatomic, readonly) unsigned long long albumTrackNumber;
@property (nonatomic, readonly) bool allowsAirPlayFromCloud;
@property (nonatomic, readonly) bool allowsEQ;
@property (nonatomic, readonly) bool allowsExternalPlayback;
@property (nonatomic, readonly) MPAlternateTracks *alternateTracks;
@property (getter=isAlwaysLive, nonatomic, readonly) bool alwaysLive;
@property (nonatomic, readonly) NSString *artist;
@property (nonatomic, readonly) unsigned long long artistPersistentID;
@property (nonatomic, readonly) long long artistStoreID;
@property (nonatomic, retain) NSArray *artworkTimeMarkers;
@property (nonatomic, readonly) AVAsset *asset;
@property (getter=isAssetLoaded, nonatomic, readonly) bool assetLoaded;
@property (getter=isAssetURLValid, nonatomic, readonly) bool assetURLValid;
@property (nonatomic, readonly, copy) NSNumber *bookmarkTime;
@property (nonatomic, readonly, copy) NSArray *buyOffers;
@property (nonatomic, readonly) bool canReusePlayerItem;
@property (nonatomic, readonly) bool canSeedGenius;
@property (nonatomic, readonly) bool canUseLoadedAsset;
@property (nonatomic, retain) NSArray *chapterTimeMarkers;
@property (nonatomic, retain) NSArray *closedCaptionTimeMarkers;
@property (nonatomic, readonly) NSString *cloudAlbumID;
@property (nonatomic, readonly) unsigned long long cloudID;
@property (nonatomic, readonly) NSString *cloudUniversalLibraryID;
@property (nonatomic, readonly) NSString *composer;
@property (nonatomic, readonly) unsigned long long composerPersistentID;
@property (nonatomic, readonly) MPNowPlayingContentItem *contentItem;
@property (nonatomic, copy) NSString *contentItemID;
@property (nonatomic, readonly, copy) NSString *copyrightText;
@property (nonatomic, readonly) double currentTimeDisplayOverride;
@property (nonatomic, readonly) long long customAVEQPreset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) float defaultPlaybackRate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didAttemptToLoadAsset;
@property (nonatomic, readonly) bool didDeferLeaseStart;
@property (nonatomic, readonly) unsigned long long discCount;
@property (nonatomic, readonly) unsigned long long discNumber;
@property (nonatomic, readonly) NSString *displayableText;
@property (nonatomic, readonly) bool displayableTextLoaded;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (nonatomic, readonly) double durationFromExternalMetadata;
@property (nonatomic, readonly) double durationIfAvailable;
@property (nonatomic, readonly) bool durationIsValid;
@property (getter=isExplicitTrack, nonatomic, readonly) bool explicitTrack;
@property (nonatomic, readonly, copy) NSString *externalContentIdentifier;
@property (getter=hasExternalDisplay, nonatomic) bool externalDisplay;
@property (nonatomic, copy) NSString *feedUniqueIdentifier;
@property (nonatomic) MPQueueFeeder *feeder;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } forwardPlaybackEndTime;
@property (nonatomic, readonly) NSString *genre;
@property (nonatomic, readonly) unsigned long long genrePersistentID;
@property (nonatomic, readonly) bool hasDisplayableText;
@property (nonatomic, readonly) bool hasFinishedDownloading;
@property (nonatomic) bool hasPerformedErrorResolution;
@property (nonatomic) bool hasPlayedThisSession;
@property (nonatomic, readonly) bool hasProtectedContent;
@property (nonatomic, readonly) bool hasStoreLyrics;
@property (readonly) unsigned long long hash;
@property (getter=isInWishList, nonatomic) bool inWishList;
@property (nonatomic, readonly, copy) NSNumber *initialPlaybackStartTime;
@property (nonatomic, readonly) bool isAd;
@property bool isAssetLoaded;
@property (nonatomic, readonly) bool isCloudItem;
@property (nonatomic, readonly) bool isStreamingLowQualityAsset;
@property (nonatomic, retain) NSError *itemError;
@property (nonatomic, readonly, copy) NSError *lastResourceLoadingError;
@property (nonatomic, readonly) NSString *libraryLyrics;
@property (nonatomic) long long likedState;
@property (getter=isLikedStateEnabled, nonatomic, readonly) bool likedStateEnabled;
@property (nonatomic) bool limitReadAhead;
@property (nonatomic, readonly) NSString *localizedPositionInPlaylistString;
@property (nonatomic) float loudnessInfoVolumeNormalization;
@property (nonatomic, readonly) NSString *lyrics;
@property (nonatomic, readonly) NSString *mainTitle;
@property (nonatomic, readonly, retain) MPMediaItem *mediaItem;
@property (nonatomic, readonly) unsigned long long mediaType;
@property (nonatomic, readonly) MPModelGenericObject *modelGenericObject;
@property (nonatomic, readonly) MPModelPlayEvent *modelPlayEvent;
@property (nonatomic, readonly) long long mpcReporting_equivalencySourceAdamID;
@property (nonatomic, readonly) <MPCReportingIdentityPropertiesLoading> *mpcReporting_identityPropertiesLoader;
@property (nonatomic, readonly) bool mpcReporting_isValidReportingItem;
@property (nonatomic, readonly) unsigned long long mpcReporting_itemType;
@property (nonatomic, readonly, copy) NSData *mpcReporting_jingleTimedMetadata;
@property (nonatomic, readonly, copy) NSNumber *mpcReporting_privateListeningEnabled;
@property (nonatomic, readonly, copy) NSString *mpcReporting_requestingBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *mpcReporting_requestingBundleVersion;
@property (nonatomic, readonly) bool mpcReporting_shouldReportPlayEventsToStore;
@property (nonatomic, readonly) bool mpcReporting_shouldUseRelativeTimePositions;
@property (nonatomic, readonly, copy) NSNumber *mpcReporting_siriInitiated;
@property (nonatomic, readonly, copy) NSData *mpcReporting_trackInfo;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } naturalSize;
@property (nonatomic, readonly) unsigned long long persistentID;
@property (nonatomic, readonly) double playableDuration;
@property (nonatomic, readonly) double playableDurationIfAvailable;
@property (nonatomic, readonly, copy) NSError *playbackError;
@property (nonatomic, readonly, copy) NSDictionary *playbackInfo;
@property (nonatomic, readonly) long long playbackMode;
@property (nonatomic) MPAVController *player;
@property (nonatomic, copy) NSString *playerIdentifier;
@property (nonatomic, retain) AVPlayerItem *playerItem;
@property (nonatomic, retain) <MPAVItemPlaylistIdentifier> *playlistIdentifier;
@property (nonatomic, readonly) NSURL *podcastURL;
@property (nonatomic, readonly) bool prefersSeekOverSkip;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } presentationSize;
@property (nonatomic, retain) <MPAVItemQueueIdentifier> *queueIdentifier;
@property (getter=isRadioItem, nonatomic, readonly) bool radioItem;
@property (nonatomic, readonly) bool requiresLoadedAssetForAirPlayProperties;
@property (nonatomic, readonly) bool shouldPreventPlayback;
@property (nonatomic, readonly) bool shouldShowComposer;
@property (nonatomic) float soundCheckVolumeNormalization;
@property (getter=isStartItem, nonatomic) bool startItem;
@property (nonatomic, readonly) bool stationAllowsItemLiking;
@property (nonatomic, readonly, copy) NSString *stationHash;
@property (nonatomic, readonly) long long stationID;
@property (nonatomic, readonly, copy) NSString *stationName;
@property (nonatomic, readonly, copy) NSString *stationStringID;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) MPStoreDownload *storeDownload;
@property (nonatomic, readonly, copy) NSString *storeFrontIdentifier;
@property (nonatomic, readonly) NSString *storeItemID;
@property (nonatomic, readonly) long long storeItemInt64ID;
@property (nonatomic, readonly) long long storePlaybackEndpointType;
@property (nonatomic, readonly) long long storeSubscriptionAdamID;
@property (getter=isStreamable, nonatomic, readonly) bool streamable;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsLikedState;
@property (nonatomic, readonly) bool supportsRadioTrackActions;
@property (nonatomic, readonly) bool supportsRating;
@property (nonatomic, readonly) bool supportsRewindAndFastForward15Seconds;
@property (nonatomic, readonly) bool supportsSettingCurrentTime;
@property (nonatomic, readonly) bool supportsSkip;
@property (nonatomic, readonly) bool supportsSkipToPreviousItem;
@property (nonatomic, readonly) double timeOfSeekableEnd;
@property (nonatomic, readonly) double timeOfSeekableStart;
@property (nonatomic, readonly) struct OpaqueCMTimebase { }*timebase;
@property (nonatomic, readonly) NSArray *timedMetadataIfAvailable;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, retain) NSArray *urlTimeMarkers;
@property (nonatomic, readonly) bool useEmbeddedChapterData;
@property (nonatomic) bool userAdvancedDuringPlayback;
@property (nonatomic) bool userChangedItemsDuringPlayback;
@property (nonatomic, readonly) float userRating;
@property (nonatomic) bool userSkippedPlayback;
@property (nonatomic, readonly) bool usesSubscriptionLease;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)URLFromPath:(id)arg1;
+ (void)applyVolumeNormalizationForQueuedItems:(id)arg1;
+ (long long)defaultScaleMode;
+ (bool)isPlaceholder;
+ (void)setDefaultScaleMode:(long long)arg1;

- (void).cxx_destruct;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_captionAppearanceSettingsChanged;
- (void)_checkAllowsBlockingDurationCall;
- (void)_clearAsset;
- (id)_currentContentItemDeviceSpecificUserInfo;
- (float)_currentPlaybackRate;
- (void)_currentPlaybackRateDidChange:(float)arg1;
- (double)_durationFromExternalMetadataIfAvailable;
- (double)_durationInSeconds;
- (long long)_expectedPlaybackMode;
- (double)_expectedStartTimeWithPlaybackInfo:(id)arg1;
- (double)_expectedStopTimeWithPlaybackInfo:(id)arg1;
- (void)_handleUpdatedLikedState:(long long)arg1 completion:(id /* block */)arg2;
- (id)_imageChapterTrackIDsForAsset:(id)arg1;
- (id)_initialPlaybackStartTimeForPlaybackInfo:(id)arg1;
- (void)_internalLikedStateDidChangeNotification:(id)arg1;
- (bool)_isBackgroundPlaybackRestricted;
- (void)_itemAttributeAvailableKey:(id)arg1;
- (void)_likedStateDidChange;
- (void)_loadAssetAndPlayerItem;
- (void)_loadAssetProperties;
- (void)_loadAvailableMediaCharacteristicsIfNeeded;
- (void)_loadMediaItemWithCompletionHandler:(id /* block */)arg1;
- (void)_loadTimeMarkersAsync;
- (void)_loadTimeMarkersBlocking;
- (void)_performContentItemUpdate:(id /* block */)arg1;
- (long long)_persistedLikedState;
- (double)_playableDurationForLoadedTimeRanges:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_playerItemDurationIfAvailable;
- (void)_playerItemNewAccessLogEntryNotification:(id)arg1;
- (void)_realoadEmbeddedTimeMarkers;
- (void)_releaseAllTimeMarkers;
- (id)_seekableTimeRanges;
- (void)_setCurrentPlaybackRate:(float)arg1;
- (void)_setListeningForCaptionsAppearanceSettingsChanged:(bool)arg1;
- (void)_setNeedsPersistedLikedStateUpdate;
- (bool)_shouldPublishArtworkURL;
- (id)_timeMarkerFromMarkers:(id)arg1 forTime:(double)arg2;
- (void)_updateDurationSnapshotWithElapsedTime:(double)arg1 playbackRate:(float)arg2;
- (void)_updateHasFinishedDownloading;
- (void)_updateSoundCheckVolumeNormalizationForPlayerItem;
- (void)_willBecomeActivePlayerItem;
- (void)_willResignActivePlayerItem;
- (id)accessLog;
- (id)aggregateDictionaryItemIdentifier;
- (id)album;
- (id)albumArtist;
- (unsigned long long)albumArtistPersistentID;
- (unsigned long long)albumPersistentID;
- (long long)albumStoreID;
- (unsigned long long)albumTrackCount;
- (unsigned long long)albumTrackNumber;
- (bool)allowsAirPlayFromCloud;
- (bool)allowsEQ;
- (bool)allowsExternalPlayback;
- (id)alternateTracks;
- (unsigned long long)alternatesCountForTypes:(unsigned long long)arg1;
- (void)applyVolumeNormalizationWithSoundCheckEnabled:(bool)arg1;
- (id)artist;
- (unsigned long long)artistPersistentID;
- (long long)artistStoreID;
- (id /* block */)artworkCatalogBlock;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (id)artworkTimeMarkerForTime:(double)arg1;
- (id)artworkTimeMarkers;
- (id)asset;
- (id /* block */)blockForDirectAVControllerNotificationReferencingItem:(id)arg1;
- (id)bookmarkTime;
- (id)buyOffers;
- (bool)canReusePlayerItem;
- (bool)canSeedGenius;
- (bool)canUseLoadedAsset;
- (id)chapterTimeMarkerForTime:(double)arg1;
- (id)chapterTimeMarkers;
- (id)closedCaptionTimeMarkerForTime:(double)arg1;
- (id)closedCaptionTimeMarkers;
- (id)cloudAlbumID;
- (unsigned long long)cloudID;
- (id)cloudUniversalLibraryID;
- (id)composer;
- (unsigned long long)composerPersistentID;
- (id)contentItem;
- (id)contentItemID;
- (id)copyrightText;
- (double)currentTimeDisplayOverride;
- (long long)customAVEQPreset;
- (void)dealloc;
- (float)defaultPlaybackRate;
- (bool)didAttemptToLoadAsset;
- (bool)didDeferLeaseStart;
- (unsigned long long)discCount;
- (unsigned long long)discNumber;
- (id)displayableText;
- (bool)displayableTextLoaded;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (double)durationFromExternalMetadata;
- (double)durationIfAvailable;
- (double)durationInSeconds;
- (bool)durationIsValid;
- (id)externalContentIdentifier;
- (id)feedUniqueIdentifier;
- (id)feeder;
- (void)flushNowPlayingCaches;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })forwardPlaybackEndTime;
- (id)genre;
- (unsigned long long)genrePersistentID;
- (bool)hasAlternatesForTypes:(unsigned long long)arg1;
- (bool)hasDataForItemArtwork;
- (bool)hasDisplayableText;
- (bool)hasExternalDisplay;
- (bool)hasFinishedDownloading;
- (bool)hasPerformedErrorResolution;
- (bool)hasPlayedThisSession;
- (bool)hasProtectedContent;
- (bool)hasStoreLyrics;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (id)initWithPlayerItem:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)initialPlaybackStartTime;
- (void)invalidateContentItemDeviceSpecificUserInfo;
- (bool)isActiveItem;
- (bool)isAd;
- (bool)isAlwaysLive;
- (bool)isAssetLoaded;
- (bool)isAssetLoaded;
- (bool)isAssetURLValid;
- (bool)isCloudItem;
- (bool)isExplicitTrack;
- (bool)isInWishList;
- (bool)isLikedStateEnabled;
- (bool)isRadioItem;
- (bool)isStartItem;
- (bool)isStreamable;
- (bool)isStreamingLowQualityAsset;
- (bool)isSupportedDefaultPlaybackSpeed:(long long)arg1;
- (bool)isValidPlayerSubstituteForItem:(id)arg1;
- (id)itemError;
- (id)lastResourceLoadingError;
- (id)libraryLyrics;
- (long long)likedState;
- (bool)limitReadAhead;
- (void)loadAssetAndPlayerItem;
- (id)localeForAssetTrack:(id)arg1;
- (id)localizedPositionInPlaylistString;
- (float)loudnessInfoVolumeNormalization;
- (id)lyrics;
- (id)mainTitle;
- (id)mediaItem;
- (unsigned long long)mediaType;
- (id)modelGenericObject;
- (id)modelPlayEvent;
- (struct CGSize { double x1; double x2; })naturalSize;
- (void)notePlaybackFinishedByHittingEnd;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)path;
- (unsigned long long)persistentID;
- (double)playableDuration;
- (double)playableDurationIfAvailable;
- (id)playbackError;
- (id)playbackInfo;
- (long long)playbackMode;
- (float)playbackRateForLevel:(unsigned long long)arg1 direction:(long long)arg2 paused:(bool)arg3;
- (id)player;
- (id)playerIdentifier;
- (id)playerItem;
- (id)playlistIdentifier;
- (id)podcastURL;
- (bool)prefersSeekOverSkip;
- (void)prepareForRate:(float)arg1 completionHandler:(id /* block */)arg2;
- (struct CGSize { double x1; double x2; })presentationSize;
- (id)queueIdentifier;
- (void)reevaluateHasProtectedContent;
- (void)reevaluatePlaybackMode;
- (void)reevaluateType;
- (void)replacePlayerItemWithPlayerItem:(id)arg1;
- (bool)requiresLoadedAssetForAirPlayProperties;
- (void)resetBookkeeping;
- (void)resolvePlaybackError:(id)arg1 withCompletion:(id /* block */)arg2;
- (float)scanIntervalForLevel:(unsigned long long)arg1 paused:(bool)arg2;
- (void)setActiveItem:(bool)arg1;
- (void)setAlternateAudioTrackID:(int)arg1;
- (void)setAlternateAudioTrackLocale:(id)arg1;
- (void)setArtworkTimeMarkers:(id)arg1;
- (void)setChapterTimeMarkers:(id)arg1;
- (void)setClosedCaptionTimeMarkers:(id)arg1;
- (void)setContentItemID:(id)arg1;
- (void)setDefaultPlaybackRate:(float)arg1;
- (void)setExternalDisplay:(bool)arg1;
- (void)setFeedUniqueIdentifier:(id)arg1;
- (void)setFeeder:(id)arg1;
- (void)setForwardPlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setHasPerformedErrorResolution:(bool)arg1;
- (void)setHasPlayedThisSession:(bool)arg1;
- (void)setInWishList:(bool)arg1;
- (void)setIsAssetLoaded:(bool)arg1;
- (void)setItemError:(id)arg1;
- (void)setLikedState:(long long)arg1;
- (void)setLimitReadAhead:(bool)arg1;
- (void)setLoudnessInfoVolumeNormalization:(float)arg1;
- (void)setOverrideDuration:(double)arg1;
- (void)setPlaybackCheckpointCurrentTime:(double)arg1;
- (void)setPlaybackFinishedTime:(double)arg1;
- (void)setPlaybackStoppedTime:(double)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerIdentifier:(id)arg1;
- (void)setPlayerItem:(id)arg1;
- (void)setPlaylistIdentifier:(id)arg1;
- (void)setQueueIdentifier:(id)arg1;
- (void)setRating:(float)arg1;
- (void)setSelectedAlternateTextTrack:(id)arg1;
- (void)setSoundCheckVolumeNormalization:(float)arg1;
- (void)setStartItem:(bool)arg1;
- (void)setSubtitleTrackID:(int)arg1;
- (void)setUrlTimeMarkers:(id)arg1;
- (void)setUserAdvancedDuringPlayback:(bool)arg1;
- (void)setUserChangedItemsDuringPlayback:(bool)arg1;
- (void)setUserSkippedPlayback:(bool)arg1;
- (void)setupEQPresetWithDefaultPreset:(long long)arg1;
- (void)setupPlaybackInfo;
- (bool)shouldPreventPlayback;
- (bool)shouldShowComposer;
- (float)soundCheckVolumeNormalization;
- (bool)stationAllowsItemLiking;
- (id)stationHash;
- (long long)stationID;
- (id)stationName;
- (id)stationStringID;
- (long long)status;
- (id)storeDownload;
- (id)storeFrontIdentifier;
- (id)storeItemID;
- (long long)storeItemInt64ID;
- (long long)storePlaybackEndpointType;
- (long long)storeSubscriptionAdamID;
- (int)subtitleTrackID;
- (bool)supportsLikedState;
- (bool)supportsRadioTrackActions;
- (bool)supportsRating;
- (bool)supportsRewindAndFastForward15Seconds;
- (bool)supportsSettingCurrentTime;
- (bool)supportsSkip;
- (bool)supportsSkipToPreviousItem;
- (double)timeOfSeekableEnd;
- (double)timeOfSeekableStart;
- (struct OpaqueCMTimebase { }*)timebase;
- (id)timedMetadataIfAvailable;
- (long long)type;
- (id)uniqueIdentifier;
- (id)url;
- (id)urlTimeMarkerForTime:(double)arg1;
- (id)urlTimeMarkers;
- (bool)useEmbeddedChapterData;
- (bool)userAdvancedDuringPlayback;
- (bool)userChangedItemsDuringPlayback;
- (float)userRating;
- (bool)userSkippedPlayback;
- (bool)usesSubscriptionLease;

// Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI

+ (id /* block */)_music_entityValueHandlerForProperty:(id)arg1;
+ (void)_registerCustomEntityValueHandlers;
+ (void)_registerEntityValueHandler:(id /* block */)arg1 forProperty:(id)arg2;

- (id)entityUniqueIdentifier;
- (id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2 destinationScale:(double)arg3;
- (id)valueForEntityProperty:(id)arg1;
- (id)valuesForEntityProperties:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (id)MPU_contentItemIdentifierCollection;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (id)MPC_contentItemIdentifierCollection;
- (long long)mpcReporting_equivalencySourceAdamID;
- (id)mpcReporting_identityPropertiesLoader;
- (bool)mpcReporting_isValidReportingItem;
- (unsigned long long)mpcReporting_itemType;
- (id)mpcReporting_jingleTimedMetadata;
- (id)mpcReporting_privateListeningEnabled;
- (id)mpcReporting_requestingBundleIdentifier;
- (id)mpcReporting_requestingBundleVersion;
- (bool)mpcReporting_shouldReportPlayEventsToStore;
- (bool)mpcReporting_shouldUseRelativeTimePositions;
- (id)mpcReporting_siriInitiated;
- (id)mpcReporting_trackInfo;

@end
