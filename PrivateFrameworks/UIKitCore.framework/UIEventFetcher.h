/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIEventFetcher : NSObject {
    id /* block */  _addToFilteredEventsBlock;
    struct __CFRunLoop { } * _cfRunLoop;
    double  _commitTimeForTouchEvents;
    long long  _countOfDigitizerEventsReceivedInPreviousFrame;
    long long  _countOfDigitizerEventsReceivedSinceLastDisplayLinkCallback;
    bool  _didSignalOneMoveEventSinceLastDisplayLinkCallback;
    CADisplayLink * _displayLink;
    int  _displayLinkIdleTicks;
    double  _estimatedDisplayLinkDrift;
    <UIEventFetcherSink> * _eventFetcherSink;
    NSMutableArray * _eventFilters;
    id /* block */  _gameControllerEventFilterGenerator;
    NSMutableArray * _incomingHIDEvents;
    NSMutableArray * _incomingHIDEventsFiltered;
    double  _lastImportantEventTimestamp;
    double  _lastSignalTimestamp;
    long long  _lastSignalType;
    double  _latestMoveDragEventResendTimestamp;
    double  _latestMoveDragEventTimestamp;
    NSMutableDictionary * _latestMoveDragEventsBySessionID;
    bool  _needsSignalOnDisplayLink;
    id /* block */  _receiveBlock;
    struct __CFRunLoopSource { } * _triggerHandOffEventsRunLoopSource;
    id /* block */  _watchSystemAppFilter;
}

@property (nonatomic) double commitTimeForTouchEvents;
@property (nonatomic, retain) <UIEventFetcherSink> *eventFetcherSink;
@property (nonatomic) double latestMoveDragEventResendTimestamp;
@property (nonatomic) double latestMoveDragEventTimestamp;
@property (nonatomic, retain) NSMutableDictionary *latestMoveDragEventsBySessionID;
@property (nonatomic) bool needsSignalOnDisplayLink;

- (void).cxx_destruct;
- (void)_addHIDEventFilter:(id /* block */)arg1;
- (void)_receiveHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (void)_receiveHIDEventInternal:(struct __IOHIDEvent { }*)arg1;
- (void)_removeHIDEventFilter:(id /* block */)arg1;
- (void)_removeHIDGameControllerEventObserver;
- (void)_setHIDGameControllerEventObserver:(id /* block */)arg1 onQueue:(id)arg2;
- (void)_setupFilterChain;
- (double)commitTimeForTouchEvents;
- (void)displayLinkDidFire:(id)arg1;
- (void)drainEventsIntoEnvironment:(id)arg1;
- (id)eventFetcherSink;
- (void)filterEvents;
- (id)init;
- (double)latestMoveDragEventResendTimestamp;
- (double)latestMoveDragEventTimestamp;
- (id)latestMoveDragEventsBySessionID;
- (bool)needsSignalOnDisplayLink;
- (void)setCommitTimeForTouchEvents:(double)arg1;
- (void)setEventFetcherSink:(id)arg1;
- (void)setLatestMoveDragEventResendTimestamp:(double)arg1;
- (void)setLatestMoveDragEventTimestamp:(double)arg1;
- (void)setLatestMoveDragEventsBySessionID:(id)arg1;
- (void)setNeedsSignalOnDisplayLink:(bool)arg1;
- (void)setupForRunLoop:(id)arg1;
- (void)setupThreadAndRun;
- (void)signalEventsAvailableWithReason:(unsigned long long)arg1 filteredEventCount:(long long)arg2;
- (void)threadMain;

@end
