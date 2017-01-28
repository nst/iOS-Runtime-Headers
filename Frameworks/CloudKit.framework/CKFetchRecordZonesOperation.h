/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchRecordZonesOperation : CKDatabaseOperation {
    NSError * _fetchAllRecordZonesError;
    id  _fetchRecordZonesCompletionBlock;
    bool  _ignorePCSFailures;
    bool  _isFetchAllRecordZonesOperation;
    NSMutableDictionary * _recordZoneErrors;
    NSArray * _recordZoneIDs;
    NSArray * _recordZones;
    NSMutableDictionary * _recordZonesByZoneID;
}

@property (nonatomic, retain) NSError *fetchAllRecordZonesError;
@property (nonatomic, copy) id fetchRecordZonesCompletionBlock;
@property (nonatomic) bool ignorePCSFailures;
@property (nonatomic) bool isFetchAllRecordZonesOperation;
@property (nonatomic, retain) NSMutableDictionary *recordZoneErrors;
@property (nonatomic, copy) NSArray *recordZoneIDs;
@property (nonatomic, retain) NSArray *recordZones;
@property (nonatomic, retain) NSMutableDictionary *recordZonesByZoneID;

+ (id)fetchAllRecordZonesOperation;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)activityCreate;
- (id)fetchAllRecordZonesError;
- (id)fetchRecordZonesCompletionBlock;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (bool)hasCKOperationCallbacksSet;
- (bool)ignorePCSFailures;
- (id)init;
- (id)initWithRecordZoneIDs:(id)arg1;
- (bool)isFetchAllRecordZonesOperation;
- (void)performCKOperation;
- (id)recordZoneErrors;
- (id)recordZoneIDs;
- (id)recordZones;
- (id)recordZonesByZoneID;
- (void)setFetchAllRecordZonesError:(id)arg1;
- (void)setFetchRecordZonesCompletionBlock:(id)arg1;
- (void)setIgnorePCSFailures:(bool)arg1;
- (void)setIsFetchAllRecordZonesOperation:(bool)arg1;
- (void)setRecordZoneErrors:(id)arg1;
- (void)setRecordZoneIDs:(id)arg1;
- (void)setRecordZones:(id)arg1;
- (void)setRecordZonesByZoneID:(id)arg1;

@end
