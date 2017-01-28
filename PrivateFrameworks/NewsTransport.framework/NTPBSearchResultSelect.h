/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBSearchResultSelect : PBCodable <NSCopying> {
    NSMutableArray * _channelResultFeedIds;
    bool  _didSelectResult;
    struct { 
        unsigned int searchExecutionMethod : 1; 
        unsigned int searchLocation : 1; 
        unsigned int searchResultSelectLocation : 1; 
        unsigned int selectedResultActionType : 1; 
        unsigned int selectedResultRankInSection : 1; 
        unsigned int selectedResultSection : 1; 
        unsigned int selectedResultType : 1; 
        unsigned int totalResults : 1; 
        unsigned int totalResultsInSelectedSection : 1; 
        unsigned int didSelectResult : 1; 
        unsigned int selectedResultShowMore : 1; 
    }  _has;
    NSMutableArray * _nonSelectedResultFeedIds;
    int  _searchExecutionMethod;
    int  _searchLocation;
    int  _searchResultSelectLocation;
    NSMutableArray * _searchResults;
    NSString * _searchString;
    int  _selectedResultActionType;
    NSString * _selectedResultFeedId;
    int  _selectedResultRankInSection;
    int  _selectedResultSection;
    bool  _selectedResultShowMore;
    NSString * _selectedResultString;
    int  _selectedResultType;
    NSString * _storeFrontId;
    NSString * _topResultFeedId;
    NSMutableArray * _topicResultFeedIds;
    int  _totalResults;
    int  _totalResultsInSelectedSection;
}

@property (nonatomic, retain) NSMutableArray *channelResultFeedIds;
@property (nonatomic) bool didSelectResult;
@property (nonatomic) bool hasDidSelectResult;
@property (nonatomic) bool hasSearchExecutionMethod;
@property (nonatomic) bool hasSearchLocation;
@property (nonatomic) bool hasSearchResultSelectLocation;
@property (nonatomic, readonly) bool hasSearchString;
@property (nonatomic) bool hasSelectedResultActionType;
@property (nonatomic, readonly) bool hasSelectedResultFeedId;
@property (nonatomic) bool hasSelectedResultRankInSection;
@property (nonatomic) bool hasSelectedResultSection;
@property (nonatomic) bool hasSelectedResultShowMore;
@property (nonatomic, readonly) bool hasSelectedResultString;
@property (nonatomic) bool hasSelectedResultType;
@property (nonatomic, readonly) bool hasStoreFrontId;
@property (nonatomic, readonly) bool hasTopResultFeedId;
@property (nonatomic) bool hasTotalResults;
@property (nonatomic) bool hasTotalResultsInSelectedSection;
@property (nonatomic, retain) NSMutableArray *nonSelectedResultFeedIds;
@property (nonatomic) int searchExecutionMethod;
@property (nonatomic) int searchLocation;
@property (nonatomic) int searchResultSelectLocation;
@property (nonatomic, retain) NSMutableArray *searchResults;
@property (nonatomic, retain) NSString *searchString;
@property (nonatomic) int selectedResultActionType;
@property (nonatomic, retain) NSString *selectedResultFeedId;
@property (nonatomic) int selectedResultRankInSection;
@property (nonatomic) int selectedResultSection;
@property (nonatomic) bool selectedResultShowMore;
@property (nonatomic, retain) NSString *selectedResultString;
@property (nonatomic) int selectedResultType;
@property (nonatomic, retain) NSString *storeFrontId;
@property (nonatomic, retain) NSString *topResultFeedId;
@property (nonatomic, retain) NSMutableArray *topicResultFeedIds;
@property (nonatomic) int totalResults;
@property (nonatomic) int totalResultsInSelectedSection;

+ (Class)channelResultFeedIdsType;
+ (Class)nonSelectedResultFeedIdType;
+ (Class)searchResultsType;
+ (Class)topicResultFeedIdsType;

