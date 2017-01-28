/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedGroupEmittingContext : NSObject {
    NSSet * _articleIDs;
    FCCloudContext * _cloudContext;
    NSSet * _clusterIDs;
    unsigned long long  _desiredHeadlineCount;
    FCFeedEdition * _edition;
    NSDate * _editionKeyDate;
    NSArray * _emitters;
    FCFeedDescriptor * _feedDescriptor;
    NSArray * _followingGroups;
    FCForYouCatchUpOperation * _forYouCatchUpOperation;
    NSHashTable * _groupsFromPage;
    bool  _isFirstPageInRefreshSession;
    bool  _isOffline;
    bool  _isTopOfPage;
    FCDateRange * _pageDateRange;
    NSArray * _pendingGroups;
    <FCFeedPersonalizing> * _personalizer;
    NSArray * _precedingGroups;
    bool  _preferSpeedOverQuality;
    FCDateRange * _refreshDateRange;
    FCFeedRefreshSession * _refreshSession;
    NSArray * _remainingEmitters;
}

@property (nonatomic, readonly, copy) NSSet *articleIDs;
@property (nonatomic, readonly) FCCloudContext *cloudContext;
@property (nonatomic, readonly, copy) NSSet *clusterIDs;
@property (nonatomic, readonly) unsigned long long countOfArticlesInPrecedingGroup;
@property (nonatomic, readonly) unsigned long long desiredHeadlineCount;
@property (nonatomic, readonly, copy) FCFeedEdition *edition;
@property (nonatomic, readonly) NSDate *editionKeyDate;
@property (nonatomic, retain) NSArray *emitters;
@property (nonatomic, readonly, copy) FCFeedDescriptor *feedDescriptor;
@property (nonatomic, readonly, copy) NSArray *followingGroups;
@property (nonatomic, readonly) FCForYouCatchUpOperation *forYouCatchUpOperation;
@property (nonatomic, retain) NSHashTable *groupsFromPage;
@property (nonatomic, readonly) bool isFirstPageInRefreshSession;
@property (nonatomic, readonly) bool isOffline;
@property (nonatomic, readonly) bool isTopOfPage;
@property (nonatomic, readonly, copy) FCDateRange *pageDateRange;
@property (nonatomic, readonly, copy) NSArray *pendingGroups;
@property (nonatomic, readonly) <FCFeedPersonalizing> *personalizer;
@property (nonatomic, readonly) long long precedingGroupType;
@property (nonatomic, readonly, copy) NSArray *precedingGroups;
@property (nonatomic, readonly) bool preferSpeedOverQuality;
@property (nonatomic, readonly) FCDateRange *refreshDateRange;
@property (nonatomic, retain) FCFeedRefreshSession *refreshSession;
@property (nonatomic, retain) NSArray *remainingEmitters;

- (void).cxx_destruct;
- (id)_filterTransformationWithFilterOptions:(long long)arg1 groupTypes:(id)arg2 includeArticlesFromGroupTypes:(bool)arg3;
- (id)allArticleIDs;
- (id)articleIDs;
- (id)articleIDsContainedByGroupType:(long long)arg1;
- (id)cloudContext;
- (id)clusterIDs;
- (id)copyWithRefreshSession:(id)arg1;
- (unsigned long long)countOfArticlesInPrecedingGroup;
- (unsigned long long)countOfPrecedingAdjacentGroupsWithTypes:(id)arg1;
- (id)creationDateOfFollowingGroupWithType:(long long)arg1;
- (unsigned long long)desiredHeadlineCount;
- (id)edition;
- (id)editionKeyDate;
- (id)emitters;
- (id)feedDescriptor;
- (id)filterTransformationWithFilterOptions:(long long)arg1;
- (id)filterTransformationWithFilterOptions:(long long)arg1 considerOutputFrom:(id)arg2;
- (id)filterTransformationWithFilterOptions:(long long)arg1 ignoringCurrentPageOutputFrom:(id)arg2;
- (id)filterTransformationWithFilterOptions:(long long)arg1 ignoringOutputFrom:(id)arg2;
- (id)followingAdjacentHeadlinesFromGroupType:(long long)arg1;
- (id)followingGroups;
- (id)forYouCatchUpOperation;
- (id)groupFromPageWithType:(long long)arg1;
- (id)groupsFromPage;
- (id)initWithCloudContext:(id)arg1 refreshSession:(id)arg2 refreshDateRange:(id)arg3 edition:(id)arg4 precedingGroups:(id)arg5 followingGroups:(id)arg6 feedDescriptor:(id)arg7 emitters:(id)arg8 desiredHeadlineCount:(unsigned long long)arg9 preferSpeedOverQuality:(bool)arg10 forYouCatchUpOperation:(id)arg11;
- (bool)isFirstPageInRefreshSession;
- (bool)isOffline;
- (bool)isTopOfPage;
- (id)pageDateRange;
- (bool)pageHasExhaustedGroupsWithTypes:(id)arg1;
- (bool)pageHasPrecedingGroupWithSourceIdentifier:(id)arg1;
- (bool)pageWillContainGroupWithType:(long long)arg1;
- (id)pendingGroups;
- (id)personalizer;
- (id)precedingAdjacentHeadlinesFromGroupType:(long long)arg1;
- (long long)precedingGroupType;
- (id)precedingGroups;
- (id)precedingNewFavoriteTagIDs;
- (bool)preferSpeedOverQuality;
- (id)refreshDateRange;
- (id)refreshSession;
- (id)remainingEmitters;
- (void)setEmitters:(id)arg1;
- (void)setGroupsFromPage:(id)arg1;
- (void)setRefreshSession:(id)arg1;
- (void)setRemainingEmitters:(id)arg1;

@end
