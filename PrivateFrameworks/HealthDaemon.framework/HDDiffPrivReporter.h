/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDiffPrivReporter : NSObject {
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _recorders;
}

+ (id)_keyForTypeList:(id)arg1;
+ (id)_valueForTypeList:(id)arg1 daysPerWeek:(id)arg2;
+ (bool)isAvailable;
+ (id)reportableTypes;

- (void).cxx_destruct;
- (id)_daysInWeekWithDataForTypes:(id)arg1 now:(id)arg2 error:(id*)arg3;
- (id)_encodedValuesForNow:(id)arg1 typeLists:(id)arg2 error:(id*)arg3;
- (bool)_recordValues:(id)arg1 keyPrefix:(id)arg2 keySuffix:(id)arg3;
- (id)initWithProfile:(id)arg1;
- (bool)reportWithCurrentDate:(id)arg1 error:(id*)arg2;

@end
