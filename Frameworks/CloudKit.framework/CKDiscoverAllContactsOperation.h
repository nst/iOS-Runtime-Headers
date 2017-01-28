/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKDiscoverAllContactsOperation : CKOperation {
    id  _discoverAllContactsCompletionBlock;
    NSMutableArray * _discoveredUserInfos;
}

@property (nonatomic, copy) id discoverAllContactsCompletionBlock;
@property (nonatomic, retain) NSMutableArray *discoveredUserInfos;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)activityCreate;
- (id)discoverAllContactsCompletionBlock;
- (id)discoveredUserInfos;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (Class)operationInfoClass;
- (void)performCKOperation;
- (void)setDiscoverAllContactsCompletionBlock:(id)arg1;
- (void)setDiscoveredUserInfos:(id)arg1;
- (void)setLongLived:(bool)arg1;

@end
