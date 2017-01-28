/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSIdentityProvider : NSObject <NSCopying, NSSecureCoding> {
    NSString * _appAdamID;
    NSURL * _appStoreRoomURL;
    NSURL * _authenticationURL;
    bool  _developer;
    NSString * _nameForSorting;
    bool  _prohibitedByStore;
    NSString * _providerID;
    NSArray * _supportedAuthenticationSchemes;
    NSArray * _supportedTemplates;
    NSString * _uniqueID;
}

@property (nonatomic, copy) NSString *appAdamID;
@property (nonatomic, copy) NSURL *appStoreRoomURL;
@property (nonatomic, copy) NSURL *authenticationURL;
@property (getter=isDeveloper, nonatomic) bool developer;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, copy) NSString *nameForSorting;
@property (getter=isProhibitedByStore, nonatomic) bool prohibitedByStore;
@property (nonatomic, copy) NSString *providerID;
@property (nonatomic, copy) NSArray *supportedAuthenticationSchemes;
@property (nonatomic, copy) NSArray *supportedTemplates;
@property (nonatomic, readonly) bool supportsTemplatesSufficientForCurrentPlatform;
@property (nonatomic, readonly) bool supportsTemplatesSufficientForSomeKnownPlatform;
@property (nonatomic, copy) NSString *uniqueID;

+ (id)keyPathsForValuesAffectingDisplayName;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appAdamID;
- (id)appStoreRoomURL;
- (id)authenticationURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isDeveloper;
- (bool)isEqual:(id)arg1;
- (bool)isProhibitedByStore;
- (id)nameForSorting;
- (id)providerID;
- (void)setAppAdamID:(id)arg1;
- (void)setAppStoreRoomURL:(id)arg1;
- (void)setAuthenticationURL:(id)arg1;
- (void)setDeveloper:(bool)arg1;
- (void)setNameForSorting:(id)arg1;
- (void)setProhibitedByStore:(bool)arg1;
- (void)setProviderID:(id)arg1;
- (void)setSupportedAuthenticationSchemes:(id)arg1;
- (void)setSupportedTemplates:(id)arg1;
- (void)setUniqueID:(id)arg1;
- (id)supportedAuthenticationSchemes;
- (id)supportedTemplates;
- (bool)supportsRequestsExpectingAuthenticationSchemes:(id)arg1;
- (bool)supportsTemplatesSufficientForCurrentPlatform;
- (bool)supportsTemplatesSufficientForSomeKnownPlatform;
- (id)uniqueID;

@end