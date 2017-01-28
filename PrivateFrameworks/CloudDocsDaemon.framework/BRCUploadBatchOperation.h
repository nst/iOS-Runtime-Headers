/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCUploadBatchOperation : BRCTransferBatchOperation {
    BRCClientZone * _clientZone;
    id  _perUploadCompletionBlock;
}

@property (copy) id perUploadCompletionBlock;

- (void).cxx_destruct;
- (void)_uploadRecordsByID:(id)arg1;
- (id)actionPrettyName;
- (void)addItem:(id)arg1 stageID:(id)arg2 record:(id)arg3 transferSize:(unsigned long long)arg4;
- (id)createActivity;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithSyncContext:(id)arg1 clientZone:(id)arg2;
- (void)mainWithTransfers:(id)arg1;
- (id)perUploadCompletionBlock;
- (void)sendTransferCompletionCallBack:(id)arg1 error:(id)arg2;
- (void)setPerUploadCompletionBlock:(id)arg1;

@end
