/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLGenericAlbum : _PLGenericAlbum <PLAlbumProtocol, PLDerivedAlbumOrigin, PLIndexMappersDataOrigin, PLSyncableObject> {
    NSObject<PLIndexMappingCache> * _derivededAlbums;
    bool  didRegisteredWithUserInterfaceContext;
    bool  isRegisteredForChanges;
}

@property (nonatomic, readonly) unsigned long long approximateCount;
@property (nonatomic, readonly, retain) NSOrderedSet *assets;
@property (nonatomic, readonly) unsigned long long assetsCount;
@property (nonatomic) unsigned long long batchSize;
@property (nonatomic, readonly) bool canContributeToCloudSharedAlbum;
@property (nonatomic, readonly) bool canShowAvalancheStacks;
@property (nonatomic, readonly) bool canShowComments;
@property (nonatomic, retain) NSString *cloudGUID;
@property (nonatomic) short cloudLocalState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didRegisteredWithUserInterfaceContext;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, readonly, retain) NSURL *groupURL;
@property (nonatomic) bool hasUnseenContentBoolValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *importSessionID;
@property (nonatomic, readonly) bool isCameraAlbum;
@property (nonatomic, readonly) bool isCloudSharedAlbum;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) bool isFamilyCloudSharedAlbum;
@property (nonatomic, readonly) bool isFolder;
@property (nonatomic, readonly) bool isInTrash;
@property (nonatomic, readonly) bool isLibrary;
@property (nonatomic, readonly) bool isMultipleContributorCloudSharedAlbum;
@property (nonatomic, readonly) bool isOwnPhotoStreamAlbum;
@property (nonatomic, readonly) bool isOwnedCloudSharedAlbum;
@property (nonatomic, readonly) bool isPanoramasAlbum;
@property (nonatomic, readonly) bool isPendingPhotoStreamAlbum;
@property (nonatomic, readonly) bool isPhotoStreamAlbum;
@property (nonatomic) bool isPinned;
@property (nonatomic, readonly) bool isRecentlyAddedAlbum;
@property (nonatomic) bool isRegisteredForChanges;
@property (nonatomic, readonly) bool isRootFolder;
@property (nonatomic, readonly) bool isSmartAlbum;
@property (nonatomic, readonly) bool isStandInAlbum;
@property (nonatomic, readonly) bool isUserLibraryAlbum;
@property (nonatomic, readonly) bool isWallpaperAlbum;
@property (nonatomic, retain) PLManagedAsset *keyAsset;
@property (nonatomic, readonly, retain) NSNumber *kind;
@property (nonatomic) int kindValue;
@property (nonatomic, readonly, retain) id localID;
@property (nonatomic, readonly, copy) NSArray *localizedLocationNames;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, readonly, retain) NSMutableOrderedSet *mutableAssets;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic) int pendingItemsCount;
@property (nonatomic) int pendingItemsType;
@property (nonatomic, readonly, retain) PLPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) unsigned long long photosCount;
@property (nonatomic, readonly, retain) UIImage *posterImage;
@property (nonatomic, retain) PLManagedAsset *secondaryKeyAsset;
@property (nonatomic, readonly) bool shouldDeleteWhenEmpty;
@property (nonatomic, retain) NSDictionary *slideshowSettings;
@property (nonatomic, readonly, copy) id /* block */ sortingComparator;
@property (nonatomic, retain) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, retain) PLManagedAsset *tertiaryKeyAsset;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSDate *trashedDate;
@property (nonatomic) short trashedState;
@property (nonatomic, retain) NSString *uuid;
@property (nonatomic, readonly) unsigned long long videosCount;

