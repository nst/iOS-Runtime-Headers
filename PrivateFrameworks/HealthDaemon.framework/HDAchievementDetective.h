/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAchievementDetective : NSObject <HDAchievementEngineDataProviding, HDAchievementEvaluationDelegate, HDCurrentActivitySummaryHelperObserver, _HKAchievementPredicateWorkoutsEnvironmentDataSource, _HKActivitySummaryHistoryEnvironmentDataSource> {
    HDAchievementDataStoreV2 * _achievementStore;
    NSCalendar * _calendar;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    id /* block */  _commitHandler;
    <HDDailyActivityGoalDetectionDelegate> * _dailyGoalDetectionDelegate;
    bool  _didDetectNewWorkouts;
    long long  _endingActivitySummaryIndex;
    HDAchievementEngineV2 * _engine;
    _HKAchievementPredicateEnvironment * _environment;
    NSCalendar * _gregorianUTCCalendar;
    NSArray * _injectedActivitySummaries;
    NSArray * _injectedWorkouts;
    long long  _lastCheckedSummaryIndexForAllGoals;
    long long  _lastCheckedSummaryIndexForDistance;
    long long  _lastCheckedSummaryIndexForExercise;
    long long  _lastCheckedSummaryIndexForMove;
    long long  _lastCheckedSummaryIndexForStand;
    HKQuantity * _lastTodayDistanceValue;
    HKQuantity * _lastTodayExerciseGoal;
    HKQuantity * _lastTodayExerciseValue;
    HKQuantity * _lastTodayMoveGoal;
    HKQuantity * _lastTodayMoveValue;
    unsigned long long  _lastTodayStandGoal;
    unsigned long long  _lastTodayStandValue;
    NSDate * _now;
    HKActivitySummary * _observedTodayActivitySummary;
    HKActivitySummary * _observedYesterdayActivitySummary;
    HKQuantity * _previousTodayExerciseValue;
    HKQuantity * _previousTodayMoveValue;
    unsigned long long  _previousTodayStandValue;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _runQueue;
    bool  _shouldObserveCurrentActivitySummaries;
    long long  _startingActivitySummaryIndex;
    bool  _suppressAchievementAwards;
    HKActivitySummary * _todayActivitySummary;
    NSMutableArray * _workouts;
    NSMutableDictionary * _workoutsByType;
    HKActivitySummary * _yesterdayActivitySummary;
}

@property (nonatomic, retain) HDAchievementDataStoreV2 *achievementStore;
@property (nonatomic, retain) NSCalendar *calendar;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, copy) id /* block */ commitHandler;
@property (nonatomic) <HDDailyActivityGoalDetectionDelegate> *dailyGoalDetectionDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didDetectNewWorkouts;
@property (nonatomic) long long endingActivitySummaryIndex;
@property (nonatomic, retain) HDAchievementEngineV2 *engine;
@property (nonatomic, readonly) _HKAchievementPredicateEnvironment *environment;
@property (nonatomic, retain) NSCalendar *gregorianUTCCalendar;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *injectedActivitySummaries;
@property (nonatomic, copy) NSArray *injectedWorkouts;
@property (nonatomic) long long lastCheckedSummaryIndexForAllGoals;
@property (nonatomic) long long lastCheckedSummaryIndexForDistance;
@property (nonatomic) long long lastCheckedSummaryIndexForExercise;
@property (nonatomic) long long lastCheckedSummaryIndexForMove;
@property (nonatomic) long long lastCheckedSummaryIndexForStand;
@property (nonatomic, retain) HKQuantity *lastTodayDistanceValue;
@property (nonatomic, retain) HKQuantity *lastTodayExerciseGoal;
@property (nonatomic, retain) HKQuantity *lastTodayExerciseValue;
@property (nonatomic, retain) HKQuantity *lastTodayMoveGoal;
@property (nonatomic, retain) HKQuantity *lastTodayMoveValue;
@property (nonatomic) unsigned long long lastTodayStandGoal;
@property (nonatomic) unsigned long long lastTodayStandValue;
@property (nonatomic, retain) NSDate *now;
@property (nonatomic, retain) HKActivitySummary *observedTodayActivitySummary;
@property (nonatomic, retain) HKActivitySummary *observedYesterdayActivitySummary;
@property (nonatomic, retain) HKQuantity *previousTodayExerciseValue;
@property (nonatomic, retain) HKQuantity *previousTodayMoveValue;
@property (nonatomic) unsigned long long previousTodayStandValue;
@property (nonatomic, retain) HDProfile *profile;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *runQueue;
@property (nonatomic) bool shouldObserveCurrentActivitySummaries;
@property (nonatomic) long long startingActivitySummaryIndex;
@property (readonly) Class superclass;
@property (getter=isSuppressingAchievementAwards, nonatomic) bool suppressAchievementAwards;
@property (nonatomic, retain) HKActivitySummary *todayActivitySummary;
@property (nonatomic, retain) NSMutableArray *workouts;
@property (nonatomic, retain) NSMutableDictionary *workoutsByType;
@property (nonatomic, retain) HKActivitySummary *yesterdayActivitySummary;

