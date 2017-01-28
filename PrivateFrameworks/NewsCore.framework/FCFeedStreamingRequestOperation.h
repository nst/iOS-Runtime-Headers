/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedStreamingRequestOperation : FCOperation {
    NSMutableArray * _aggregateFeedItems;
    NSMutableDictionary * _aggregateFeedResponsesByFeedID;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    <FCContentContext> * _context;
    unsigned long long  _cutoffAtCount;
    FCFeedDatabase * _feedDatabase;
    NSMutableArray * _feedRangeSteps;
    NSArray * _feedRequests;
    NSArray * _feedTransformations;
    long long  _options;
    id  _requestCompletionHandler;
    id  _streamingResultsHandler;
    long long  _streamingType;
    bool  _throttled;
}

@property (nonatomic, retain) NSMutableArray *aggregateFeedItems;
@property (nonatomic, retain) NSMutableDictionary *aggregateFeedResponsesByFeedID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) <FCContentContext> *context;
@property (nonatomic) unsigned long long cutoffAtCount;
@property (nonatomic, retain) FCFeedDatabase *feedDatabase;
@property (nonatomic, retain) NSMutableArray *feedRangeSteps;
@property (nonatomic, copy) NSArray *feedRequests;
@property (nonatomic, copy) NSArray *feedTransformations;
@property (nonatomic) long long options;
@property (nonatomic, copy) id requestCompletionHandler;
@property (nonatomic, copy) id streamingResultsHandler;
@property (nonatomic) long long streamingType;
@property (nonatomic) bool throttled;

- (void).cxx_destruct;
- (void)_appendFeedResponses:(id)arg1 feedItems:(id)arg2;
- (id)_feedRangeBrokenIntoSteps:(id)arg1;
- (id)_feedRangeCoveredByRequests;
- (void)_startNextFetchStep;
- (id)aggregateFeedItems;
- (id)aggregateFeedResponsesByFeedID;
- (id)callbackQueue;
- (id)context;
- (unsigned long long)cutoffAtCount;
- (id)feedDatabase;
- (id)feedRangeSteps;
- (id)feedRequests;
- (id)feedTransformations;
- (void)operationWillFinishWithError:(id)arg1;
- (long long)options;
- (void)performOperation;
- (id)requestCompletionHandler;
- (void)setAggregateFeedItems:(id)arg1;
- (void)setAggregateFeedResponsesByFeedID:(id)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCutoffAtCount:(unsigned long long)arg1;
- (void)setFeedDatabase:(id)arg1;
- (void)setFeedRangeSteps:(id)arg1;
- (void)setFeedRequests:(id)arg1;
- (void)setFeedTransformations:(id)arg1;
- (void)setOptions:(long long)arg1;
- (void)setRequestCompletionHandler:(id)arg1;
- (void)setStreamingResultsHandler:(id)arg1;
- (void)setStreamingType:(long long)arg1;
- (void)setThrottled:(bool)arg1;
- (id)streamingResultsHandler;
- (long long)streamingType;
- (bool)throttled;

@end
