/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTag : NSObject <FCChannelProviding, FCFeedTheming, FCSectionProviding, FCTagProviding, FCTopicProviding> {
    NSArray * _allowedStorefrontIDs;
    NSString * _backIssuesListID;
    NSString * _backgroundColorHexString;
    double  _bannerImageBaselineOffsetPercentage;
    FCTagBanner * _bannerImageForMask;
    FCTagBanner * _bannerImageForThemeBackground;
    FCTagBanner * _bannerImageForWhiteBackground;
    double  _bannerImageScale;
    NSArray * _blockedStorefrontIDs;
    FCTagBanner * _compactBannerImage;
    long long  _contentProvider;
    NSString * _coverArticleListID;
    FCAssetHandle * _coverImageAssetHandle;
    NSArray * _currentIssueIDs;
    FCHeadlineTemplate * _defaultHeadlineTemplate;
    NSString * _defaultSectionID;
    NTPBFeedConfiguration * _feedConfiguration;
    FCAssetHandle * _feedNavImageAssetHandle;
    NSString * _foregroundColorHexString;
    NSString * _groupTitleColorHexString;
    unsigned long long  _groupingEligibility;
    FCTextInfo * _headlineBylineTextInfo;
    FCTextInfo * _headlineExcerptTextInfo;
    FCTextInfo * _headlineTitleTextInfo;
    bool  _hideAccessoryText;
    NSArray * _iAdCategories;
    NSArray * _iAdKeywords;
    NSString * _identifier;
    bool  _isArticleReadCountReportingEnabled;
    bool  _isDeprecated;
    bool  _isExplicitContent;
    bool  _isHidden;
    bool  _isNotificationEnabled;
    bool  _isPublic;
    bool  _isRealTimeTrackingEnabled;
    NSString * _language;
    NSDate * _loadDate;
    FCAssetHandle * _logoImageAssetHandle;
    NSString * _magazineGenre;
    long long  _minimumNewsVersion;
    NSString * _name;
    NSString * _nameCompact;
    FCAssetHandle * _nameImageAssetHandle;
    FCAssetHandle * _nameImageCompactAssetHandle;
    FCAssetHandle * _nameImageForDarkBackgroundAssetHandle;
    struct FCEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _nameImageForDarkBackgroundInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _nameImageForDarkBackgroundSize;
    struct FCEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _nameImageInsets;
    FCAssetHandle * _nameImageMaskAssetHandle;
    struct FCEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _nameImageMaskInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _nameImageMaskSize;
    FCAssetHandle * _nameImageMaskWidgetHQAssetHandle;
    FCAssetHandle * _nameImageMaskWidgetLQAssetHandle;
    struct CGSize { 
        double width; 
        double height; 
    }  _nameImageSize;
    NSString * _parentID;
    NSString * _pptFeedIDOverride;
    NSString * _primaryAudience;
    NSString * _publisherPaidAuthorizationURL;
    NSArray * _publisherPaidBundlePurchaseIDs;
    NTPBPublisherPaidDescriptionStrings * _publisherPaidDescriptionStrings;
    NSArray * _publisherPaidFeldsparablePurchaseIDs;
    bool  _publisherPaidLeakyPaywallOptOut;
    NSArray * _publisherPaidOfferableConfigurations;
    NSString * _publisherPaidVerificationURL;
    bool  _publisherPaidWebAccessOptIn;
    NSString * _publisherPaidWebAccessURL;
    NSArray * _publisherSpecifiedArticleIDs;
    NSDate * _publisherSpecifiedArticleIDsModifiedDate;
    NSString * _replacementID;
    long long  _score;
    NSArray * _sectionFeedConfigurations;
    NSArray * _sectionIDs;
    NSString * _subtitle;
    FCInterestToken * _tagInterestToken;
    NTPBTagRecord * _tagRecord;
    FCInterestToken * _tagRecordInterestToken;
    unsigned long long  _tagType;
    NSString * _versionKey;
}

