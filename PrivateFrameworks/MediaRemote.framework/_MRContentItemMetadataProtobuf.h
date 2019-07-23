/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRContentItemMetadataProtobuf : PBCodable <NSCopying> {
    NSString * _albumArtistName;
    NSString * _albumName;
    NSData * _appMetricsData;
    bool  _artworkAvailable;
    int  _artworkDataHeightDeprecated;
    int  _artworkDataWidthDeprecated;
    NSString * _artworkIdentifier;
    NSString * _artworkMIMEType;
    NSString * _artworkURL;
    NSData * _artworkURLTemplatesData;
    NSString * _assetURLString;
    NSString * _brandIdentifier;
    int  _chapterCount;
    NSString * _collectionIdentifier;
    NSData * _collectionInfoData;
    NSString * _composer;
    NSString * _contentIdentifier;
    NSData * _currentPlaybackDateData;
    float  _defaultPlaybackRate;
    NSData * _deviceSpecificUserInfoData;
    NSString * _directorName;
    int  _discNumber;
    float  _downloadProgress;
    int  _downloadState;
    double  _duration;
    int  _editingStyleFlags;
    double  _elapsedTime;
    double  _elapsedTimeTimestamp;
    int  _episodeNumber;
    int  _episodeType;
    NSString * _genre;
    struct { 
        unsigned int duration : 1; 
        unsigned int elapsedTime : 1; 
        unsigned int elapsedTimeTimestamp : 1; 
        unsigned int iTunesStoreAlbumIdentifier : 1; 
        unsigned int iTunesStoreArtistIdentifier : 1; 
        unsigned int iTunesStoreIdentifier : 1; 
        unsigned int iTunesStoreSubscriptionIdentifier : 1; 
        unsigned int inferredTimestamp : 1; 
        unsigned int legacyUniqueIdentifier : 1; 
        unsigned int radioStationIdentifier : 1; 
        unsigned int releaseDate : 1; 
        unsigned int startTime : 1; 
        unsigned int artworkDataHeightDeprecated : 1; 
        unsigned int artworkDataWidthDeprecated : 1; 
        unsigned int chapterCount : 1; 
        unsigned int defaultPlaybackRate : 1; 
        unsigned int discNumber : 1; 
        unsigned int downloadProgress : 1; 
        unsigned int downloadState : 1; 
        unsigned int editingStyleFlags : 1; 
        unsigned int episodeNumber : 1; 
        unsigned int episodeType : 1; 
        unsigned int mediaSubType : 1; 
        unsigned int mediaType : 1; 
        unsigned int numberOfSections : 1; 
        unsigned int playCount : 1; 
        unsigned int playbackProgress : 1; 
        unsigned int playbackRate : 1; 
        unsigned int playlistType : 1; 
        unsigned int radioStationType : 1; 
        unsigned int seasonNumber : 1; 
        unsigned int totalDiscCount : 1; 
        unsigned int totalTrackCount : 1; 
        unsigned int trackNumber : 1; 
        unsigned int artworkAvailable : 1; 
        unsigned int infoAvailable : 1; 
        unsigned int isAlwaysLive : 1; 
        unsigned int isContainer : 1; 
        unsigned int isCurrentlyPlaying : 1; 
        unsigned int isExplicitItem : 1; 
        unsigned int isInWishList : 1; 
        unsigned int isLiked : 1; 
        unsigned int isLoading : 1; 
        unsigned int isPlayable : 1; 
        unsigned int isSharable : 1; 
        unsigned int isSteerable : 1; 
        unsigned int isStreamingContent : 1; 
        unsigned int languageOptionsAvailable : 1; 
        unsigned int lyricsAvailable : 1; 
    }  _has;
    long long  _iTunesStoreAlbumIdentifier;
    long long  _iTunesStoreArtistIdentifier;
    long long  _iTunesStoreIdentifier;
    long long  _iTunesStoreSubscriptionIdentifier;
    double  _inferredTimestamp;
    bool  _infoAvailable;
    bool  _isAlwaysLive;
    bool  _isContainer;
    bool  _isCurrentlyPlaying;
    bool  _isExplicitItem;
    bool  _isInWishList;
    bool  _isLiked;
    bool  _isLoading;
    bool  _isPlayable;
    bool  _isSharable;
    bool  _isSteerable;
    bool  _isStreamingContent;
    bool  _languageOptionsAvailable;
    long long  _legacyUniqueIdentifier;
    NSString * _localizedContentRating;
    bool  _lyricsAvailable;
    NSString * _lyricsURL;
    int  _mediaSubType;
    int  _mediaType;
    NSData * _nowPlayingInfoData;
    int  _numberOfSections;
    int  _playCount;
    float  _playbackProgress;
    float  _playbackRate;
    int  _playlistType;
    NSString * _profileIdentifier;
    NSData * _purchaseInfoData;
    long long  _radioStationIdentifier;
    NSString * _radioStationName;
    NSString * _radioStationString;
    int  _radioStationType;
    double  _releaseDate;
    int  _seasonNumber;
    NSString * _seriesName;
    NSString * _serviceIdentifier;
    double  _startTime;
    NSString * _subtitle;
    NSString * _title;
    int  _totalDiscCount;
    int  _totalTrackCount;
    NSString * _trackArtistName;
    int  _trackNumber;
    NSData * _userInfoData;
}

