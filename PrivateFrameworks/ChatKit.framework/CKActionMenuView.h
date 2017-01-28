/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKActionMenuView : UIView {
    CKActionMenuController * _actionMenuController;
    NSArray * _actionMenuItems;
    UIBlurEffect * _blurEffect;
    UIVisualEffectView * _blurView;
    bool  _collapsed;
    unsigned long long  _defaultActionIndex;
    NSArray * _presentationActionMenuItems;
    unsigned long long  _presentationDefaultActionIndex;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _presentationTargetBounds;
    struct CGPoint { 
        double x; 
        double y; 
    }  _presentationTargetPosition;
    bool  _touchInside;
}

@property (nonatomic) CKActionMenuController *actionMenuController;
@property (nonatomic, copy) NSArray *actionMenuItems;
@property (nonatomic, retain) UIBlurEffect *blurEffect;
@property (nonatomic, retain) UIVisualEffectView *blurView;
@property (getter=isCollapsed, nonatomic) bool collapsed;
@property (nonatomic) unsigned long long defaultActionIndex;
@property (nonatomic, copy) NSArray *presentationActionMenuItems;
@property (nonatomic) unsigned long long presentationDefaultActionIndex;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } presentationTargetBounds;
@property (nonatomic) struct CGPoint { double x1; double x2; } presentationTargetPosition;
@property (getter=isTouchInside, nonatomic) bool touchInside;

+ (void)collapseAnimation:(id)arg1 completion:(id)arg2;

- (void).cxx_destruct;
- (id)actionMenuController;
- (void)actionMenuGestureRecognized:(id)arg1;
- (id)actionMenuItemAtPoint:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2;
- (id)actionMenuItems;
- (id)blurEffect;
- (id)blurView;
- (void)configureForPresentationAtPoint:(struct CGPoint { double x1; double x2; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (unsigned long long)defaultActionIndex;
- (id)description;
- (void)dismissActionMenuViewAnimated:(bool)arg1 completion:(id)arg2;
- (id)initWithActionMenuItems:(id)arg1 defaultActionIndex:(unsigned long long)arg2 blurEffectStyle:(long long)arg3;
- (bool)isCollapsed;
- (bool)isTouchInside;
- (void)layoutSubviews;
- (void)presentActionMenuViewFromPoint:(struct CGPoint { double x1; double x2; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 animated:(bool)arg3 completion:(id)arg4;
- (id)presentationActionMenuItems;
- (unsigned long long)presentationDefaultActionIndex;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentationTargetBounds;
- (struct CGPoint { double x1; double x2; })presentationTargetPosition;
- (void)setActionMenuController:(id)arg1;
- (void)setActionMenuItems:(id)arg1;
- (void)setActionMenuItems:(id)arg1 defaultActionIndex:(unsigned long long)arg2 animated:(bool)arg3;
- (void)setBlurEffect:(id)arg1;
- (void)setBlurView:(id)arg1;
- (void)setCollapsed:(bool)arg1;
- (void)setCollapsed:(bool)arg1 animated:(bool)arg2 completion:(id)arg3;
- (void)setDefaultActionIndex:(unsigned long long)arg1;
- (void)setPresentationActionMenuItems:(id)arg1;
- (void)setPresentationDefaultActionIndex:(unsigned long long)arg1;
- (void)setPresentationTargetBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPresentationTargetPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTouchInside:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
