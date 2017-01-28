/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXAppPredictor : NSObject {
    NSString * _abGroupIdentifier;
    _ATXAppInstallMonitor * _appInstallMonitor;
    _ATXAppLaunchLocation * _appLaunchLocation;
    _ATXAppLaunchMonitor * _appLaunchMonitor;
    bool  _appLaunchMonitorInitialized;
    _DECAsset * _asset;
    NSString * _dayZeroABGroupIdentifier;
    _DECAsset * _dayZeroAsset;
    NSDictionary * _dayZeroParameters;
    _ATXScoreInterpreter * _interpreter;
    struct { char *x1; double x2[24]; double x3; } * _lastPredictionItems;
    int  _nLastPredictionItems;
    _ATXRecentInstallCache * _recentInstallCache;
}

+ (void)removeOldLaunchInfoFrom:(id)arg1 appLaunchHistogram:(id)arg2 spotlightLaunchHistogram:(id)arg3 dayOfWeekHistogram:(id)arg4 launchSequenceManager:(id)arg5;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_initAppLaunchMonitor;
- (id)appDictionaryForAppAtIndex:(int)arg1;
- (id)appInstallMonitor;
- (id)appLaunchMonitor;
- (id)constructSessionLogDictionaryWithEngagedBundle:(id)arg1 resultsShown:(int)arg2 consumerType:(unsigned long long)arg3 outcome:(unsigned long long)arg4 annotation:(id)arg5;
- (id)constructSessionLogDictionaryWithFeedback:(id)arg1 consumerType:(unsigned long long)arg2 outcome:(unsigned long long)arg3;
- (void)dealloc;
- (id)getParseTree;
- (struct { char *x1; double x2[24]; double x3; }*)getPredictionItemsWithCount:(int*)arg1 scoreLogger:(id)arg2;
- (id)getPredictionModelDetails;
- (id)init;
- (id)initWithAsset:(id)arg1 withDayZeroAsset:(id)arg2;
- (void)logPredictionEventWithShown:(id)arg1 outcome:(unsigned long long)arg2 consumerType:(unsigned long long)arg3 consumerSubType:(unsigned char)arg4;
- (id)oldPathsToRestore;
- (id)pathsToBackUp;
- (id)predictWithLimit:(unsigned long long)arg1 scoreLogger:(id)arg2;
- (double)predictionScoreForItem:(const struct { char *x1; double x2[24]; double x3; }*)arg1;
- (double)predictionScoreForItem:(const struct { char *x1; double x2[24]; double x3; }*)arg1 scoreLogger:(id)arg2;
- (unsigned long long)receiveAppWidgetFeedback:(id)arg1 consumerType:(unsigned long long)arg2;
- (unsigned long long)receiveFeedback:(id)arg1 launchSource:(long long)arg2 consumerType:(unsigned long long)arg3 query:(id)arg4 consumerSubType:(unsigned char)arg5;
- (unsigned long long)receiveZkwSpotlightFeedback:(id)arg1 consumerType:(unsigned long long)arg2;
- (void)restoreSerializedState:(id)arg1;
- (id)serializeState;
- (void)sessionObjectLoggingForFeedback:(id)arg1 consumerType:(unsigned long long)arg2 andOutcome:(unsigned long long)arg3;
- (void)train;
- (void)updateFromAsset;
- (void)updateFromZeroDayAsset;
- (void)updateLaunchHistoryFromDuet;

@end
