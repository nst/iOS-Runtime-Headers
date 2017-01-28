/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASAssetTransferer : NSObject <MMCSEngineDelegate> {
    MSBackoffManager * _backoffManager;
    MSAlbumSharingDaemon * _daemon;
    id  _delegate;
    MMCSEngine * _engine;
    NSObject<OS_dispatch_queue> * _eventQueue;
    NSString * _focusAlbumGUID;
    NSString * _focusAssetCollectionGUID;
    bool  _hasShutDown;
    int  _maxBatchCount;
    double  _maxMMCSTokenValidityTimeInterval;
    int  _maxRetryCount;
    MSASPersonModel * _model;
    NSString * _personID;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) MSBackoffManager *backoffManager;
@property (nonatomic) MSAlbumSharingDaemon *daemon;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MMCSEngine *engine;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *eventQueue;
@property (nonatomic, copy) NSString *focusAlbumGUID;
@property (nonatomic, copy) NSString *focusAssetCollectionGUID;
@property (nonatomic) bool hasShutDown;
@property (readonly) unsigned long long hash;
@property (nonatomic) int maxBatchCount;
@property (nonatomic) double maxMMCSTokenValidityTimeInterval;
@property (nonatomic) int maxRetryCount;
@property (nonatomic) MSASPersonModel *model;
@property (nonatomic, copy) NSString *personID;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)MMCSEngine:(id)arg1 didCreateRequestorContext:(id)arg2 forAssets:(id)arg3;
- (void)MMCSEngine:(id)arg1 didFinishGettingAsset:(id)arg2 path:(id)arg3 error:(id)arg4;
- (void)MMCSEngine:(id)arg1 didFinishPuttingAsset:(id)arg2 putReceipt:(id)arg3 error:(id)arg4;
- (void)MMCSEngine:(id)arg1 didMakeGetProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;
- (void)MMCSEngine:(id)arg1 didMakePutProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;
- (void)MMCSEngine:(id)arg1 logMessage:(id)arg2 logLevel:(int)arg3;
- (void)MMCSEngine:(id)arg1 logPerformanceMetrics:(id)arg2;
- (bool)MMCSEngine:(id)arg1 shouldLogAtLogLevel:(int)arg2;
- (id)_MMCSTokenTooOldError;
- (id)_canceledError;
- (id)_missingMMCSTokenError;
- (id)_missingURLError;
- (id)_pathForPersonID:(id)arg1;
- (void)_rereadPerformanceLoggingSetting;
- (void)_sendDidIdleNotification;
- (id)backoffManager;
- (void)cancelCompletionBlock:(id)arg1;
- (id)daemon;
- (void)dealloc;
- (id)delegate;
- (void)didFinishGettingAllAssets;
- (void)didFinishPuttingAllAssets;
- (id)engine;
- (id)eventQueue;
- (id)focusAlbumGUID;
- (id)focusAssetCollectionGUID;
- (bool)hasShutDown;
- (id)initWithPersonID:(id)arg1;
- (id)initWithPersonID:(id)arg1 eventQueue:(id)arg2;
- (int)maxBatchCount;
- (double)maxMMCSTokenValidityTimeInterval;
- (int)maxRetryCount;
- (id)model;
- (id)personID;
- (void)retryOutstandingActivities;
- (void)setBackoffManager:(id)arg1;
- (void)setDaemon:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEventQueue:(id)arg1;
- (void)setFocusAlbumGUID:(id)arg1;
- (void)setFocusAssetCollectionGUID:(id)arg1;
- (void)setHasShutDown:(bool)arg1;
- (void)setMaxBatchCount:(int)arg1;
- (void)setMaxMMCSTokenValidityTimeInterval:(double)arg1;
- (void)setMaxRetryCount:(int)arg1;
- (void)setModel:(id)arg1;
- (void)setPersonID:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)shutDownCompletionBlock:(id)arg1;
- (void)stopCompletionBlock:(id)arg1;
- (id)workQueue;
- (void)workQueueCancel;
- (double)workQueueMaxMMCSTokenValidityTimeInterval;
- (unsigned long long)workQueueNextItemID;
- (void)workQueueRetryOutstandingActivities;
- (void)workQueueShutDownCompletionBlock:(id)arg1;
- (void)workQueueStop;

@end
