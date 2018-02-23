/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKSampleQuery : HKQuery <HKSampleQueryClientInterface> {
    bool  _includeTimeZones;
    unsigned long long  _limit;
    id /* block */  _resultHandler;
    NSMutableArray * _samplesPendingDelivery;
    NSArray * _sortDescriptors;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeTimeZones;
@property (readonly) unsigned long long limit;
@property (nonatomic, readonly) id /* block */ resultHandler;
@property (readonly, copy) NSArray *sortDescriptors;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (bool)_prepareSamplesForDelivery:(id)arg1 error:(id*)arg2;
- (void)client_deliverSamples:(id)arg1 clearPendingSamples:(bool)arg2 isFinalBatch:(bool)arg3 queryUUID:(id)arg4;
- (bool)includeTimeZones;
- (id)initWithSampleType:(id)arg1 predicate:(id)arg2 limit:(unsigned long long)arg3 sortDescriptors:(id)arg4 resultsHandler:(id /* block */)arg5;
- (unsigned long long)limit;
- (void)queue_connectToQueryServerWithHealthStore:(id)arg1 activationUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_validate;
- (id /* block */)resultHandler;
- (void)setIncludeTimeZones:(bool)arg1;
- (id)sortDescriptors;

@end
