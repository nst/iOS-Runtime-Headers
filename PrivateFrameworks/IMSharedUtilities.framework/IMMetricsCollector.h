/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMMetricsCollector : NSObject {
    NSSet * _allowedEvents;
    NSObject<OS_dispatch_queue> * _metricsQueue;
}

+ (id)sharedInstance;

- (void*)_ADClientAddValueForScalarKeyApiInit;
- (void*)_ADClientPushValueForDistributionKeyApiInit;
- (void*)_ADClientSetValueForScalarKeyApiInit;
- (bool)_isAllowedEvent:(id)arg1;
- (void)_trackEvent:(id)arg1;
- (void)_trackEvent:(id)arg1 withCount:(id)arg2;
- (void)_trackEvent:(id)arg1 withStatistic:(id)arg2;
- (void)dealloc;
- (id)init;
- (bool)trackEvent:(id)arg1;
- (bool)trackEvent:(id)arg1 withCount:(id)arg2;
- (bool)trackEvent:(id)arg1 withStatistic:(id)arg2;

@end
