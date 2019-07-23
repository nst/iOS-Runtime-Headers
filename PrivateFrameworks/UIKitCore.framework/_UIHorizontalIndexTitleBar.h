/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIHorizontalIndexTitleBar : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    UICollectionView * _collectionView;
    <_UIHorizontalIndexTitleBarDelegate> * _delegate;
    NSArray * _entries;
    UICollectionViewFlowLayout * _flowLayout;
    _UIHorizontalIndexTitleBarCell * _focusedCell;
    UIFocusGuide * _horizontalIndexTitleBarFocusGuide;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _parentSafeAreaInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _sectionInset;
    _UIHorizontalIndexTitleBarCell * _selectedCell;
}

@property (nonatomic, retain) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIHorizontalIndexTitleBarDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *entries;
@property (nonatomic, retain) UICollectionViewFlowLayout *flowLayout;
@property (nonatomic) _UIHorizontalIndexTitleBarCell *focusedCell;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIFocusGuide *horizontalIndexTitleBarFocusGuide;
@property (getter=_parentSafeAreaInsets, setter=_setParentSafeAreaInsets:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } parentSafeAreaInsets;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionInset;
@property (nonatomic) _UIHorizontalIndexTitleBarCell *selectedCell;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelDelayedFocusAction;
- (id)_currentlyFocusedCell;
- (bool)_isViewEntryCell:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_parentSafeAreaInsets;
- (void)_selectEntryForTitleIndex:(long long)arg1;
- (void)_selectFocusedCell;
- (void)_sendDelayedFocusActionIfNecessary;
- (void)_setParentSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_updateSectionInset;
- (void)_updateWithEntries:(id)arg1;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)commonInit;
- (id)delegate;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)entries;
- (id)flowLayout;
- (id)focusedCell;
- (id)horizontalIndexTitleBarFocusGuide;
- (id)init;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)preferredFocusEnvironments;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInset;
- (id)selectedCell;
- (id)selectedEntry;
- (void)setCollectionView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEntries:(id)arg1;
- (void)setFlowLayout:(id)arg1;
- (void)setFocusedCell:(id)arg1;
- (void)setHorizontalIndexTitleBarFocusGuide:(id)arg1;
- (void)setSectionInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSelectedCell:(id)arg1;
- (bool)shouldUpdateFocusInContext:(id)arg1;

@end
