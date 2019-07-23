/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCurrentFeaturedHeadlinesFetchOperation : FCOperation {
    <FCContentContext> * _context;
    id /* block */  _fetchCompletionHandler;
    NSArray * _resultHeadlines;
    <FCFeedTransforming> * _transformation;
    bool  _useFallbackArticleSource;
}

@property (nonatomic, retain) <FCContentContext> *context;
@property (nonatomic, copy) id /* block */ fetchCompletionHandler;
@property (nonatomic, retain) NSArray *resultHeadlines;
@property (nonatomic, retain) <FCFeedTransforming> *transformation;
@property (nonatomic) bool useFallbackArticleSource;

- (void).cxx_destruct;
- (id)_promiseArticleRecordsWithConfiguration:(id)arg1;
- (id)_promiseConfiguration;
- (id)_promiseFilteredArticleIDsFromArticleRecords:(id)arg1;
- (id)_promiseHeadlinesForArticleIDs:(id)arg1;
- (id)_promiseTemporaryFallbackFeedItemsWithConfiguration:(id)arg1;
- (id)_promiseTemporaryFallbackHeadlinesForFeedItems:(id)arg1;
- (id)context;
- (id /* block */)fetchCompletionHandler;
- (id)init;
- (id)initWithContext:(id)arg1 transformation:(id)arg2;
- (id)initWithContext:(id)arg1 transformation:(id)arg2 useFallbackArticleSource:(bool)arg3;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)resultHeadlines;
- (void)setContext:(id)arg1;
- (void)setFetchCompletionHandler:(id /* block */)arg1;
- (void)setResultHeadlines:(id)arg1;
- (void)setTransformation:(id)arg1;
- (void)setUseFallbackArticleSource:(bool)arg1;
- (id)transformation;
- (bool)useFallbackArticleSource;
- (bool)validateOperation;

@end
