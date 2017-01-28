/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoLibrary : NSObject {
    PLGenericAlbum * _allImportedPhotosAlbum;
    struct __CFDictionary { } * _allPhotos;
    NSSet * _audioFileExtensions;
    NSString * _cachedName;
    PLManagedAlbum * _cameraRollAlbum;
    PLFetchingAlbum * _cameraSessionAlbum;
    int  _databaseMigrationKind;
    unsigned long long  _deletedCountSinceLastFetchedGPSCount;
    NSCalendar * _exifConversionCalendar;
    NSSet * _extraVideoExtensions;
    NSSet * _imageFileExtensions;
    unsigned long long  _insertedCountSinceLastFetchedGPSCount;
    bool  _isTransient;
    unsigned long long  _lastFetchedGPSCount;
    PLGenericAlbum * _lastImportedPhotosAlbum;
    bool  _listeningForITunesSyncing;
    unsigned long long  _newlyCompleteWithGPS;
    unsigned long long  _pendingTransactions;
    NSMutableArray * _photoStreamAlbums;
    NSMutableDictionary * _photoStreamAlbumsByStreamID;
    NSSet * _rawImageFileExtensions;
    PLManagedAlbumList * _rootAlbumList;
    PLManagedFolder * _rootFolder;
    NSMutableArray * _transactionCompletionHandlers;
    PLFetchingAlbum * _userLibraryAlbum;
    PLManagedObjectContext * managedObjectContext;
}

@property (nonatomic, readonly, copy) NSArray *albums;
@property (nonatomic, readonly, copy) NSArray *eventAlbums;
@property (nonatomic, readonly, copy) NSArray *faceAlbums;
@property (nonatomic, readonly, copy) NSObject<PLAlbumProtocol> *favoritesAlbum;
@property (nonatomic, readonly, copy) NSArray *imagePickerAlbums;
@property (nonatomic, readonly, copy) NSArray *importAlbums;
@property (nonatomic, retain) PLManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly, copy) NSArray *photoStreamAlbums;
@property (nonatomic, readonly, copy) NSArray *photoStreamAlbumsForPreferences;
@property (nonatomic, readonly, copy) NSArray *placeAlbums;
@property (nonatomic, readonly, retain) PLManagedAlbumList *rootAlbumList;
@property (nonatomic, readonly, retain) PLManagedFolder *rootFolder;
@property (nonatomic, readonly, copy) NSArray *userAlbums;
@property (nonatomic, readonly, retain) PLFetchingAlbum *userLibraryAlbum;
@property (nonatomic, readonly, copy) NSArray *wallpaperAlbums;

