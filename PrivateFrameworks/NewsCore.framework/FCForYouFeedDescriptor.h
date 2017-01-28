/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCForYouFeedDescriptor : FCMultiTagFeedDescriptor <FCFeedPaginating> {
    FCForYouGroupsConfiguration * _forYouGroupsConfiguration;
    unsigned long long  _trendingAndSavedStoriesCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FCForYouGroupsConfiguration *forYouGroupsConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long trendingAndSavedStoriesCount;

- (void).cxx_destruct;
- (id)editionAtDate:(id)arg1;
- (id)editionFollowingEdition:(id)arg1;
- (long long)feedFilterOptions;
- (id)feedGroupEmitters;
- (id)feedPaginator;
- (long long)feedSortMethod;
- (id)forYouGroupsConfiguration;
- (id)iAdFeedID;
- (id)initWithIdentifier:(id)arg1 trendingAndSavedStoriesCount:(long long)arg2 forYouGroupsConfiguration:(id)arg3;
- (id)name;
- (id)offlineFeedGroupEmitters;
- (void)setForYouGroupsConfiguration:(id)arg1;
- (void)setTrendingAndSavedStoriesCount:(unsigned long long)arg1;
- (unsigned long long)trendingAndSavedStoriesCount;

@end
