/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelSong : MPModelObject {
    MPModelAlbum * _album;
    MPModelArtist * _artist;
    bool  _artistUploadedContent;
    id  _artworkCatalogBlock;
    long long  _beatsPerMinute;
    NSString * _classicalMovement;
    long long  _classicalMovementCount;
    long long  _classicalMovementNumber;
    NSString * _classicalWork;
    MPModelComposer * _composer;
    NSString * _copyrightText;
    long long  _discNumber;
    double  _duration;
    bool  _explicitSong;
    MPModelGenre * _genre;
    NSString * _grouping;
    bool  _hasCloudSyncSource;
    bool  _hasVideo;
    bool  _homeSharingAssetAvailable;
    long long  _keepLocalEnableState;
    long long  _keepLocalManagedStatus;
    bool  _libraryAddEligible;
    bool  _libraryAdded;
    MPModelFileAsset * _localFileAsset;
    NSURL * _localNetworkFileURL;
    MPModelLyrics * _lyrics;
    long long  _playbackEndpointType;
    NSString * _protectedContentSupportStorageFilePath;
    bool  _shouldRememberBookmarkTime;
    bool  _shouldReportPlayEventsToStore;
    bool  _shouldShowComposer;
    unsigned long long  _storeAccountIdentifier;
    NSString * _storeRedownloadParameters;
    bool  _storeRedownloadable;
    NSString * _title;
    long long  _trackNumber;
    float  _userRating;
    float  _volumeNormalization;
    long long  _year;
}

