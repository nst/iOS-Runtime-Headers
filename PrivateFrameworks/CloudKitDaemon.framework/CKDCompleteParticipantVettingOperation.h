/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDCompleteParticipantVettingOperation : CKDOperation {
    NSString * _baseToken;
    NSData * _encryptedKey;
    struct _OpaquePCSShareProtection { } * _protectionInfo;
    NSString * _routingKey;
    CKShareMetadata * _shareMetadata;
    NSString * _shortToken;
    id /* block */  _verifyCompletionBlock;
    id /* block */  _verifyProgressShareMetadataFetchedBlock;
    id /* block */  _verifyProgressURLReconstructedBlock;
    NSString * _vettingEmail;
    NSString * _vettingPhone;
    NSString * _vettingToken;
}

@property (nonatomic, readonly) NSString *baseToken;
@property (nonatomic, readonly) NSData *encryptedKey;
@property (nonatomic) struct _OpaquePCSShareProtection { }*protectionInfo;
@property (nonatomic, readonly) NSString *routingKey;
@property (nonatomic, retain) CKShareMetadata *shareMetadata;
@property (nonatomic, retain) NSString *shortToken;
@property (nonatomic, copy) id /* block */ verifyCompletionBlock;
@property (nonatomic, copy) id /* block */ verifyProgressShareMetadataFetchedBlock;
@property (nonatomic, copy) id /* block */ verifyProgressURLReconstructedBlock;
@property (nonatomic, readonly) NSString *vettingEmail;
@property (nonatomic, readonly) NSString *vettingPhone;
@property (nonatomic, readonly) NSString *vettingToken;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_forceFetchShareMetadata;
- (void)_performAuthKitVerification;
- (void)_reconstructShareURL;
- (void)_reconstructShortToken;
- (void)_verifyOONParticipant;
- (id)activityCreate;
- (id)baseToken;
- (id)encryptedKey;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (bool)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;
- (struct _OpaquePCSShareProtection { }*)protectionInfo;
- (id)routingKey;
- (void)setProtectionInfo:(struct _OpaquePCSShareProtection { }*)arg1;
- (void)setShareMetadata:(id)arg1;
- (void)setShortToken:(id)arg1;
- (void)setVerifyCompletionBlock:(id /* block */)arg1;
- (void)setVerifyProgressShareMetadataFetchedBlock:(id /* block */)arg1;
- (void)setVerifyProgressURLReconstructedBlock:(id /* block */)arg1;
- (id)shareMetadata;
- (id)shortSharingTokenFromData:(id)arg1;
- (id)shortSharingTokenFromFullToken:(id)arg1;
- (id)shortToken;
- (id /* block */)verifyCompletionBlock;
- (id /* block */)verifyProgressShareMetadataFetchedBlock;
- (id /* block */)verifyProgressURLReconstructedBlock;
- (id)vettingEmail;
- (id)vettingPhone;
- (id)vettingToken;

@end
