/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKSourceQuery : HKQuery {
    id  _completionHandler;
    id  _updateHandler;
}

@property (nonatomic, readonly) id completionHandler;
@property (nonatomic, copy) id updateHandler;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (void).cxx_destruct;
- (void)_queue_cleanupAfterDeactivation;
- (id)_queue_errorHandler;
- (bool)_queue_shouldStayAliveAfterInitialResults;
- (void)_queue_validate;
- (id)completionHandler;
- (void)deliverSources:(id)arg1 forQuery:(id)arg2;
- (void)deliverUpdatedSources:(id)arg1 added:(id)arg2 forQuery:(id)arg3;
- (id)initWithSampleType:(id)arg1 samplePredicate:(id)arg2 completionHandler:(id)arg3;
- (void)setUpdateHandler:(id)arg1;
- (id)updateHandler;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (Class)hd_queryServerClass;

@end
