/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMSedentaryTimer : NSObject {
    CMSedentaryTimer_Internal * _internal;
}

@property (nonatomic, readonly) CMSedentaryTimer_Internal *_internal;

+ (bool)isAvailable;

- (id)_internal;
- (void)dealloc;
- (id)init;
- (bool)isActive;
- (void)queryAlarmDataSince:(id)arg1 withHandler:(id)arg2;
- (void)registerForAlarmsWithHandler:(id)arg1;
- (void)startTimerWithStartTime:(id)arg1 periodInterval:(double)arg2 reminderInterval:(double)arg3 autoReschedule:(bool)arg4 handler:(id)arg5;
- (void)stopTimerWithHandler:(id)arg1;

@end
