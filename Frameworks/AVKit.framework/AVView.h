/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVView : UIView {
    _AVViewSublayerAnimationDelegateProxy * _sublayerAnimationDelegateProxy;
    NSMutableArray * _sublayers;
}

@property (nonatomic, readonly) NSArray *sublayers;

- (void).cxx_destruct;
- (void)addSublayer:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)removeSublayer:(id)arg1;
- (id)sublayers;

@end
