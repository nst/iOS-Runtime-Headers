/* Generated by RuntimeBrowser.
 */

@protocol PHAAssetResourceDataLoading <NSObject>

@required

- (PHAssetResource *)assetResourceFromAcceptableAssetResources:(NSArray *)arg1 options:(PHAAssetResourceDataLoadingOptions *)arg2;
- (void)cancelAllDownloads;
- (void)requestDataForAssetResource:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: PHAssetResource *, PHAAssetResourceDataLoadingOptions *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSURL *, NSData *, NSError *, void*

@end