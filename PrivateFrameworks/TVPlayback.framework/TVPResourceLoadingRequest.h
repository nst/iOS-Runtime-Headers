/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

@interface TVPResourceLoadingRequest : NSObject {
    AVAssetResourceLoadingRequest * _loadingRequest;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly, copy) NSNumber *avRequestID;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) bool isCancelled;
@property (nonatomic, readonly) AVAssetResourceLoadingRequest *loadingRequest;

- (void).cxx_destruct;
- (id)URL;
- (id)avRequestID;
- (id)dictionaryRepresentation;
- (void)finishLoadingWithError:(id)arg1;
- (void)finishLoadingWithResponse:(id)arg1 data:(id)arg2 renewalDate:(id)arg3 redirect:(id)arg4;
- (void)finishLoadingWithResponseData:(id)arg1 renewalDate:(id)arg2 keyType:(long long)arg3;
- (id)init;
- (id)initWithAssetResourceLoadingRequest:(id)arg1;
- (bool)isCancelled;
- (id)loadingRequest;

@end