@property (nonatomic, retain) MPModelAlbum *album;
@property (nonatomic, retain) MPModelArtist *artist;
@property (getter=isArtistUploadedContent, nonatomic) bool artistUploadedContent;
@property (nonatomic, copy) id artworkCatalogBlock;
@property (nonatomic) long long beatsPerMinute;
@property (nonatomic, copy) NSString *classicalMovement;
@property (nonatomic) long long classicalMovementCount;
@property (nonatomic) long long classicalMovementNumber;
@property (nonatomic, copy) NSString *classicalWork;
@property (nonatomic, retain) MPModelComposer *composer;
@property (nonatomic, copy) NSString *copyrightText;
@property (nonatomic) long long discNumber;
@property (nonatomic) double duration;
@property (getter=isExplicitSong, nonatomic) bool explicitSong;
@property (nonatomic, retain) MPModelGenre *genre;
@property (nonatomic, copy) NSString *grouping;
@property (nonatomic) bool hasCloudSyncSource;
@property (nonatomic) bool hasVideo;
@property (getter=isHomeSharingAssetAvailable, nonatomic) bool homeSharingAssetAvailable;
@property (nonatomic) long long keepLocalEnableState;
@property (nonatomic) long long keepLocalManagedStatus;
@property (getter=isLibraryAddEligible, nonatomic) bool libraryAddEligible;
@property (getter=isLibraryAdded, nonatomic) bool libraryAdded;
@property (nonatomic, retain) MPModelFileAsset *localFileAsset;
@property (nonatomic, copy) NSURL *localNetworkFileURL;
@property (nonatomic, retain) MPModelLyrics *lyrics;
@property (nonatomic) long long playbackEndpointType;
@property (nonatomic, copy) NSString *protectedContentSupportStorageFilePath;
@property (nonatomic) bool shouldRememberBookmarkTime;
@property (nonatomic) bool shouldReportPlayEventsToStore;
@property (nonatomic) bool shouldShowComposer;
@property (nonatomic) unsigned long long storeAccountIdentifier;
@property (nonatomic, copy) NSString *storeRedownloadParameters;
@property (getter=isStoreRedownloadable, nonatomic) bool storeRedownloadable;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) long long trackNumber;
@property (nonatomic) float userRating;
@property (nonatomic) float volumeNormalization;
@property (nonatomic) long long year;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)__MPModelPropertySongArtistUploadedContent__PROPERTY;
+ (id)__MPModelPropertySongArtwork__PROPERTY;
+ (id)__MPModelPropertySongBeatsPerMinute__PROPERTY;
+ (id)__MPModelPropertySongClassicalMovementCount__PROPERTY;
+ (id)__MPModelPropertySongClassicalMovementNumber__PROPERTY;
+ (id)__MPModelPropertySongClassicalMovement__PROPERTY;
+ (id)__MPModelPropertySongClassicalWork__PROPERTY;
+ (id)__MPModelPropertySongCopyrightText__PROPERTY;
+ (id)__MPModelPropertySongDiscNumber__PROPERTY;
+ (id)__MPModelPropertySongDuration__PROPERTY;
+ (id)__MPModelPropertySongExplicit__PROPERTY;
+ (id)__MPModelPropertySongGrouping__PROPERTY;
+ (id)__MPModelPropertySongHasCloudSyncSource__PROPERTY;
+ (id)__MPModelPropertySongHasVideo__PROPERTY;
+ (id)__MPModelPropertySongHomeSharingAssetAvailable__PROPERTY;
+ (id)__MPModelPropertySongKeepLocalEnableState__PROPERTY;
+ (id)__MPModelPropertySongKeepLocalManagedStatus__PROPERTY;
+ (id)__MPModelPropertySongLibraryAddEligible__PROPERTY;
+ (id)__MPModelPropertySongLibraryAdded__PROPERTY;
+ (id)__MPModelPropertySongLocalNetworkFileURL__PROPERTY;
+ (id)__MPModelPropertySongPlaybackEndpointType__PROPERTY;
+ (id)__MPModelPropertySongProtectedContentSupportStorageFilePath__PROPERTY;
+ (id)__MPModelPropertySongShouldRememberBookmarkTime__PROPERTY;
+ (id)__MPModelPropertySongShouldReportPlayEventsToStore__PROPERTY;
+ (id)__MPModelPropertySongShouldShowComposer__PROPERTY;
+ (id)__MPModelPropertySongStoreAccountIdentifier__PROPERTY;
+ (id)__MPModelPropertySongStoreRedownloadParameters__PROPERTY;
+ (id)__MPModelPropertySongStoreRedownloadable__PROPERTY;
+ (id)__MPModelPropertySongTitle__PROPERTY;
+ (id)__MPModelPropertySongTrackNumber__PROPERTY;
+ (id)__MPModelPropertySongUserRating__PROPERTY;
+ (id)__MPModelPropertySongVolumeNormalization__PROPERTY;
+ (id)__MPModelPropertySongYear__PROPERTY;
+ (id)__MPModelRelationshipSongAlbum__PROPERTY;
+ (id)__MPModelRelationshipSongArtist__PROPERTY;
+ (id)__MPModelRelationshipSongComposer__PROPERTY;
+ (id)__MPModelRelationshipSongGenre__PROPERTY;
+ (id)__MPModelRelationshipSongLocalFileAsset__PROPERTY;
+ (id)__MPModelRelationshipSongLyrics__PROPERTY;
+ (id)__album__KEY;
+ (id)__artistUploadedContent__KEY;
+ (id)__artist__KEY;
+ (id)__artworkCatalogBlock__KEY;
+ (id)__beatsPerMinute__KEY;
+ (id)__classicalMovementCount__KEY;
+ (id)__classicalMovementNumber__KEY;
+ (id)__classicalMovement__KEY;
+ (id)__classicalWork__KEY;
+ (id)__composer__KEY;
+ (id)__copyrightText__KEY;
+ (id)__discNumber__KEY;
+ (id)__duration__KEY;
+ (id)__explicitSong__KEY;
+ (id)__genre__KEY;
+ (id)__grouping__KEY;
+ (id)__hasCloudSyncSource__KEY;
+ (id)__hasVideo__KEY;
+ (id)__homeSharingAssetAvailable__KEY;
+ (id)__keepLocalEnableState__KEY;
+ (id)__keepLocalManagedStatus__KEY;
+ (id)__libraryAddEligible__KEY;
+ (id)__libraryAdded__KEY;
+ (id)__localFileAsset__KEY;
+ (id)__localNetworkFileURL__KEY;
+ (id)__lyrics__KEY;
+ (id)__playbackEndpointType__KEY;
+ (id)__protectedContentSupportStorageFilePath__KEY;
+ (id)__shouldRememberBookmarkTime__KEY;
+ (id)__shouldReportPlayEventsToStore__KEY;
+ (id)__shouldShowComposer__KEY;
+ (id)__storeAccountIdentifier__KEY;
+ (id)__storeRedownloadParameters__KEY;
+ (id)__storeRedownloadable__KEY;
+ (id)__title__KEY;
+ (id)__trackNumber__KEY;
+ (id)__userRating__KEY;
+ (id)__volumeNormalization__KEY;
+ (id)__year__KEY;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (id)requiredLibraryRemovalProperties;
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (bool)supportsKeepLocalStatusObservation;
+ (bool)supportsLibraryAddStatusObservation;
+ (bool)supportsLibraryRemoval;

