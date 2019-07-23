/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDAirPlayDataCollectionTask : NSObject {
    NSObject<OS_xpc_object> * _activity;
    unsigned long long  _airPlayVideoEventCount;
    NSDate * _collectionDate;
    NSString * _dataDirectory;
    _CDDateQuantizer * _dateQuantizer;
    unsigned long long  _daysPerBatch;
    bool  _deleteSessionOnCleanup;
    unsigned long long  _maxBatches;
    double  _samplingRate;
    bool  _selectedForDataCollection;
    _CDAirPlayDataCollectionSession * _session;
    NSString * _sessionPath;
    <_DKKnowledgeQuerying> * _storage;
    id /* block */  _submissionBlock;
    NSMutableDictionary * _videoBundleIDLookup;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *activity;
@property (nonatomic) unsigned long long airPlayVideoEventCount;
@property (nonatomic, readonly, copy) NSDate *collectionDate;
@property (nonatomic, readonly, copy) NSString *dataDirectory;
@property (nonatomic, readonly, copy) NSString *dataPath;
@property (nonatomic, readonly) _CDDateQuantizer *dateQuantizer;
@property (nonatomic, readonly) unsigned long long daysPerBatch;
@property (nonatomic) bool deleteSessionOnCleanup;
@property (nonatomic, readonly) unsigned long long maxBatches;
@property (nonatomic, readonly) double samplingRate;
@property (nonatomic) bool selectedForDataCollection;
@property (nonatomic, retain) _CDAirPlayDataCollectionSession *session;
@property (nonatomic, readonly, copy) NSString *sessionPath;
@property (nonatomic, readonly) <_DKKnowledgeQuerying> *storage;
@property (nonatomic, copy) id /* block */ submissionBlock;
@property (nonatomic, readonly) NSMutableDictionary *videoBundleIDLookup;

- (void).cxx_destruct;
- (void)_execute;
- (id)activity;
- (unsigned long long)airPlayVideoEventCount;
- (void)cleanup;
- (id)collectionDate;
- (id)dataDirectory;
- (id)dataPath;
- (id)dateQuantizer;
- (unsigned long long)daysPerBatch;
- (bool)deleteSessionOnCleanup;
- (void)execute;
- (id)filterEventsByLongFormVideoAppEvents:(id)arg1;
- (id)initWithStorage:(id)arg1 activity:(id)arg2;
- (id)initWithStorage:(id)arg1 activity:(id)arg2 sessionPath:(id)arg3 dataDirectory:(id)arg4 collectionDate:(id)arg5 samplingRate:(double)arg6 daysPerBatch:(unsigned long long)arg7 maxBatches:(unsigned long long)arg8;
- (unsigned long long)maxBatches;
- (double)samplingRate;
- (bool)selectedForDataCollection;
- (id)session;
- (id)sessionPath;
- (void)setAirPlayVideoEventCount:(unsigned long long)arg1;
- (void)setDeleteSessionOnCleanup:(bool)arg1;
- (void)setSelectedForDataCollection:(bool)arg1;
- (void)setSession:(id)arg1;
- (void)setSubmissionBlock:(id /* block */)arg1;
- (id)storage;
- (id /* block */)submissionBlock;
- (bool)submitDataForCollection;
- (id)truncatedFileHandle;
- (id)videoBundleIDLookup;
- (void)writeEvents:(id)arg1 handle:(id)arg2;

@end
