/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDemoDataWorkoutPrototype : NSObject {
    double  _duration;
    HKQuantity * _goal;
    unsigned long long  _goalType;
    double  _startTimeOffsetInDay;
    double  _totalDistanceCyclingInMiles;
    double  _totalDistanceSwimmingInYards;
    double  _totalDistanceWalkingInMiles;
    double  _totalEnergyBurnedInKcal;
    long long  _totalSwimmingLaps;
    unsigned long long  _workoutActivityType;
}

@property (nonatomic) double duration;
@property (nonatomic, retain) HKQuantity *goal;
@property (nonatomic) unsigned long long goalType;
@property (nonatomic) double startTimeOffsetInDay;
@property (nonatomic) double totalDistanceCyclingInMiles;
@property (nonatomic) double totalDistanceSwimmingInYards;
@property (nonatomic) double totalDistanceWalkingInMiles;
@property (nonatomic) double totalEnergyBurnedInKcal;
@property (nonatomic) long long totalSwimmingLaps;
@property (nonatomic) unsigned long long workoutActivityType;

+ (id)workoutPrototypeWithActivityType:(unsigned long long)arg1 goalType:(unsigned long long)arg2 goal:(id)arg3 startTime:(double)arg4 duration:(double)arg5 energyBurned:(double)arg6 distanceWalking:(double)arg7 distanceCycling:(double)arg8;
+ (id)workoutPrototypeWithActivityType:(unsigned long long)arg1 goalType:(unsigned long long)arg2 goal:(id)arg3 startTime:(double)arg4 duration:(double)arg5 energyBurned:(double)arg6 distanceWalking:(double)arg7 distanceCycling:(double)arg8 distanceSwimming:(double)arg9 totalSwimmingLaps:(long long)arg10;

- (void).cxx_destruct;
- (double)duration;
- (id)goal;
- (unsigned long long)goalType;
- (void)setDuration:(double)arg1;
- (void)setGoal:(id)arg1;
- (void)setGoalType:(unsigned long long)arg1;
- (void)setStartTimeOffsetInDay:(double)arg1;
- (void)setTotalDistanceCyclingInMiles:(double)arg1;
- (void)setTotalDistanceSwimmingInYards:(double)arg1;
- (void)setTotalDistanceWalkingInMiles:(double)arg1;
- (void)setTotalEnergyBurnedInKcal:(double)arg1;
- (void)setTotalSwimmingLaps:(long long)arg1;
- (void)setWorkoutActivityType:(unsigned long long)arg1;
- (double)startTimeOffsetInDay;
- (double)totalDistanceCyclingInMiles;
- (double)totalDistanceSwimmingInYards;
- (double)totalDistanceWalkingInMiles;
- (double)totalEnergyBurnedInKcal;
- (long long)totalSwimmingLaps;
- (unsigned long long)workoutActivityType;

@end
