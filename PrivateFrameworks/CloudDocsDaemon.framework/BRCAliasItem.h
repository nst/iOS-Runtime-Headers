/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCAliasItem : BRCLocalItem

@property (nonatomic, readonly) BRCAliasItem *asBRAlias;
@property (nonatomic, readonly) BRCDirectoryItem *asDirectory;
@property (nonatomic, readonly) BRCDocumentItem *asDocument;
@property (nonatomic, readonly) BRCAppLibrary *targetAppLibrary;
@property (nonatomic, readonly) NSString *targetAppLibraryID;
@property (nonatomic, readonly) BRCClientZone *targetClientZone;
@property (nonatomic, readonly) BRCItemID *targetItemID;

- (bool)_deleteFromDB:(id)arg1 keepAliases:(bool)arg2;
- (bool)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2;
- (void)_removeAliasAndMarkDead;
- (bool)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;
- (id)asBRAlias;
- (bool)changedAtRelativePath:(id)arg1 scanPackage:(bool)arg2;
- (bool)evictInTask:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)isBRAlias;
- (void)learnTarget:(id)arg1;
- (void)markNeedsUploadOrSyncingUp;
- (void)markNeedsUploadOrSyncingUpWithAliasTarget:(id)arg1;
- (float)prepareEditSyncUpWithOperation:(id)arg1 defaults:(id)arg2;
- (void)rewriteAliasOnDiskWithTarget:(id)arg1;
- (bool)startDownloadInTask:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)structureRecordBeingDeadInServerTruth:(bool)arg1 stageID:(id)arg2 pcsChained:(bool)arg3;
- (id)targetAppLibrary;
- (id)targetAppLibraryID;
- (id)targetClientZone;
- (id)targetDocument;
- (id)targetItemID;
- (void)targetMovedToThisAppLibrary;
- (void)targetMovedToTrashOrDeleted;
- (id)targetReference;
- (bool)updateOnDiskWithAliasTarget:(id)arg1 forServerEdit:(bool)arg2;
- (bool)updateXattrInfoFromPath:(id)arg1 error:(id*)arg2;

@end
