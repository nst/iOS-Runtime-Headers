/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIDividerPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate> {
    SKUIViewElementLayoutContext * _layoutContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SKUIDividerPageComponent *pageComponent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_enumerateVisibleCellsUsingBlock:(id)arg1;
- (void)_requestCellLayout;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)backgroundColorForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })cellSizeForIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;
- (long long)numberOfCells;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionContentInset;
- (bool)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(bool)arg3;
- (void)willAppearInContext:(id)arg1;
- (void)willTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