- (void).cxx_destruct;
- (int)StringAsSearchExecutionMethod:(id)arg1;
- (int)StringAsSearchLocation:(id)arg1;
- (void)addChannelResultFeedIds:(id)arg1;
- (void)addNonSelectedResultFeedId:(id)arg1;
- (void)addSearchResults:(id)arg1;
- (void)addTopicResultFeedIds:(id)arg1;
- (id)channelResultFeedIds;
- (id)channelResultFeedIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)channelResultFeedIdsCount;
- (void)clearChannelResultFeedIds;
- (void)clearNonSelectedResultFeedIds;
- (void)clearSearchResults;
- (void)clearTopicResultFeedIds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)didSelectResult;
- (bool)hasDidSelectResult;
- (bool)hasSearchExecutionMethod;
- (bool)hasSearchLocation;
- (bool)hasSearchResultSelectLocation;
- (bool)hasSearchString;
- (bool)hasSelectedResultActionType;
- (bool)hasSelectedResultFeedId;
- (bool)hasSelectedResultRankInSection;
- (bool)hasSelectedResultSection;
- (bool)hasSelectedResultShowMore;
- (bool)hasSelectedResultString;
- (bool)hasSelectedResultType;
- (bool)hasStoreFrontId;
- (bool)hasTopResultFeedId;
- (bool)hasTotalResults;
- (bool)hasTotalResultsInSelectedSection;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nonSelectedResultFeedIdAtIndex:(unsigned long long)arg1;
- (id)nonSelectedResultFeedIds;
- (unsigned long long)nonSelectedResultFeedIdsCount;
- (bool)readFrom:(id)arg1;
- (int)searchExecutionMethod;
- (id)searchExecutionMethodAsString:(int)arg1;
- (int)searchLocation;
- (id)searchLocationAsString:(int)arg1;
- (int)searchResultSelectLocation;
- (id)searchResults;
- (id)searchResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)searchResultsCount;
- (id)searchString;
- (int)selectedResultActionType;
- (id)selectedResultFeedId;
- (int)selectedResultRankInSection;
- (int)selectedResultSection;
- (bool)selectedResultShowMore;
- (id)selectedResultString;
- (int)selectedResultType;
- (void)setChannelResultFeedIds:(id)arg1;
- (void)setDidSelectResult:(bool)arg1;
- (void)setHasDidSelectResult:(bool)arg1;
- (void)setHasSearchExecutionMethod:(bool)arg1;
- (void)setHasSearchLocation:(bool)arg1;
- (void)setHasSearchResultSelectLocation:(bool)arg1;
- (void)setHasSelectedResultActionType:(bool)arg1;
- (void)setHasSelectedResultRankInSection:(bool)arg1;
- (void)setHasSelectedResultSection:(bool)arg1;
- (void)setHasSelectedResultShowMore:(bool)arg1;
- (void)setHasSelectedResultType:(bool)arg1;
- (void)setHasTotalResults:(bool)arg1;
- (void)setHasTotalResultsInSelectedSection:(bool)arg1;
- (void)setNonSelectedResultFeedIds:(id)arg1;
- (void)setSearchExecutionMethod:(int)arg1;
- (void)setSearchLocation:(int)arg1;
- (void)setSearchResultSelectLocation:(int)arg1;
- (void)setSearchResults:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSelectedResultActionType:(int)arg1;
- (void)setSelectedResultFeedId:(id)arg1;
- (void)setSelectedResultRankInSection:(int)arg1;
- (void)setSelectedResultSection:(int)arg1;
- (void)setSelectedResultShowMore:(bool)arg1;
- (void)setSelectedResultString:(id)arg1;
- (void)setSelectedResultType:(int)arg1;
- (void)setStoreFrontId:(id)arg1;
- (void)setTopResultFeedId:(id)arg1;
- (void)setTopicResultFeedIds:(id)arg1;
- (void)setTotalResults:(int)arg1;
- (void)setTotalResultsInSelectedSection:(int)arg1;
- (id)storeFrontId;
- (id)topResultFeedId;
- (id)topicResultFeedIds;
- (id)topicResultFeedIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicResultFeedIdsCount;
- (int)totalResults;
- (int)totalResultsInSelectedSection;
- (void)writeTo:(id)arg1;

@end
