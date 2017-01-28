/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPublicIdentityLookupRequest : CKDCacheBasedRequest {
    id  _lookupCompletionBlock;
    NSMutableArray * _lookupInfosToFetch;
    NSArray * _originalLookupInfosToFetch;
    id  _perLookupInfoProgressBlock;
}

@property (nonatomic, copy) id lookupCompletionBlock;
@property (nonatomic, retain) NSMutableArray *lookupInfosToFetch;
@property (nonatomic, retain) NSArray *originalLookupInfosToFetch;
@property (nonatomic, copy) id perLookupInfoProgressBlock;

+ (void)removeCacheForLookupInfos:(id)arg1 inCache:(id)arg2;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)_generateOONPrivateKeyWithError:(id*)arg1;
- (void)_receivedUserIdentity:(id)arg1 forLookupInfo:(id)arg2 error:(id)arg3;
- (void)_saveUserIdentity:(id)arg1 forLookupInfo:(id)arg2;
- (bool)_tryComplete;
- (id)ckShortDescription;
- (id)description;
- (void)finishWithError:(id)arg1;
- (id)initWithLookupInfos:(id)arg1;
- (id)lookupCompletionBlock;
- (id)lookupInfosToFetch;
- (id)originalLookupInfosToFetch;
- (id)perLookupInfoProgressBlock;
- (void)performRequest;
- (void)setLookupCompletionBlock:(id)arg1;
- (void)setLookupInfosToFetch:(id)arg1;
- (void)setOriginalLookupInfosToFetch:(id)arg1;
- (void)setPerLookupInfoProgressBlock:(id)arg1;
- (id)spawnURLRequests;

@end
