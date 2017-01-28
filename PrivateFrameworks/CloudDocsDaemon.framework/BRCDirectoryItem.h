/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDirectoryItem : BRCLocalItem

@property (nonatomic, readonly) BRCAliasItem *asBRAlias;
@property (nonatomic, readonly) BRCDirectoryItem *asDirectory;
@property (nonatomic, readonly) BRCDocumentItem *asDocument;

- (bool)_deleteFromDB:(id)arg1 keepAliases:(bool)arg2;
- (bool)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2;
- (bool)_markChildrenLostForDeadParent;
- (void)_markLostDirectoryAsAlmostDead;
- (void)_retryPostponedIfNeededForDiffs:(unsigned long long)arg1;
- (bool)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;
- (id)asDirectory;
- (bool)changedAtRelativePath:(id)arg1 scanPackage:(bool)arg2;
- (bool)evictInTask:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)hasDeadChildren;
- (bool)hasLiveChildren;
- (bool)hasLostChildren;
- (bool)hasPendingLostChildren;
- (bool)isDirectory;
- (bool)markChildrenLost;
- (void)markRemovedFromFilesystemForServerEdit:(bool)arg1;
- (float)prepareEditSyncUpWithOperation:(id)arg1 defaults:(id)arg2;
- (bool)startDownloadInTask:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (void)transformBackAsDirectoryInAppLibrary:(id)arg1;
- (void)transformIntoFSRootWithAppLibrary:(id)arg1 zone:(id)arg2;
- (bool)updateFromFSAtPath:(id)arg1 parentID:(id)arg2;
- (bool)updateLocationAndMetaFromFSAtPath:(id)arg1 parentID:(id)arg2;

@end
