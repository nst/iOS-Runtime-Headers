/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSMetrics : NSObject {
    AMSURLSession * _URLSession;
    <AMSMetricsBagContract> * _bagContract;
    NSMutableSet * _chainedFlushPromises;
    NSObject<OS_dispatch_queue> * _completionQueue;
    NSString * _containerId;
    AMSMetricsDatabase * _database;
    bool  _disableFlushing;
    bool  _flushCancelled;
    bool  _flushOnForeground;
    id /* block */  _flushTimerBlock;
    NSDictionary * _lastMetricsDictionary;
    long long  _maxBatchSize;
    long long  _maxRequestCount;
    NSObject<OS_dispatch_queue> * _metricsQueue;
    bool  _monitorsLifecycleEvents;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSMutableSet * _requestPromises;
}

@property (nonatomic, retain) AMSURLSession *URLSession;
@property (nonatomic, retain) <AMSMetricsBagContract> *bagContract;
@property (nonatomic, retain) NSMutableSet *chainedFlushPromises;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic, readonly) NSString *containerId;
@property (nonatomic, retain) AMSMetricsDatabase *database;
@property (nonatomic) bool disableFlushing;
@property (nonatomic, readonly) long long eventCount;
@property (nonatomic) bool flushCancelled;
@property (nonatomic, readonly) double flushInterval;
@property (nonatomic) bool flushOnForeground;
@property (nonatomic, copy) id /* block */ flushTimerBlock;
@property (nonatomic) bool flushTimerEnabled;
@property (nonatomic, retain) NSDictionary *lastMetricsDictionary;
@property (nonatomic) long long maxBatchSize;
@property (nonatomic) long long maxRequestCount;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *metricsQueue;
@property (nonatomic) bool monitorsLifecycleEvents;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, retain) NSMutableSet *requestPromises;

+ (id)_sharedInstanceUsingContract:(id)arg1;
+ (id)_sharedTimerQueue;
+ (bool)disableBackgroundMetrics;
+ (bool)flushTimerEnabled;
+ (id)serverTimeFromDate:(id)arg1;
+ (id)serverTimeFromTimeInterval:(double)arg1;
+ (void)setDisableBackgroundMetrics:(bool)arg1;
+ (void)setFlushTimerEnabled:(bool)arg1;
+ (double)timeIntervalFromServerTime:(id)arg1;

- (void).cxx_destruct;
- (id)URLSession;
- (void)_addCancellablePromise:(id)arg1;
- (void)_applicationWillEnterForeground;
- (id)_baseMetricsURL;
- (void)_batchEventArray:(id)arg1 batchBlock:(id /* block */)arg2;
- (id)_createRequestWithURL:(id)arg1 canary:(id)arg2 account:(id)arg3 body:(id)arg4 signature:(id)arg5 logKey:(id)arg6 collectAdditonalMetrics:(bool)arg7;
- (void)_flushDatabaseMetricsWithLockKey:(id)arg1 logKey:(id)arg2 completion:(id /* block */)arg3;
- (void)_flushNextBatchWithTopic:(id)arg1 lockKey:(id)arg2 logKey:(id)arg3 requestCount:(long long)arg4 flushedEventCount:(long long)arg5 completion:(id /* block */)arg6;
- (void)_flushTimerInvalidate;
- (void)_flushTimerStart;
- (void)_flushTimerUpdated;
- (void)_handleFlushTimer;
- (id)_mescalSignatureWithBodyData:(id)arg1 logKey:(id)arg2;
- (id)_metricsDictionary;
- (id)_nextBatchWithTopic:(id)arg1 lockKey:(id)arg2 error:(id*)arg3;
- (id)_nextTopicWithLockKey:(id)arg1 error:(id*)arg2;
- (void)_openDatabaseIfNeeded;
- (void)_postEvents:(id)arg1 reportURL:(id)arg2 account:(id)arg3 logKey:(id)arg4 completion:(id /* block */)arg5;
- (id)_prepareEvent:(id)arg1;
- (bool)_shouldBlacklistEvent:(id)arg1;
- (bool)_shouldClearEventsDespiteError:(id)arg1 result:(id)arg2;
- (id)bagContract;
- (void)cancel;
- (id)chainedFlushPromises;
- (id)completionQueue;
- (id)containerId;
- (id)database;
- (void)dealloc;
- (bool)disableFlushing;
- (void)dropEvents;
- (id)enqueueAsyncEvents:(id)arg1;
- (void)enqueueEvent:(id)arg1;
- (void)enqueueEvents:(id)arg1;
- (long long)eventCount;
- (id)flush;
- (bool)flushCancelled;
- (id)flushEvents:(id)arg1;
- (double)flushInterval;
- (bool)flushOnForeground;
- (id /* block */)flushTimerBlock;
- (bool)flushTimerEnabled;
- (id)initWithContainerId:(id)arg1 bagContract:(id)arg2;
- (id)lastMetricsDictionary;
- (long long)maxBatchSize;
- (long long)maxRequestCount;
- (id)metricsQueue;
- (bool)monitorsLifecycleEvents;
- (id)propertyQueue;
- (id)requestPromises;
- (void)setBagContract:(id)arg1;
- (void)setChainedFlushPromises:(id)arg1;
- (void)setCompletionQueue:(id)arg1;
- (void)setDatabase:(id)arg1;
- (void)setDisableFlushing:(bool)arg1;
- (void)setFlushCancelled:(bool)arg1;
- (void)setFlushOnForeground:(bool)arg1;
- (void)setFlushTimerBlock:(id /* block */)arg1;
- (void)setFlushTimerEnabled:(bool)arg1;
- (void)setLastMetricsDictionary:(id)arg1;
- (void)setMaxBatchSize:(long long)arg1;
- (void)setMaxRequestCount:(long long)arg1;
- (void)setMetricsQueue:(id)arg1;
- (void)setMonitorsLifecycleEvents:(bool)arg1;
- (void)setPropertyQueue:(id)arg1;
- (void)setRequestPromises:(id)arg1;
- (void)setURLSession:(id)arg1;

@end
