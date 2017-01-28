/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

@interface _UIDocumentPickerDocumentCollectionView : UICollectionView {
    bool  _avoidNegativeContentOffset;
    double  _contentSizeAdjustment;
}

@property (nonatomic) double contentSizeAdjustment;

- (void)_performWhileAvoidingNegativeContentOffset:(id)arg1;
- (struct CGPoint { double x1; double x2; })_updatedContentOffsetForOffset:(struct CGPoint { double x1; double x2; })arg1 avoidNegativeContentOffset:(bool)arg2;
- (double)contentSizeAdjustment;
- (void)setAdjustedContentSize:(struct CGSize { double x1; double x2; })arg1 withFrameSize:(struct CGSize { double x1; double x2; })arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentSizeAdjustment:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
