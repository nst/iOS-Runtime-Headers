/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityFilePresenter : NSObject <NSFilePresenter> {
    NSString * _localPeerID;
    NSMutableDictionary * _locationToSafeSaveFile;
    NSMutableDictionary * _locationToStatus;
    NSMutableArray * _pendingURLs;
    int  _pendingURLsLock;
    NSURL * _presentedItemURL;
    NSObject<OS_dispatch_queue> * _processingQueue;
    bool  _scheduledProcessingBlock;
    NSString * _storeName;
    PFUbiquityLocation * _ubiquityRootLocation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *localPeerID;
@property (nonatomic, readonly) NSDictionary *locationToSafeSaveFile;
@property (nonatomic, readonly) NSDictionary *locationToStatus;
@property (readonly) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;
@property (readonly) PFUbiquityLocation *ubiquityRootLocation;

+ (id)cloudDocsRootFolder;
+ (void)initialize;
+ (void)registerInitialSyncHandlerForURL:(id)arg1 andContainerID:(id)arg2 onQueue:(id)arg3 withBlock:(id)arg4;
+ (id)sharedPrivateOperationQueue;
+ (void)startDownloadForItems:(id)arg1 onQueue:(id)arg2 withBlock:(id)arg3;
+ (int)usesCloudDocsFramework;

- (id)copyStatusDictionary;
- (void)dealloc;
- (id)description;
- (void)exporterDidMoveLog:(id)arg1;
- (id)init;
- (id)initWithUbiquityRootLocation:(id)arg1 localPeerID:(id)arg2 storeName:(id)arg3 processingQueue:(id)arg4;
- (bool)isiCloudExtension:(id)arg1;
- (id)localPeerID;
- (id)locationToSafeSaveFile;
- (id)locationToStatus;
- (void)logImportWasCancelled:(id)arg1;
- (void)logWasExported:(id)arg1;
- (void)logWasImported:(id)arg1;
- (void)logsWereScheduled:(id)arg1;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)presentedSubitemDidChangeAtURL:(id)arg1;
- (void)presentedSubitemUbiquityDidChangeAtURL:(id)arg1;
- (void)printStatus:(id)arg1;
- (void)processPendingURLs;
- (void)registerSafeSaveFile:(id)arg1;
- (void)relinquishPresentedItemToReader:(id)arg1;
- (void)relinquishPresentedItemToWriter:(id)arg1;
- (id)retainedStatusForLocation:(id)arg1;
- (void)setupAssistantDiscoveredPathsFromMetadataQuery:(id)arg1;
- (id)ubiquityRootLocation;
- (void)unregisterSafeSaveFile:(id)arg1;

@end
