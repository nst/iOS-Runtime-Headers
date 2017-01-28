/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTracePlayerTimelineStream : NSObject {
    NSArray * _data;
    <MNTracePlayerTimelineStreamDelegate> * _delegate;
    id  _handler;
    unsigned long long  _lastReportedIndex;
    unsigned long long  _nextIndex;
    double  _timeUntilNextUpdate;
    NSTimer * _timer;
    NSString * _timestampKey;
}

@property (nonatomic) <MNTracePlayerTimelineStreamDelegate> *delegate;
@property (nonatomic, copy) id handler;
@property (nonatomic, readonly) unsigned long long lastReportedIndex;
@property (nonatomic, readonly) unsigned long long nextIndex;

- (void).cxx_destruct;
- (void)_timerFired;
- (id)delegate;
- (id)handler;
- (id)initWithData:(id)arg1 timestampKey:(id)arg2;
- (unsigned long long)lastReportedIndex;
- (unsigned long long)nextIndex;
- (void)scheduleUpdateFromCurrentTime:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHandler:(id)arg1;
- (void)stop;

@end