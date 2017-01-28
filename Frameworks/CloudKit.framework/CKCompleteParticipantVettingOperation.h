/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKCompleteParticipantVettingOperation : CKOperation {
    NSString * _baseToken;
    id  _completeParticipantVettingCompletionBlock;
    NSData * _encryptedKey;
    NSURL * _reconstructedShareURL;
    NSString * _routingKey;
    CKShareMetadata * _shareMetadata;
    NSError * _verificationError;
    NSString * _vettingEmail;
    NSString * _vettingPhone;
    NSString * _vettingToken;
}

@property (nonatomic, copy) NSString *baseToken;
@property (nonatomic, copy) id completeParticipantVettingCompletionBlock;
@property (nonatomic, copy) NSData *encryptedKey;
@property (nonatomic, copy) NSURL *reconstructedShareURL;
@property (nonatomic, copy) NSString *routingKey;
@property (nonatomic, retain) CKShareMetadata *shareMetadata;
@property (nonatomic, retain) NSError *verificationError;
@property (nonatomic, copy) NSString *vettingEmail;
@property (nonatomic, copy) NSString *vettingPhone;
@property (nonatomic, copy) NSString *vettingToken;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)activityCreate;
- (id)baseToken;
- (id)completeParticipantVettingCompletionBlock;
- (id)encryptedKey;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id)init;
- (id)initWithVettingToken:(id)arg1 vettingRecord:(id)arg2;
- (void)performCKOperation;
- (id)reconstructedShareURL;
- (id)routingKey;
- (void)setBaseToken:(id)arg1;
- (void)setCompleteParticipantVettingCompletionBlock:(id)arg1;
- (void)setEncryptedKey:(id)arg1;
- (void)setReconstructedShareURL:(id)arg1;
- (void)setRoutingKey:(id)arg1;
- (void)setShareMetadata:(id)arg1;
- (void)setVerificationError:(id)arg1;
- (void)setVettingEmail:(id)arg1;
- (void)setVettingPhone:(id)arg1;
- (void)setVettingToken:(id)arg1;
- (id)shareMetadata;
- (id)verificationError;
- (id)vettingEmail;
- (id)vettingPhone;
- (id)vettingToken;

@end
