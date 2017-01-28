/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDocumentResourceDataProvider : NSObject <TSPDocumentResourceDownloadNotificationProtocol, TSPDocumentResourceDownloader> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    TSPObjectContext * _context;
    bool  _didCancelDownloads;
    bool  _didNotifyObjectContext;
    NSMutableArray * _downloadItems;
    long long  _estimatedDownloadSize;
    NSMutableSet * _infosToDownload;
    bool  _isEstimatedDownloadSizePrecise;
    TSPDocumentResourceManager * _manager;
    NSHashTable * _storagesCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long estimatedDownloadSize;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isEstimatedDownloadSizePrecise;
@property (nonatomic, readonly) bool needsDownload;
@property (readonly) Class superclass;

+ (void)didCompleteDocumentResourceDownloadWithDigestString:(id)arg1;
+ (void)registerDownloadNotificationClass:(Class)arg1;

- (void).cxx_destruct;
- (void)cacheDataForDigestString:(id)arg1 locator:(id)arg2 extension:(id)arg3;
- (void)cancelDownloads;
- (id)dataForDigestString:(id)arg1 locator:(id)arg2 filename:(id)arg3;
- (id)dataForDigestString:(id)arg1 locator:(id)arg2 filename:(id)arg3 needsDownload:(bool*)arg4;
- (id)dataStorageForDigestString:(id)arg1 locator:(id)arg2 extension:(id)arg3;
- (id)dataStorageForDigestString:(id)arg1 locator:(id)arg2 extension:(id)arg3 needsDownload:(bool*)arg4;
- (id)dataStorageForSageLocator:(id)arg1;
- (id)downloadWithDelegate:(id)arg1 description:(id)arg2;
- (long long)estimatedDownloadSize;
- (id)init;
- (id)initWithManager:(id)arg1 context:(id)arg2;
- (bool)isEstimatedDownloadSizePrecise;
- (bool)needsDownload;

@end
