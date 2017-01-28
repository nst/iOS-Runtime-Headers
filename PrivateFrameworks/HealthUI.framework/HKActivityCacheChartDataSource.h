/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKActivityCacheChartDataSource : HKHealthQueryChartCacheDataSource {
    NSCalendar * _gregorianCalendar;
    NSCalendar * _gregorianNonUTCCalendar;
    HKUnitController * _unitController;
}

- (void).cxx_destruct;
- (id)_cachePredicateForStartDate:(id)arg1 endDate:(id)arg2;
- (id)_dateComponentsForDate:(id)arg1;
- (void)_handleActivityCaches:(id)arg1 workouts:(id)arg2 blockStart:(id)arg3 blockEnd:(id)arg4 completion:(id)arg5;
- (id)_unitForDataUnit;
- (id)_workoutsPredicateForStartDate:(id)arg1 endDate:(id)arg2;
- (id)initWithUnitController:(id)arg1 healthStore:(id)arg2;
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(id)arg4;

@end
