/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifyRecordZonesOperation : CKDDatabaseOperation {
    bool  _allowDefaultZoneSave;
    id  _deleteCompletionBlock;
    bool  _markZonesAsUserPurged;
    long long  _maxZoneSaveAttempts;
    int  _numZoneSaveAttempts;
    NSArray * _recordZoneIDsToDelete;
    NSMutableDictionary * _recordZonesByZoneID;
    NSMutableArray * _recordZonesToSave;
    id  _saveCompletionBlock;
}

@property (nonatomic) bool allowDefaultZoneSave;
@property (nonatomic, copy) id deleteCompletionBlock;
@property (nonatomic) bool markZonesAsUserPurged;
@property (nonatomic) long long maxZoneSaveAttempts;
@property (nonatomic) int numZoneSaveAttempts;
@property (nonatomic, retain) NSArray *recordZoneIDsToDelete;
@property (nonatomic, retain) NSMutableDictionary *recordZonesByZoneID;
@property (nonatomic, retain) NSMutableArray *recordZonesToSave;
@property (nonatomic, copy) id saveCompletionBlock;

- (void).cxx_destruct;
- (void)_checkAndPrepareZones;
- (void)_fetchPCSDataForZone:(id)arg1 fromServer:(bool)arg2;
- (void)_fetchPCSDataForZonesFromServer:(bool)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleRecordZoneDeleted:(id)arg1 responseCode:(id)arg2;
- (void)_handleRecordZoneSaved:(id)arg1 responseCode:(id)arg2;
- (bool)_saveZonesToServer;
- (void)_sendErrorForFailedZones;
- (id)activityCreate;
- (bool)allowDefaultZoneSave;
- (id)deleteCompletionBlock;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (bool)makeStateTransition;
- (bool)markZonesAsUserPurged;
- (long long)maxZoneSaveAttempts;
- (id)nameForState:(unsigned long long)arg1;
- (int)numZoneSaveAttempts;
- (id)recordZoneIDsToDelete;
- (id)recordZonesByZoneID;
- (id)recordZonesToSave;
- (id)saveCompletionBlock;
- (void)setAllowDefaultZoneSave:(bool)arg1;
- (void)setDeleteCompletionBlock:(id)arg1;
- (void)setMarkZonesAsUserPurged:(bool)arg1;
- (void)setMaxZoneSaveAttempts:(long long)arg1;
- (void)setNumZoneSaveAttempts:(int)arg1;
- (void)setRecordZoneIDsToDelete:(id)arg1;
- (void)setRecordZonesByZoneID:(id)arg1;
- (void)setRecordZonesToSave:(id)arg1;
- (void)setSaveCompletionBlock:(id)arg1;

@end
