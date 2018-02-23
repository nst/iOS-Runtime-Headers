/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKCustomTitleView : UIView {
    bool  _animating;
    NSArray * _changingConstraints;
    UIImageView * _originalImage;
    UILabel * _originalTitle;
    UILabel * _subTitle;
    UILabel * _title;
    UIImageView * _titleImage;
}

@property bool animating;
@property (retain) NSArray *changingConstraints;
@property (retain) UIImageView *originalImage;
@property (retain) UILabel *originalTitle;
@property (retain) UILabel *subTitle;
@property (retain) UILabel *title;
@property (retain) UIImageView *titleImage;

- (void).cxx_destruct;
- (void)animateInWithCompletionBlock:(id /* block */)arg1;
- (void)animateOutWithCompletionBlock:(id /* block */)arg1;
- (bool)animating;
- (id)changingConstraints;
- (void)display;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 eventViewController:(id)arg3;
- (void)layoutSubviews;
- (id)originalImage;
- (id)originalTitle;
- (void)setAnimating:(bool)arg1;
- (void)setChangingConstraints:(id)arg1;
- (void)setOriginalImage:(id)arg1;
- (void)setOriginalTitle:(id)arg1;
- (void)setSubTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleImage:(id)arg1;
- (id)subTitle;
- (id)title;
- (id)titleImage;

@end