- (void).cxx_destruct;
- (id)album;
- (id)artist;
- (id)artworkCatalog;
- (id)artworkCatalogBlock;
- (long long)beatsPerMinute;
- (id)classicalMovement;
- (long long)classicalMovementCount;
- (long long)classicalMovementNumber;
- (id)classicalWork;
- (id)composer;
- (id)copyrightText;
- (id)descriptionWithType:(long long)arg1;
- (long long)discNumber;
- (double)duration;
- (id)genre;
- (id)grouping;
- (bool)hasCloudSyncSource;
- (bool)hasVideo;
- (bool)isArtistUploadedContent;
- (bool)isExplicitSong;
- (bool)isHomeSharingAssetAvailable;
- (bool)isLibraryAddEligible;
- (bool)isLibraryAdded;
- (bool)isStoreRedownloadable;
- (long long)keepLocalEnableState;
- (long long)keepLocalManagedStatus;
- (struct MPLibraryAddStatusObserverConfiguration { bool x1; bool x2; bool x3; bool x4; bool x5; })libraryAddStatusObserverConfiguration;
- (long long)libraryRemovalSupportedOptions;
- (id)localFileAsset;
- (id)localNetworkFileURL;
- (id)lyrics;
- (id)newKeepLocalStatusObserverConfiguration;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (long long)playbackEndpointType;
- (id)propertyValues;
- (id)protectedContentSupportStorageFilePath;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (void)setAlbum:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setArtistUploadedContent:(bool)arg1;
- (void)setArtworkCatalogBlock:(id)arg1;
- (void)setBeatsPerMinute:(long long)arg1;
- (void)setClassicalMovement:(id)arg1;
- (void)setClassicalMovementCount:(long long)arg1;
- (void)setClassicalMovementNumber:(long long)arg1;
- (void)setClassicalWork:(id)arg1;
- (void)setComposer:(id)arg1;
- (void)setCopyrightText:(id)arg1;
- (void)setDiscNumber:(long long)arg1;
- (void)setDuration:(double)arg1;
- (void)setExplicitSong:(bool)arg1;
- (void)setGenre:(id)arg1;
- (void)setGrouping:(id)arg1;
- (void)setHasCloudSyncSource:(bool)arg1;
- (void)setHasVideo:(bool)arg1;
- (void)setHomeSharingAssetAvailable:(bool)arg1;
- (void)setKeepLocalEnableState:(long long)arg1;
- (void)setKeepLocalManagedStatus:(long long)arg1;
- (void)setLibraryAddEligible:(bool)arg1;
- (void)setLibraryAdded:(bool)arg1;
- (void)setLocalFileAsset:(id)arg1;
- (void)setLocalNetworkFileURL:(id)arg1;
- (void)setLyrics:(id)arg1;
- (void)setPlaybackEndpointType:(long long)arg1;
- (void)setProtectedContentSupportStorageFilePath:(id)arg1;
- (void)setShouldRememberBookmarkTime:(bool)arg1;
- (void)setShouldReportPlayEventsToStore:(bool)arg1;
- (void)setShouldShowComposer:(bool)arg1;
- (void)setStoreAccountIdentifier:(unsigned long long)arg1;
- (void)setStoreRedownloadParameters:(id)arg1;
- (void)setStoreRedownloadable:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setTrackNumber:(long long)arg1;
- (void)setUserRating:(float)arg1;
- (void)setVolumeNormalization:(float)arg1;
- (void)setYear:(long long)arg1;
- (bool)shouldRememberBookmarkTime;
- (bool)shouldReportPlayEventsToStore;
- (bool)shouldShowComposer;
- (unsigned long long)storeAccountIdentifier;
- (id)storeRedownloadParameters;
- (id)title;
- (long long)trackNumber;
- (float)userRating;
- (float)volumeNormalization;
- (long long)year;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (id)_radioStationMatchMetadata;

@end
