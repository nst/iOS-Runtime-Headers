/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKPublishAssetsOperation : CKDatabaseOperation {
    unsigned long long  _URLOptions;
    id  _assetPublishedBlock;
    NSDictionary * _fileNamesByAssetFieldNames;
    id  _publishAssetCompletionBlock;
    NSArray * _recordIDs;
    unsigned long long  _requestedTTL;
}

@property (nonatomic) unsigned long long URLOptions;
@property (nonatomic, copy) id assetPublishedBlock;
@property (nonatomic, retain) NSDictionary *fileNamesByAssetFieldNames;
@property (nonatomic, copy) id publishAssetCompletionBlock;
@property (nonatomic, retain) NSArray *recordIDs;
@property (nonatomic) unsigned long long requestedTTL;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (unsigned long long)URLOptions;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)activityCreate;
- (id)assetPublishedBlock;
- (id)fileNamesByAssetFieldNames;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (bool)hasCKOperationCallbacksSet;
- (id)initWithRecordIDs:(id)arg1;
- (void)performCKOperation;
- (id)publishAssetCompletionBlock;
- (id)recordIDs;
- (unsigned long long)requestedTTL;
- (void)setAssetPublishedBlock:(id)arg1;
- (void)setFileNamesByAssetFieldNames:(id)arg1;
- (void)setPublishAssetCompletionBlock:(id)arg1;
- (void)setRecordIDs:(id)arg1;
- (void)setRequestedTTL:(unsigned long long)arg1;
- (void)setURLOptions:(unsigned long long)arg1;

@end
