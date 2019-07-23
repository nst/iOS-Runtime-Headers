/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUISidebandMediaLibrary : VUIDeviceMediaLibrary {
    NSManagedObjectContext * _backgroundManagedObjectContext;
    NSPersistentContainer * _persistentContainer;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, retain) NSManagedObjectContext *backgroundManagedObjectContext;
@property (nonatomic, retain) NSPersistentContainer *persistentContainer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;

+ (void)initialize;
+ (void)setDeleteAllVideosAndKeysOnInitializationForAppRemoval:(bool)arg1;

- (void).cxx_destruct;
- (void)_activeAccountDidChange:(id)arg1;
- (void)_deleteVideoManagedObjects:(id)arg1;
- (id)_downloadedVideosForNonSignedInUsers;
- (void)_dumpDatabaseToLogIfEnabled;
- (id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(struct CGSize { double x1; double x2; })arg2 cropToFit:(bool)arg3;
- (id)_imageLoadParamsForImageLoaderObject:(id)arg1;
- (id)_imageLoaderIdentifier;
- (id)_mainContextManagedObjectsForObjects:(id)arg1;
- (void)_mainQueueManagedObjectContextDidSave:(id)arg1;
- (id)_managedObjectWithEntityName:(id)arg1 predicate:(id)arg2 createIfNeeded:(bool)arg3 wasCreated:(bool*)arg4;
- (id)_movieForCanonicalID:(id)arg1 createIfNeeded:(bool)arg2 wasCreated:(bool*)arg3;
- (void)_pruneVideosAtAppLaunchWithCompletion:(id /* block */)arg1;
- (bool)_removeDownloadedMediaForVideoManagedObject:(id)arg1 saveWhenDone:(bool)arg2;
- (void)_removeDownloadsForNonSignedInUsers;
- (id)_tvEpisodeForCanonicalID:(id)arg1 createIfNeeded:(bool)arg2 wasCreated:(bool*)arg3;
- (id)_tvSeasonForCanonicalID:(id)arg1 createIfNeeded:(bool)arg2 wasCreated:(bool*)arg3;
- (id)_tvSeriesForCanonicalID:(id)arg1 createIfNeeded:(bool)arg2 wasCreated:(bool*)arg3;
- (id)allFpsKeyDeletionInfos;
- (id)backgroundManagedObjectContext;
- (void)dealloc;
- (void)deleteFPSKeyDeletionInfo:(id)arg1;
- (void)deleteFPSKeyDeletionInfos:(id)arg1;
- (id)enqueueFetchRequests:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(id /* block */)arg1;
- (id)existingFpsKeyInfoForKeyURI:(id)arg1;
- (id)fpsKeyInfoForVideo:(id)arg1 keyURI:(id)arg2 createIfNeeded:(bool)arg3 wasCreated:(bool*)arg4;
- (id)imageInfoForSeries:(id)arg1 imageType:(unsigned long long)arg2 createIfNeeded:(bool)arg3 wasCreated:(bool*)arg4;
- (id)imageInfoForVideo:(id)arg1 imageType:(unsigned long long)arg2 createIfNeeded:(bool)arg3 wasCreated:(bool*)arg4;
- (id)initWithManager:(id)arg1;
- (id)mainContextVideoForVideo:(id)arg1;
- (id)persistentContainer;
- (void)removeDownloadedMediaForVideoManagedObject:(id)arg1;
- (void)removeDownloadedMediaForVideoManagedObjects:(id)arg1;
- (void)saveChangesToManagedObjects;
- (id)saveMediaEntity:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)serialQueue;
- (void)setBackgroundManagedObjectContext:(id)arg1;
- (void)setPersistentContainer:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (id)title;
- (id)videoForCanonicalID:(id)arg1;
- (id)videoForPlayable:(id)arg1;
- (id)videosWithDownloadState:(long long)arg1;

@end
