/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAbstractNetworkArtworkDataSource : NSObject <MPArtworkDataSource, NSURLSessionDataDelegate> {
    NSURLSession * _URLSession;
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMapTable * _catalogTaskMap;
    NSCache * _fallbackArtworkRepresentationCache;
}

@property (nonatomic, retain) NSURLSession *URLSession;
@property (nonatomic, readonly) NSURLSessionConfiguration *URLSessionConfiguration;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, retain) NSMapTable *catalogTaskMap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSCache *fallbackArtworkRepresentationCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URLSession;
- (id)URLSessionConfiguration;
- (id)_artworkRepresentationWithImageFromData:(id)arg1 forURLResponse:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 immediateImageDecompressionAllowed:(bool)arg4;
- (id)_existingRepresentationFromURLCacheForArtworkCatalog:(id)arg1 immediateImageDecompressionAllowed:(bool)arg2;
- (id)_existingRepresentativeObjectForArtworkCatalog:(id)arg1 handler:(id)arg2;
- (bool)_isRepresentationSize:(struct CGSize { double x1; double x2; })arg1 validForCatalog:(id)arg2;
- (void)_performAsyncBarrierBlock:(id)arg1;
- (void)_performSyncBlock:(id)arg1;
- (id)accessQueue;
- (bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (id)cacheKeyForCatalog:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
- (id)catalogTaskMap;
- (id)existingArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3;
- (id)existingRepresentationForArtworkCatalog:(id)arg1;
- (id)fallbackArtworkRepresentationCache;
- (id)init;
- (bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
- (void)loadArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3 systemEffectHandler:(id)arg4 completionHandler:(id)arg5;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(id)arg2;
- (id)requestForCatalog:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)setAccessQueue:(id)arg1;
- (void)setCatalogTaskMap:(id)arg1;
- (void)setFallbackArtworkRepresentationCache:(id)arg1;
- (void)setURLSession:(id)arg1;
- (bool)shouldLookForLargerRepresentationsWhenBestRepresentationIsUnavailable;
- (id)sortedSupportedSizesForCatalog:(id)arg1;
- (id)supportedSizesForCatalog:(id)arg1;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;
- (bool)wantsBackgroundImageDecompression;

@end
