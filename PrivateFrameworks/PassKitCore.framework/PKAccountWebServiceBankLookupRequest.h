/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAccountWebServiceBankLookupRequest : PKAccountWebServiceRequest {
    NSURL * _baseURL;
    NSString * _countryCode;
    NSString * _query;
}

@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic, copy) NSString *query;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)baseURL;
- (id)countryCode;
- (id)query;
- (void)setBaseURL:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setQuery:(id)arg1;

@end
