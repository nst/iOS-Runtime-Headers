/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

@interface ASNotificationEvent : NSObject <ASCloudKitCodable> {
    NSDate * _date;
    NSUUID * _friendUUID;
    long long  _triggerSnapshotIndex;
    NSUUID * _triggerUUID;
    long long  _type;
}

@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSUUID *friendUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) long long triggerSnapshotIndex;
@property (nonatomic, retain) NSUUID *triggerUUID;
@property (nonatomic) long long type;

+ (id)achievementCompletionEventWithAchievement:(id)arg1;
+ (id)deletedWorkoutEventWithUUID:(id)arg1;
+ (id)goalCompletionEventWithActivitySummary:(id)arg1;
+ (id)notificationEventWithRecord:(id)arg1 friendUUID:(id)arg2;
+ (id)workoutCompletionEventWithWorkout:(id)arg1;

- (void).cxx_destruct;
- (id)date;
- (id)description;
- (id)friendUUID;
- (id)recordWithZoneID:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setFriendUUID:(id)arg1;
- (void)setTriggerSnapshotIndex:(long long)arg1;
- (void)setTriggerUUID:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)triggerSnapshotIndex;
- (id)triggerUUID;
- (long long)type;

@end
