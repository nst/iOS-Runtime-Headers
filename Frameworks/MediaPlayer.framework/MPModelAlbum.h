/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelAlbum : MPModelObject {
    MPModelArtist * _artist;
    id  _artworkCatalogBlock;
    bool  _classical;
    bool  _compilation;
    NSString * _copyrightText;
    long long  _discCount;
    NSString * _editorNotes;
    MPModelGenre * _genre;
    bool  _hasCleanContent;
    bool  _hasExplicitContent;
    long long  _keepLocalEnableState;
    long long  _keepLocalManagedStatus;
    NSDate * _lastDevicePlaybackDate;
    bool  _libraryAddEligible;
    bool  _libraryAdded;
    NSDate * _libraryAddedDate;
    long long  _maximumItemTrackNumber;
    bool  _preorder;
    NSDateComponents * _releaseDateComponents;
    MPModelSong * _representativeSong;
    NSString * _shortEditorNotes;
    id  _songPopularityBlock;
    NSString * _title;
    long long  _trackCount;
    float  _volumeNormalization;
    long long  _year;
}

@property (nonatomic, retain) MPModelArtist *artist;
@property (nonatomic, copy) id artworkCatalogBlock;
@property (getter=isClassical, nonatomic) bool classical;
@property (getter=isCompilation, nonatomic) bool compilation;
@property (nonatomic, copy) NSString *copyrightText;
@property (nonatomic) long long discCount;
@property (nonatomic, copy) NSString *editorNotes;
@property (nonatomic, retain) MPModelGenre *genre;
@property (nonatomic) bool hasCleanContent;
@property (nonatomic) bool hasExplicitContent;
@property (nonatomic) long long keepLocalEnableState;
@property (nonatomic) long long keepLocalManagedStatus;
@property (nonatomic, copy) NSDate *lastDevicePlaybackDate;
@property (getter=isLibraryAddEligible, nonatomic) bool libraryAddEligible;
@property (getter=isLibraryAdded, nonatomic) bool libraryAdded;
@property (nonatomic, copy) NSDate *libraryAddedDate;
@property (nonatomic) long long maximumItemTrackNumber;
@property (getter=isPreorder, nonatomic) bool preorder;
@property (nonatomic, copy) NSDateComponents *releaseDateComponents;
@property (nonatomic, retain) MPModelSong *representativeSong;
@property (nonatomic, copy) NSString *shortEditorNotes;
@property (nonatomic, copy) id songPopularityBlock;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) long long trackCount;
@property (nonatomic) float volumeNormalization;
@property (nonatomic) long long year;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)__MPModelPropertyAlbumArtwork__PROPERTY;
+ (id)__MPModelPropertyAlbumCopyrightText__PROPERTY;
+ (id)__MPModelPropertyAlbumDiscCount__PROPERTY;
+ (id)__MPModelPropertyAlbumEditorNotes__PROPERTY;
+ (id)__MPModelPropertyAlbumEditorialArtwork__PROPERTY;
+ (id)__MPModelPropertyAlbumHasCleanContent__PROPERTY;
+ (id)__MPModelPropertyAlbumHasExplicitContent__PROPERTY;
+ (id)__MPModelPropertyAlbumIsClassical__PROPERTY;
+ (id)__MPModelPropertyAlbumIsCompilation__PROPERTY;
+ (id)__MPModelPropertyAlbumKeepLocalEnableState__PROPERTY;
+ (id)__MPModelPropertyAlbumKeepLocalManagedStatus__PROPERTY;
+ (id)__MPModelPropertyAlbumLastDevicePlaybackDate__PROPERTY;
+ (id)__MPModelPropertyAlbumLibraryAddEligible__PROPERTY;
+ (id)__MPModelPropertyAlbumLibraryAddedDate__PROPERTY;
+ (id)__MPModelPropertyAlbumLibraryAdded__PROPERTY;
+ (id)__MPModelPropertyAlbumMaximumItemTrackNumber__PROPERTY;
+ (id)__MPModelPropertyAlbumPreorder__PROPERTY;
+ (id)__MPModelPropertyAlbumReleaseDateComponents__PROPERTY;
+ (id)__MPModelPropertyAlbumShortEditorNotes__PROPERTY;
+ (id)__MPModelPropertyAlbumSongPopularity__PROPERTY;
+ (id)__MPModelPropertyAlbumTitle__PROPERTY;
+ (id)__MPModelPropertyAlbumTrackCount__PROPERTY;
+ (id)__MPModelPropertyAlbumVolumeNormalization__PROPERTY;
+ (id)__MPModelPropertyAlbumYear__PROPERTY;
+ (id)__MPModelRelationshipAlbumArtist__PROPERTY;
+ (id)__MPModelRelationshipAlbumGenre__PROPERTY;
+ (id)__MPModelRelationshipAlbumRepresentativeSong__PROPERTY;
+ (id)__artist__KEY;
+ (id)__artworkCatalogBlock__KEY;
+ (id)__classical__KEY;
+ (id)__compilation__KEY;
+ (id)__copyrightText__KEY;
+ (id)__discCount__KEY;
+ (id)__editorNotes__KEY;
+ (id)__editorialArtworkCatalogBlock__KEY;
+ (id)__genre__KEY;
+ (id)__hasCleanContent__KEY;
+ (id)__hasExplicitContent__KEY;
+ (id)__keepLocalEnableState__KEY;
+ (id)__keepLocalManagedStatus__KEY;
+ (id)__lastDevicePlaybackDate__KEY;
+ (id)__libraryAddEligible__KEY;
+ (id)__libraryAddedDate__KEY;
+ (id)__libraryAdded__KEY;
+ (id)__maximumItemTrackNumber__KEY;
+ (id)__preorder__KEY;
+ (id)__releaseDateComponents__KEY;
+ (id)__representativeSong__KEY;
+ (id)__shortEditorNotes__KEY;
+ (id)__songPopularityBlock__KEY;
+ (id)__title__KEY;
+ (id)__trackCount__KEY;
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
- (id)artist;
- (id)artworkCatalog;
- (id)artworkCatalogBlock;
- (id)copyrightText;
- (id)descriptionWithType:(long long)arg1;
- (long long)discCount;
- (id)editorNotes;
- (id)genre;
- (bool)hasCleanContent;
- (bool)hasExplicitContent;
- (bool)isClassical;
- (bool)isCompilation;
- (bool)isLibraryAddEligible;
- (bool)isLibraryAdded;
- (bool)isPreorder;
- (long long)keepLocalEnableState;
- (long long)keepLocalManagedStatus;
- (id)lastDevicePlaybackDate;
- (struct MPLibraryAddStatusObserverConfiguration { bool x1; bool x2; bool x3; bool x4; bool x5; })libraryAddStatusObserverConfiguration;
- (id)libraryAddedDate;
- (long long)libraryRemovalSupportedOptions;
- (long long)maximumItemTrackNumber;
- (id)newKeepLocalStatusObserverConfiguration;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (id)releaseDateComponents;
- (id)representativeSong;
- (void)setArtist:(id)arg1;
- (void)setArtworkCatalogBlock:(id)arg1;
- (void)setClassical:(bool)arg1;
- (void)setCompilation:(bool)arg1;
- (void)setCopyrightText:(id)arg1;
- (void)setDiscCount:(long long)arg1;
- (void)setEditorNotes:(id)arg1;
- (void)setGenre:(id)arg1;
- (void)setHasCleanContent:(bool)arg1;
- (void)setHasExplicitContent:(bool)arg1;
- (void)setKeepLocalEnableState:(long long)arg1;
- (void)setKeepLocalManagedStatus:(long long)arg1;
- (void)setLastDevicePlaybackDate:(id)arg1;
- (void)setLibraryAddEligible:(bool)arg1;
- (void)setLibraryAdded:(bool)arg1;
- (void)setLibraryAddedDate:(id)arg1;
- (void)setMaximumItemTrackNumber:(long long)arg1;
- (void)setPreorder:(bool)arg1;
- (void)setReleaseDateComponents:(id)arg1;
- (void)setRepresentativeSong:(id)arg1;
- (void)setShortEditorNotes:(id)arg1;
- (void)setSongPopularityBlock:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTrackCount:(long long)arg1;
- (void)setVolumeNormalization:(float)arg1;
- (void)setYear:(long long)arg1;
- (id)shortEditorNotes;
- (id)songPopularityBlock;
- (id)songPopularityForIdentifiers:(id)arg1;
- (id)title;
- (long long)trackCount;
- (float)volumeNormalization;
- (long long)year;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (id)_radioStationMatchMetadata;

@end