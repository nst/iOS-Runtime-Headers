/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCHeadline : NSObject <FCFeedElement, FCHeadlineProviding> {
    NSString * _accessoryText;
    NSArray * _allowedStorefrontIDs;
    NSString * _articleID;
    unsigned long long  _backendArticleVersion;
    NSArray * _blockedStorefrontIDs;
    bool  _canBePurchased;
    NSString * _clusterID;
    unsigned long long  _contentType;
    NSURL * _contentURL;
    FCCoverArt * _coverArt;
    bool  _deleted;
    NSDate * _displayDate;
    NSArray * _endOfArticleTopicIDs;
    NSString * _excerpt;
    bool  _featureCandidate;
    unsigned long long  _feedOrder;
    double  _globalUserFeedback;
    bool  _hasThumbnail;
    NSURL * _headlineURL;
    NSArray * _iAdCategories;
    NSArray * _iAdKeywords;
    NSArray * _iAdSectionIDs;
    NSString * _identifier;
    bool  _isDraft;
    struct CGSize { 
        double width; 
        double height; 
    }  _largestThumbnailSize;
    NSDate * _lastFetchedDate;
    NSDate * _lastModifiedDate;
    NSString * _localDraftPath;
    long long  _minimumNewsVersion;
    NSArray * _moreFromPublisherArticleIDs;
    bool  _needsRapidUpdates;
    bool  _paid;
    double  _personalizedScore;
    NSString * _primaryAudience;
    NSDate * _publishDate;
    unsigned long long  _publisherArticleVersion;
    NSString * _referencedArticleID;
    NSArray * _relatedArticleIDs;
    NSString * _shortExcerpt;
    bool  _showSubscriptionRequiredText;
    NSObject<FCChannelProviding> * _sourceChannel;
    NSString * _sourceName;
    bool  _sponsored;
    FCTopStoriesStyleConfiguration * _storyStyle;
    unsigned long long  _storyType;
    NSString * _subtitle;
    NSString * _surfacedByBinID;
    NSString * _surfacedByChannelID;
    NSString * _surfacedBySectionID;
    NSString * _surfacedByTopicID;
    FCHeadlineThumbnail * _thumbnail;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _thumbnailFocalFrame;
    FCHeadlineThumbnail * _thumbnailHQ;
    FCHeadlineThumbnail * _thumbnailLQ;
    FCHeadlineThumbnail * _thumbnailMedium;
    FCHeadlineThumbnail * _thumbnailUltraHQ;
    FCHeadlineThumbnail * _thumbnailWidget;
    FCHeadlineThumbnail * _thumbnailWidgetHQ;
    FCHeadlineThumbnail * _thumbnailWidgetLQ;
    NSString * _title;
    bool  _topStory;
    NSArray * _topicFlags;
    NSArray * _topicIDs;
    NSArray * _topicScores;
    bool  _usesImageOnTopLayout;
    double  _videoDuration;
    NSURL * _videoURL;
}

