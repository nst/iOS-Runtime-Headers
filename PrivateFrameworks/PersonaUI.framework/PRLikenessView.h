/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI
 */

@interface PRLikenessView : UIView {
    bool  _circular;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropRect;
    bool  _highlighted;
    PRImageView * _imageView;
    PRLikeness * _likeness;
    unsigned long long  _likenessType;
    PRMonogramView * _monogramView;
    NSData * _recipe;
    bool  _shouldDecode;
    struct CGImage { } * _staticRepresentation;
}

@property (getter=isCircular, nonatomic) bool circular;
@property (nonatomic) bool highlighted;
@property (nonatomic, retain) PRLikeness *likeness;
@property (nonatomic) bool shouldDecode;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_imageForLikeness:(id)arg1 completion:(id)arg2;
- (id)_imageView;
- (bool)_isLikenessEqual:(id)arg1;
- (id)_monogramView;
- (void)_setDisplayedView:(id)arg1;
- (bool)_shouldRenderStaticRepresentation;
- (void)_updateViewForLikeness:(bool)arg1;
- (void)dealloc;
- (bool)highlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithLikeness:(id)arg1;
- (bool)isCircular;
- (void)layoutSubviews;
- (id)likeness;
- (void)setCircular:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setLikeness:(id)arg1;
- (void)setNeedsRedraw;
- (void)setShouldDecode:(bool)arg1;
- (bool)shouldDecode;

@end
