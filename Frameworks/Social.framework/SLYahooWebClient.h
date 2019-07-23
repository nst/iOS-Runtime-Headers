/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLYahooWebClient : NSObject <SLWebClient>

@property (nonatomic, readonly) NSString *authRequestURL;
@property (nonatomic, readonly) NSString *clientID;
@property (nonatomic, readonly) NSString *clientRedirect;
@property (nonatomic, readonly) NSString *clientRedirectForAppOpenURL;
@property (nonatomic, readonly) NSString *clientSecret;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *defaultScope;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *fallbackUserInfoURL;
@property (nonatomic, readonly) Class fallbackWebUserInfoResponseClass;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *source;
@property (readonly) Class superclass;
@property (nonatomic, readonly) Class tokenRequestClass;
@property (nonatomic, readonly) Class tokenResponseClass;
@property (nonatomic, readonly) NSString *tokenURL;
@property (nonatomic, readonly) NSString *userInfoURL;
@property (nonatomic, readonly) Class webAuthRequestClass;
@property (nonatomic, readonly) Class webUserInfoResponseClass;
@property (nonatomic, readonly) NSArray *youTubeScope;

+ (bool)supportsSecureCoding;

- (id)authRequestURL;
- (id)clientID;
- (id)clientRedirect;
- (id)clientRedirectForAppOpenURL;
- (id)clientSecret;
- (id)defaultScope;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)source;
- (Class)tokenRequestClass;
- (Class)tokenResponseClass;
- (id)tokenURL;
- (id)userInfoURL;
- (Class)webAuthRequestClass;
- (Class)webUserInfoResponseClass;
- (id)youTubeScope;

@end