+ (id)_insertNewAlbumWithKind:(int)arg1 title:(id)arg2 lastInterestingDate:(id)arg3 intoLibrary:(id)arg4;
+ (id)_predicateForSupportedAlbumTypes;
+ (void)_removeAlbumsAndFolders:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)_singletonFetchingAlbumWithKind:(int)arg1 library:(id)arg2;
+ (id)_singletonManagedAlbumWithKind:(int)arg1 library:(id)arg2;
+ (id)_unpushedParentsOfAlbums:(id)arg1;
+ (void)addSingletonObjectsToContext:(id)arg1;
+ (struct NSObject { Class x1; }*)albumFromGroupURL:(id)arg1 photoLibrary:(id)arg2;
+ (id)albumWithCloudGUID:(id)arg1 inLibrary:(id)arg2;
+ (id)albumWithKind:(int)arg1 inManagedObjectContext:(id)arg2;
+ (id)albumWithName:(id)arg1 inLibrary:(id)arg2;
+ (id)albumWithObjectID:(id)arg1 inLibrary:(id)arg2;
+ (id)albumWithUUID:(id)arg1 inLibrary:(id)arg2;
+ (id)albumsForStreamID:(id)arg1 inLibrary:(id)arg2;
+ (id)albumsMatchingPredicate:(id)arg1 inLibrary:(id)arg2;
+ (id)albumsMatchingPredicate:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)albumsToUploadInitiallyInLibrary:(id)arg1 limit:(unsigned long long)arg2;
+ (id)albumsWithCloudGUID:(id)arg1 inLibrary:(id)arg2;
+ (id)albumsWithCloudGUIDs:(id)arg1 inLibrary:(id)arg2;
+ (id)albumsWithKind:(int)arg1 inManagedObjectContext:(id)arg2;
+ (id)albumsWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)allAlbumsInLibrary:(id)arg1;
+ (id)allAlbumsInManagedObjectContext:(id)arg1;
+ (id)allAlbumsRegisteredWithManagedObjectContext:(id)arg1;
+ (id)allAssetsAlbumInLibrary:(id)arg1;
+ (id)allFavoritesAlbumInLibrary:(id)arg1;
+ (id)allHorizontalPanoramasAlbumInLibrary:(id)arg1;
+ (id)allNonPhotoStreamAssetsAlbumInLibrary:(id)arg1;
+ (id)allPanoramasAlbumInLibrary:(id)arg1;
+ (id)allPhotoStreamAssetsAlbumInLibrary:(id)arg1;
+ (id)allSyncedAlbumsInManagedObjectContext:(id)arg1;
+ (id)allVerticalPanoramasAlbumInLibrary:(id)arg1;
+ (id)allVideosAlbumInLibrary:(id)arg1;
+ (id)childKeyForOrdering;
+ (id)eventsWithName:(id)arg1 andImportSessionIdentifier:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)filesystemImportProgressAlbumInLibrary:(id)arg1;
+ (id)iTunesLibraryAlbumInLibrary:(id)arg1;
+ (id)includeUnpushedParentsForAlbums:(id)arg1 limit:(unsigned long long)arg2;
+ (id)insertAlbumWithKind:(int)arg1 title:(id)arg2 uuid:(id)arg3 inManagedObjectContext:(id)arg4;
+ (id)insertNewAlbumIntoLibrary:(id)arg1;
+ (id)insertNewAlbumWithKind:(int)arg1 title:(id)arg2 intoLibrary:(id)arg3;
+ (id)insertNewAlbumWithTitle:(id)arg1 intoLibrary:(id)arg2;
+ (id)insertNewCloudSharedAlbumWithTitle:(id)arg1 lastInterestingDate:(id)arg2 intoLibrary:(id)arg3;
+ (id)insertNewFolderWithTitle:(id)arg1 intoLibrary:(id)arg2;
+ (id)insertNewLegacyFaceAlbumIntoLibrary:(id)arg1;
+ (id)insertNewSyncedEventIntoLibrary:(id)arg1;
+ (id)insertNewSyncedEventWithTitle:(id)arg1 intoLibrary:(id)arg2;
+ (id)insertNewSyncedFolderWithTitle:(id)arg1 intoLibrary:(id)arg2;
+ (bool)is1WaySyncKind:(int)arg1;
+ (bool)isFolder:(int)arg1;
+ (bool)isSmartAlbumForKind:(int)arg1;
+ (id)keyPathsForValuesAffectingKindValue;
+ (id)keyPathsForValuesAffectingName;
+ (id)localizedRecoveredTitle;
+ (id)localizedTitleForAlbumKind:(int)arg1;
+ (id)otaRestoreProgressAlbumInLibrary:(id)arg1;
+ (void)removeAllUserAlbumsAndFoldersInLibrary:(id)arg1;
+ (void)removeEmptyAlbumsAndFoldersForCloudResetInManagedObjectContext:(id)arg1;
+ (void)removeInvalidAlbumsAndFoldersInManagedObjectContext:(id)arg1;
+ (void)removeTrashedAlbumsAndFoldersForCloudResetInManagedObjectContext:(id)arg1;
+ (void)resetAlbumStateForCloudInLibrary:(id)arg1 hardReset:(bool)arg2;
+ (id)rootFolderInLibrary:(id)arg1;
+ (id)syncProgressAlbumInLibrary:(id)arg1;
+ (id)trashBinAlbumInLibrary:(id)arg1;
+ (id)userLibraryAlbumInLibrary:(id)arg1;
+ (id)uuidFromGroupURL:(id)arg1;
+ (id)wallpaperAlbumInLibrary:(id)arg1;

