/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCXPCRegularIPCsClient : BRCXPCClient <BRCForegroundClient, BRProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;

- (id)_crossZoneMoveOperationForReset:(bool)arg1;
- (void)_enumerateContainersForEnumerationWithDB:(id)arg1 handler:(id /* block */)arg2;
- (bool)_enumerateFoldersWithParent:(id)arg1 depth:(unsigned long long)arg2 session:(id)arg3 db:(id)arg4 handler:(id /* block */)arg5;
- (id)_loggedInUserPropertyValuesForKeys:(id)arg1 error:(id*)arg2;
- (id)_nonSandboxedAttributesToStrip;
- (void)_presentAcceptDialogsWithMetadata:(id)arg1 reply:(id /* block */)arg2;
- (void)_retryCZMigrationWithRetryCount:(int)arg1 syncContext:(id)arg2 reply:(id /* block */)arg3;
- (void)_t_addPackageExtension:(id)arg1 reply:(id /* block */)arg2;
- (void)_t_blockSyncForContainerID:(id)arg1 withPendingUpgradeToOSName:(id)arg2 reply:(id /* block */)arg3;
- (void)_t_blockSyncUpOfItemWithID:(id)arg1 containerID:(id)arg2 withPendingUpgradeToOSName:(id)arg3 reply:(id /* block */)arg4;
- (void)_t_copyGlobalProgressInfoWithReply:(id /* block */)arg1;
- (void)_t_copyItemIDFromItemAtURL:(id)arg1 toItemAtURL:(id)arg2 reply:(id /* block */)arg3;
- (void)_t_getPCSChainStateAtURL:(id)arg1 reply:(id /* block */)arg2;
- (void)_t_getPerfValuesWithReply:(id /* block */)arg1;
- (void)_t_isAutomaticallyEvictable:(id)arg1 reply:(id /* block */)arg2;
- (void)_t_migrateAllZonesToClouddocsWithReset:(bool)arg1 onlyPrepare:(bool)arg2 reply:(id /* block */)arg3;
- (void)_t_noopWithReply:(id /* block */)arg1;
- (void)_t_pauseSyncDownOfContainer:(id)arg1 reply:(id /* block */)arg2;
- (void)_t_pauseSyncUpOfContainer:(id)arg1 reply:(id /* block */)arg2;
- (void)_t_removeAllSyncUpBlockingForContainerID:(id)arg1 reply:(id /* block */)arg2;
- (void)_t_removePackageExtension:(id)arg1 reply:(id /* block */)arg2;
- (void)_t_resetAllZonesWithReply:(id /* block */)arg1;
- (void)_t_resetZoneForContainerID:(id)arg1 waitUntilIdle:(bool)arg2 includingSharedZones:(bool)arg3 reply:(id /* block */)arg4;
- (void)_t_resumeDownloadsForContainerID:(id)arg1 reply:(id /* block */)arg2;
- (void)_t_resumeSyncDownOfContainer:(id)arg1 reply:(id /* block */)arg2;
- (void)_t_resumeSyncUpOfContainer:(id)arg1 reply:(id /* block */)arg2;
- (void)_t_resumeUploadsForContainerID:(id)arg1 reply:(id /* block */)arg2;
- (void)_t_setFSEventProcessingState:(bool)arg1 reply:(id /* block */)arg2;
- (void)_t_suspendDownloadsForContainerID:(id)arg1 reply:(id /* block */)arg2;
- (void)_t_suspendUploadsForContainerID:(id)arg1 reply:(id /* block */)arg2;
- (void)_t_waitForLostScanToFinishWithReply:(id /* block */)arg1;
- (void)_t_waitUntilIdle:(id)arg1 reply:(id /* block */)arg2;
- (void)_unregisterPrematurely;
- (void)_updateDirectoryMtime:(long long)arg1 onDisk:(id)arg2;
- (void)addExternalDocumentReferenceTo:(id)arg1 inContainer:(id)arg2 underParent:(id)arg3 reply:(id /* block */)arg4;
- (void)boostFilePresenterAtURL:(id)arg1 reply:(id /* block */)arg2;
- (void)capabilityWhenTryingToReparentItemAtURL:(id)arg1 toNewParent:(id)arg2 reply:(id /* block */)arg3;
- (oneway void)checkinAskClientIfUsingUbiquity:(bool)arg1;
- (void)computePurgableSpaceWithUrgency:(int)arg1 reply:(id /* block */)arg2;
- (void)copyBulkShareIDsAtURLs:(id)arg1 reply:(id /* block */)arg2;
- (void)copyCurrentUserIdentifierWithReply:(id /* block */)arg1;
- (void)copyCurrentUserNameAndDisplayHandleWithReply:(id /* block */)arg1;
- (void)copyCurrentUserNameAndEmailWithReply:(id /* block */)arg1;
- (void)createContainerWithID:(id)arg1 ownerName:(id)arg2 reply:(id /* block */)arg3;
- (void)createSharingInfoForURL:(id)arg1 reply:(id /* block */)arg2;
- (void)currentAccountCreateWithID:(id)arg1 reply:(id /* block */)arg2;
- (void)currentAccountLogoutWithReply:(id /* block */)arg1;
- (void)currentNotifRankWithReply:(id /* block */)arg1;
- (void)currentSyncedRootURLsWithReply:(id /* block */)arg1;
- (void)deleteAllContentsOfContainerID:(id)arg1 onClient:(bool)arg2 onServer:(bool)arg3 wait:(bool)arg4 reply:(id /* block */)arg5;
- (void)didReceiveHandoffRequestForBundleID:(id)arg1 reply:(id /* block */)arg2;
- (void)dropSpotlightIndexWithReply:(id /* block */)arg1;
- (void)dumpCoordinationInfoTo:(id)arg1 reply:(id /* block */)arg2;
- (void)dumpDatabaseTo:(id)arg1 containerID:(id)arg2 includeAllItems:(bool)arg3 reply:(id /* block */)arg4;
- (void)enumerateAllFoldersWithSortOrder:(unsigned char)arg1 offset:(unsigned long long)arg2 limit:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)enumerateItemsInFolder:(id)arg1 sortOrder:(unsigned char)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)enumerateWorkingSetChangesFromChangeToken:(id)arg1 limit:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)evictItemAtURL:(id)arg1 options:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)evictOldDocumentsWithReply:(id /* block */)arg1;
- (void)forceConflictForURL:(id)arg1 bookmarkData:(id)arg2 forcedEtag:(id)arg3 reply:(id /* block */)arg4;
- (void)forceSyncContainerID:(id)arg1 reply:(id /* block */)arg2;
- (void)forceSyncWithBarrierContainerID:(id)arg1 timeout:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)forceSyncZoneHealthWithBarrierWithTimeout:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)gatherInformationForPath:(id)arg1 reply:(id /* block */)arg2;
- (void)getApplicationDocumentUsageInfoForBundleID:(id)arg1 withReply:(id /* block */)arg2;
- (void)getApplicationStatus:(id /* block */)arg1;
- (void)getApplicationStatusForProcess:(struct { unsigned int x1[8]; })arg1 reply:(id /* block */)arg2;
- (void)getAttributeValues:(id)arg1 forItemAtURL:(id)arg2 reply:(id /* block */)arg3;
- (void)getBackReferencingContainerIDsForURLs:(id)arg1 reply:(id /* block */)arg2;
- (void)getBookmarkDataForURL:(id)arg1 onlyAllowItemKnowByServer:(bool)arg2 allowAccessByBundleID:(id)arg3 reply:(id /* block */)arg4;
- (void)getContainerForURL:(id)arg1 reply:(id /* block */)arg2;
- (void)getContainerLastServerUpdateWithID:(id)arg1 reply:(id /* block */)arg2;
- (void)getContainerStatusWithID:(id)arg1 reply:(id /* block */)arg2;
- (void)getContainerURLForID:(id)arg1 forProcess:(struct { unsigned int x1[8]; })arg2 reply:(id /* block */)arg3;
- (void)getContainerURLForID:(id)arg1 recreateDocumentsIfNeeded:(bool)arg2 reply:(id /* block */)arg3;
- (void)getContainerURLForID:(id)arg1 reply:(id /* block */)arg2;
- (void)getContainersByID:(id /* block */)arg1;
- (void)getContainersNeedingUpload:(id /* block */)arg1;
- (void)getEvictableSpaceWithReply:(id /* block */)arg1;
- (void)getIsContainerWithIDOverQuota:(id)arg1 reply:(id /* block */)arg2;
- (void)getItemUpdateSenderWithReceiver:(id)arg1 reply:(id /* block */)arg2;
- (void)getLastSyncDateWithReply:(id /* block */)arg1;
- (void)getLocalizedLastSyncWithReply:(id /* block */)arg1;
- (void)getLoggedInUserPropertyValuesForKeys:(id)arg1 reply:(id /* block */)arg2;
- (void)getMigrationStatusForPrimaryiCloudAccount:(id /* block */)arg1;
- (void)getNonLocalVersionSenderWithReceiver:(id)arg1 documentURL:(id)arg2 includeCachedVersions:(bool)arg3 reply:(id /* block */)arg4;
- (void)getPublishedURLForItemAtURL:(id)arg1 forStreaming:(bool)arg2 requestedTTL:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)getQueryItemForURL:(id)arg1 reply:(id /* block */)arg2;
- (void)getTotalApplicationDocumentUsageWithReply:(id /* block */)arg1;
- (void)getiWorkNeedsShareMigrateAtURL:(id)arg1 reply:(id /* block */)arg2;
- (void)getiWorkPublishingBadgingStatusAtURL:(id)arg1 reply:(id /* block */)arg2;
- (void)getiWorkPublishingInfoAtURL:(id)arg1 reply:(id /* block */)arg2;
- (void)handleCloudKitShareMetadata:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)hasOptimizeStorageWithReply:(id /* block */)arg1;
- (void)healthStatusStringForContainer:(id)arg1 reply:(id /* block */)arg2;
- (void)iCloudDesktopSettingsChangedWithAttributes:(id)arg1 reply:(id /* block */)arg2;
- (void)iWorkForceSyncContainerID:(id)arg1 ownedByMe:(bool)arg2 reply:(id /* block */)arg3;
- (void)jetsamCloudDocsAppsWithReply:(id /* block */)arg1;
- (void)lookupExcludedExtensionsForLogoutWithReply:(id /* block */)arg1;
- (void)lookupExcludedFilenamesForLogoutWithReply:(id /* block */)arg1;
- (void)lookupMinFileSizeForThumbnailTransferWithReply:(id /* block */)arg1;
- (void)moveBRSecurityBookmarkAtURL:(id)arg1 toURL:(id)arg2 reply:(id /* block */)arg3;
- (void)overwriteAccessTimeForItemAtURL:(id)arg1 atime:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)performSelfCheck:(id)arg1 reply:(id /* block */)arg2;
- (void)presentAcceptDialogsForShareMetadata:(id)arg1 reply:(id /* block */)arg2;
- (void)presyncContainerWithID:(id)arg1 reply:(id /* block */)arg2;
- (void)printStatus:(id)arg1 containerID:(id)arg2 reply:(id /* block */)arg3;
- (void)purgeAmount:(long long)arg1 withUrgency:(int)arg2 reply:(id /* block */)arg3;
- (void)readerThrottleBackoffForDocumentAtPath:(id)arg1 containerID:(id)arg2 reply:(id /* block */)arg3;
- (void)reclaimAmount:(long long)arg1 withUrgency:(int)arg2 reply:(id /* block */)arg3;
- (void)refreshSharingStateForItemIdentifier:(id)arg1 reply:(id /* block */)arg2;
- (void)registerInitialSyncBarrierForID:(id)arg1 reply:(id /* block */)arg2;
- (void)removeItemFromDisk:(id)arg1 reply:(id /* block */)arg2;
- (void)resetBudgets:(id)arg1 reply:(id /* block */)arg2;
- (void)resolveBookmarkDataToURL:(id)arg1 reply:(id /* block */)arg2;
- (void)resolveConflictWithName:(id)arg1 atURL:(id)arg2 reply:(id /* block */)arg3;
- (void)resolveFileObjectIDToURL:(id)arg1 reply:(id /* block */)arg2;
- (void)resolveFileObjectIDsToContentRecordIDs:(id)arg1 reply:(id /* block */)arg2;
- (void)scheduleDeepScanForContainer:(id)arg1 reply:(id /* block */)arg2;
- (void)setMigrationStatus:(BOOL)arg1 forDSID:(id)arg2 shouldUpdateAccount:(bool)arg3 reply:(id /* block */)arg4;
- (void)setStorageOpimizationEnabled:(bool)arg1 reply:(id /* block */)arg2;
- (void)setiWorkPublishingInfoAtURL:(id)arg1 publish:(bool)arg2 readonly:(bool)arg3 reply:(id /* block */)arg4;
- (void)setupInstanceWithDict:(id)arg1 reply:(id /* block */)arg2;
- (void)simulateHealthIssueWithContainer:(id)arg1 status:(id)arg2 brokenStructure:(bool)arg3 reply:(id /* block */)arg4;
- (void)startDownloadItemsAtURLs:(id)arg1 options:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)startOperation:(id)arg1 toCleanShareSubitemsAtURL:(id)arg2 reply:(id /* block */)arg3;
- (void)startOperation:(id)arg1 toCopyAvailableQuotaWithReply:(id /* block */)arg2;
- (void)startOperation:(id)arg1 toCopyEtagAtURL:(id)arg2 reply:(id /* block */)arg3;
- (void)startOperation:(id)arg1 toCopyParticipantTokenAtURL:(id)arg2 reply:(id /* block */)arg3;
- (void)startOperation:(id)arg1 toCopyShareInfoAtURL:(id)arg2 reply:(id /* block */)arg3;
- (void)startOperation:(id)arg1 toCopyShareURLForShare:(id)arg2 appName:(id)arg3 reply:(id /* block */)arg4;
- (void)startOperation:(id)arg1 toCopySharingAccessToken:(id)arg2 reply:(id /* block */)arg3;
- (void)startOperation:(id)arg1 toCopySharingInfoAtURL:(id)arg2 reply:(id /* block */)arg3;
- (void)startOperation:(id)arg1 toCopySharingWebAuthTokenForContainerID:(id)arg2 reply:(id /* block */)arg3;
- (void)startOperation:(id)arg1 toCopyShortTokenAtURL:(id)arg2 reply:(id /* block */)arg3;
- (void)startOperation:(id)arg1 toDownloadItemAtURL:(id)arg2 readingOptions:(unsigned long long)arg3 wantsCurrentVersion:(bool)arg4 reply:(id /* block */)arg5;
- (void)startOperation:(id)arg1 toEvictItemAtURL:(id)arg2 reply:(id /* block */)arg3;
- (void)startOperation:(id)arg1 toLookupShareParticipants:(id)arg2 reply:(id /* block */)arg3;
- (void)startOperation:(id)arg1 toModifyRecordAccessAtURL:(id)arg2 allowAccess:(bool)arg3 reply:(id /* block */)arg4;
- (void)startOperation:(id)arg1 toPrepFolderForSharingAt:(id)arg2 reply:(id /* block */)arg3;
- (void)startOperation:(id)arg1 toSaveSharingInfo:(id)arg2 reply:(id /* block */)arg3;
- (void)startOperation:(id)arg1 toUnshareShare:(id)arg2 forceDelete:(bool)arg3 reply:(id /* block */)arg4;
- (void)startOperation:(id)arg1 toUploadAllFilesInContainer:(id)arg2 reply:(id /* block */)arg3;
- (void)thumbnailChangedForItemAtURL:(id)arg1 reply:(id /* block */)arg2;
- (void)trashItemAtURL:(id)arg1 reply:(id /* block */)arg2;
- (oneway void)updateContainerMetadataForID:(id)arg1;
- (void)updateItemFromURL:(id)arg1 reply:(id /* block */)arg2;
- (oneway void)updatePrivilegesDescriptor;
- (void)waitForFileSystemChangeProcessingWithReply:(id /* block */)arg1;
- (oneway void)willAcceptShareAtURL:(id)arg1;
- (void)zoneNameForContainer:(id)arg1 reply:(id /* block */)arg2;

@end
