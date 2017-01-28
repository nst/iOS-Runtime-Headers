/* Generated by RuntimeBrowser.
 */

@protocol FCHeadlineProviding <NSObject, NSCopying, FCFeedElement, FCClassifiable, FCFeedTransformationItem>

@required

- (NSString *)accessoryText;
- (NSArray *)allowedStorefrontIDs;
- (NSString *)articleID;
- (unsigned long long)backendArticleVersion;
- (NSArray *)blockedStorefrontIDs;
- (NSString *)clusterID;
- (unsigned long long)contentType;
- (NSURL *)contentURL;
- (FCCoverArt *)coverArt;
- (NSDate *)displayDate;
- (NSArray *)endOfArticleTopicIDs;
- (unsigned long long)feedOrder;
- (double)globalUserFeedback;
- (bool)hasThumbnail;
- (NSArray *)iAdCategories;
- (NSArray *)iAdKeywords;
- (NSArray *)iAdSectionIDs;
- (NSString *)identifier;
- (bool)isBlockedExplicitContent;
- (bool)isDeleted;
- (bool)isDraft;
- (bool)isFeatureCandidate;
- (bool)isPaid;
- (bool)isSponsored;
- (bool)isTopStory;
- (struct CGSize { double x1; double x2; })largestThumbnailSize;
- (NSDate *)lastFetchedDate;
- (NSDate *)lastModifiedDate;
- (NSString *)localDraftPath;
- (long long)minimumNewsVersion;
- (NSArray *)moreFromPublisherArticleIDs;
- (bool)needsRapidUpdates;
- (NSString *)primaryAudience;
- (NSDate *)publishDate;
- (unsigned long long)publisherArticleVersion;
- (NSString *)referencedArticleID;
- (NSArray *)relatedArticleIDs;
- (NSString *)shortExcerpt;
- (bool)showSubscriptionRequiredText;
- (NSObject<FCChannelProviding> *)sourceChannel;
- (NSString *)sourceName;
- (FCTopStoriesStyleConfiguration *)storyStyle;
- (unsigned long long)storyType;
- (NSString *)subtitle;
- (NSString *)surfacedByBinID;
- (NSString *)surfacedByChannelID;
- (NSString *)surfacedBySectionID;
- (NSString *)surfacedByTopicID;
- (FCHeadlineThumbnail *)thumbnail;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbnailFocalFrame;
- (FCHeadlineThumbnail *)thumbnailHQ;
- (FCHeadlineThumbnail *)thumbnailLQ;
- (FCHeadlineThumbnail *)thumbnailMedium;
- (FCHeadlineThumbnail *)thumbnailUltraHQ;
- (FCHeadlineThumbnail *)thumbnailWidget;
- (FCHeadlineThumbnail *)thumbnailWidgetHQ;
- (FCHeadlineThumbnail *)thumbnailWidgetLQ;
- (double)tileProminenceScore;
- (NSString *)title;
- (NSArray *)topicFlags;
- (NSArray *)topicIDs;
- (NSArray *)topicScores;
- (bool)usesImageOnTopLayout;
- (NSString *)versionIdentifier;
- (double)videoDuration;
- (NSURL *)videoURL;

@optional

- (FCArticleContentManifest *)contentManifestWithContext:(id <FCContentContext>)arg1;

@end
