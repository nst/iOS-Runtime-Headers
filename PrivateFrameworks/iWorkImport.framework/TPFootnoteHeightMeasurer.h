/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPFootnoteHeightMeasurer : NSObject <TSWPFootnoteHeightMeasurer> {
    TPFootnoteContainerLayout * _footnoteContainerLayout;
    TSULRUCache * _footnoteLayoutCache;
    TSDLayoutController * _layoutController;
    <TPFootnotePageDelegate> * _pageDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addFootnoteReferenceStorage:(id)arg1;
- (double)footnoteBlockHeightForTarget:(id)arg1;
- (bool)footnoteContainerFits;
- (id)initWithFootnoteMarkProvider:(id)arg1 pageDelegate:(id)arg2 maxFootnoteLineWidth:(double)arg3 maxFootnoteBlockHeight:(double)arg4 vertical:(bool)arg5 footnoteSpacing:(double)arg6;
- (void)p_clearFootnoteLayoutCache;
- (void)removeAllFootnoteReferenceStorages;
- (void)removeFootnoteReferenceStorage:(id)arg1;
- (void)setContainerLineWidth:(double)arg1;
- (void)setFootnoteSpacing:(long long)arg1;

@end
