/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFSearchResult : NSObject <NSCopying, NSSecureCoding, SFSearchResult, WBSCompletionListItem> {
    SFActionItem * _action;
    NSString * _applicationBundleIdentifier;
    NSString * _auxiliaryBottomText;
    unsigned long long  _auxiliaryBottomTextColor;
    NSString * _auxiliaryMiddleText;
    NSString * _auxiliaryTopText;
    NSString * _calendarIdentifier;
    SFCard * _card;
    NSString * _completedQuery;
    NSString * _completion;
    SFImage * _completionImage;
    NSString * _contactIdentifier;
    NSString * _correctedQuery;
    SFCustom * _customProperties;
    NSArray * _descriptions;
    NSNumber * _engagementScore;
    NSDictionary * _featureScaling;
    NSString * _footnote;
    SFImage * _icon;
    NSString * _identifier;
    SFCard * _inlineCard;
    NSString * _intendedQuery;
    bool  _isCentered;
    bool  _isLocalApplicationResult;
    bool  _isQuickGlance;
    bool  _isSecondaryTitleDetached;
    bool  _isStaticCorrection;
    bool  _isStreaming;
    NSDictionary * _localFeatures;
    NSData * _mapsData;
    SFImage * _mapsMoreIcon;
    NSString * _mapsMoreString;
    NSURL * _mapsMoreURL;
    NSString * _mapsResultType;
    NSNumber * _maxAge;
    NSString * _mediaType;
    unsigned long long  _minimumRankOfTopHitToSuppressResult;
    SFMoreResults * _moreResults;
    SFPunchout * _moreResultsPunchout;
    NSString * _nearbyBusinessesString;
    unsigned long long  _origRank;
    double  _personalizationScore;
    unsigned long long  _placement;
    bool  _preventThumbnailImageScaling;
    bool  _publiclyIndexable;
    NSString * _publishDate;
    SFPunchout * _punchout;
    unsigned long long  _queryId;
    NSNumber * _queryIndependentScore;
    double  _rankingScore;
    bool  _renderHorizontallyWithOtherResultsInCategory;
    NSString * _resultBundleId;
    NSString * _resultTemplate;
    NSString * _resultType;
    NSString * _secondaryTitle;
    SFImage * _secondaryTitleImage;
    NSString * _sectionBundleIdentifier;
    NSString * _sectionHeader;
    NSString * _sectionHeaderMore;
    NSURL * _sectionHeaderMoreURL;
    double  _serverScore;
    NSString * _sourceName;
    NSString * _storeIdentifier;
    SFImage * _thumbnail;
    SFText * _title;
    NSString * _titleNote;
    NSNumber * _titleNoteSize;
    unsigned long long  _topHit;
    NSDictionary * _topicDistribution;
    unsigned long long  _type;
    NSURL * _url;
    NSString * _userActivityRequiredString;
}

