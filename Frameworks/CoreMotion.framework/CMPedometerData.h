/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMPedometerData : NSObject <HDCoreMotionDatum, NSCopying, NSSecureCoding> {
    NSNumber * fActiveTime;
    NSNumber * fCurrentCadence;
    NSNumber * fCurrentPace;
    NSNumber * fDistance;
    NSNumber * fDistanceSource;
    NSNumber * fElevationAscended;
    NSNumber * fElevationDescended;
    NSDate * fEndDate;
    NSNumber * fFloorsAscended;
    NSNumber * fFloorsDescended;
    NSNumber * fIsOdometerDistance;
    NSNumber * fIsOdometerPace;
    NSNumber * fNumberOfPushes;
    NSNumber * fNumberOfSteps;
    NSNumber * fRecordId;
    NSUUID * fSourceId;
    NSDate * fStartDate;
    NSNumber * fWorkoutType;
}

@property (nonatomic, readonly) NSNumber *averageActivePace;
@property (nonatomic, readonly) NSNumber *currentCadence;
@property (nonatomic, readonly) NSNumber *currentPace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSNumber *distance;
@property (nonatomic, readonly) NSNumber *distanceSource;
@property (nonatomic, readonly) NSNumber *elevationAscended;
@property (nonatomic, readonly) NSNumber *elevationDescended;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSNumber *floorsAscended;
@property (nonatomic, readonly) NSNumber *floorsDescended;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *numberOfPushes;
@property (nonatomic, readonly) NSNumber *numberOfSteps;
@property (nonatomic, readonly) long long recordId;
@property (nonatomic, readonly) NSUUID *sourceId;
@property (nonatomic, readonly) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSNumber *workoutType;

// Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion

+ (id)maxPedometerEntries;
+ (bool)supportsSecureCoding;

- (id)activeTime;
- (id)averageActivePace;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentCadence;
- (id)currentPace;
- (void)dealloc;
- (id)description;
- (id)distance;
- (id)distanceSource;
- (id)elevationAscended;
- (id)elevationDescended;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)floorsAscended;
- (id)floorsDescended;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(double)arg1 endDate:(double)arg2 steps:(int)arg3 distance:(double)arg4 floorsAscended:(id)arg5 floorsDescended:(id)arg6 recordID:(long long)arg7 currentPace:(id)arg8 currentCadence:(id)arg9 activeTime:(id)arg10 sourceId:(id)arg11 isOdometerDistance:(id)arg12 isOdometerPace:(id)arg13 pushes:(int)arg14 workoutType:(int)arg15 elevationAscended:(id)arg16 elevationDescended:(id)arg17 distanceSource:(int)arg18;
- (bool)isOdometerDistance;
- (bool)isOdometerPace;
- (id)numberOfPushes;
- (id)numberOfSteps;
- (long long)recordId;
- (id)sourceId;
- (id)startDate;
- (id)workoutType;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)hd_datestamp;
- (id)hd_epochDatestamp;
- (bool)hd_hasWorkout;
- (long long)hd_recordID;
- (id)hd_sourceID;
- (id)hd_unitForType:(id)arg1;

@end
