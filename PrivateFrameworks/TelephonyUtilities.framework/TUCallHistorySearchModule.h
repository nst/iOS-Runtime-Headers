/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallHistorySearchModule : NSObject <TUSearchModuleProtocol> {
    NSMutableArray * _currentResultsList;
    NSString * _previousSearchString;
    bool  _searchComplete;
    TUSearchController * _searchController;
}

@property (nonatomic, retain) NSMutableArray *currentResultsList;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *previousSearchString;
@property (getter=isSearchComplete, nonatomic) bool searchComplete;
@property TUSearchController *searchController;
@property (readonly) TUSearchResults *searchResults;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancelSearch;
- (id)currentResultsList;
- (bool)isSearchComplete;
- (id)previousSearchString;
- (id)searchController;
- (void)searchForString:(id)arg1 completion:(id)arg2;
- (id)searchResults;
- (void)setCurrentResultsList:(id)arg1;
- (void)setPreviousSearchString:(id)arg1;
- (void)setSearchComplete:(bool)arg1;
- (void)setSearchController:(id)arg1;

@end
