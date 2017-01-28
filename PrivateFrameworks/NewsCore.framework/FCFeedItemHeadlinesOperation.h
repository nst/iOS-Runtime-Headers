/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedItemHeadlinesOperation : FCOperation {
    <FCContentContext> * _context;
    NSDictionary * _feedContextByFeedID;
    NSArray * _feedItems;
    id  _headlinesCompletionHandler;
    id  _headlinesMapCompletionHandler;
    <FCFeedPersonalizing> * _personalizer;
    id  _rapidUpdateRefreshTest;
    NSArray * _resultHeadlines;
    NSMapTable * _resultHeadlinesByFeedItem;
}

@property (nonatomic, retain) <FCContentContext> *context;
@property (nonatomic, copy) NSDictionary *feedContextByFeedID;
@property (nonatomic, copy) NSArray *feedItems;
@property (nonatomic, copy) id headlinesCompletionHandler;
@property (nonatomic, copy) id headlinesMapCompletionHandler;
@property (nonatomic, retain) <FCFeedPersonalizing> *personalizer;
@property (nonatomic, copy) id rapidUpdateRefreshTest;
@property (nonatomic, retain) NSArray *resultHeadlines;
@property (nonatomic, retain) NSMapTable *resultHeadlinesByFeedItem;

- (void).cxx_destruct;
- (void)_fetchUnadornedHeadlinesWithCompletionHandler:(id)arg1;
- (id)context;
- (id)feedContextByFeedID;
- (id)feedItems;
- (id)headlinesCompletionHandler;
- (id)headlinesMapCompletionHandler;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)personalizer;
- (id)rapidUpdateRefreshTest;
- (id)resultHeadlines;
- (id)resultHeadlinesByFeedItem;
- (void)setContext:(id)arg1;
- (void)setFeedContextByFeedID:(id)arg1;
- (void)setFeedItems:(id)arg1;
- (void)setHeadlinesCompletionHandler:(id)arg1;
- (void)setHeadlinesMapCompletionHandler:(id)arg1;
- (void)setPersonalizer:(id)arg1;
- (void)setRapidUpdateRefreshTest:(id)arg1;
- (void)setResultHeadlines:(id)arg1;
- (void)setResultHeadlinesByFeedItem:(id)arg1;
- (bool)validateOperation;

@end