@property (nonatomic, readonly, copy) NSString *accessoryText;
@property (nonatomic, readonly, copy) NSArray *allowedStorefrontIDs;
@property (nonatomic, readonly) unsigned long long articleContentType;
@property (nonatomic, copy) NSString *articleID;
@property (nonatomic, readonly) unsigned long long articleRecordModificationDateMilliseconds;
@property (nonatomic, readonly) unsigned long long backendArticleVersion;
@property (nonatomic, readonly, copy) NSArray *blockedStorefrontIDs;
@property (nonatomic, readonly) bool canBePurchased;
@property (nonatomic, readonly, copy) NSString *clusterID;
@property (nonatomic) unsigned long long contentType;
@property (nonatomic, readonly, copy) NSURL *contentURL;
@property (nonatomic, readonly) FCCoverArt *coverArt;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDeleted, nonatomic) bool deleted;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *displayDate;
@property (nonatomic, readonly, copy) NSArray *endOfArticleTopicIDs;
@property (nonatomic, copy) NSString *excerpt;
@property (getter=isExplicitContent, nonatomic, readonly) bool explicitContent;
@property (getter=isFeatureCandidate, nonatomic, readonly) bool featureCandidate;
@property (nonatomic, readonly) long long feedElementType;
@property (nonatomic, readonly) unsigned long long feedHalfLifeMilliseconds;
@property (nonatomic, readonly, copy) NSString *feedID;
@property (nonatomic) unsigned long long feedOrder;
@property (getter=isFromBlockedStorefront, nonatomic, readonly) bool fromBlockedStorefront;
@property (nonatomic) double globalUserFeedback;
@property (nonatomic, readonly) unsigned long long halfLife;
@property (nonatomic, readonly) bool hasGlobalUserFeedback;
@property (nonatomic, readonly) bool hasThumbnail;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSURL *headlineURL;
@property (nonatomic, readonly, copy) NSArray *iAdCategories;
@property (nonatomic, readonly, copy) NSArray *iAdKeywords;
@property (nonatomic, readonly, copy) NSArray *iAdSectionIDs;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) bool isBlockedExplicitContent;
@property (nonatomic, readonly) bool isDraft;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } largestThumbnailSize;
@property (nonatomic, readonly, copy) NSDate *lastFetchedDate;
@property (nonatomic, readonly, copy) NSDate *lastModifiedDate;
@property (nonatomic, readonly, copy) NSString *localDraftPath;
@property (nonatomic, readonly) long long minimumNewsVersion;
@property (nonatomic, readonly, copy) NSArray *moreFromPublisherArticleIDs;
@property (nonatomic, readonly) bool needsRapidUpdates;
@property (nonatomic, readonly) unsigned long long order;
@property (getter=isPaid, nonatomic, readonly) bool paid;
@property (nonatomic, readonly, copy) NSString *primaryAudience;
@property (nonatomic, copy) NSDate *publishDate;
@property (nonatomic, readonly) unsigned long long publishDateMilliseconds;
@property (nonatomic, readonly) unsigned long long publisherArticleVersion;
@property (nonatomic, readonly, copy) NSString *publisherID;
@property (nonatomic, readonly, copy) NSString *referencedArticleID;
@property (nonatomic, readonly, copy) NSArray *relatedArticleIDs;
@property (nonatomic, copy) NSString *shortExcerpt;
@property (nonatomic) bool showSubscriptionRequiredText;
@property (nonatomic, copy) NSObject<FCChannelProviding> *sourceChannel;
@property (nonatomic, readonly, copy) NSString *sourceChannelID;
@property (nonatomic, readonly, copy) NSString *sourceFeedID;
@property (nonatomic, copy) NSString *sourceName;
@property (getter=isSponsored, nonatomic, readonly) bool sponsored;
@property (nonatomic, retain) FCTopStoriesStyleConfiguration *storyStyle;
@property (nonatomic) unsigned long long storyType;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *surfacedByBinID;
@property (nonatomic, copy) NSString *surfacedByChannelID;
@property (nonatomic, copy) NSString *surfacedBySectionID;
@property (nonatomic, copy) NSString *surfacedByTopicID;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnail;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } thumbnailFocalFrame;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailHQ;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailLQ;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailMedium;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailUltraHQ;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailWidget;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailWidgetHQ;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailWidgetLQ;
@property (nonatomic) double tileProminenceScore;
@property (nonatomic, copy) NSString *title;
@property (getter=isTopStory, nonatomic) bool topStory;
@property (nonatomic, readonly, copy) NSArray *topicFlags;
@property (nonatomic, copy) NSArray *topicIDs;
@property (nonatomic, readonly, copy) NSArray *topicScores;
@property (nonatomic) bool usesImageOnTopLayout;
@property (nonatomic, readonly, copy) NSString *versionIdentifier;
@property (nonatomic, readonly) double videoDuration;
@property (nonatomic, readonly) NSURL *videoURL;

