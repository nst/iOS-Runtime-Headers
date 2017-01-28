/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAVisionServiceSceneClassificationWorker : PHAVisionServiceWorker <PLPhotoAnalysisVisionServiceSceneClassificationProtocol, PLPhotoAnalysisVisionServiceTaxonomyProtocol> {
    bool  _disabledByUserDefaults;
    NSDictionary * _imageSourceOptions;
}

+ (long long)applicationDataFolderIdentifier;
+ (void)initialize;
+ (bool)runsExclusively;
+ (short)workerType;

- (void).cxx_destruct;
- (id)_computeImageprintForAsset:(id)arg1 usingRequestHandler:(id)arg2 error:(id*)arg3;
- (void)_handleNilReplyBlockForSelector:(SEL)arg1;
- (struct CGImage { }*)_newCGImageRefForAssetResourceFileURL:(id)arg1 orientation:(unsigned long long*)arg2 error:(id*)arg3;
- (bool)_performAnalysisOnAssetResource:(id)arg1 ofAsset:(id)arg2 error:(id*)arg3;
- (bool)_performAndPersistAnalysisOfImageData:(id)arg1 withOrientation:(unsigned long long)arg2 forAsset:(id)arg3 error:(id*)arg4;
- (bool)_performAndPersistAnalysisOfImageFileAtURL:(id)arg1 forAsset:(id)arg2 error:(id*)arg3;
- (bool)_performAndPersistAnalysisWithHandler:(id)arg1 forAsset:(id)arg2 error:(id*)arg3;
- (bool)_performSceneClassificationOfAsset:(id)arg1 usingRequestHandler:(id)arg2 sceneClassifications:(id*)arg3 acceptedObservations:(id*)arg4 rejectedObservations:(id*)arg5 unknownObservations:(id*)arg6 error:(id*)arg7;
- (bool)_reclassificationOfSceneNeededForAsset:(id)arg1;
- (void)_recordJunkClassificationForAsset:(id)arg1;
- (bool)_scheduleSceneClassificationOfAssetsWithLocalIdentifiers:(id)arg1 withPriority:(int)arg2 error:(id*)arg3;
- (unsigned long long)analyzeAssetResourceFileAtURL:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id*)arg4;
- (unsigned long long)analyzeImageData:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id*)arg4;
- (bool)canProvideAnalysisJobResultInformation:(id)arg1 withoutRequiringAssetResourceForAsset:(id)arg2;
- (void)cooldown;
- (bool)getLocallyAvailableAssetResource:(id*)arg1 forAnalyzingAsset:(id)arg2 error:(id*)arg3;
- (id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2;
- (void)insidePhotoLibraryTransactionPersistResultsDictionary:(id)arg1 forAsset:(id)arg2;
- (bool)isEnabled;
- (void)localizedLabelForSceneIdentifier:(unsigned int)arg1 context:(id)arg2 reply:(id)arg3;
- (id)newAssetFetchOptions;
- (void)performSceneClassificationOnAssetWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id)arg3;
- (id)preferredAssetResourcesForAnalyzingAsset:(id)arg1;
- (bool)processAsset:(id)arg1 error:(id*)arg2;
- (void)sceneNodesForSceneIdentifiers:(id)arg1 context:(id)arg2 reply:(id)arg3;
- (id)sceneTaxonomyHash;
- (void)searchResultNodesForSceneClassifications:(id)arg1 context:(id)arg2 reply:(id)arg3;
- (void)searchResultNodesForSceneIdentifiers:(id)arg1 context:(id)arg2 reply:(id)arg3;
- (void)startup;
- (bool)supportsCoalescingResults;

@end
