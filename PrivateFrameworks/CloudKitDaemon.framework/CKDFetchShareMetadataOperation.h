/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchShareMetadataOperation : CKDOperation {
    bool  _clientWillDisplaySystemAcceptPrompt;
    bool  _errorOnOON;
    bool  _forceDSRefetch;
    NSSet * _rootRecordDesiredKeysSet;
    id  _shareMetadataFetchedBlock;
    NSMutableDictionary * _shareTokenMetadatasToFetchByURL;
    NSMutableArray * _shareURLsToFetch;
    bool  _shouldFetchRootRecord;
}

@property (nonatomic) bool clientWillDisplaySystemAcceptPrompt;
@property (nonatomic) bool errorOnOON;
@property (nonatomic) bool forceDSRefetch;
@property (nonatomic, retain) NSSet *rootRecordDesiredKeysSet;
@property (nonatomic, copy) id shareMetadataFetchedBlock;
@property (nonatomic, retain) NSMutableDictionary *shareTokenMetadatasToFetchByURL;
@property (nonatomic, retain) NSMutableArray *shareURLsToFetch;
@property (nonatomic) bool shouldFetchRootRecord;

- (void).cxx_destruct;
- (id)_decodeProtectedFullToken:(id)arg1 tokenMetadata:(id)arg2;
- (void)_fetchShortTokenMetadata;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_performCallbackAfterFetchingRootRecordForURL:(id)arg1 withMetadata:(id)arg2;
- (void)_performCallbackForURL:(id)arg1 withMetadata:(id)arg2 error:(id)arg3;
- (void)_prepareShortTokens;
- (id)activityCreate;
- (bool)clientWillDisplaySystemAcceptPrompt;
- (bool)errorOnOON;
- (bool)forceDSRefetch;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (bool)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;
- (id)rootRecordDesiredKeysSet;
- (void)setClientWillDisplaySystemAcceptPrompt:(bool)arg1;
- (void)setErrorOnOON:(bool)arg1;
- (void)setForceDSRefetch:(bool)arg1;
- (void)setRootRecordDesiredKeysSet:(id)arg1;
- (void)setShareMetadataFetchedBlock:(id)arg1;
- (void)setShareTokenMetadatasToFetchByURL:(id)arg1;
- (void)setShareURLsToFetch:(id)arg1;
- (void)setShouldFetchRootRecord:(bool)arg1;
- (id)shareMetadataFetchedBlock;
- (id)shareTokenMetadatasToFetchByURL;
- (id)shareURLsToFetch;
- (bool)shouldFetchRootRecord;

@end