@property (nonatomic, retain) NSString *albumArtistName;
@property (nonatomic, retain) NSString *albumName;
@property (nonatomic, retain) NSData *appMetricsData;
@property (nonatomic) bool artworkAvailable;
@property (nonatomic) int artworkDataHeightDeprecated;
@property (nonatomic) int artworkDataWidthDeprecated;
@property (nonatomic, retain) NSString *artworkIdentifier;
@property (nonatomic, retain) NSString *artworkMIMEType;
@property (nonatomic, retain) NSString *artworkURL;
@property (nonatomic, retain) NSData *artworkURLTemplatesData;
@property (nonatomic, retain) NSString *assetURLString;
@property (nonatomic, retain) NSString *brandIdentifier;
@property (nonatomic) int chapterCount;
@property (nonatomic, retain) NSString *collectionIdentifier;
@property (nonatomic, retain) NSData *collectionInfoData;
@property (nonatomic, retain) NSString *composer;
@property (nonatomic, retain) NSString *contentIdentifier;
@property (nonatomic, retain) NSData *currentPlaybackDateData;
@property (nonatomic) float defaultPlaybackRate;
@property (nonatomic, retain) NSData *deviceSpecificUserInfoData;
@property (nonatomic, retain) NSString *directorName;
@property (nonatomic) int discNumber;
@property (nonatomic) float downloadProgress;
@property (nonatomic) int downloadState;
@property (nonatomic) double duration;
@property (nonatomic) int editingStyleFlags;
@property (nonatomic) double elapsedTime;
@property (nonatomic) double elapsedTimeTimestamp;
@property (nonatomic) int episodeNumber;
@property (nonatomic) int episodeType;
@property (nonatomic, retain) NSString *genre;
@property (nonatomic, readonly) bool hasAlbumArtistName;
@property (nonatomic, readonly) bool hasAlbumName;
@property (nonatomic, readonly) bool hasAppMetricsData;
@property (nonatomic) bool hasArtworkAvailable;
@property (nonatomic) bool hasArtworkDataHeightDeprecated;
@property (nonatomic) bool hasArtworkDataWidthDeprecated;
@property (nonatomic, readonly) bool hasArtworkIdentifier;
@property (nonatomic, readonly) bool hasArtworkMIMEType;
@property (nonatomic, readonly) bool hasArtworkURL;
@property (nonatomic, readonly) bool hasArtworkURLTemplatesData;
@property (nonatomic, readonly) bool hasAssetURLString;
@property (nonatomic, readonly) bool hasBrandIdentifier;
@property (nonatomic) bool hasChapterCount;
@property (nonatomic, readonly) bool hasCollectionIdentifier;
@property (nonatomic, readonly) bool hasCollectionInfoData;
@property (nonatomic, readonly) bool hasComposer;
@property (nonatomic, readonly) bool hasContentIdentifier;
@property (nonatomic, readonly) bool hasCurrentPlaybackDateData;
@property (nonatomic) bool hasDefaultPlaybackRate;
@property (nonatomic, readonly) bool hasDeviceSpecificUserInfoData;
@property (nonatomic, readonly) bool hasDirectorName;
@property (nonatomic) bool hasDiscNumber;
@property (nonatomic) bool hasDownloadProgress;
@property (nonatomic) bool hasDownloadState;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasEditingStyleFlags;
@property (nonatomic) bool hasElapsedTime;
@property (nonatomic) bool hasElapsedTimeTimestamp;
@property (nonatomic) bool hasEpisodeNumber;
@property (nonatomic) bool hasEpisodeType;
@property (nonatomic, readonly) bool hasGenre;
@property (nonatomic) bool hasITunesStoreAlbumIdentifier;
@property (nonatomic) bool hasITunesStoreArtistIdentifier;
@property (nonatomic) bool hasITunesStoreIdentifier;
@property (nonatomic) bool hasITunesStoreSubscriptionIdentifier;
@property (nonatomic) bool hasInferredTimestamp;
@property (nonatomic) bool hasInfoAvailable;
@property (nonatomic) bool hasIsAlwaysLive;
@property (nonatomic) bool hasIsContainer;
@property (nonatomic) bool hasIsCurrentlyPlaying;
@property (nonatomic) bool hasIsExplicitItem;
@property (nonatomic) bool hasIsInWishList;
@property (nonatomic) bool hasIsLiked;
@property (nonatomic) bool hasIsLoading;
@property (nonatomic) bool hasIsPlayable;
@property (nonatomic) bool hasIsSharable;
@property (nonatomic) bool hasIsSteerable;
@property (nonatomic) bool hasIsStreamingContent;
@property (nonatomic) bool hasLanguageOptionsAvailable;
@property (nonatomic) bool hasLegacyUniqueIdentifier;
@property (nonatomic, readonly) bool hasLocalizedContentRating;
@property (nonatomic) bool hasLyricsAvailable;
@property (nonatomic, readonly) bool hasLyricsURL;
@property (nonatomic) bool hasMediaSubType;
@property (nonatomic) bool hasMediaType;
@property (nonatomic, readonly) bool hasNowPlayingInfoData;
@property (nonatomic) bool hasNumberOfSections;
@property (nonatomic) bool hasPlayCount;
@property (nonatomic) bool hasPlaybackProgress;
@property (nonatomic) bool hasPlaybackRate;
@property (nonatomic) bool hasPlaylistType;
@property (nonatomic, readonly) bool hasProfileIdentifier;
@property (nonatomic, readonly) bool hasPurchaseInfoData;
@property (nonatomic) bool hasRadioStationIdentifier;
@property (nonatomic, readonly) bool hasRadioStationName;
@property (nonatomic, readonly) bool hasRadioStationString;
@property (nonatomic) bool hasRadioStationType;
@property (nonatomic) bool hasReleaseDate;
@property (nonatomic) bool hasSeasonNumber;
@property (nonatomic, readonly) bool hasSeriesName;
@property (nonatomic, readonly) bool hasServiceIdentifier;
@property (nonatomic) bool hasStartTime;
@property (nonatomic, readonly) bool hasSubtitle;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic) bool hasTotalDiscCount;
@property (nonatomic) bool hasTotalTrackCount;
@property (nonatomic, readonly) bool hasTrackArtistName;
@property (nonatomic) bool hasTrackNumber;
@property (nonatomic, readonly) bool hasUserInfoData;
@property (nonatomic) long long iTunesStoreAlbumIdentifier;
@property (nonatomic) long long iTunesStoreArtistIdentifier;
@property (nonatomic) long long iTunesStoreIdentifier;
@property (nonatomic) long long iTunesStoreSubscriptionIdentifier;
@property (nonatomic) double inferredTimestamp;
@property (nonatomic) bool infoAvailable;
@property (nonatomic) bool isAlwaysLive;
@property (nonatomic) bool isContainer;
@property (nonatomic) bool isCurrentlyPlaying;
@property (nonatomic) bool isExplicitItem;
@property (nonatomic) bool isInWishList;
@property (nonatomic) bool isLiked;
@property (nonatomic) bool isLoading;
@property (nonatomic) bool isPlayable;
@property (nonatomic) bool isSharable;
@property (nonatomic) bool isSteerable;
@property (nonatomic) bool isStreamingContent;
@property (nonatomic) bool languageOptionsAvailable;
@property (nonatomic) long long legacyUniqueIdentifier;
@property (nonatomic, retain) NSString *localizedContentRating;
@property (nonatomic) bool lyricsAvailable;
@property (nonatomic, retain) NSString *lyricsURL;
@property (nonatomic) int mediaSubType;
@property (nonatomic) int mediaType;
@property (nonatomic, retain) NSData *nowPlayingInfoData;
@property (nonatomic) int numberOfSections;
@property (nonatomic) int playCount;
@property (nonatomic) float playbackProgress;
@property (nonatomic) float playbackRate;
@property (nonatomic) int playlistType;
@property (nonatomic, retain) NSString *profileIdentifier;
@property (nonatomic, retain) NSData *purchaseInfoData;
@property (nonatomic) long long radioStationIdentifier;
@property (nonatomic, retain) NSString *radioStationName;
@property (nonatomic, retain) NSString *radioStationString;
@property (nonatomic) int radioStationType;
@property (nonatomic) double releaseDate;
@property (nonatomic) int seasonNumber;
@property (nonatomic, retain) NSString *seriesName;
@property (nonatomic, retain) NSString *serviceIdentifier;
@property (nonatomic) double startTime;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) int totalDiscCount;
@property (nonatomic) int totalTrackCount;
@property (nonatomic, retain) NSString *trackArtistName;
@property (nonatomic) int trackNumber;
@property (nonatomic, retain) NSData *userInfoData;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_init;
- (id)_initWithData:(id)arg1;
- (id)albumArtistName;
- (id)albumName;
- (id)appMetricsData;
- (bool)artworkAvailable;
- (int)artworkDataHeightDeprecated;
- (int)artworkDataWidthDeprecated;
- (id)artworkIdentifier;
- (id)artworkMIMEType;
- (id)artworkURL;
- (id)artworkURLTemplatesData;
- (id)assetURLString;
- (id)brandIdentifier;
- (int)chapterCount;
- (id)collectionIdentifier;
- (id)collectionInfoData;
- (id)composer;
- (id)contentIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentPlaybackDateData;
- (float)defaultPlaybackRate;
- (id)description;
- (id)deviceSpecificUserInfoData;
- (id)dictionaryRepresentation;
- (id)directorName;
- (int)discNumber;
- (float)downloadProgress;
- (int)downloadState;
- (double)duration;
- (int)editingStyleFlags;
- (double)elapsedTime;
- (double)elapsedTimeTimestamp;
- (int)episodeNumber;
- (int)episodeType;
- (id)genre;
- (bool)hasAlbumArtistName;
- (bool)hasAlbumName;
- (bool)hasAppMetricsData;
- (bool)hasArtworkAvailable;
- (bool)hasArtworkDataHeightDeprecated;
- (bool)hasArtworkDataWidthDeprecated;
- (bool)hasArtworkIdentifier;
- (bool)hasArtworkMIMEType;
- (bool)hasArtworkURL;
- (bool)hasArtworkURLTemplatesData;
- (bool)hasAssetURLString;
- (bool)hasBrandIdentifier;
- (bool)hasChapterCount;
- (bool)hasCollectionIdentifier;
- (bool)hasCollectionInfoData;
- (bool)hasComposer;
- (bool)hasContentIdentifier;
- (bool)hasCurrentPlaybackDateData;
- (bool)hasDefaultPlaybackRate;
- (bool)hasDeviceSpecificUserInfoData;
- (bool)hasDirectorName;
- (bool)hasDiscNumber;
- (bool)hasDownloadProgress;
- (bool)hasDownloadState;
- (bool)hasDuration;
- (bool)hasEditingStyleFlags;
- (bool)hasElapsedTime;
- (bool)hasElapsedTimeTimestamp;
- (bool)hasEpisodeNumber;
- (bool)hasEpisodeType;
- (bool)hasGenre;
- (bool)hasITunesStoreAlbumIdentifier;
- (bool)hasITunesStoreArtistIdentifier;
- (bool)hasITunesStoreIdentifier;
- (bool)hasITunesStoreSubscriptionIdentifier;
- (bool)hasInferredTimestamp;
- (bool)hasInfoAvailable;
- (bool)hasIsAlwaysLive;
- (bool)hasIsContainer;
- (bool)hasIsCurrentlyPlaying;
- (bool)hasIsExplicitItem;
- (bool)hasIsInWishList;
- (bool)hasIsLiked;
- (bool)hasIsLoading;
- (bool)hasIsPlayable;
- (bool)hasIsSharable;
- (bool)hasIsSteerable;
- (bool)hasIsStreamingContent;
- (bool)hasLanguageOptionsAvailable;
- (bool)hasLegacyUniqueIdentifier;
- (bool)hasLocalizedContentRating;
- (bool)hasLyricsAvailable;
- (bool)hasLyricsURL;
- (bool)hasMediaSubType;
- (bool)hasMediaType;
- (bool)hasNowPlayingInfoData;
- (bool)hasNumberOfSections;
- (bool)hasPlayCount;
- (bool)hasPlaybackProgress;
- (bool)hasPlaybackRate;
- (bool)hasPlaylistType;
- (bool)hasProfileIdentifier;
- (bool)hasPurchaseInfoData;
- (bool)hasRadioStationIdentifier;
- (bool)hasRadioStationName;
- (bool)hasRadioStationString;
- (bool)hasRadioStationType;
- (bool)hasReleaseDate;
- (bool)hasSeasonNumber;
- (bool)hasSeriesName;
- (bool)hasServiceIdentifier;
- (bool)hasStartTime;
- (bool)hasSubtitle;
- (bool)hasTitle;
- (bool)hasTotalDiscCount;
- (bool)hasTotalTrackCount;
- (bool)hasTrackArtistName;
- (bool)hasTrackNumber;
- (bool)hasUserInfoData;
- (unsigned long long)hash;
- (long long)iTunesStoreAlbumIdentifier;
- (long long)iTunesStoreArtistIdentifier;
- (long long)iTunesStoreIdentifier;
- (long long)iTunesStoreSubscriptionIdentifier;
- (double)inferredTimestamp;
- (bool)infoAvailable;
- (bool)isAlwaysLive;
- (bool)isContainer;
- (bool)isCurrentlyPlaying;
- (bool)isEqual:(id)arg1;
- (bool)isExplicitItem;
- (bool)isInWishList;
- (bool)isLiked;
- (bool)isLoading;
- (bool)isPlayable;
- (bool)isSharable;
- (bool)isSteerable;
- (bool)isStreamingContent;
- (bool)languageOptionsAvailable;
- (long long)legacyUniqueIdentifier;
- (id)localizedContentRating;
- (bool)lyricsAvailable;
- (id)lyricsURL;
- (int)mediaSubType;
- (int)mediaType;
- (void)mergeFrom:(id)arg1;
- (id)nowPlayingInfoData;
- (int)numberOfSections;
- (int)playCount;
- (float)playbackProgress;
- (float)playbackRate;
- (int)playlistType;
- (id)profileIdentifier;
- (id)purchaseInfoData;
- (long long)radioStationIdentifier;
- (id)radioStationName;
- (id)radioStationString;
- (int)radioStationType;
- (bool)readFrom:(id)arg1;
- (double)releaseDate;
- (int)seasonNumber;
- (id)seriesName;
- (id)serviceIdentifier;
- (void)setAlbumArtistName:(id)arg1;
- (void)setAlbumName:(id)arg1;
- (void)setAppMetricsData:(id)arg1;
- (void)setArtworkAvailable:(bool)arg1;
- (void)setArtworkDataHeightDeprecated:(int)arg1;
- (void)setArtworkDataWidthDeprecated:(int)arg1;
- (void)setArtworkIdentifier:(id)arg1;
- (void)setArtworkMIMEType:(id)arg1;
- (void)setArtworkURL:(id)arg1;
- (void)setArtworkURLTemplatesData:(id)arg1;
- (void)setAssetURLString:(id)arg1;
- (void)setBrandIdentifier:(id)arg1;
- (void)setChapterCount:(int)arg1;
- (void)setCollectionIdentifier:(id)arg1;
- (void)setCollectionInfoData:(id)arg1;
- (void)setComposer:(id)arg1;
- (void)setContentIdentifier:(id)arg1;
- (void)setCurrentPlaybackDateData:(id)arg1;
- (void)setDefaultPlaybackRate:(float)arg1;
- (void)setDeviceSpecificUserInfoData:(id)arg1;
- (void)setDirectorName:(id)arg1;
- (void)setDiscNumber:(int)arg1;
- (void)setDownloadProgress:(float)arg1;
- (void)setDownloadState:(int)arg1;
- (void)setDuration:(double)arg1;
- (void)setEditingStyleFlags:(int)arg1;
- (void)setElapsedTime:(double)arg1;
- (void)setElapsedTimeTimestamp:(double)arg1;
- (void)setEpisodeNumber:(int)arg1;
- (void)setEpisodeType:(int)arg1;
- (void)setGenre:(id)arg1;
- (void)setHasArtworkAvailable:(bool)arg1;
- (void)setHasArtworkDataHeightDeprecated:(bool)arg1;
- (void)setHasArtworkDataWidthDeprecated:(bool)arg1;
- (void)setHasChapterCount:(bool)arg1;
- (void)setHasDefaultPlaybackRate:(bool)arg1;
- (void)setHasDiscNumber:(bool)arg1;
- (void)setHasDownloadProgress:(bool)arg1;
- (void)setHasDownloadState:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasEditingStyleFlags:(bool)arg1;
- (void)setHasElapsedTime:(bool)arg1;
- (void)setHasElapsedTimeTimestamp:(bool)arg1;
- (void)setHasEpisodeNumber:(bool)arg1;
- (void)setHasEpisodeType:(bool)arg1;
- (void)setHasITunesStoreAlbumIdentifier:(bool)arg1;
- (void)setHasITunesStoreArtistIdentifier:(bool)arg1;
- (void)setHasITunesStoreIdentifier:(bool)arg1;
- (void)setHasITunesStoreSubscriptionIdentifier:(bool)arg1;
- (void)setHasInferredTimestamp:(bool)arg1;
- (void)setHasInfoAvailable:(bool)arg1;
- (void)setHasIsAlwaysLive:(bool)arg1;
- (void)setHasIsContainer:(bool)arg1;
- (void)setHasIsCurrentlyPlaying:(bool)arg1;
- (void)setHasIsExplicitItem:(bool)arg1;
- (void)setHasIsInWishList:(bool)arg1;
- (void)setHasIsLiked:(bool)arg1;
- (void)setHasIsLoading:(bool)arg1;
- (void)setHasIsPlayable:(bool)arg1;
- (void)setHasIsSharable:(bool)arg1;
- (void)setHasIsSteerable:(bool)arg1;
- (void)setHasIsStreamingContent:(bool)arg1;
- (void)setHasLanguageOptionsAvailable:(bool)arg1;
- (void)setHasLegacyUniqueIdentifier:(bool)arg1;
- (void)setHasLyricsAvailable:(bool)arg1;
- (void)setHasMediaSubType:(bool)arg1;
- (void)setHasMediaType:(bool)arg1;
- (void)setHasNumberOfSections:(bool)arg1;
- (void)setHasPlayCount:(bool)arg1;
- (void)setHasPlaybackProgress:(bool)arg1;
- (void)setHasPlaybackRate:(bool)arg1;
- (void)setHasPlaylistType:(bool)arg1;
- (void)setHasRadioStationIdentifier:(bool)arg1;
- (void)setHasRadioStationType:(bool)arg1;
- (void)setHasReleaseDate:(bool)arg1;
- (void)setHasSeasonNumber:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (void)setHasTotalDiscCount:(bool)arg1;
- (void)setHasTotalTrackCount:(bool)arg1;
- (void)setHasTrackNumber:(bool)arg1;
- (void)setITunesStoreAlbumIdentifier:(long long)arg1;
- (void)setITunesStoreArtistIdentifier:(long long)arg1;
- (void)setITunesStoreIdentifier:(long long)arg1;
- (void)setITunesStoreSubscriptionIdentifier:(long long)arg1;
- (void)setInferredTimestamp:(double)arg1;
- (void)setInfoAvailable:(bool)arg1;
- (void)setIsAlwaysLive:(bool)arg1;
- (void)setIsContainer:(bool)arg1;
- (void)setIsCurrentlyPlaying:(bool)arg1;
- (void)setIsExplicitItem:(bool)arg1;
- (void)setIsInWishList:(bool)arg1;
- (void)setIsLiked:(bool)arg1;
- (void)setIsLoading:(bool)arg1;
- (void)setIsPlayable:(bool)arg1;
- (void)setIsSharable:(bool)arg1;
- (void)setIsSteerable:(bool)arg1;
- (void)setIsStreamingContent:(bool)arg1;
- (void)setLanguageOptionsAvailable:(bool)arg1;
- (void)setLegacyUniqueIdentifier:(long long)arg1;
- (void)setLocalizedContentRating:(id)arg1;
- (void)setLyricsAvailable:(bool)arg1;
- (void)setLyricsURL:(id)arg1;
- (void)setMediaSubType:(int)arg1;
- (void)setMediaType:(int)arg1;
- (void)setNowPlayingInfoData:(id)arg1;
- (void)setNumberOfSections:(int)arg1;
- (void)setPlayCount:(int)arg1;
- (void)setPlaybackProgress:(float)arg1;
- (void)setPlaybackRate:(float)arg1;
- (void)setPlaylistType:(int)arg1;
- (void)setProfileIdentifier:(id)arg1;
- (void)setPurchaseInfoData:(id)arg1;
- (void)setRadioStationIdentifier:(long long)arg1;
- (void)setRadioStationName:(id)arg1;
- (void)setRadioStationString:(id)arg1;
- (void)setRadioStationType:(int)arg1;
- (void)setReleaseDate:(double)arg1;
- (void)setSeasonNumber:(int)arg1;
- (void)setSeriesName:(id)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTotalDiscCount:(int)arg1;
- (void)setTotalTrackCount:(int)arg1;
- (void)setTrackArtistName:(id)arg1;
- (void)setTrackNumber:(int)arg1;
- (void)setUserInfoData:(id)arg1;
- (double)startTime;
- (id)subtitle;
- (id)title;
- (int)totalDiscCount;
- (int)totalTrackCount;
- (id)trackArtistName;
- (int)trackNumber;
- (id)userInfoData;
- (void)writeTo:(id)arg1;

@end
