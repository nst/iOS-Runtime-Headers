/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDInitiateParticipantVettingURLRequest : CKDURLRequest {
    NSString * _baseToken;
    NSData * _encryptedKey;
    NSString * _participantID;
    CKRecordID * _shareRecordID;
    id  _vettingInitiationRequestCompletionBlock;
}

@property (nonatomic, copy) NSString *baseToken;
@property (nonatomic, copy) NSData *encryptedKey;
@property (nonatomic, copy) NSString *participantID;
@property (nonatomic, copy) CKRecordID *shareRecordID;
@property (nonatomic, copy) id vettingInitiationRequestCompletionBlock;

- (void).cxx_destruct;
- (id)baseToken;
- (id)encryptedKey;
- (id)initWithShareRecordID:(id)arg1 encryptedKey:(id)arg2 participantID:(id)arg3 baseToken:(id)arg4;
- (int)operationType;
- (id)participantID;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (void)setBaseToken:(id)arg1;
- (void)setEncryptedKey:(id)arg1;
- (void)setParticipantID:(id)arg1;
- (void)setShareRecordID:(id)arg1;
- (void)setVettingInitiationRequestCompletionBlock:(id)arg1;
- (id)shareRecordID;
- (id)vettingInitiationRequestCompletionBlock;

@end
