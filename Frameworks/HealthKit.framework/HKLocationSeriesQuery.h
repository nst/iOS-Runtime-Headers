/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKLocationSeriesQuery : HKQuery {
    id  _dataHandler;
    HKLocationSeriesSample * _series;
}

@property (copy) id dataHandler;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (Class)_queryServerDataObjectClass;

- (void).cxx_destruct;
- (void)_queue_cleanupAfterDeactivation;
- (void)_queue_configureQueryServerDataObject:(id)arg1;
- (id)_queue_errorHandler;
- (void)_queue_validate;
- (id)dataHandler;
- (void)deliverLocationSeriesDatum:(id)arg1 final:(bool)arg2 forQuery:(id)arg3;
- (id)initWithSeries:(id)arg1 dataHandler:(id)arg2;
- (void)setDataHandler:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (Class)hd_queryServerClass;

@end