+ (unsigned long long)CloudPhotoLibrarySize;
+ (void)_activateStatusTimer;
+ (void)_assetsLibrary_disableSharedPhotoStreamsSupport;
+ (bool)_assetsLibrary_isSharedPhotoStreamsSupportEnabled;
+ (bool)_assetsdQueueingMode;
+ (id)_dataMigratorFinishedFilePath;
+ (id)_dataProtectionIndicatorFilePath;
+ (void)_doFilesystemImportIfNeededWithMOC:(id)arg1 reason:(id)arg2;
+ (void)_enqeueRecoveryJob:(id)arg1;
+ (void)_enqueueOperationWithName:(id)arg1 priority:(long long)arg2 block:(id)arg3;
+ (void)_inq_createPhotoStreamAlbumStreamID:(id)arg1 inLibrary:(id)arg2;
+ (id)_operationQueueForPriority:(long long)arg1;
+ (id)_statusDescriptionForQueue:(id)arg1;
+ (void)_updateAssetCountKeyPath:(id)arg1 withPendingCountKeyPath:(id)arg2 inContext:(id)arg3;
+ (id)allPersistedDirectoryURLs;
+ (bool)areOpportunisticTasksDisabled;
+ (id)assetsDataDirectory;
+ (bool)canSaveVideoToCameraRoll:(id)arg1;
+ (id)cplAssetsDirectoryURL;
+ (id)cplDownloadFinishedMarkerFilePath;
+ (id)cplEnableMarkerFilePath;
+ (id)crashRecoveryIndicatorFilePaths:(bool)arg1;
+ (void)createPhotoStreamAlbumWithStreamID:(id)arg1 completionHandler:(id)arg2;
+ (void)createPhotoStreamAlbumWithStreamID:(id)arg1 inLibrary:(id)arg2;
+ (bool)createSqliteErrorIndicatorFile;
+ (id)dcimDirectory;
+ (id)dcimDirectoryURL;
+ (unsigned long long)defaultUnverifiedFaceCountThreshold;
+ (void)delayedRefreshCachedCountsInAlbumIDs:(id)arg1;
+ (id)deletedMemoryUUIDsFilePath;
+ (id)disableICloudPhotosFilePath;
+ (void)disableOpportunisticTasks:(bool)arg1;
+ (id)dupeAnalysisNeededFilePath;
+ (id)enableICloudPhotosFilePath;
+ (id)fileReservationForFileAtPath:(id)arg1 exclusive:(bool)arg2;
+ (void)forceSoftResetSync;
+ (id)forceSoftResetSyncPath;
+ (void)handlePossibleCoreDataError:(id)arg1;
+ (id)iTunesPhotosDirectory;
+ (id)iTunesSyncedAssetMetadataThumbnailsDirectory;
+ (id)iTunesSyncedAssetSmallThumbnailsDirectory;
+ (id)iTunesSyncedAssetsDirectory;
+ (id)iTunesSyncedFaceAlbumThumbnailsDirectory;
+ (id)iTunesSyncedFaceDataDirectory;
+ (id)imageWriterIndicatorFilePath;
+ (void)initializeGraphicsServices;
+ (bool)isAlbumSynced:(id)arg1;
+ (bool)isApplicationWildcat;
+ (bool)isDataMigratorFinished;
+ (bool)isDataProtectionComplete;
+ (bool)isDisableICloudPhotos;
+ (bool)isDupeAnalysisNeeded;
+ (bool)isEnableICloudPhotos;
+ (bool)isForceSoftResetSync;
+ (bool)isICloudPhotosPaused;
+ (bool)isMomentAnalysisNeeded;
+ (bool)isRunningInStoreDemoMode;
+ (bool)isSafeToRecoverAfterCrash;
+ (bool)isStreamsLibraryUpdatingExpired;
+ (id)libraryAvailableIndicatorFilePath;
+ (bool)libraryAvailableIndicatorState;
+ (id)lightweightReimportPhotoCloudSharingAssetDirectoryForAlbumWithCloudGUID:(id)arg1 cloudPersonID:(id)arg2;
+ (id)lightweightReimportPhotoCloudSharingAssetFileNameWithCloudAssetGUID:(id)arg1 type:(id)arg2;
+ (id)lightweightReimportPhotoCloudSharingDataDirectory;
+ (id)mediaFilesDirectoryURL;
+ (id)migrationIndicatorFilePath;
+ (id)momentAnalysisNeededFilePath;
+ (id)opportunisticTaskIsolationQueue;
+ (id)pathToAssetsToAlbumsMapping;
+ (id)pauseICloudPhotosFilePath;
+ (id)pauseTime;
+ (void)performAndWaitOnTransientLibraryWithName:(const char *)arg1 block:(id)arg2;
+ (void)performOnTransientLibraryWithPriority:(long long)arg1 name:(const char *)arg2 block:(id)arg3;
+ (void)performOnTransientLibraryWithPriority:(long long)arg1 name:(const char *)arg2 block:(id)arg3 completionHandler:(id)arg4;
+ (void)performTransactionAndWaitOnTransientLibraryWithName:(const char *)arg1 block:(id)arg2;
+ (id)persistedAlbumDataDirectoryURL;
+ (id)persistedFaceDataDirectoryURL;
+ (id)photoCloudSharingCacheDataDirectory;
+ (id)photoCloudSharingDataDirectory;
+ (id)photoCloudSharingMetadataDirectory;
+ (id)photoDataCPLDerivativeDirectory;
+ (id)photoDataCPLDirectory;
+ (id)photoDataCPLLibraryIdentifier;
+ (id)photoDataCPLResourceDestinationDirectoryWithIdentifier:(id)arg1;
+ (id)photoDataCachesDirectory;
+ (id)photoDataDirectory;
+ (id)photoDataDirectoryURL;
+ (id)photoDataMiscDirectory;
+ (bool)photoLibraryIsObtainable;
+ (id)photoMetadataDirectoryURL;
+ (id)photoMetadataDirectoryURLForMediaInMainDirectory:(id)arg1;
+ (id)photoMutationsDirectory;
+ (id)photoOutboundSharingTmpDirectoryURL;
+ (id)photoStreamsDataDirectory;
+ (void)postGlobalPhotoLibraryAvailableNotification;
+ (bool)processCanReadSandboxForPath:(id)arg1;
+ (bool)processCanWriteSandboxForPath:(id)arg1;
+ (bool)processWithID:(int)arg1 canReadSandboxForPath:(id)arg2;
+ (bool)processWithID:(int)arg1 canWriteSandboxForPath:(id)arg2;
+ (id)queueStatusDescription;
+ (void)recoverFromCrashIfNeeded;
+ (void)refreshCachedCountsOnAllAssetContainersInContext:(id)arg1;
+ (void)refreshCachedCountsOnAssetsContainerClass:(Class)arg1 inContext:(id)arg2 withPredicate:(id)arg3;
+ (bool)removeFaceMetadataAtURL:(id)arg1 includingPeople:(bool)arg2;
+ (void)repairSingletonObjects;
+ (void)resetSyncedAssetsDCIMDirectory;
+ (void)scheduleUserInitiatedAnalysisForAssets:(id)arg1;
+ (void)setApplicationIsWildcat:(bool)arg1;
+ (void)setCameraRollCountedInQuota:(bool)arg1;
+ (void)setCloudAlbumSharingEnabled:(bool)arg1;
+ (void)setDataMigratorFinished:(bool)arg1;
+ (void)setDataProtectionComplete:(bool)arg1;
+ (void)setDisableICloudPhotos:(bool)arg1;
+ (void)setDupeAnalysisNeeded:(bool)arg1;
+ (void)setEnableICloudPhotos:(bool)arg1;
+ (void)setICloudPhotosEnabled:(bool)arg1;
+ (void)setImageWriterIsBusy:(bool)arg1;
+ (void)setLibraryAvailableIndicatorState:(bool)arg1;
+ (void)setMigratorIsBusy:(bool)arg1;
+ (void)setMomentAnalysisNeeded:(bool)arg1;
+ (void)setPauseMarker:(bool)arg1;
+ (void)setPhotoStreamEnabled:(bool)arg1;
+ (void)setSqliteErrorAndExitIfNecessary;
+ (void)setStreamsLibraryUpdatingExpired:(bool)arg1;
+ (void)setTakingPhotoIsBusy:(bool)arg1;
+ (void)setUnverifiedFaceCountThreshold:(unsigned long long)arg1;
+ (void)setVideoCaptureIsBusy:(bool)arg1;
+ (id)sharedPhotoLibrary;
+ (unsigned long long)sharedStreamsSize;
+ (id)simpleDCIMDirectory;
+ (id)sqliteErrorIndicatorFilePath;
+ (id)streamsLibraryUpdatingExpiredIndicatorFilePath;
+ (id)syncInfoPath;
+ (id)syncedAlbumSubtitleStringFormat;
+ (id)takingPhotoIndicatorFilePath;
+ (id)takingVideoIndicatorFilePath;
+ (unsigned long long)unverifiedFaceCountThreshold;
+ (void)updateAlbumKeyAssetsInContext:(id)arg1 withPredicate:(id)arg2;
+ (void)updateAssetPlayShareViewCountsInContext:(id)arg1;
+ (void)updateICloudPhotosMarkerForEnable:(bool)arg1;
+ (id)videosPath;

