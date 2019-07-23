/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMusicSubscriptionCarrierBundlingEligibilityOperation : ICAsyncOperation {
    NSString * _IMEI;
    NSString * _cellularProviderName;
    bool  _deepLink;
    NSString * _mobileSubscriberCountryCode;
    NSString * _mobileSubscriberNetworkCode;
    NSString * _phoneNumber;
    ICStoreRequestContext * _requestContext;
    id /* block */  _responseHandler;
}

@property (getter=isDeepLink, nonatomic) bool deepLink;
@property (nonatomic, readonly, copy) ICStoreRequestContext *requestContext;
@property (nonatomic, copy) id /* block */ responseHandler;

- (void).cxx_destruct;
- (void)_finishEnrichmentWithBodyDictionary:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_newDefaultRequestBodyDictionary;
- (void)_sendEnrichmentRequestWithURL:(id)arg1 preflightResponse:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_sendPreflightRequestWithCompletionHandler:(id /* block */)arg1;
- (void)_sendSilentSMSRequestWithMessage:(id)arg1 number:(id)arg2 preflightResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)execute;
- (id)initWithRequestContext:(id)arg1;
- (bool)isDeepLink;
- (id)requestContext;
- (id /* block */)responseHandler;
- (void)setDeepLink:(bool)arg1;
- (void)setResponseHandler:(id /* block */)arg1;

@end
