/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNPageLayout : TSWPPageLayout <TSWPColumnMetrics, TSWPLayoutParent, TSWPStorageObserver> {
    TNPageContentLayout * mContentLayout;
    bool  mIsChildLayoutsValid;
    bool  mIsPlaceholder;
    TNPageController * mPageController;
    struct TSUCellCoord { 
        unsigned int row; 
        unsigned short column; 
        bool _preserveRow; 
        bool _preserveColumn; 
    }  mPageCoordinate;
    TNSheet * mSheet;
}

@property (nonatomic, readonly) bool alwaysStartsNewTarget;
@property (nonatomic, readonly) unsigned long long columnCount;
@property (nonatomic, readonly) bool columnsAreLeftToRight;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentFrame;
@property (retain) TNPageContentLayout *contentLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TSWPPadding *layoutMargins;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pageBounds;
@property TNPageController *pageController;
@property struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; } pageCoordinate;
@property (readonly) bool pageLayoutDirectionIsRTL;
@property (getter=isPlaceholder) bool placeholder;
@property (retain) TNSheet *sheet;
@property (nonatomic, readonly) bool shrinkTextToFit;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double textScaleFactor;

+ (id)pageLayoutWithPageController:(id)arg1 pageCoordinate:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg2;

- (void)addChild:(id)arg1;
- (struct CGSize { double x1; double x2; })adjustedInsetsForTarget:(id)arg1;
- (bool)alwaysStartsNewTarget;
- (unsigned long long)autosizeFlagsForTextLayout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bodyRect;
- (unsigned long long)columnCount;
- (bool)columnsAreLeftToRight;
- (id)computeLayoutGeometry;
- (bool)containsLayoutForInfo:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (id)contentLayout;
- (void)dealloc;
- (id)dependentLayouts;
- (id)dependentsOfTextLayout:(id)arg1;
- (id)description;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (id)headerFooterProvider;
- (id)initWithPageController:(id)arg1 pageCoordinate:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg2;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (void)invalidateSize;
- (bool)isPlaceholder;
- (id)layoutMargins;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })nonAutosizedFrameForTextLayout:(id)arg1;
- (id)p_pageInfo;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pageBounds;
- (id)pageController;
- (struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })pageCoordinate;
- (unsigned long long)pageCount;
- (bool)pageLayoutDirectionIsRTL;
- (unsigned long long)pageNumber;
- (void)parentDidChange;
- (void)performBlockForEachHeaderFooterLayout:(id /* block */)arg1;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double*)arg4 outGap:(double*)arg5;
- (Class)repClassForTextLayout:(id)arg1;
- (Class)repClassOverride;
- (void)setChildren:(id)arg1;
- (void)setContentLayout:(id)arg1;
- (void)setPageController:(id)arg1;
- (void)setPageCoordinate:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg1;
- (void)setPlaceholder:(bool)arg1;
- (void)setSheet:(id)arg1;
- (id)sheet;
- (bool)shrinkTextToFit;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 delta:(long long)arg3 broadcastKind:(int)arg4;
- (bool)textIsVertical;
- (double)textScaleFactor;
- (void)updateChildrenFromInfo;
- (int)verticalAlignmentForTextLayout:(id)arg1;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (void)willBeAddedToLayoutController:(id)arg1;
- (void)willBeRemovedFromLayoutController:(id)arg1;

@end