@property (nonatomic, retain) SFActionItem *action;
@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (nonatomic, copy) NSString *auxiliaryBottomText;
@property (nonatomic) unsigned long long auxiliaryBottomTextColor;
@property (nonatomic, copy) NSString *auxiliaryMiddleText;
@property (nonatomic, copy) NSString *auxiliaryTopText;
@property (nonatomic, copy) NSString *calendarIdentifier;
@property (nonatomic, retain) SFCard *card;
@property (nonatomic, copy) NSString *completedQuery;
@property (nonatomic, copy) NSString *completion;
@property (nonatomic, retain) SFImage *completionImage;
@property (nonatomic, copy) NSString *contactIdentifier;
@property (nonatomic, copy) NSString *correctedQuery;
@property (nonatomic, retain) SFCustom *customProperties;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *descriptions;
@property (nonatomic, readonly) unsigned long long engagementDestination;
@property (nonatomic, retain) NSNumber *engagementScore;
@property (nonatomic, copy) NSDictionary *featureScaling;
@property (nonatomic, copy) NSString *footnote;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SFImage *icon;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) SFCard *inlineCard;
@property (nonatomic, copy) NSString *intendedQuery;
@property (nonatomic) bool isCentered;
@property (nonatomic) bool isLocalApplicationResult;
@property (nonatomic) bool isQuickGlance;
@property (nonatomic) bool isSecondaryTitleDetached;
@property (nonatomic) bool isStaticCorrection;
@property (nonatomic) bool isStreaming;
@property (nonatomic, readonly) NSString *lastSearchQuery;
@property (nonatomic, copy) NSDictionary *localFeatures;
@property (nonatomic, retain) NSData *mapsData;
@property (nonatomic, retain) SFImage *mapsMoreIcon;
@property (nonatomic, copy) NSString *mapsMoreString;
@property (nonatomic, retain) NSURL *mapsMoreURL;
@property (nonatomic, copy) NSString *mapsResultType;
@property (nonatomic, retain) NSNumber *maxAge;
@property (nonatomic, copy) NSString *mediaType;
@property (nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult;
@property (nonatomic, retain) SFMoreResults *moreResults;
@property (nonatomic, retain) SFPunchout *moreResultsPunchout;
@property (nonatomic, copy) NSString *nearbyBusinessesString;
@property (nonatomic) unsigned long long origRank;
@property (nonatomic, readonly) NSString *parsecDomainIdentifier;
@property (nonatomic) double personalizationScore;
@property (nonatomic) unsigned long long placement;
@property (nonatomic) bool preventThumbnailImageScaling;
@property (nonatomic) bool publiclyIndexable;
@property (nonatomic, copy) NSString *publishDate;
@property (nonatomic, retain) SFPunchout *punchout;
@property (nonatomic) unsigned long long queryId;
@property (nonatomic, retain) NSNumber *queryIndependentScore;
@property (nonatomic) double rankingScore;
@property (nonatomic) bool renderHorizontallyWithOtherResultsInCategory;
@property (nonatomic, copy) NSString *resultBundleId;
@property (nonatomic, copy) NSString *resultTemplate;
@property (nonatomic, copy) NSString *resultType;
@property (nonatomic, copy) NSString *secondaryTitle;
@property (nonatomic, retain) SFImage *secondaryTitleImage;
@property (nonatomic, copy) NSString *sectionBundleIdentifier;
@property (nonatomic, copy) NSString *sectionHeader;
@property (nonatomic, copy) NSString *sectionHeaderMore;
@property (nonatomic, copy) NSURL *sectionHeaderMoreURL;
@property (nonatomic) double serverScore;
@property (nonatomic, readonly) SFSearchResult *sfSearchResultValue;
@property (nonatomic, copy) NSString *sourceName;
@property (nonatomic, copy) NSString *storeIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) SFImage *thumbnail;
@property (nonatomic, retain) SFText *title;
@property (nonatomic, copy) NSString *titleNote;
@property (nonatomic, retain) NSNumber *titleNoteSize;
@property (nonatomic) unsigned long long topHit;
@property (nonatomic, copy) NSDictionary *topicDistribution;
@property (nonatomic) unsigned long long type;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic, copy) NSString *userActivityRequiredString;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)action;
- (id)applicationBundleIdentifier;
- (id)auxiliaryBottomText;
- (unsigned long long)auxiliaryBottomTextColor;
- (id)auxiliaryMiddleText;
- (id)auxiliaryTopText;
- (id)calendarIdentifier;
- (id)card;
- (id)completedQuery;
- (id)completion;
- (id)completionImage;
- (id)contactIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correctedQuery;
- (id)customProperties;
- (id)descriptions;
- (void)encodeWithCoder:(id)arg1;
- (id)engagementScore;
- (id)featureScaling;
- (id)footnote;
- (id)icon;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)inlineCard;
- (id)intendedQuery;
- (bool)isCentered;
- (bool)isLocalApplicationResult;
- (bool)isQuickGlance;
- (bool)isSecondaryTitleDetached;
- (bool)isStaticCorrection;
- (bool)isStreaming;
- (id)localFeatures;
- (id)mapsData;
- (id)mapsMoreIcon;
- (id)mapsMoreString;
- (id)mapsMoreURL;
- (id)mapsResultType;
- (id)maxAge;
- (id)mediaType;
- (unsigned long long)minimumRankOfTopHitToSuppressResult;
- (id)moreResults;
- (id)moreResultsPunchout;
- (id)nearbyBusinessesString;
- (unsigned long long)origRank;
- (double)personalizationScore;
- (unsigned long long)placement;
- (bool)preventThumbnailImageScaling;
- (bool)publiclyIndexable;
- (id)publishDate;
- (id)punchout;
- (unsigned long long)queryId;
- (id)queryIndependentScore;
- (double)rankingScore;
- (bool)renderHorizontallyWithOtherResultsInCategory;
- (id)resultBundleId;
- (id)resultTemplate;
- (id)resultType;
- (id)secondaryTitle;
- (id)secondaryTitleImage;
- (id)sectionBundleIdentifier;
- (id)sectionHeader;
- (id)sectionHeaderMore;
- (id)sectionHeaderMoreURL;
- (double)serverScore;
- (void)setAction:(id)arg1;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setAuxiliaryBottomText:(id)arg1;
- (void)setAuxiliaryBottomTextColor:(unsigned long long)arg1;
- (void)setAuxiliaryMiddleText:(id)arg1;
- (void)setAuxiliaryTopText:(id)arg1;
- (void)setCalendarIdentifier:(id)arg1;
- (void)setCard:(id)arg1;
- (void)setCompletedQuery:(id)arg1;
- (void)setCompletion:(id)arg1;
- (void)setCompletionImage:(id)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setCorrectedQuery:(id)arg1;
- (void)setCustomProperties:(id)arg1;
- (void)setDescriptions:(id)arg1;
- (void)setEngagementScore:(id)arg1;
- (void)setFeatureScaling:(id)arg1;
- (void)setFootnote:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInlineCard:(id)arg1;
- (void)setIntendedQuery:(id)arg1;
- (void)setIsCentered:(bool)arg1;
- (void)setIsLocalApplicationResult:(bool)arg1;
- (void)setIsQuickGlance:(bool)arg1;
- (void)setIsSecondaryTitleDetached:(bool)arg1;
- (void)setIsStaticCorrection:(bool)arg1;
- (void)setIsStreaming:(bool)arg1;
- (void)setLocalFeatures:(id)arg1;
- (void)setMapsData:(id)arg1;
- (void)setMapsMoreIcon:(id)arg1;
- (void)setMapsMoreString:(id)arg1;
- (void)setMapsMoreURL:(id)arg1;
- (void)setMapsResultType:(id)arg1;
- (void)setMaxAge:(id)arg1;
- (void)setMediaType:(id)arg1;
- (void)setMinimumRankOfTopHitToSuppressResult:(unsigned long long)arg1;
- (void)setMoreResults:(id)arg1;
- (void)setMoreResultsPunchout:(id)arg1;
- (void)setNearbyBusinessesString:(id)arg1;
- (void)setOrigRank:(unsigned long long)arg1;
- (void)setPersonalizationScore:(double)arg1;
- (void)setPlacement:(unsigned long long)arg1;
- (void)setPreventThumbnailImageScaling:(bool)arg1;
- (void)setPubliclyIndexable:(bool)arg1;
- (void)setPublishDate:(id)arg1;
- (void)setPunchout:(id)arg1;
- (void)setQueryId:(unsigned long long)arg1;
- (void)setQueryIndependentScore:(id)arg1;
- (void)setRankingScore:(double)arg1;
- (void)setRenderHorizontallyWithOtherResultsInCategory:(bool)arg1;
- (void)setResultBundleId:(id)arg1;
- (void)setResultTemplate:(id)arg1;
- (void)setResultType:(id)arg1;
- (void)setSecondaryTitle:(id)arg1;
- (void)setSecondaryTitleImage:(id)arg1;
- (void)setSectionBundleIdentifier:(id)arg1;
- (void)setSectionHeader:(id)arg1;
- (void)setSectionHeaderMore:(id)arg1;
- (void)setSectionHeaderMoreURL:(id)arg1;
- (void)setServerScore:(double)arg1;
- (void)setSourceName:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleNote:(id)arg1;
- (void)setTitleNoteSize:(id)arg1;
- (void)setTopHit:(unsigned long long)arg1;
- (void)setTopicDistribution:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setUrl:(id)arg1;
- (void)setUserActivityRequiredString:(id)arg1;
- (id)sourceName;
- (id)storeIdentifier;
- (id)thumbnail;
- (id)title;
- (id)titleNote;
- (id)titleNoteSize;
- (unsigned long long)topHit;
- (id)topicDistribution;
- (unsigned long long)type;
- (id)url;
- (id)userActivityRequiredString;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

- (id)domainFeature:(id)arg1;
- (id)mediaTypeFeature:(id)arg1;
- (id)topicFeatures:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

+ (id)safari_sfSearchResultWithUniqueIdentifier;

- (unsigned long long)engagementDestination;
- (id)parsecDomainIdentifier;
- (id)sfSearchResultValue;

// Image: /System/Library/PrivateFrameworks/Search.framework/Search

- (id)objectForFeedback;
- (void)setPropertiesOnResultCopy:(id)arg1;

@end
