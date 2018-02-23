/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLManagedAssetRecoveryManager : NSObject {
    int  _assetsDownloadsCount;
    PLPhotoLibrary * _photoLibrary;
    NSObject<OS_dispatch_queue> * _resourceDownloadIsolationQueue;
    long long  _state;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) int assetsDownloadsCount;
@property (nonatomic, retain) PLPhotoLibrary *photoLibrary;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *resourceDownloadIsolationQueue;
@property (nonatomic) long long state;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_assetKindsAllowedForDownloading;
- (void)_downloadResources:(id)arg1 forAsset:(id)arg2 usingCloudPhotoLibraryManager:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_fixAdjustedAssetWithMissingDerivatives:(id)arg1 cloudPhotoLibraryManager:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_fixDimensionsForAsset:(id)arg1 cloudPhotoLibraryManager:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_fixIrisWithZeroVideoComplementDuration:(id)arg1 cloudPhotoLibraryManager:(id)arg2 completionBlock:(id /* block */)arg3;
- (bool)_fixIrisWithZeroVideoComplementDuration:(id)arg1 usingExistingVideoComplementAtPath:(id)arg2 error:(id*)arg3;
- (void)_fixOriginalAssetDimensionsForAsset:(id)arg1 cloudPhotoLibraryManager:(id)arg2 completionBlock:(id /* block */)arg3;
- (bool)_fixRawUTIForAsset:(id)arg1 error:(id*)arg2;
- (void)_performAssetRecoveryTaskForInconsistentState:(id)arg1 state:(long long)arg2 usingCloudPhotoLibraryManager:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)_recoverAsset:(id)arg1 usingCloudPhotoLibraryManager:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_setCloudRecoveryState:(long long)arg1 forAssetsWithFetchRequestPredicate:(id)arg2 resultsFilterPredicate:(id)arg3;
- (int)assetsDownloadsCount;
- (void)identifyAssetsInInconsistentCloudState;
- (id)init;
- (id)photoLibrary;
- (id)resourceDownloadIsolationQueue;
- (void)setAssetsDownloadsCount:(int)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (void)setResourceDownloadIsolationQueue:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)startRecoveryOfAssetsInInconsistentCloudStateUsingCloudPhotoLibraryManager:(id)arg1;
- (long long)state;
- (id)workQueue;

@end