- (void).cxx_destruct;
- (id)_allAssetsForDeletion:(id)arg1;
- (void)_batchDeleteAssets:(id)arg1 inManagedObjectContext:(id)arg2 withReason:(id)arg3;
- (void)_calculatePendingItemCountsAfterOTARestoreWithMangedObjectContext:(id)arg1;
- (bool)_checkMomentAnalysisCompletion;
- (void)_deleteObsoleteMetadataFiles;
- (void)_enumerateFilesAtURL:(id)arg1 withBlock:(id)arg2;
- (void)_enumerateFilesAtURLs:(id)arg1 withBlock:(id)arg2;
- (id)_fetchCompleteAssetIDsWithSavedAssetType:(short)arg1 context:(id)arg2;
- (void)_filterAlbums:(id)arg1 toTrashableAlbums:(id*)arg2 deletableAlbums:(id*)arg3 otherAlbums:(id*)arg4;
- (void)_filterAssets:(id)arg1 toTrashableAssets:(id*)arg2 deletableAssets:(id*)arg3 otherAssets:(id*)arg4;
- (bool)_hasAtLeastOneItem:(bool)arg1;
- (bool)_hasIncompleteAsset;
- (bool)_hasPendingAssetsIgnoreiTunes:(bool)arg1;
- (id)_init;
- (void)_linkAsideAlbumMetadataForOTARestore;
- (void)_loadFileExtensionInformation;
- (void)_processPhotoIrisSidecarIfNecessary:(id)arg1 forAsset:(id)arg2;
- (void)_recreateItemsFromMetadataAtDirectoryURLs:(id)arg1;
- (void)_removeOldFaceMetadataAsync;
- (void)_removeSyncedAlbumsInTransactionWithManagedObjectContext:(id)arg1;
- (void)_safeSave:(id)arg1;
- (void)_updateHasAtLeastOnePhotoWithGPSWithInsertedCount:(unsigned long long)arg1 deletedCount:(unsigned long long)arg2 updatedAssets:(id)arg3;
- (void)_updateWithInsertedAssetsCount:(unsigned long long)arg1 deletedCount:(unsigned long long)arg2 updatedAssets:(id)arg3;
- (void)_userApplyTrashedState:(short)arg1 toAlbums:(id)arg2;
- (void)_userApplyTrashedState:(short)arg1 toAssets:(id)arg2;
- (void)_userDeleteAlbums:(id)arg1;
- (void)_userDeleteAssets:(id)arg1 withReason:(id)arg2;
- (void)_withDispatchGroup:(id)arg1 synchronously:(bool)arg2 priority:(long long)arg3 name:(id)arg4 shouldSave:(bool)arg5 performTransaction:(id)arg6 completionHandler:(id)arg7;
- (void)addCompletionHandlerToCurrentTransaction:(id)arg1;
- (id)addDCIMEntryAtFileURL:(id)arg1 toEvent:(struct NSObject { Class x1; }*)arg2 sidecarFileInfo:(id)arg3 progress:(id)arg4 importSessionIdentifier:(id)arg5 isImported:(bool)arg6 previewImage:(id)arg7 thumbnailImage:(id)arg8 savedAssetType:(short)arg9 replacementUUID:(id)arg10 publicGlobalUUID:(id)arg11 extendedInfo:(id)arg12 thumbnailsData:(struct __CFDictionary { }*)arg13 withUUID:(id)arg14 ignoreEmbeddedMetadata:(bool)arg15 isPlaceholder:(bool)arg16;
- (void)addSidecarFileInfo:(id)arg1 toAsset:(id)arg2 atIndex:(unsigned long long)arg3;
- (bool)addSidecarFileToAsset:(id)arg1 atIndex:(unsigned long long)arg2 sidecarURL:(id)arg3 withFilename:(id)arg4 originalFilename:(id)arg5 compressedSize:(id)arg6 captureDate:(id)arg7 modificationDate:(id)arg8 uniformTypeIdentifier:(id)arg9;
- (void)addToKnownPhotoStreamAlbums:(id)arg1;
- (struct NSObject { Class x1; }*)albumFromGroupURL:(id)arg1;
- (id)albumListForAlbumOfKind:(int)arg1;
- (id)albumListForContentMode:(int)arg1;
- (struct NSObject { Class x1; }*)albumWithUuid:(id)arg1;
- (id)albums;
- (id)albumsForContentMode:(int)arg1;
- (id)allImportedPhotosAlbum;
- (id)allImportedPhotosAlbumCreateIfNeeded:(bool)arg1;
- (struct NSObject { Class x1; }*)allPhotoStreamPhotosAlbum;
- (struct NSObject { Class x1; }*)allPhotosAlbum;
- (struct NSObject { Class x1; }*)allPhotosAlbumIfExists;
- (id)assetURLForManagedPhoto:(id)arg1;
- (id)assetURLForPhoto:(id)arg1;
- (id)assetURLForPhoto:(id)arg1 extension:(id)arg2;
- (id)assetWithUUID:(id)arg1;
- (id)assetWithUUID:(id)arg1 inContainer:(id)arg2;
- (void)cleanupAfterImportAllDCIMAssets;
- (void)cleanupFilesAfteriTunesSyncBeforeDate:(id)arg1;
- (void)cleanupForStoreDemoMode;
- (void)cleanupModelForDataMigrationPurgeMissingSharedAndSynced;
- (void)clientApplicationWillEnterForeground;
- (unsigned long long)concurrencyType;
- (void)copyAssetToCameraRoll:(id)arg1;
- (unsigned long long)countOfLocalAlbumsContainingAssets:(id)arg1 assetsInSomeAlbumCount:(long long*)arg2;
- (id)dataForPhoto:(id)arg1 format:(int)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8;
- (void)dealloc;
- (bool)deleteAllDiagnosticFiles:(id*)arg1;
- (void)deleteAllImages;
- (void)deleteExpiredTrashBinObjects;
- (void)deleteFailedInMemoryCameraAsset:(id)arg1;
- (void)deleteITunesSyncedContentWithReason:(id)arg1;
- (id)duplicatePhotoStreamPhotosForPhotos:(id)arg1;
- (unsigned long long)editableAlbumCount;
- (struct NSObject { Class x1; }*)eventAlbumContainingPhoto:(id)arg1;
- (id)eventAlbums;
- (struct NSObject { Class x1; }*)eventWithName:(id)arg1 andImportSessionIdentifier:(id)arg2;
- (id)existingObjectWithID:(id)arg1 error:(id*)arg2;
- (id)faceAlbums;
- (struct NSObject { Class x1; }*)favoritesAlbum;
- (struct NSObject { Class x1; }*)filesystemImportProgressAlbum;
- (void)flushAlbums;
- (void)flushDCIMAlbums;
- (void)flushPhotoStreamAlbums;
- (bool)getPhotoCount:(unsigned long long*)arg1 videoCount:(unsigned long long*)arg2;
- (bool)getPhotoCount:(unsigned long long*)arg1 videoCount:(unsigned long long*)arg2 excludeTrashed:(bool)arg3 excludeInvisible:(bool)arg4 excludeCloudShared:(bool)arg5;
- (id)globalValueForKey:(id)arg1;
- (bool)hasAtLeastOneItem;
- (bool)hasAtLeastOnePhoto;
- (bool)hasAtLeastOnePhotoWithGPS;
- (bool)hasCompletedMomentAnalysis;
- (bool)hasCompletedRestorePostProcessing;
- (bool)hasITunesSyncedContent;
- (bool)hasPhotoWithFileCreationDate:(id)arg1 fileName:(id)arg2 fileSize:(long long)arg3;
- (struct NSObject { Class x1; }*)iPadAllPhotosAlbum;
- (struct NSObject { Class x1; }*)iPadAllPhotosAlbumIfExists;
- (id)iTunesSyncedContentInfo;
- (id)imageForFormat:(int)arg1 forAsset:(id)arg2;
- (id)imagePickerAlbums;
- (id)importAlbums;
- (id)incompleteRestoreProcesses;
- (id)init;
- (id)initWithName:(const char *)arg1;
- (id)initWithTransientContext:(bool)arg1 name:(const char *)arg2;
- (bool)isAudioFileExtension:(id)arg1;
- (bool)isImageFileExtension:(id)arg1;
- (bool)isNonRawImageFileExtension:(id)arg1;
- (bool)isRawImageFileExtension:(id)arg1;
- (bool)isReadyForCloudPhotoLibrary;
- (bool)isTransient;
- (bool)isVideoFileExtension:(id)arg1;
- (id)lastImportSessionUUID;
- (id)lastImportedPhotosAlbum;
- (id)lastImportedPhotosAlbumCreateIfNeeded:(bool)arg1;
- (id)librarySizes;
- (void)loadDatabase:(const char *)arg1;
- (id)managedObjectContext;
- (id)managedObjectContextStoreUUID;
- (id)managedObjectWithObjectID:(id)arg1;
- (id)masterFilenameFromSidecarFileInfo:(id)arg1;
- (id)masterURLFromSidecarURLs:(id)arg1;
- (id)memoryWithUuid:(id)arg1;
- (void)modifyDCIMEntryForPhoto:(id)arg1;
- (id)name;
- (bool)needsMigration;
- (id)newImageForPhoto:(id)arg1 format:(int)arg2;
- (id)newImageForPhoto:(id)arg1 format:(int)arg2 allowPlaceholder:(bool)arg3 outImageProperties:(const struct __CFDictionary {}**)arg4 outDeliveredPlaceholder:(bool*)arg5;
- (unsigned long long)numberOfCPLSupportedAssetsOfKind:(short)arg1 includingTrashedSinceDate:(id)arg2;
- (unsigned long long)numberOfUnpushedAssetsOfKind:(short)arg1;
- (id)objectWithObjectID:(id)arg1;
- (struct NSObject { Class x1; }*)otaRestoreProgressAlbum;
- (void)performBlock:(id)arg1;
- (void)performBlock:(id)arg1 completionHandler:(id)arg2;
- (void)performBlock:(id)arg1 completionHandler:(id)arg2 withPriority:(long long)arg3;
- (void)performBlock:(id)arg1 withPriority:(long long)arg2;
- (void)performBlockAndWait:(id)arg1;
- (void)performBlockAndWait:(id)arg1 completionHandler:(id)arg2;
- (void)performTransaction:(id)arg1;
- (void)performTransaction:(id)arg1 completionHandler:(id)arg2;
- (void)performTransaction:(id)arg1 completionHandler:(id)arg2 withPriority:(long long)arg3;
- (void)performTransaction:(id)arg1 withPriority:(long long)arg2;
- (void)performTransactionAndWait:(id)arg1;
- (void)performTransactionAndWait:(id)arg1 completionHandler:(id)arg2;
- (id)photoFromAssetURL:(id)arg1;
- (void)photoLibraryCorruptNotification;
- (id)photoStreamAlbums;
- (id)photoStreamAlbumsForPreferences;
- (id)placeAlbums;
- (void)prepareDatabaseForOTAAssetsPhase;
- (int)priorityForFileExtension:(id)arg1;
- (void)processSyncSaveJob:(id)arg1 albumMap:(id)arg2;
- (void)recreateAlbumsFromMetadata;
- (void)recreateFacesFromMetadata;
- (void)removeFromKnownPhotoStreamAlbums:(id)arg1;
- (void)resetCachedImportAlbumsIfNeededForAlbum:(id)arg1;
- (id)rootAlbumList;
- (id)rootFolder;
- (void)setGlobalValue:(id)arg1 forKey:(id)arg2;
- (void)setLastImportSessionUUID:(id)arg1;
- (void)setManagedObjectContext:(id)arg1;
- (struct NSObject { Class x1; }*)syncProgressAlbum;
- (id)syncProgressAlbumsIgnoreiTunes:(bool)arg1;
- (id)syncedAlbums;
- (void)testForRecoveryInBackground;
- (id)userAlbums;
- (void)userExpungeAlbums:(id)arg1;
- (void)userExpungeAssets:(id)arg1;
- (id)userLibraryAlbum;
- (void)userTrashAlbums:(id)arg1;
- (void)userTrashAssets:(id)arg1;
- (void)userUntrashAlbums:(id)arg1;
- (void)userUntrashAssets:(id)arg1;
- (id)wallpaperAlbums;
- (void)withDispatchGroup:(id)arg1 performBlock:(id)arg2;
- (void)withDispatchGroup:(id)arg1 performTransaction:(id)arg2;
- (void)withDispatchGroup:(id)arg1 performTransaction:(id)arg2 completionHandler:(id)arg3;

@end
