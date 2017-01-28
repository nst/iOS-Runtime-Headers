/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUUserRatingView : UIView {
    UIImageView * _backgroundImageView;
    UIImageView * _foregroundImageView;
    float  _value;
}

+ (id)copyImageForRating:(float)arg1 backgroundColor:(id)arg2 style:(long long)arg3;
+ (double)reflectionHeight;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_foregroundImageClipBounds;
- (float)heightWithoutReflection;
- (id)init;
- (id)initWithForeground:(id)arg1 background:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)layoutSubviews;
- (void)setValue:(float)arg1;

@end
