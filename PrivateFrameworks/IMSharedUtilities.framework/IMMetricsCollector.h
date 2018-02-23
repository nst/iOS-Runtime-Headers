/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMMetricsCollector : NSObject {
    SDRDiagnosticReporter * _diagnosticReporter;
    NSObject<OS_dispatch_queue> * _metricsQueue;
    NSMutableDictionary * _onGoingEventsMap;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *metricsQueue;
@property (nonatomic, retain) NSMutableDictionary *onGoingEventsMap;

+ (id)sharedInstance;

- (void*)_ADClientAddValueForScalarKeyApiInit;
- (void*)_ADClientPushValueForDistributionKeyApiInit;
- (void*)_ADClientSetValueForScalarKeyApiInit;
- (void)_finalizeEvent:(id)arg1 addingDicitonary:(id)arg2;
- (void)_resetTimerEventIfNeedForEventID:(id)arg1;
- (void)_timeoutTimerFired:(id)arg1;
- (void)_trackEvent:(id)arg1;
- (void)_trackEvent:(id)arg1 withCount:(id)arg2;
- (void)_trackEvent:(id)arg1 withDictionary:(id)arg2;
- (void)_trackEvent:(id)arg1 withStatistic:(id)arg2;
- (id)_trimedEventID:(id)arg1;
- (void)autoBugCaptureWithSubType:(id)arg1 errorPayload:(id)arg2;
- (void)clearInitialCKSyncState;
- (void)dealloc;
- (bool)finalizeEvent:(id)arg1 addingDicitonary:(id)arg2;
- (id)init;
- (id)metricsQueue;
- (void)noteCompletedInitialSync;
- (void)noteMeticsForSyncEndedWithSuccces:(bool)arg1 duration:(id)arg2;
- (void)noteMeticsForSyncStartFrom:(id)arg1 fullSync:(bool)arg2;
- (void)noteSyncError:(id)arg1;
- (id)onGoingEventsMap;
- (void)setMetricsQueue:(id)arg1;
- (void)setOnGoingEventsMap:(id)arg1;
- (bool)startEvent:(id)arg1 initialDictionary:(id)arg2;
- (bool)startEvent:(id)arg1 initialDictionary:(id)arg2 timeout:(unsigned long long)arg3 autoBugCapture:(bool)arg4;
- (bool)trackEvent:(id)arg1;
- (bool)trackEvent:(id)arg1 withCount:(id)arg2;
- (bool)trackEvent:(id)arg1 withDictionary:(id)arg2;
- (bool)trackEvent:(id)arg1 withStatistic:(id)arg2;
- (bool)updateEvent:(id)arg1 addToCount:(id)arg2 forKey:(id)arg3;
- (bool)updateEvent:(id)arg1 updateValue:(id)arg2 forKey:(id)arg3;

@end
