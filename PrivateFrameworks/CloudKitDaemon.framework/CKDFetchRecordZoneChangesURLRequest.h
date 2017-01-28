/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchRecordZoneChangesURLRequest : CKDURLRequest <CKDURLRequestPipelining> {
    long long  _changeTypes;
    NSMutableDictionary * _nodeErrorsByZoneID;
    NSDictionary * _optionsByRecordZoneID;
    id  _recordChangedBlock;
    id  _recordDeletedBlock;
    NSArray * _recordZoneIDs;
    NSMutableDictionary * _requestResultsByRecordZoneID;
    bool  _shouldFetchAssetContent;
    NSMutableDictionary * _zoneIDsByRequestOperationUUID;
}

@property (nonatomic) long long changeTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *nodeErrorsByZoneID;
@property (nonatomic, retain) NSDictionary *optionsByRecordZoneID;
@property (nonatomic, copy) id recordChangedBlock;
@property (nonatomic, copy) id recordDeletedBlock;
@property (nonatomic, copy) NSArray *recordZoneIDs;
@property (nonatomic, retain) NSMutableDictionary *requestResultsByRecordZoneID;
@property (nonatomic, readonly) NSDictionary *resultsByRecordZoneID;
@property (nonatomic) bool shouldFetchAssetContent;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *zoneErrorsByZoneID;
@property (nonatomic, retain) NSMutableDictionary *zoneIDsByRequestOperationUUID;

- (void).cxx_destruct;
- (id)_handleRecordChanges:(id)arg1;
- (long long)changeTypes;
- (id)initWithRecordZoneIDs:(id)arg1 optionsByRecordZoneID:(id)arg2;
- (id)nodeErrorsByZoneID;
- (int)operationType;
- (id)optionsByRecordZoneID;
- (id)recordChangedBlock;
- (id)recordDeletedBlock;
- (id)recordZoneIDs;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (id)requestResultsByRecordZoneID;
- (id)resultsByRecordZoneID;
- (void)setChangeTypes:(long long)arg1;
- (void)setNodeErrorsByZoneID:(id)arg1;
- (void)setOptionsByRecordZoneID:(id)arg1;
- (void)setRecordChangedBlock:(id)arg1;
- (void)setRecordDeletedBlock:(id)arg1;
- (void)setRecordZoneIDs:(id)arg1;
- (void)setRequestResultsByRecordZoneID:(id)arg1;
- (void)setShouldFetchAssetContent:(bool)arg1;
- (void)setZoneIDsByRequestOperationUUID:(id)arg1;
- (bool)shouldFetchAssetContent;
- (id)zoneErrorsByZoneID;
- (id)zoneIDsByRequestOperationUUID;
- (id)zoneIDsToLock;

@end
