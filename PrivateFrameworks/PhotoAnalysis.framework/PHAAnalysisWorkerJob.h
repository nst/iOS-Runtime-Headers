/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAAnalysisWorkerJob : PHAAssetProcessingJob {
    bool  _canUseNetwork;
    NSMutableDictionary * _ignoreUntilDatesByAssetLocalIdentifier;
    bool  _shouldBackoffForFailedNoResourceErrors;
    NSDictionary * _workerFlagsByAssetLocalIdentifier;
}

@property (nonatomic, readonly) bool canUseNetwork;
@property (nonatomic, readonly) NSMutableDictionary *ignoreUntilDatesByAssetLocalIdentifier;
@property (nonatomic, readonly) bool shouldBackoffForFailedNoResourceErrors;
@property (nonatomic, readonly) NSDictionary *workerFlagsByAssetLocalIdentifier;

- (void).cxx_destruct;
- (id)_fetchAllAssetsForLocalIdentifiers:(id)arg1;
- (void)_markAssetsPending;
- (void)_processFailures;
- (id)_resultsDescription;
- (bool)canUseNetwork;
- (id)dataLoaderOptions;
- (id)description;
- (void)finish;
- (id)ignoreUntilDateForAssetLocalIdentifier:(id)arg1;
- (id)ignoreUntilDatesByAssetLocalIdentifier;
- (id)initWithWorkerType:(short)arg1 scenario:(unsigned long long)arg2 workInfos:(id)arg3 canUseNetwork:(bool)arg4 shouldBackoffForFailedNoResource:(bool)arg5 library:(id)arg6;
- (void)prepare;
- (void)setIgnoreUntilDate:(id)arg1 forAssetLocalIdentifier:(id)arg2;
- (bool)shouldBackoffForFailedNoResourceErrors;
- (bool)startProcessingOnWorker:(id)arg1 withError:(id*)arg2;
- (id)statusAsDictionary;
- (bool)stopProcessingOnWorker:(id)arg1 withError:(id*)arg2;
- (id)workerFlagsByAssetLocalIdentifier;
- (int)workerFlagsForAssetLocalIdentifier:(id)arg1;

@end
