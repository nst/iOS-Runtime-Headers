/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCAssetsFetchOperation : FCFetchOperation {
    NSArray * _assetHandles;
    id /* block */  _progressHandler;
}

@property (nonatomic, copy) NSArray *assetHandles;
@property (nonatomic, copy) id /* block */ progressHandler;

- (void).cxx_destruct;
- (void)_finish;
- (id)assetHandles;
- (id)initWithAssetHandle:(id)arg1;
- (id)initWithAssetHandles:(id)arg1;
- (void)performOperation;
- (id /* block */)progressHandler;
- (void)setAssetHandles:(id)arg1;
- (void)setProgressHandler:(id /* block */)arg1;

@end
