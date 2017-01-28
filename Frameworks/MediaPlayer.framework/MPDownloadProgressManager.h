/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPDownloadProgressManager : NSObject <ATDownloadProgressObserver, MPStoreDownloadManagerObserver, NSXPCListenerDelegate> {
    NSXPCConnection * _atcConnection;
    NSMutableDictionary * _cachedATActiveDownloads;
    NSMutableDictionary * _cachedATDownloads;
    NSMutableSet * _downloadObservers;
    NSMutableDictionary * _downloadProgressMap;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _running;
    MPStoreDownloadManager * _storeDownloadManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_connectToAirTraffic;
- (id)_identifierForStoreDownload:(id)arg1;
- (id)_mpStoreDownloadFromATAsset:(id)arg1;
- (void)_prefectchAllATDownloads;
- (void)_setupAirTrafficObserver;
- (id)_storeKindForAssetType:(id)arg1;
- (id)activeDownloadForMediaItemPersistentID:(unsigned long long)arg1;
- (id)activeDownloadForStoreID:(long long)arg1;
- (void)addObserver:(id)arg1;
- (void)atcDidDownloadAsset:(id)arg1 withError:(id)arg2;
- (void)atcDidEnqueueAsset:(id)arg1;
- (void)atcDidUpdateActiveStateTransitionForAssets:(id)arg1;
- (void)atcDidUpdateAsset:(id)arg1 withProgress:(float)arg2;
- (void)dealloc;
- (void)downloadManager:(id)arg1 didAddActiveDownloads:(id)arg2 removeActiveDownloads:(id)arg3;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 downloadsDidProgress:(id)arg2;
- (id)getAllActiveDownloads;
- (id)getAllDownloads;
- (double)getDownloadProgressForItemId:(id)arg1;
- (id)init;
- (void)prioritizeAsset:(id)arg1;
- (void)removeObserver:(id)arg1;

@end