@property (nonatomic, readonly) bool allowCustomBottomStyle;
@property (nonatomic, readonly) NSArray *allowedStorefrontIDs;
@property (nonatomic, readonly) NSString *articleRecirculationConfigJSON;
@property (nonatomic, readonly) <FCChannelProviding> *asChannel;
@property (nonatomic, readonly) <FCSectionProviding> *asSection;
@property (nonatomic, readonly) <FCTopicProviding> *asTopic;
@property (nonatomic, readonly, copy) NSString *backIssuesListID;
@property (nonatomic, readonly) FCColor *backgroundColor;
@property (nonatomic, copy) NSString *backgroundColorHexString;
@property (nonatomic, readonly) NSData *backingTagRecordData;
@property (nonatomic) double bannerImageBaselineOffsetPercentage;
@property (nonatomic, readonly) FCTagBanner *bannerImageForMask;
@property (nonatomic, readonly) FCTagBanner *bannerImageForThemeBackground;
@property (nonatomic, readonly) FCTagBanner *bannerImageForWhiteBackground;
@property (nonatomic) double bannerImageScale;
@property (nonatomic, readonly) NSArray *blockedStorefrontIDs;
@property (nonatomic, readonly) FCTagBanner *compactBannerImage;
@property (nonatomic, readonly) long long contentProvider;
@property (nonatomic, readonly, copy) NSString *coverArticleListID;
@property (nonatomic, readonly) FCAssetHandle *coverImageAssetHandle;
@property (nonatomic, readonly, copy) NSArray *currentIssueIDs;
@property (nonatomic, readonly) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) FCTagBanner *defaultBannerImage;
@property (nonatomic, readonly) FCHeadlineTemplate *defaultHeadlineTemplate;
@property (nonatomic, readonly, copy) NSString *defaultSectionID;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NTPBFeedConfiguration *feedConfiguration;
@property (nonatomic, readonly) FCAssetHandle *feedNavImageAssetHandle;
@property (nonatomic, readonly) long long feedType;
@property (nonatomic, readonly) FCColor *foregroundColor;
@property (nonatomic, copy) NSString *foregroundColorHexString;
@property (nonatomic, readonly, copy) FCColor *groupTitleColor;
@property (nonatomic, copy) NSString *groupTitleColorHexString;
@property (nonatomic, readonly) unsigned long long groupingEligibility;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) FCTextInfo *headlineBylineTextInfo;
@property (nonatomic, readonly, copy) FCTextInfo *headlineExcerptTextInfo;
@property (nonatomic, readonly, copy) FCTextInfo *headlineTitleTextInfo;
@property (nonatomic, readonly) bool hideAccessoryText;
@property (nonatomic, readonly) NSArray *iAdCategories;
@property (nonatomic, readonly) NSArray *iAdKeywords;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isArticleReadCountReportingEnabled;
@property (nonatomic, readonly) bool isBlockedExplicitContent;
@property (nonatomic, readonly) bool isDark;
@property (nonatomic, readonly) bool isDeprecated;
@property (nonatomic, readonly) bool isExplicitContent;
@property (nonatomic, readonly) bool isHidden;
@property (nonatomic, readonly) bool isNotificationEnabled;
@property (nonatomic, readonly) bool isPublic;
@property (nonatomic, readonly) bool isRealTimeTrackingEnabled;
@property (nonatomic, readonly) bool isSubscribable;
@property (nonatomic, readonly) bool isWhite;
@property (nonatomic, readonly) bool isWhitelisted;
@property (nonatomic, readonly, copy) NSString *language;
@property (nonatomic, retain) NSDate *loadDate;
@property (nonatomic, readonly) NSArray *loadableFonts;
@property (nonatomic, readonly) FCAssetHandle *logoImageAssetHandle;
@property (nonatomic, readonly, copy) NSString *magazineGenre;
@property (nonatomic, readonly) long long minimumNewsVersion;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *nameCompact;
@property (nonatomic, retain) FCAssetHandle *nameImageAssetHandle;
@property (nonatomic, readonly) FCAssetHandle *nameImageCompactAssetHandle;
@property (nonatomic, readonly) FCAssetHandle *nameImageForDarkBackgroundAssetHandle;
@property (nonatomic, readonly) struct FCEdgeInsets { double x1; double x2; double x3; double x4; } nameImageForDarkBackgroundInsets;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } nameImageForDarkBackgroundSize;
@property (nonatomic, readonly) struct FCEdgeInsets { double x1; double x2; double x3; double x4; } nameImageInsets;
@property (nonatomic, readonly) FCAssetHandle *nameImageMaskAssetHandle;
@property (nonatomic, readonly) struct FCEdgeInsets { double x1; double x2; double x3; double x4; } nameImageMaskInsets;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } nameImageMaskSize;
@property (nonatomic, readonly) FCAssetHandle *nameImageMaskWidgetHQAssetHandle;
@property (nonatomic, readonly) FCAssetHandle *nameImageMaskWidgetLQAssetHandle;
@property (nonatomic) struct CGSize { double x1; double x2; } nameImageSize;
@property (nonatomic, readonly, copy) NSString *parentID;
@property (nonatomic, copy) NSString *pptFeedIDOverride;
@property (nonatomic, readonly, copy) NSString *primaryAudience;
@property (nonatomic, readonly, copy) NSString *publisherPaidAuthorizationURL;
@property (nonatomic, readonly) NSArray *publisherPaidBundlePurchaseIDs;
@property (nonatomic, readonly) NTPBPublisherPaidDescriptionStrings *publisherPaidDescriptionStrings;
@property (nonatomic, readonly) NSArray *publisherPaidFeldsparablePurchaseIDs;
@property (nonatomic, readonly) bool publisherPaidLeakyPaywallOptOut;
@property (nonatomic, readonly) NSArray *publisherPaidOfferableConfigurations;
@property (nonatomic, readonly, copy) NSString *publisherPaidVerificationURL;
@property (nonatomic, readonly) bool publisherPaidWebAccessOptIn;
@property (nonatomic, readonly, copy) NSString *publisherPaidWebAccessURL;
@property (nonatomic, readonly) NSArray *publisherSpecifiedArticleIDs;
@property (nonatomic, readonly) NSDate *publisherSpecifiedArticleIDsModifiedDate;
@property (nonatomic, readonly, copy) NSString *replacementID;
@property (nonatomic, readonly) long long score;
@property (nonatomic, copy) NSArray *sectionFeedConfigurations;
@property (nonatomic, readonly, copy) NSArray *sectionIDs;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsNotifications;
@property (nonatomic, retain) FCInterestToken *tagInterestToken;
@property (nonatomic, readonly) NTPBTagRecord *tagRecord;
@property (nonatomic, readonly) FCInterestToken *tagRecordInterestToken;
@property (nonatomic, readonly) unsigned long long tagType;
@property (nonatomic, readonly, copy) <FCFeedTheming> *theme;
@property (nonatomic, readonly, copy) NSString *versionKey;

