/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface NetPreferences : NSObject {
    NSString * _UUID;
    NSString * _acceptLanguageCode;
    NSString * _buildVersion;
    bool  _isNetworkReachable;
    NSString * _productVersion;
    NSString * _requestCountryCode;
    NSString * _requestLanguageCode;
    bool  _serviceDebugging;
}

@property (retain) NSString *acceptLanguageCode;
@property (getter=isNetworkReachable, nonatomic) bool networkReachable;
@property (retain) NSString *requestCountryCode;
@property (retain) NSString *requestLanguageCode;

+ (void)clearSharedPreferences;
+ (id)sharedPreferences;

- (void).cxx_destruct;
- (id)UUID;
- (id)_cacheDirectoryPath;
- (id)_stocksAcceptLanguage;
- (id)_stocksUserAgent;
- (id)_urlStringWithHost:(id)arg1;
- (id)acceptLanguageCode;
- (void)addStocksHeadersToPostRequest:(id)arg1;
- (id)backsideLogoURL;
- (id)defaultBacksideLogoURL;
- (id)financeRequestAttributes;
- (id)fullQuoteURLOverrideForStock:(id)arg1;
- (id)init;
- (bool)isNetworkReachable;
- (id)logoBacksideImage;
- (id)logoButtonImage;
- (id)requestCountryCode;
- (id)requestLanguageCode;
- (void)resetLocale;
- (bool)serviceDebugging;
- (id)serviceDebuggingPath;
- (void)setAcceptLanguageCode:(id)arg1;
- (void)setNetworkReachable:(bool)arg1;
- (void)setRequestCountryCode:(id)arg1;
- (void)setRequestLanguageCode:(id)arg1;
- (id)signedRequestForURL:(id)arg1 parameters:(id)arg2;
- (id)stocksCountryCode;
- (id)stocksLanguageCode;
- (id)stocksLanguageCodeForLanguage:(id)arg1;
- (id)stocksYQLBaseURL;

@end
