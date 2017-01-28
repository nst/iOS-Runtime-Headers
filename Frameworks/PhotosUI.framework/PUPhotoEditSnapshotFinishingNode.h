/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoEditSnapshotFinishingNode : PXRunNode {
    PUEditableMediaProviderAdjustmentDataNode * _adjustmentNode;
    PUPhotoEditBaseMediaNode * _baseMediaNode;
    id  _completionHandler;
    PUEditableMediaProviderImageDataNode * _currentImageNode;
    PUEditableMediaProviderVideoAssetNode * _currentVideoNode;
}

@property (nonatomic, readonly) PUEditableMediaProviderAdjustmentDataNode *adjustmentNode;
@property (nonatomic, readonly) PUPhotoEditBaseMediaNode *baseMediaNode;
@property (nonatomic, readonly, copy) id completionHandler;
@property (nonatomic, readonly) PUEditableMediaProviderImageDataNode *currentImageNode;
@property (nonatomic, readonly) PUEditableMediaProviderVideoAssetNode *currentVideoNode;

- (void).cxx_destruct;
- (id)adjustmentNode;
- (id)baseMediaNode;
- (id)completionHandler;
- (id)currentImageNode;
- (id)currentVideoNode;
- (id)initWithAdjustmentNode:(id)arg1 baseMediaNode:(id)arg2 currentImageNode:(id)arg3 currentVideoNode:(id)arg4 completionHandler:(id)arg5;
- (void)run;

@end