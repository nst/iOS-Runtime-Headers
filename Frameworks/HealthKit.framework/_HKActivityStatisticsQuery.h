/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKActivityStatisticsQuery : HKQuery {
    bool  _deliveredInitial;
    NSDate * _endDate;
    NSDateComponents * _exerciseIntervalComponents;
    id  _initialResultsHandler;
    NSDateComponents * _moveIntervalComponents;
    NSDate * _startDate;
    id  _updateHandler;
    double  _updateInterval;
}

@property (nonatomic, copy) id initialResultsHandler;
@property (nonatomic, copy) id updateHandler;
@property (getter=_updateInterval, setter=_setUpdateInterval:, nonatomic) double updateInterval;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (Class)_queryServerDataObjectClass;

- (void).cxx_destruct;
- (void)_queue_cleanupAfterDeactivation;
- (void)_queue_configureQueryServerDataObject:(id)arg1;
- (void)_queue_deliverActivityMoveStatistics:(id)arg1 exerciseStatistics:(id)arg2 standHoursInfo:(id)arg3 workoutInfo:(id)arg4 forQuery:(id)arg5;
- (void)_queue_deliverError:(id)arg1;
- (id)_queue_errorHandler;
- (bool)_queue_shouldStayAliveAfterInitialResults;
- (void)_queue_validate;
- (void)_queue_validateIntervalComponents:(id)arg1;
- (void)_queue_validateParams;
- (bool)_requiresValidSampleType;
- (void)_setUpdateInterval:(double)arg1;
- (double)_updateInterval;
- (void)deliverActivityMoveStatistics:(id)arg1 exerciseStatistics:(id)arg2 standHoursInfo:(id)arg3 workouts:(id)arg4 forQuery:(id)arg5;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 moveIntervalComponents:(id)arg3 exerciseIntervalComponents:(id)arg4 initialResultsHandler:(id)arg5;
- (id)initialResultsHandler;
- (void)setInitialResultsHandler:(id)arg1;
- (void)setUpdateHandler:(id)arg1;
- (id)updateHandler;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (Class)hd_queryServerClass;
+ (bool)hd_requiresPrivateEntitlements;

@end
