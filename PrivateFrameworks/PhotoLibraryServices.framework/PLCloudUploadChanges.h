/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudUploadChanges : NSObject {
    NSMutableSet * _adjustedAssets;
    NSMutableArray * _albumChanges;
    NSMutableArray * _albumInserts;
    NSMutableArray * _albumsToDelete;
    NSMutableArray * _deletedAssets;
    NSMutableArray * _insertedAssets;
    NSMutableArray * _memoriesToDelete;
    NSMutableArray * _memoryChanges;
    NSMutableArray * _personChanges;
    NSMutableArray * _personsToDelete;
    NSMutableArray * _updatedAssets;
    NSMutableArray * _updatedRelationship;
}

@property (nonatomic, retain) NSMutableSet *adjustedAssets;
@property (nonatomic, retain) NSMutableArray *albumChanges;
@property (nonatomic, retain) NSMutableArray *albumInserts;
@property (nonatomic, retain) NSMutableArray *albumsToDelete;
@property (nonatomic, retain) NSMutableArray *deletedAssets;
@property (nonatomic, retain) NSMutableArray *insertedAssets;
@property (nonatomic, retain) NSMutableArray *memoriesToDelete;
@property (nonatomic, retain) NSMutableArray *memoryChanges;
@property (nonatomic, retain) NSMutableArray *personChanges;
@property (nonatomic, retain) NSMutableArray *personsToDelete;
@property (nonatomic, retain) NSMutableArray *updatedAssets;
@property (nonatomic, retain) NSMutableArray *updatedRelationship;

- (id)adjustedAssets;
- (id)albumChanges;
- (id)albumInserts;
- (id)albumsToDelete;
- (void)dealloc;
- (id)deletedAssets;
- (id)dictionaryRepresentation;
- (id)init;
- (id)insertedAssets;
- (bool)isEmpty;
- (id)memoriesToDelete;
- (id)memoryChanges;
- (id)personChanges;
- (id)personsToDelete;
- (void)setAdjustedAssets:(id)arg1;
- (void)setAlbumChanges:(id)arg1;
- (void)setAlbumInserts:(id)arg1;
- (void)setAlbumsToDelete:(id)arg1;
- (void)setDeletedAssets:(id)arg1;
- (void)setInsertedAssets:(id)arg1;
- (void)setMemoriesToDelete:(id)arg1;
- (void)setMemoryChanges:(id)arg1;
- (void)setPersonChanges:(id)arg1;
- (void)setPersonsToDelete:(id)arg1;
- (void)setUpdatedAssets:(id)arg1;
- (void)setUpdatedRelationship:(id)arg1;
- (id)summaryDescription;
- (id)updatedAssets;
- (id)updatedRelationship;

@end
