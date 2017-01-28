/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUserEventTracker : PXUserEventTrackerCommon {
    unsigned long long  _MaxDepthOfRelatedJumps;
    NSHashTable * __relatedLookupTable;
    double  _timeLoggedOnDetailViewWillAppear;
    double  _timeLoggedOnMemoriesFeedWillAppear;
    unsigned long long  _totalNumberOfRelatedJumps;
}

@property (setter=_setRelatedLookupTable:, nonatomic, retain) NSHashTable *_relatedLookupTable;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_logAggdDurationCounterForLogState:(unsigned long long)arg1 duration:(double)arg2;
- (void)_logAggdRelatedJumpStatistics:(unsigned long long)arg1 totalJumpCount:(unsigned long long)arg2;
- (id)_relatedLookupTable;
- (void)_resetDetailViewTraversalStatistics;
- (void)_setRelatedLookupTable:(id)arg1;
- (void)didConfirmDeleteOfMemory;
- (void)didCreateMemoryViaAddToMemories;
- (void)didFavoriteMemory;
- (void)didFinishViewingDetailsWithCurrentContext:(id)arg1;
- (void)didFinishViewingMemoriesFeedView;
- (void)didPlayMiroMovieForAssetCollection:(id)arg1;
- (void)didViewDetailsForAssetCollection:(id)arg1;
- (id)init;
- (void)logCounterValuesForLogState:(unsigned long long)arg1 duration:(double)arg2;
- (void)willViewDetailsWithCurrentContext:(id)arg1;
- (void)willViewMemoriesFeedView;

@end
