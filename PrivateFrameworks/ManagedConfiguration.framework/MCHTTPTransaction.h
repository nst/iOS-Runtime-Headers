/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCHTTPTransaction : NSObject {
    NSString * _CMSSignatureHeaderName;
    NSURLConnection * _connection;
    NSString * _contentType;
    NSURL * _currentURL;
    NSData * _data;
    NSObject<OS_dispatch_semaphore> * _doneSema;
    NSError * _error;
    struct __SecIdentity { } * _identity;
    NSString * _method;
    NSURL * _permanentlyRedirectedURL;
    bool  _rememberData;
    NSURL * _requestURL;
    NSMutableData * _responseData;
    long long  _statusCode;
    double  _timeout;
    NSString * _userAgent;
}

@property (nonatomic, retain) NSString *CMSSignatureHeaderName;
@property (nonatomic, retain) NSString *contentType;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, readonly, retain) NSError *error;
@property (nonatomic, retain) NSString *method;
@property (nonatomic, readonly, retain) NSURL *permanentlyRedirectedURL;
@property (nonatomic, readonly, retain) NSData *responseData;
@property (nonatomic, readonly) long long statusCode;
@property (nonatomic) double timeout;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic, retain) NSString *userAgent;

+ (id)performRequestURL:(id)arg1 method:(id)arg2 timeout:(double)arg3 userAgent:(id)arg4 contentType:(id)arg5 data:(id)arg6 identity:(struct __SecIdentity { }*)arg7 outPermanentlyRedirectedURL:(id*)arg8 outError:(id*)arg9;
+ (id)transactionWithURL:(id)arg1 method:(id)arg2;

- (void).cxx_destruct;
- (id)CMSSignatureHeaderName;
- (void)_beginTransaction;
- (bool)_shouldAllowTrust:(struct __SecTrust { }*)arg1 forHost:(id)arg2;
- (bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (bool)connectionShouldUseCredentialStorage:(id)arg1;
- (id)contentType;
- (struct __SecIdentity { }*)copyIdentity;
- (id)data;
- (void)dealloc;
- (id)error;
- (id)initWithURL:(id)arg1 method:(id)arg2;
- (id)method;
- (void)performCompletionBlock:(id)arg1;
- (void)performSynchronously;
- (id)permanentlyRedirectedURL;
- (id)responseData;
- (void)setCMSSignatureHeaderName:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setData:(id)arg1;
- (void)setIdentity:(struct __SecIdentity { }*)arg1;
- (void)setMethod:(id)arg1;
- (void)setTimeout:(double)arg1;
- (void)setUrl:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (long long)statusCode;
- (double)timeout;
- (id)url;
- (id)userAgent;

@end