- (void).cxx_destruct;
- (id)accessoryText;
- (id)allowedStorefrontIDs;
- (unsigned long long)articleContentType;
- (id)articleID;
- (unsigned long long)articleRecordModificationDateMilliseconds;
- (void)assignStoryType:(unsigned long long)arg1 withAppConfig:(id)arg2;
- (unsigned long long)backendArticleVersion;
- (id)blockedStorefrontIDs;
- (bool)canBePurchased;
- (id)clusterID;
- (id)contentManifestWithContext:(id)arg1;
- (unsigned long long)contentType;
- (id)contentURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coverArt;
- (id)description;
- (id)displayDate;
- (id)endOfArticleTopicIDs;
- (id)excerpt;
- (long long)feedElementType;
- (unsigned long long)feedHalfLifeMilliseconds;
- (id)feedID;
- (unsigned long long)feedOrder;
- (double)globalUserFeedback;
- (unsigned long long)halfLife;
- (bool)hasGlobalUserFeedback;
- (bool)hasThumbnail;
- (unsigned long long)hash;
- (id)headlineURL;
- (id)iAdCategories;
- (id)iAdKeywords;
- (id)iAdSectionIDs;
- (id)identifier;
- (bool)isBlockedExplicitContent;
- (bool)isDeleted;
- (bool)isDraft;
- (bool)isEqual:(id)arg1;
- (bool)isExplicitContent;
- (bool)isFeatureCandidate;
- (bool)isFromBlockedStorefront;
- (bool)isGap;
- (bool)isPaid;
- (bool)isSponsored;
- (bool)isTopStory;
- (struct CGSize { double x1; double x2; })largestThumbnailSize;
- (id)lastFetchedDate;
- (id)lastModifiedDate;
- (id)localDraftPath;
- (long long)minimumNewsVersion;
- (id)moreFromPublisherArticleIDs;
- (bool)needsRapidUpdates;
- (unsigned long long)order;
- (void)overrideDisplayDate:(id)arg1;
- (id)primaryAudience;
- (id)publishDate;
- (unsigned long long)publishDateMilliseconds;
- (unsigned long long)publisherArticleVersion;
- (id)publisherID;
- (id)referencedArticleID;
- (id)relatedArticleIDs;
- (void)setArticleID:(id)arg1;
- (void)setContentType:(unsigned long long)arg1;
- (void)setDeleted:(bool)arg1;
- (void)setDisplayDate:(id)arg1;
- (void)setExcerpt:(id)arg1;
- (void)setFeedOrder:(unsigned long long)arg1;
- (void)setGlobalUserFeedback:(double)arg1;
- (void)setHeadlineURL:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPublishDate:(id)arg1;
- (void)setShortExcerpt:(id)arg1;
- (void)setShowSubscriptionRequiredText:(bool)arg1;
- (void)setSourceChannel:(id)arg1;
- (void)setSourceName:(id)arg1;
- (void)setStoryStyle:(id)arg1;
- (void)setStoryType:(unsigned long long)arg1;
- (void)setSurfacedByBinID:(id)arg1;
- (void)setSurfacedByChannelID:(id)arg1;
- (void)setSurfacedBySectionID:(id)arg1;
- (void)setSurfacedByTopicID:(id)arg1;
- (void)setThumbnailFocalFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTileProminenceScore:(double)arg1;
- (void)setTitle:(id)arg1;
- (void)setTopStory:(bool)arg1;
- (void)setTopicIDs:(id)arg1;
- (void)setUsesImageOnTopLayout:(bool)arg1;
- (id)shortExcerpt;
- (bool)showSubscriptionRequiredText;
- (id)sourceChannel;
- (id)sourceChannelID;
- (id)sourceFeedID;
- (id)sourceName;
- (id)storyStyle;
- (unsigned long long)storyType;
- (id)subtitle;
- (id)surfacedByBinID;
- (id)surfacedByChannelID;
- (id)surfacedBySectionID;
- (id)surfacedByTopicID;
- (id)thumbnail;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbnailFocalFrame;
- (id)thumbnailHQ;
- (id)thumbnailLQ;
- (id)thumbnailMedium;
- (id)thumbnailUltraHQ;
- (id)thumbnailWidget;
- (id)thumbnailWidgetHQ;
- (id)thumbnailWidgetLQ;
- (double)tileProminenceScore;
- (id)title;
- (id)topicFlags;
- (id)topicIDs;
- (id)topicScores;
- (bool)usesImageOnTopLayout;
- (id)versionIdentifier;
- (double)videoDuration;
- (id)videoURL;

@end
