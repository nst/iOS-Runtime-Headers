/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDocumentItem : BRCLocalItem {
    BRCLocalVersion * _currentVersion;
    BRCDesiredVersion * _desiredVersion;
    NSMutableSet * _liveConflictLoserEtags;
    NSData * _liveThumbnailSignature;
    NSMutableSet * _resolvedConflictLoserEtags;
    bool  _shouldAutomaticallyDownloadThumbnail;
}

@property (nonatomic, readonly) BRCAliasItem *asBRAlias;
@property (nonatomic, readonly) BRCDirectoryItem *asDirectory;
@property (nonatomic, readonly) BRCDocumentItem *asDocument;
@property (nonatomic, readonly) NSDictionary *conflictLoserState;
@property (nonatomic, readonly) BRCLocalVersion *currentVersion;
@property (nonatomic, readonly) BRCDesiredVersion *desiredVersion;
@property (nonatomic, readonly) unsigned int downloadStatus;
@property (nonatomic, readonly) bool hasLocalContent;
@property (nonatomic, readonly) bool isAutomaticallyEvictable;
@property (nonatomic, readonly) bool isDownloadRequested;
@property (nonatomic, readonly) bool isEvictable;
@property (nonatomic, readonly) bool isSharedDocument;
@property (nonatomic, readonly) bool isVisibleIniCloudDrive;
@property (nonatomic, retain) NSSet *liveConflictLoserEtags;
@property (nonatomic, retain) NSData *liveThumbnailSignature;
@property (nonatomic, readonly) unsigned int queryItemStatus;
@property (nonatomic, readonly) NSSet *resolvedConflictLoserEtags;
@property (nonatomic, readonly) bool shouldAutomaticallyDownloadThumbnail;
@property (nonatomic, readonly) bool shouldBeGreedy;
@property (nonatomic, readonly) bool shouldHaveThumbnail;
@property (nonatomic, readonly) bool shouldTransferThumbnail;
@property (nonatomic, readonly) NSString *unsaltedBookmarkData;
@property (nonatomic, readonly) NSError *uploadError;

+ (bool)_shouldIndexAtURL:(id)arg1 forItem:(id)arg2;
+ (id)anyReverseAliasInAppLibrary:(id)arg1 toRelativePath:(id)arg2;
+ (id)anyReverseAliasWithUnsaltedBookmarkData:(id)arg1 inAppLibrary:(id)arg2;
+ (id)bookmarkDataWithRelativePath:(id)arg1;
+ (bool)isDocumentAutomaticallyEvictableWithExtension:(id)arg1;
+ (bool)isDocumentAutomaticallyEvictableWithName:(id)arg1;
+ (id)itemResolutionStringWithRelativePath:(id)arg1;
+ (bool)parseBookmarkData:(id)arg1 inAccountSession:(id)arg2 docID:(id*)arg3 itemID:(id*)arg4 mangledID:(id*)arg5 unsaltedBookmarkData:(id*)arg6 error:(id*)arg7;
+ (struct PQLResultSet { Class x1; }*)reverseAliasEnumeratorWithRelativePath:(id)arg1;
+ (struct PQLResultSet { Class x1; }*)reverseAliasEnumeratorWithUnsaltedBookmarkData:(id)arg1 session:(id)arg2;
+ (bool)shouldIndexDocument:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)unsaltedBookmarkDataWithItemResolutionString:(id)arg1 serverZone:(id)arg2;
+ (id)unsaltedBookmarkDataWithRelativePath:(id)arg1;

