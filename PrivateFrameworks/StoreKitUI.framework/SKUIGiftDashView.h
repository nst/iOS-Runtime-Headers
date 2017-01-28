/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGiftDashView : UIView {
    UIColor * _dashColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _dashSize;
    double  _dashSpacing;
}

@property (nonatomic, copy) UIColor *dashColor;
@property (nonatomic) struct CGSize { double x1; double x2; } dashSize;
@property (nonatomic) double dashSpacing;

- (void).cxx_destruct;
- (id)dashColor;
- (struct CGSize { double x1; double x2; })dashSize;
- (double)dashSpacing;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDashColor:(id)arg1;
- (void)setDashSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDashSpacing:(double)arg1;

@end
