/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <NSObject><NSCopying>, NSMutableOrderedSet, NSObject<PLAlbumContainer>, NSString;

@interface PLSortedAlbumList : NSObject <PLAlbumContainer, PLIndexMappingCache> {
    struct NSObject { Class x1; } *_backingAlbumList;
    struct __CFArray { } *_fromBackingMap;
    id _sortComparator;
    struct __CFArray { } *_toBackingMap;
    NSMutableOrderedSet *_weak_albums;
}

@property(retain) NSMutableOrderedSet * _albums;
@property(retain,readonly) NSString * _prettyDescription;
@property(retain,readonly) NSString * _typeDescription;
@property(readonly) unsigned long long albumsCount;
@property(copy,readonly) id albumsSortingComparator;
@property(retain) NSObject<PLAlbumContainer> * backingAlbumList;
@property(copy,readonly) <NSObject><NSCopying> * cachedIndexMapState;
@property(readonly) unsigned long long containersCount;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) int filter;
@property(readonly) unsigned long long hash;
@property(readonly) bool isFolder;
@property(copy) id sortComparator;
@property(readonly) Class superclass;
@property(readonly) unsigned long long unreadAlbumsCount;

- (id)_albums;
- (id)_prettyDescription;
- (id)_typeDescription;
- (bool)albumHasFixedOrder:(struct NSObject { Class x1; }*)arg1;
- (short)albumListType;
- (id)albums;
- (unsigned long long)albumsCount;
- (id)albumsSortingComparator;
- (struct NSObject { Class x1; }*)backingAlbumList;
- (id)cachedIndexMapState;
- (bool)canEditAlbums;
- (bool)canEditContainers;
- (id)containers;
- (unsigned long long)containersCount;
- (id)containersRelationshipName;
- (unsigned long long)countOfSortedAlbums;
- (void)createSortedIndexesMap;
- (void)dealloc;
- (Class)derivedChangeNotificationClass;
- (int)filter;
- (bool)hasAtLeastOneAlbum;
- (id)identifier;
- (unsigned long long)indexInSortedAlbumsOfObject:(id)arg1;
- (id)initWithAlbumList:(struct NSObject { Class x1; }*)arg1 sortComparator:(id)arg2;
- (void)insertObject:(id)arg1 inSortedAlbumsAtIndex:(unsigned long long)arg2;
- (bool)isEmpty;
- (bool)isFolder;
- (id)managedObjectContext;
- (bool)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2;
- (bool)needsReordering;
- (id)objectInSortedAlbumsAtIndex:(unsigned long long)arg1;
- (id)photoLibrary;
- (void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3;
- (void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2;
- (void)removeObjectFromSortedAlbumsAtIndex:(unsigned long long)arg1;
- (void)replaceObjectInSortedAlbumsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)setBackingAlbumList:(struct NSObject { Class x1; }*)arg1;
- (void)setNeedsReordering;
- (void)setSortComparator:(id)arg1;
- (void)set_albums:(id)arg1;
- (id)sortComparator;
- (unsigned long long)unreadAlbumsCount;
- (void)updateAlbumsOrderIfNeeded;

@end