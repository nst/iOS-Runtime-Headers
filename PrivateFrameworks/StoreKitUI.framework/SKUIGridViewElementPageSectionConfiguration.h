/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGridViewElementPageSectionConfiguration : NSObject {
    long long  _cardVerticalSpacingStyle;
    double  _cellContentWidth;
    SKUIViewElementLayoutContext * _cellLayoutContext;
    double  _cellPaddingInteriorHorizontal;
    double  _cellPaddingLeftEdgeHorizontal;
    bool  _cellPaddingNeedsReloading;
    double  _cellPaddingRightEdgeHorizontal;
    <SKUIGridViewElementPageSectionConfigurationDataSource> * _dataSource;
    struct { 
        unsigned int configurePositionForItemAtIndexPath : 1; 
    }  _dataSourceRespondsToSelectorFlags;
    bool  _gridIsEdgeToEdge;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _gridViewElementStyleElementPadding;
    double  _gridViewElementStyleItemWidth;
    bool  _gridViewElementStyleItemWidthIsPercentage;
    bool  _hasGridViewElementStyle;
    bool  _hasHeader;
    long long  _lockupType;
    double  _minimumCellHeight;
    long long  _numberOfColumns;
    unsigned long long  _numberOfGridItems;
    SKUIStorePageSectionContext * _pageSectionContext;
    NSArray * _positions;
    bool  _rendersWithPerspective;
    UIColor * _separatorColor;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _separatorMargins;
    long long  _separatorStyle;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _separatorWidths;
    bool  _showsEditMode;
    NSArray * _viewElements;
}

@property (nonatomic, retain) SKUIViewElementLayoutContext *cellLayoutContext;
@property (nonatomic, readonly) double columnContentWidth;
@property (nonatomic, readonly) double columnWidth;
@property (nonatomic) <SKUIGridViewElementPageSectionConfigurationDataSource> *dataSource;
@property (nonatomic) long long numberOfColumns;
@property (nonatomic, retain) SKUIStorePageSectionContext *pageSectionContext;
@property (nonatomic) bool rendersWithPerspective;
@property (nonatomic, readonly) bool showsEditMode;

- (void).cxx_destruct;
- (id)_cardArtworkBoundingSizeForIndexPath:(id)arg1;
- (Class)_cardCellClassForCard:(id)arg1;
- (double)_cellContentWidth;
- (double)_cellHeightForViewElement:(id)arg1 width:(double)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_cellInsetsForViewElement:(id)arg1 indexPath:(id)arg2;
- (double)_cellPaddingInteriorHorizontal;
- (double)_cellPaddingLeftEdgeHorizontal;
- (double)_cellPaddingRightEdgeHorizontal;
- (double)_columnContentWidthPaddingForWidth:(double)arg1;
- (void)_enumerateViewElementsForRowOfIndexPath:(id)arg1 usingBlock:(id)arg2;
- (bool)_isContainedWithinExploreTemplateWithGridViewElement:(id)arg1;
- (id)_lockupCellReuseIdentifierWithLockup:(id)arg1;
- (long long)_lockupTypeForLockup:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_normalizedContentInsetForViewElement:(id)arg1 indexPath:(id)arg2;
- (long long)_numberOfColumnsForWidth:(double)arg1 style:(id)arg2;
- (void)_reloadCellPaddingIfNeeded;
- (bool)_useOrdinalPadding;
- (id)backgroundColorForViewElement:(id)arg1;
- (Class)cellClassForViewElement:(id)arg1;
- (id)cellForViewElement:(id)arg1 indexPath:(id)arg2;
- (id)cellLayoutContext;
- (struct CGSize { double x1; double x2; })cellSizeForViewElement:(id)arg1 indexPath:(id)arg2;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (double)columnContentWidth;
- (double)columnWidth;
- (void)configureCell:(id)arg1 forViewElement:(id)arg2 indexPath:(id)arg3;
- (id)dataSource;
- (Class)lockupCellClassWithLockup:(id)arg1;
- (long long)numberOfColumns;
- (id)pageSectionContext;
- (long long)positionForIndexPath:(id)arg1;
- (void)registerReusableClassesForCollectionView:(id)arg1;
- (void)reloadCellWithIndexPath:(id)arg1 forViewElement:(id)arg2 reason:(long long)arg3;
- (bool)rendersWithPerspective;
- (void)requestCellLayoutForViewElement:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionContentInsetAdjustedFromValue:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 forGridViewElement:(id)arg2;
- (void)setCellLayoutContext:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setNumberOfColumns:(long long)arg1;
- (void)setPageSectionContext:(id)arg1;
- (void)setRendersWithPerspective:(bool)arg1;
- (bool)showsEditMode;
- (void)updateLayoutPropertiesForGridViewElement:(id)arg1;
- (void)updateStylePropertiesForGridViewElement:(id)arg1 gridItemViewElements:(id)arg2 numberOfGridItems:(unsigned long long)arg3;
- (bool)viewElementIsStandardCard:(id)arg1;

@end
