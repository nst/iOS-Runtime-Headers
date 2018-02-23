/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewDeclarativeLayout : UICollectionViewLayout {
    NSMutableDictionary * _cachedAttributes;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentFrame;
    _UIDataSourceSnapshotter * _dataSourceSnapshotter;
    struct CGSize { 
        double width; 
        double height; 
    }  _itemSize;
    long long  _scrollDirection;
    NSArray * _sectionFrames;
    _UICollectionViewGeometricIndexer * _sectionGeometricIndexer;
    NSArray * _sectionGeometries;
    UICollectionLayoutGeometry * _templateLayoutGeometry;
}

@property (nonatomic, retain) NSMutableDictionary *cachedAttributes;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentFrame;
@property (nonatomic, retain) _UIDataSourceSnapshotter *dataSourceSnapshotter;
@property (nonatomic) struct CGSize { double x1; double x2; } itemSize;
@property (nonatomic) long long scrollDirection;
@property (nonatomic, retain) NSArray *sectionFrames;
@property (nonatomic, retain) _UICollectionViewGeometricIndexer *sectionGeometricIndexer;
@property (nonatomic, retain) NSArray *sectionGeometries;
@property (nonatomic, retain) UICollectionLayoutGeometry *templateLayoutGeometry;

- (void).cxx_destruct;
- (void)_configureSectionGeometries;
- (id)_layoutGeometryForSection:(long long)arg1;
- (id)cachedAttributes;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (id)dataSourceSnapshotter;
- (id)initWithLayoutGeometriesForSections:(id)arg1;
- (id)initWithLayoutGeometry:(id)arg1;
- (struct CGSize { double x1; double x2; })itemSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareLayout;
- (long long)scrollDirection;
- (id)sectionFrames;
- (id)sectionGeometricIndexer;
- (id)sectionGeometries;
- (void)setCachedAttributes:(id)arg1;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDataSourceSnapshotter:(id)arg1;
- (void)setItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setScrollDirection:(long long)arg1;
- (void)setSectionFrames:(id)arg1;
- (void)setSectionGeometricIndexer:(id)arg1;
- (void)setSectionGeometries:(id)arg1;
- (void)setTemplateLayoutGeometry:(id)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)templateLayoutGeometry;

@end