- (void).cxx_destruct;
- (bool)_deleteFromDB:(id)arg1 keepAliases:(bool)arg2;
- (id)_initFromPQLResultSet:(id)arg1 session:(id)arg2 db:(id)arg3 error:(id*)arg4;
- (id)_initWithLocalItem:(id)arg1;
- (id)_initWithRelativePath:(id)arg1 parentID:(id)arg2;
- (id)_initWithServerItem:(id)arg1 dbRowID:(unsigned long long)arg2;
- (bool)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2;
- (bool)_isInterestingUpdateForNotifs;
- (bool)_needsSyncBubbleRecomputeForError:(id)arg1 origError:(id)arg2;
- (bool)_nukePackageItemsFromDB:(id)arg1;
- (bool)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;
- (void)_updateLiveConflictLoserFromFSAtPath:(id)arg1;
- (void)_updateReadThrottleIfNeededForRowID:(unsigned long long)arg1 forCreation:(bool)arg2;
- (void)_updateRecursivePropertiesInDB:(id)arg1 dbRowID:(unsigned long long)arg2 diffs:(unsigned long long)arg3;
- (void)_updateUploadThrottleIfNeededWithDiffs:(unsigned long long)arg1;
- (void)addResolvedConflictLoserEtag:(id)arg1;
- (id)aliasItemID;
- (id)anyReverseAliasInAppLibrary:(id)arg1;
- (void)appDidResolveConflictLoserWithEtag:(id)arg1;
- (id)asDocument;
- (id)baseContentsRecord;
- (bool)changedAtRelativePath:(id)arg1 scanPackage:(bool)arg2;
- (void)clearDesiredVersion;
- (void)clearFromStage;
- (void)clearVersionSignatures:(unsigned long long)arg1 isPackage:(bool)arg2;
- (id)conflictLoserState;
- (id)contentsRecordID;
- (id)currentVersion;
- (id)descriptionWithContext:(id)arg1;
- (id)desiredVersion;
- (unsigned long long)diffAgainstLocalItem:(id)arg1;
- (unsigned long long)diffAgainstServerItem:(id)arg1;
- (unsigned int)downloadStatus;
- (void)encodeWithCoder:(id)arg1;
- (bool)evictInTask:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (void)forceVersionConflictByClearkingCKInfo;
- (void)forceiWorkConflictEtag:(id)arg1;
- (void)forceiWorkSharingInfoResend;
- (void)handleUnknownItemError;
- (bool)hasLocalContent;
- (bool)hasShareIDAndIsOwnedByMe;
- (id)initWithCoder:(id)arg1;
- (bool)isAutomaticallyEvictable;
- (bool)isDocument;
- (bool)isDownloadRequested;
- (bool)isEvictable;
- (bool)isFault;
- (bool)isOwnedByMe;
- (bool)isPackage;
- (bool)isSharedByMe;
- (bool)isSharedDocument;
- (bool)isVisibleIniCloudDrive;
- (void)learnItemID:(id)arg1 ownerKey:(id)arg2 path:(id)arg3 markLost:(bool)arg4;
- (void)learnThumbnailSignatureFromLiveVersion:(id)arg1;
- (id)liveConflictLoserEtags;
- (id)liveThumbnailSignature;
- (void)markDead;
- (void)markForceNeedsSyncUp;
- (void)markForceUpload;
- (void)markLatestRequestAcknowledged;
- (void)markLatestSyncRequestRejected;
- (void)markLiveFromStageWithAppLibrary:(id)arg1;
- (void)markNeedsReading;
- (void)markNeedsUploadOrSyncingUp;
- (void)markOverQuotaWithError:(id)arg1;
- (void)markUploadedWithRecord:(id)arg1;
- (float)prepareDeletionSyncUpWithOperation:(id)arg1 defaults:(id)arg2;
- (float)prepareEditSyncUpWithOperation:(id)arg1 defaults:(id)arg2;
- (unsigned int)queryItemStatus;
- (void)removeLiveConflictLoserEtag:(id)arg1;
- (id)resolvedConflictLoserEtags;
- (struct PQLResultSet { Class x1; }*)reverseAliasEnumerator;
- (void)setLiveConflictLoserEtags:(id)arg1;
- (void)setLiveThumbnailSignature:(id)arg1;
- (id)setOfAppLibraryIDsWithReverseAliases;
- (int)setVersionToStage:(id)arg1 diffsWithServerItem:(unsigned long long)arg2 options:(unsigned int)arg3 needsSave:(bool*)arg4;
- (int)setVersionToStage:(id)arg1 options:(unsigned int)arg2 needsSave:(bool*)arg3;
- (bool)shouldAutomaticallyDownloadThumbnail;
- (bool)shouldBeGreedy;
- (bool)shouldHaveThumbnail;
- (bool)shouldTransferThumbnail;
- (id)spotlightUniqueIdentifier;
- (void)stageFaultForCreation:(bool)arg1 name:(id)arg2 size:(id)arg3 isPackage:(bool)arg4;
- (void)stageFaultForCreation:(bool)arg1 serverItem:(id)arg2;
- (bool)startDownloadInTask:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)unsaltedBookmarkData;
- (void)updateContentsCKInfoAndDeviceIDFromServerItem:(id)arg1;
- (bool)updateFromFSAtPath:(id)arg1 parentID:(id)arg2;
- (bool)updateLocationAndMetaFromFSAtPath:(id)arg1 parentID:(id)arg2;
- (void)updateVersionMetadataFromServerItem:(id)arg1 preventVersionDiffs:(bool)arg2;
- (bool)updateXattrInfoFromPath:(id)arg1 error:(id*)arg2;
- (id)uploadError;
- (bool)validateLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;

@end
