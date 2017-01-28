/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

@interface CCUIControlCenterSlider : UISlider {
    bool  _adjusting;
    UIImageView * _maxValueHighlightedImageView;
    UIImageView * _minValueHighlightedImageView;
}

@property (getter=isAdjusting, nonatomic) bool adjusting;

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForSliderKnob;
+ (id)_knobImage;
+ (id)_resizableTrackImage;
+ (id)_trackImage;

- (void).cxx_destruct;
- (void)_configureHighlightedValueImagesLikeRegularValueImages;
- (void)_setTrackImage:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_thumbHitEdgeInsets;
- (void)_updateEffects;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (bool)ccuiSupportsDelayedTouchesByContainingScrollViewForGesture:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAdjusting;
- (void)layoutSubviews;
- (double)leftValueImageOriginForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 andSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maximumValueImageRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })minimumValueImageRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (double)rightValueImageOriginForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 andSize:(struct CGSize { double x1; double x2; })arg2;
- (void)setAdjusting:(bool)arg1;
- (void)setMaximumValueImage:(id)arg1;
- (void)setMaximumValueImage:(id)arg1 cacheKey:(id)arg2;
- (void)setMinimumValueImage:(id)arg1;
- (void)setMinimumValueImage:(id)arg1 cacheKey:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 trackRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 value:(float)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })trackRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
