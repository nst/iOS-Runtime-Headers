/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HULinkedApplicationCollectionViewCell : UICollectionViewCell <HUCellProtocol> {
    UIView * _bottomSeparatorView;
    HULinkedApplicationView * _linkedApplicationView;
    UIView * _topSeparatorView;
}

@property (nonatomic, retain) UIView *bottomSeparatorView;
@property (nonatomic) bool bottomSeparatorVisible;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic, retain) HULinkedApplicationView *linkedApplicationView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *topSeparatorView;
@property (nonatomic) bool topSeparatorVisible;

- (void).cxx_destruct;
- (id)bottomSeparatorView;
- (bool)bottomSeparatorVisible;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)item;
- (void)layoutSubviews;
- (id)linkedApplicationView;
- (void)prepareForReuse;
- (void)setBottomSeparatorView:(id)arg1;
- (void)setBottomSeparatorVisible:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setLinkedApplicationView:(id)arg1;
- (void)setTopSeparatorView:(id)arg1;
- (void)setTopSeparatorVisible:(bool)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)topSeparatorView;
- (bool)topSeparatorVisible;
- (void)updateUIWithAnimation:(bool)arg1;

@end