- (void).cxx_destruct;
- (void)_addWorkout:(id)arg1;
- (void)_clearAnchorBasedProperties;
- (void)_clearCommonValues;
- (void)_clearInjectedUnitTestingDependencies;
- (void)_companion_runForWorkouts:(id)arg1 engine:(id)arg2 environment:(id)arg3;
- (id)_companion_workoutsForEngine:(id)arg1 endingAfterAnchor:(long long)arg2 newAnchor:(long long*)arg3;
- (id)_companion_workoutsInDateRangeStart:(id)arg1 end:(id)arg2;
- (id)_companion_workoutsOfType:(id)arg1;
- (id /* block */)_defaultCommitHandler;
- (void)_detectAchievementsWithEngine:(id)arg1 triggers:(unsigned long long)arg2 environment:(id)arg3;
- (id)_fetchActivitySummariesOrderedByCacheIndexFromIndex:(long long)arg1 toIndex:(long long)arg2 error:(id*)arg3;
- (void)_gizmo_runForWorkoutsWithEngine:(id)arg1 environment:(id)arg2;
- (id)_gizmo_workoutsForEngine:(id)arg1 endingAfterAnchor:(long long)arg2 newAnchor:(long long*)arg3;
- (id)_gizmo_workoutsInDateRangeStart:(id)arg1 end:(id)arg2;
- (id)_gizmo_workoutsOfType:(id)arg1;
- (void)_injectActivitySummaries:(id)arg1;
- (void)_injectNow:(id)arg1;
- (void)_injectWorkouts:(id)arg1;
- (bool)_isActivitySummary:(id)arg1 oneDayAfterActivitySummary:(id)arg2;
- (id)_newEmptyActivitySummaryWithStartDate:(id)arg1 startDateComponents:(id)arg2 calorieGoal:(id)arg3;
- (id)_predicateForDataFromDefaultSourcesEndingAfterDate:(id)arg1 untilDate:(id)arg2;
- (id)_predicateForWatchSources;
- (id)_predicateForWorkoutsInDefaultSourcesOfActivityType:(unsigned long long)arg1;
- (void)_runAchievementEngine:(id)arg1 withPredicateEnvironment:(id)arg2 dataStore:(id)arg3 todayActivitySummary:(id)arg4 yesterdayActivitySummary:(id)arg5 currentDate:(id)arg6 addedWorkouts:(id)arg7;
- (bool)_runQueue_detectAchievementsForActivitySummaries:(id)arg1 workouts:(id)arg2 finalIndex:(long long)arg3;
- (bool)_runQueue_detectAchievementsForTodayOnlyWithActivitySummaries:(id)arg1 workouts:(id)arg2 finalIndex:(long long)arg3;
- (id)_runQueue_fetchAchievementsWithError:(id*)arg1;
- (id)_runQueue_fetchWorkoutsSortedByEndDateFromStartDate:(id)arg1 toEndDate:(id)arg2 error:(id*)arg3;
- (void)_runQueue_performRunWithInitialIndex:(long long)arg1 finalIndex:(long long)arg2 completion:(id /* block */)arg3;
- (void)_setObservedTodaySummary:(id)arg1;
- (void)_setObservedYesterdaySummary:(id)arg1;
- (id)_summariesByAddingEmptySummariesIntoGaps:(id)arg1;
- (void)_systemTimeZoneDidChange:(id)arg1;
- (id)_todayActivitySummary;
- (id)_yesterdayActivitySummary;
- (id)achievementStore;
- (id)aggregateEnvironmentForMonthOffsetFromNow:(long long)arg1;
- (id)calendar;
- (id)callbackQueue;
- (void)clearValuesForCompanionRun;
- (void)clearValuesForGizmoRun;
- (id /* block */)commitHandler;
- (id)createEvaluatedAchievementWithDefinition:(id)arg1;
- (void)currentActivitySummaryHelper:(id)arg1 didUpdateTodayActivitySummary:(id)arg2 changedFields:(unsigned long long)arg3;
- (void)currentActivitySummaryHelper:(id)arg1 didUpdateYesterdayActivitySummary:(id)arg2 changedFields:(unsigned long long)arg3;
- (id)currentDateForEngine:(id)arg1;
- (void)currentDynamicAchievementsWithCompletion:(id /* block */)arg1;
- (id)dailyGoalDetectionDelegate;
- (id)dayEnvironmentsInDateInterval:(id)arg1;
- (void)dealloc;
- (bool)didDetectNewWorkouts;
- (long long)endingActivitySummaryIndex;
- (id)engine;
- (id)environment;
- (id)evaluateAchievementExpression:(id)arg1;
- (id)gregorianUTCCalendar;
- (id)init;
- (id)initWithProfile:(id)arg1 store:(id)arg2;
- (id)injectedActivitySummaries;
- (id)injectedWorkouts;
- (bool)isSuppressingAchievementAwards;
- (long long)lastCheckedSummaryIndexForAllGoals;
- (long long)lastCheckedSummaryIndexForDistance;
- (long long)lastCheckedSummaryIndexForExercise;
- (long long)lastCheckedSummaryIndexForMove;
- (long long)lastCheckedSummaryIndexForStand;
- (id)lastTodayDistanceValue;
- (id)lastTodayExerciseGoal;
- (id)lastTodayExerciseValue;
- (id)lastTodayMoveGoal;
- (id)lastTodayMoveValue;
- (unsigned long long)lastTodayStandGoal;
- (unsigned long long)lastTodayStandValue;
- (id)now;
- (id)observedTodayActivitySummary;
- (id)observedYesterdayActivitySummary;
- (id)previousTodayExerciseValue;
- (id)previousTodayMoveValue;
- (unsigned long long)previousTodayStandValue;
- (id)profile;
- (bool)runAchievementDetectionFromActivitySummaryIndex:(long long)arg1 toActivitySummaryIndex:(long long)arg2;
- (bool)runAchievementDetectionFromActivitySummaryIndex:(long long)arg1 toActivitySummaryIndex:(long long)arg2 didDetectNewWorkouts:(bool)arg3;
- (bool)runDatabaseIdentifierCheckWithCurrentDatabaseIdentifier:(id)arg1 identifierChanged:(bool*)arg2 error:(id*)arg3;
- (id)runQueue;
- (void)setAchievementStore:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setCommitHandler:(id /* block */)arg1;
- (void)setDailyGoalDetectionDelegate:(id)arg1;
- (void)setDidDetectNewWorkouts:(bool)arg1;
- (void)setEndingActivitySummaryIndex:(long long)arg1;
- (void)setEngine:(id)arg1;
- (void)setGregorianUTCCalendar:(id)arg1;
- (void)setInjectedActivitySummaries:(id)arg1;
- (void)setInjectedWorkouts:(id)arg1;
- (void)setLastCheckedSummaryIndexForAllGoals:(long long)arg1;
- (void)setLastCheckedSummaryIndexForDistance:(long long)arg1;
- (void)setLastCheckedSummaryIndexForExercise:(long long)arg1;
- (void)setLastCheckedSummaryIndexForMove:(long long)arg1;
- (void)setLastCheckedSummaryIndexForStand:(long long)arg1;
- (void)setLastTodayDistanceValue:(id)arg1;
- (void)setLastTodayExerciseGoal:(id)arg1;
- (void)setLastTodayExerciseValue:(id)arg1;
- (void)setLastTodayMoveGoal:(id)arg1;
- (void)setLastTodayMoveValue:(id)arg1;
- (void)setLastTodayStandGoal:(unsigned long long)arg1;
- (void)setLastTodayStandValue:(unsigned long long)arg1;
- (void)setNow:(id)arg1;
- (void)setObservedTodayActivitySummary:(id)arg1;
- (void)setObservedYesterdayActivitySummary:(id)arg1;
- (void)setPreviousTodayExerciseValue:(id)arg1;
- (void)setPreviousTodayMoveValue:(id)arg1;
- (void)setPreviousTodayStandValue:(unsigned long long)arg1;
- (void)setProfile:(id)arg1;
- (void)setRunQueue:(id)arg1;
- (void)setShouldObserveCurrentActivitySummaries:(bool)arg1;
- (void)setStartingActivitySummaryIndex:(long long)arg1;
- (void)setSuppressAchievementAwards:(bool)arg1;
- (void)setTodayActivitySummary:(id)arg1;
- (void)setWorkouts:(id)arg1;
- (void)setWorkoutsByType:(id)arg1;
- (void)setYesterdayActivitySummary:(id)arg1;
- (bool)shouldObserveCurrentActivitySummaries;
- (long long)startingActivitySummaryIndex;
- (id)todayActiveEnergyBurnedForEngine:(id)arg1;
- (id)todayActivitySummary;
- (long long)todayActivitySummaryIndexForEngine:(id)arg1;
- (id)todayDistanceForEngine:(id)arg1;
- (id)todayExerciseGoalForEngine:(id)arg1;
- (id)todayExerciseTimeForEngine:(id)arg1;
- (id)todayMoveGoalForEngine:(id)arg1;
- (unsigned long long)todayStandGoalForEngine:(id)arg1;
- (unsigned long long)todayStandHoursForEngine:(id)arg1;
- (bool)updateEnvironmentForProgress;
- (id)workouts;
- (id)workoutsByType;
- (id)workoutsForEngine:(id)arg1 endingAfterAnchor:(long long)arg2 newAnchor:(long long*)arg3;
- (id)workoutsInDateRangeStart:(id)arg1 end:(id)arg2;
- (id)workoutsOfType:(id)arg1;
- (id)yesterdayActiveEnergyBurnedForEngine:(id)arg1;
- (id)yesterdayActivitySummary;
- (id)yesterdayExerciseGoalForEngine:(id)arg1;
- (id)yesterdayExerciseTimeForEngine:(id)arg1;
- (id)yesterdayMoveGoalForEngine:(id)arg1;
- (unsigned long long)yesterdayStandGoalForEngine:(id)arg1;
- (unsigned long long)yesterdayStandHoursForEngine:(id)arg1;

@end