- (void)_applyTrashedState:(short)arg1 date:(bool)arg2 :(id)arg3 cascade:(bool)arg4;
- (id)_compactDebugDescription;
- (id)_itemIdentifier;
- (id)_kindDescription;
- (id)_prettyDescription;
- (void)_repairTitleIfEmpty;
- (void)applyPropertiesFromAlbumChange:(id)arg1;
- (void)applyTrashedState:(short)arg1 cascade:(bool)arg2;
- (unsigned long long)approximateCount;
- (id)assetsByObjectIDAtIndexes:(id)arg1;
- (unsigned long long)assetsCount;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (void)batchFetchAssets:(id)arg1;
- (bool)canContributeToCloudSharedAlbum;
- (bool)canMoveToTrash;
- (bool)canPerformEditOperation:(unsigned long long)arg1;
- (bool)canShowAvalancheStacks;
- (bool)canShowComments;
- (id)childKeyForOrdering;
- (id)childManagedObject;
- (unsigned long long)count;
- (unsigned long long)countForAssetsOfKind:(short)arg1;
- (id)cplAlbumChangeInPhotoLibrary:(id)arg1;
- (id)cplFullRecord;
- (void)dealloc;
- (void)delete;
- (id)description;
- (bool)didRegisteredWithUserInterfaceContext;
- (void)enumerateDerivedAlbums:(id /* block */)arg1;
- (void)enumerateDerivedIndexMappers:(id /* block */)arg1;
- (id)groupURL;
- (bool)hasDerivedIndexMappers;
- (bool)hasUnseenContentBoolValue;
- (bool)isCameraAlbum;
- (bool)isCloudSharedAlbum;
- (bool)isEmpty;
- (bool)isFamilyCloudSharedAlbum;
- (bool)isFolder;
- (bool)isInTrash;
- (bool)isLibrary;
- (bool)isMultipleContributorCloudSharedAlbum;
- (bool)isOwnPhotoStreamAlbum;
- (bool)isOwnedCloudSharedAlbum;
- (bool)isPanoramasAlbum;
- (bool)isPendingPhotoStreamAlbum;
- (bool)isPhotoStreamAlbum;
- (bool)isRecentlyAddedAlbum;
- (bool)isRegisteredForChanges;
- (bool)isRootFolder;
- (bool)isSmartAlbum;
- (bool)isStandInAlbum;
- (bool)isSyncableChange;
- (bool)isUserLibraryAlbum;
- (bool)isWallpaperAlbum;
- (int)kindValue;
- (id)localID;
- (id)localizedLocationNames;
- (id)localizedTitle;
- (id)name;
- (id)photoLibrary;
- (unsigned long long)photosCount;
- (id)posterImage;
- (void)reducePendingItemsCountBy:(unsigned long long)arg1;
- (void)registerDerivedAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)registerForChanges;
- (void)repairUuidAndTitleWithRecoveryReason:(const char *)arg1;
- (void)setDidRegisteredWithUserInterfaceContext:(bool)arg1;
- (void)setHasUnseenContentBoolValue:(bool)arg1;
- (void)setIsRegisteredForChanges:(bool)arg1;
- (void)setKindValue:(int)arg1;
- (bool)shouldDeleteWhenEmpty;
- (id /* block */)sortingComparator;
- (bool)supportsCloudUpload;
- (void)unregisterAllDerivedAlbums;
- (void)unregisterForChanges;
- (void)updateAlbumFolderRelation:(id)arg1 inLibrary:(id)arg2;
- (unsigned long long)videosCount;
- (void)willSave;
- (void)willTurnIntoFault;

@end
