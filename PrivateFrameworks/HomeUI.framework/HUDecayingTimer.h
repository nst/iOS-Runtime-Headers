/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUDecayingTimer : NSObject {
    id  _block;
    unsigned long long  _minimumUnit;
    NSDate * _referenceDate;
    NSTimer * _timer;
}

@property (nonatomic, readonly, copy) id block;
@property (nonatomic, readonly) unsigned long long minimumUnit;
@property (nonatomic, readonly) NSDate *referenceDate;
@property (nonatomic, retain) NSTimer *timer;

+ (id)scheduledTimerWithReferenceDate:(id)arg1 minimumUnit:(unsigned long long)arg2 block:(id)arg3;

- (void).cxx_destruct;
- (unsigned long long)_mostSignificantUnitForDateComponents:(id)arg1;
- (id)_nextFireDate;
- (void)_scheduleNextTimer;
- (void)_timerEvent;
- (id)block;
- (void)dealloc;
- (id)initWithReferenceDate:(id)arg1 minimumUnit:(unsigned long long)arg2 block:(id)arg3;
- (void)invalidate;
- (unsigned long long)minimumUnit;
- (id)referenceDate;
- (void)setTimer:(id)arg1;
- (id)timer;

@end
