/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLManagedAlbumList : _PLManagedAlbumList <PLAlbumContainer, PLDerivedAlbumListOrigin, PLIndexMappersDataOrigin> {
    NSObject<PLIndexMappingCache> * _derivedAlbumLists;
    bool  didRegisteredWithUserInterfaceContext;
    bool  isRegisteredForChanges;
}

@property (nonatomic, readonly, retain) NSString *_prettyDescription;
@property (nonatomic, readonly, retain) NSString *_typeDescription;
@property (nonatomic) short albumListType;
@property (nonatomic, readonly, retain) NSMutableOrderedSet *albums;
@property (nonatomic, readonly) unsigned long long albumsCount;
@property (nonatomic, readonly, copy) id albumsSortingComparator;
@property (nonatomic, readonly) bool canEditAlbums;
@property (nonatomic, readonly) unsigned long long containersCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didRegisteredWithUserInterfaceContext;
@property (nonatomic, readonly) int filter;
@property (nonatomic, readonly) bool hasAtLeastOneAlbum;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFolder;
@property (nonatomic) bool isRegisteredForChanges;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long unreadAlbumsCount;
@property (nonatomic, retain) NSString *uuid;

+ (id)_albumListWithType:(short)arg1 inManagedObjectContext:(id)arg2;
+ (bool)_albumOrderMatchesFrom:(id)arg1 inDestination:(id)arg2;
+ (id)_singletonListWithType:(short)arg1 library:(id)arg2;
+ (id)_typeDescriptionForAlbumListType:(short)arg1;
+ (id)_validAlbumsFromSource:(id)arg1 destination:(id)arg2;
+ (void)addSingletonObjectsToContext:(id)arg1;
+ (bool)albumKindHasFixedOrder:(int)arg1;
+ (id)albumListInManagedObjectContext:(id)arg1;
+ (id)albumListInPhotoLibrary:(id)arg1;
+ (id)allStreamedAlbumsListInManagedObjectContext:(id)arg1;
+ (id)allStreamedAlbumsListInPhotoLibrary:(id)arg1;
+ (id)eventListInManagedObjectContext:(id)arg1;
+ (id)eventListInPhotoLibrary:(id)arg1;
+ (id)facesAlbumListInManagedObjectContext:(id)arg1;
+ (id)facesAlbumListInPhotoLibrary:(id)arg1;
+ (id)importListInManagedObjectContext:(id)arg1;
+ (id)importListInPhotoLibrary:(id)arg1;
+ (void)initialize;
+ (bool)isValidPathForPersistence:(id)arg1;
+ (bool)isValidTypeForPersistence:(short)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (void)persistAlbumListUUIDs:(id)arg1 type:(short)arg2 allowsOverwrite:(bool)arg3;
+ (id)placesAlbumListInManagedObjectContext:(id)arg1;
+ (id)placesAlbumListInPhotoLibrary:(id)arg1;
+ (unsigned long long)priorityForAlbumKind:(int)arg1;
+ (void)pushChangesFromAlbumContainer:(id)arg1 toAlbumContainer:(id)arg2;
+ (void)restoreAlbumListFromPersistedDataAtPath:(id)arg1 library:(id)arg2;
+ (id)scenesAlbumListInManagedObjectContext:(id)arg1;
+ (id)scenesAlbumListInPhotoLibrary:(id)arg1;
+ (id)wallpaperAlbumListInPhotoLibrary:(id)arg1;

- (id)_albumsCountFetchRequest;
- (id)_prettyDescription;
- (id)_typeDescription;
- (bool)albumHasFixedOrder:(struct NSObject { Class x1; }*)arg1;
- (short)albumListType;
- (id)albums;
- (unsigned long long)albumsCount;
- (id)albumsSortingComparator;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (bool)canEditAlbums;
- (bool)canEditContainers;
- (id)containers;
- (unsigned long long)containersCount;
- (id)containersRelationshipName;
- (void)dealloc;
- (bool)didRegisteredWithUserInterfaceContext;
- (void)didSave;
- (void)enumerateDerivedAlbumLists:(id)arg1;
- (void)enumerateDerivedIndexMappers:(id)arg1;
- (int)filter;
- (bool)hasAtLeastOneAlbum;
- (bool)hasDerivedIndexMappers;
- (void)insertIntoOrderedAlbumsAtIndexByPriorityForAlbum:(id)arg1;
- (bool)isEmpty;
- (bool)isFolder;
- (bool)isRegisteredForChanges;
- (bool)needsReordering;
- (void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3;
- (void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2;
- (void)registerDerivedAlbumList:(struct NSObject { Class x1; }*)arg1;
- (void)registerForChanges;
- (void)setAlbumListType:(short)arg1;
- (void)setDidRegisteredWithUserInterfaceContext:(bool)arg1;
- (void)setIsRegisteredForChanges:(bool)arg1;
- (void)setNeedsReordering;
- (unsigned long long)unreadAlbumsCount;
- (void)unregisterAllDerivedAlbums;
- (void)unregisterForChanges;
- (void)updateAlbumsOrderIfNeeded;
- (void)willSave;
- (void)willTurnIntoFault;

@end
