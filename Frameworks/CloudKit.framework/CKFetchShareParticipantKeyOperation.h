/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchShareParticipantKeyOperation : CKDatabaseOperation {
    NSDictionary * _baseTokensByShareID;
    NSMutableDictionary * _errorsByShareID;
    NSArray * _shareIDs;
    id  _shareParticipantKeyCompletionBlock;
    id  _shareParticipantKeyFetchedBlock;
}

@property (nonatomic, retain) NSDictionary *baseTokensByShareID;
@property (nonatomic, retain) NSMutableDictionary *errorsByShareID;
@property (nonatomic, retain) NSArray *shareIDs;
@property (nonatomic, copy) id shareParticipantKeyCompletionBlock;
@property (nonatomic, copy) id shareParticipantKeyFetchedBlock;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)activityCreate;
- (id)baseTokensByShareID;
- (id)errorsByShareID;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (bool)hasCKOperationCallbacksSet;
- (id)initWithShareIDs:(id)arg1;
- (Class)operationInfoClass;
- (void)performCKOperation;
- (void)setBaseTokensByShareID:(id)arg1;
- (void)setErrorsByShareID:(id)arg1;
- (void)setShareIDs:(id)arg1;
- (void)setShareParticipantKeyCompletionBlock:(id)arg1;
- (void)setShareParticipantKeyFetchedBlock:(id)arg1;
- (id)shareIDs;
- (id)shareParticipantKeyCompletionBlock;
- (id)shareParticipantKeyFetchedBlock;

@end