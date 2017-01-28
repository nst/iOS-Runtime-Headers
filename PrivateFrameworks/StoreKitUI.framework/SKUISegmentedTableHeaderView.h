/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISegmentedTableHeaderView : UIView {
    _UIBackdropView * _backdropView;
    UIView * _borderView;
    UIView * _segmentedControl;
}

@property (nonatomic, readonly) _UIBackdropView *backdropView;
@property (nonatomic) bool hidesBorderView;
@property (nonatomic, retain) UIView *segmentedControl;

- (void).cxx_destruct;
- (id)_borderView;
- (id)backdropView;
- (bool)hidesBorderView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)segmentedControl;
- (void)setHidesBorderView:(bool)arg1;
- (void)setSegmentedControl:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
