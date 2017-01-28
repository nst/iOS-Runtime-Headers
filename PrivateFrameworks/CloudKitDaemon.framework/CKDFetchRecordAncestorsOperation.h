/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchRecordAncestorsOperation : CKDDatabaseOperation {
    id  _ancestorFetchedBlock;
    NSArray * _recordIDs;
    id  _shareRecordFetchedBlock;
}

@property (nonatomic, copy) id ancestorFetchedBlock;
@property (nonatomic, retain) NSArray *recordIDs;
@property (nonatomic, copy) id shareRecordFetchedBlock;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)ancestorFetchedBlock;
- (void)finishWithError:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (id)recordIDs;
- (void)setAncestorFetchedBlock:(id)arg1;
- (void)setRecordIDs:(id)arg1;
- (void)setShareRecordFetchedBlock:(id)arg1;
- (id)shareRecordFetchedBlock;

@end