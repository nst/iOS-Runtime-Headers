/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPFootnoteContainerLayout : TSDLayout <TSWPColumnMetrics, TSWPFootnoteMarkProvider, TSWPLayoutParent> {
    <TSWPFootnoteMarkProvider> * _footnoteMarkProvider;
    double  _footnoteSpacing;
    bool  _includeFootnoteSeparatorLine;
    double  _maxFootnoteHeight;
    double  _width;
}

@property (nonatomic, readonly) bool alwaysStartsNewTarget;
@property (nonatomic, readonly) unsigned long long columnCount;
@property (nonatomic, readonly) bool columnsAreLeftToRight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } footnoteSeparatorLineFrame;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double height;
@property (nonatomic) bool includeFootnoteSeparatorLine;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) TSWPPadding *layoutMargins;
@property (nonatomic, readonly) bool shrinkTextToFit;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double textScaleFactor;

- (void)addFootnoteLayout:(id)arg1;
- (struct CGSize { double x1; double x2; })adjustedInsetsForTarget:(id)arg1;
- (bool)alwaysStartsNewTarget;
- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned long long)columnCount;
- (bool)columnsAreLeftToRight;
- (id)computeLayoutGeometry;
- (id)dependentsOfTextLayout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })footnoteSeparatorLineFrame;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (double)height;
- (bool)includeFootnoteSeparatorLine;
- (id)initWithFootnoteMarkProvider:(id)arg1 width:(double)arg2 maxFootnoteHeight:(double)arg3 footnoteSpacing:(double)arg4;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (bool)isEmpty;
- (id)layoutMargins;
- (id)markStringForFootnoteReferenceStorage:(id)arg1;
- (double)maxAutoGrowHeightForTextLayout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })nonAutosizedFrameForTextLayout:(id)arg1;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double*)arg4 outGap:(double*)arg5;
- (void)removeAllFootnoteLayouts;
- (void)removeFootnoteLayout:(id)arg1;
- (void)removeFootnoteLayoutWithInfo:(id)arg1;
- (Class)repClassForTextLayout:(id)arg1;
- (Class)repClassOverride;
- (void)setFootnoteSpacing:(long long)arg1;
- (void)setIncludeFootnoteSeparatorLine:(bool)arg1;
- (void)setWidth:(double)arg1;
- (bool)shouldProvideSizingGuides;
- (bool)shrinkTextToFit;
- (bool)textIsVertical;
- (void)trimFootnoteLayoutsFromIndex:(unsigned long long)arg1;
- (void)validate;
- (int)verticalAlignmentForTextLayout:(id)arg1;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;

@end
