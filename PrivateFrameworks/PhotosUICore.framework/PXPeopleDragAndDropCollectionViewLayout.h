/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleDragAndDropCollectionViewLayout : UICollectionViewFlowLayout {
    bool  _shouldShowProgressFooter;
}

@property (nonatomic, readonly) NSIndexPath *globalProgressFooterIndex;
@property (nonatomic) bool shouldShowProgressFooter;

- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)globalProgressFooterIndex;
- (id)init;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(struct CGPoint { double x1; double x2; })arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)setShouldShowProgressFooter:(bool)arg1;
- (bool)shouldShowProgressFooter;
- (id)targetIndexPathForInteractivelyMovingItem:(id)arg1 withPosition:(struct CGPoint { double x1; double x2; })arg2;

@end