- (void).cxx_destruct;
- (id)_feedConfigurationForSection:(id)arg1;
- (void)_inflateFromJSONDictionary:(id)arg1;
- (void)_inflateFromJSONDictionary:(id)arg1 withVersion:(long long)arg2;
- (void)_inflateFromVersionlessJSONDictionary:(id)arg1;
- (bool)_isValidScheme:(id)arg1;
- (bool)allowCustomBottomStyle;
- (id)allowedStorefrontIDs;
- (id)articleRecirculationConfigJSON;
- (id)asChannel;
- (id)asSection;
- (id)asTopic;
- (id)authorizationURL;
- (id)backIssuesListID;
- (id)backgroundColor;
- (id)backgroundColorHexString;
- (id)backingTagRecordData;
- (double)bannerImageBaselineOffsetPercentage;
- (id)bannerImageForMask;
- (id)bannerImageForThemeBackground;
- (id)bannerImageForWhiteBackground;
- (double)bannerImageScale;
- (id)blockedStorefrontIDs;
- (id)compactBannerImage;
- (long long)contentProvider;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coverArticleListID;
- (id)coverImageAssetHandle;
- (id)currentIssueIDs;
- (id)data;
- (id)defaultBannerImage;
- (id)defaultHeadlineTemplate;
- (id)defaultSectionID;
- (id)description;
- (id)feedConfiguration;
- (id)feedIDForBin:(long long)arg1;
- (id)feedNavImageAssetHandle;
- (long long)feedType;
- (id)foregroundColor;
- (id)foregroundColorHexString;
- (id)freeFeedIDForBin:(long long)arg1;
- (id)freeFeedIDForSection:(id)arg1 bin:(long long)arg2;
- (id)groupTitleColor;
- (id)groupTitleColorHexString;
- (unsigned long long)groupingEligibility;
- (unsigned long long)hash;
- (id)headlineBylineTextInfo;
- (id)headlineExcerptTextInfo;
- (id)headlineTitleTextInfo;
- (bool)hideAccessoryText;
- (id)iAdCategories;
- (id)iAdKeywords;
- (id)identifier;
- (id)initChannelForTestingWithIdentifier:(id)arg1 name:(id)arg2 defaultSection:(id)arg3 publisherAuthorizationURL:(id)arg4 publisherVerificationURL:(id)arg5;
- (id)initChannelForTestingWithIdentifier:(id)arg1 name:(id)arg2 publisherPaidBundlePurchaseIDs:(id)arg3;
- (id)initChannelFromNotificationWithIdentifier:(id)arg1 name:(id)arg2 nameImageAssetHandle:(id)arg3;
- (id)initForTestingWithTagType:(unsigned long long)arg1 identifier:(id)arg2 name:(id)arg3;
- (id)initWithData:(id)arg1 context:(id)arg2;
- (id)initWithTagRecord:(id)arg1 assetManager:(id)arg2 interestToken:(id)arg3;
- (id)initWithTagType:(unsigned long long)arg1 identifier:(id)arg2 name:(id)arg3;
- (bool)isArticleReadCountReportingEnabled;
- (bool)isAuthenticationSetup;
- (bool)isBlockedExplicitContent;
- (bool)isDark;
- (bool)isDeprecated;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTag:(id)arg1;
- (bool)isExplicitContent;
- (bool)isHidden;
- (bool)isNoLongerAvailable;
- (bool)isNotificationEnabled;
- (bool)isPublic;
- (bool)isPurchaseSetup;
- (bool)isRealTimeTrackingEnabled;
- (bool)isSubscribable;
- (bool)isWhite;
- (bool)isWhitelisted;
- (id)language;
- (id)loadDate;
- (id)loadableFonts;
- (id)logoImageAssetHandle;
- (id)magazineGenre;
- (long long)minimumNewsVersion;
- (id)name;
- (id)nameCompact;
- (id)nameImageAssetHandle;
- (id)nameImageCompactAssetHandle;
- (id)nameImageForDarkBackgroundAssetHandle;
- (struct FCEdgeInsets { double x1; double x2; double x3; double x4; })nameImageForDarkBackgroundInsets;
- (struct CGSize { double x1; double x2; })nameImageForDarkBackgroundSize;
- (struct FCEdgeInsets { double x1; double x2; double x3; double x4; })nameImageInsets;
- (id)nameImageMaskAssetHandle;
- (struct FCEdgeInsets { double x1; double x2; double x3; double x4; })nameImageMaskInsets;
- (struct CGSize { double x1; double x2; })nameImageMaskSize;
- (id)nameImageMaskWidgetHQAssetHandle;
- (id)nameImageMaskWidgetLQAssetHandle;
- (struct CGSize { double x1; double x2; })nameImageSize;
- (id)paidFeedIDForBin:(long long)arg1;
- (id)paidFeedIDForSection:(id)arg1 bin:(long long)arg2;
- (id)parentID;
- (id)pptFeedIDOverride;
- (void)ppt_overrideFeedID:(id)arg1;
- (id)prefetchPurchaseOffer;
- (id)primaryAudience;
- (id)publisherPaidAuthorizationURL;
- (id)publisherPaidBundlePurchaseIDs;
- (id)publisherPaidDescriptionStrings;
- (id)publisherPaidFeldsparablePurchaseIDs;
- (bool)publisherPaidLeakyPaywallOptOut;
- (id)publisherPaidOfferableConfigurations;
- (id)publisherPaidVerificationURL;
- (bool)publisherPaidWebAccessOptIn;
- (id)publisherPaidWebAccessURL;
- (id)publisherSpecifiedArticleIDs;
- (id)publisherSpecifiedArticleIDsModifiedDate;
- (id)purchaseOfferableConfigurationsFromProtobufList:(id)arg1;
- (id)replacementID;
- (long long)score;
- (id)sectionFeedConfigurations;
- (id)sectionIDs;
- (void)setBackgroundColorHexString:(id)arg1;
- (void)setBannerImageBaselineOffsetPercentage:(double)arg1;
- (void)setBannerImageScale:(double)arg1;
- (void)setFeedConfiguration:(id)arg1;
- (void)setForegroundColorHexString:(id)arg1;
- (void)setGroupTitleColorHexString:(id)arg1;
- (void)setLoadDate:(id)arg1;
- (void)setNameImageAssetHandle:(id)arg1;
- (void)setNameImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPptFeedIDOverride:(id)arg1;
- (void)setSectionFeedConfigurations:(id)arg1;
- (void)setTagInterestToken:(id)arg1;
- (id)subtitle;
- (bool)supportsNotifications;
- (id)tagInterestToken;
- (id)tagRecord;
- (id)tagRecordInterestToken;
- (unsigned long long)tagType;
- (id)theme;
- (id)versionKey;

@end
