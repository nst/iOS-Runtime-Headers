/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKHealthQueryFetchOperation : HKChartCacheFetchOperation {
    id  _clientCompletion;
    id  _fetchOperationManager;
    HKHealthStore * _healthStore;
    NSArray * _queries;
}

@property (nonatomic, retain) NSArray *queries;

- (void).cxx_destruct;
- (void)completedWithResults:(id)arg1 error:(id)arg2;
- (id)initWithHealthStore:(id)arg1 completion:(id)arg2;
- (id)queries;
- (void)setQueries:(id)arg1;
- (void)startOperationWithCompletion:(id)arg1;
- (void)stopOperation;

@end
