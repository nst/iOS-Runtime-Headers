/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UpNextWidget.framework/UpNextWidget
 */

@interface UpNextWidget.SmallReminderView : UIView {
    void circleDiameter;
    void circleImageView;
    void dueDate;
    void label;
    void listColor;
    void title;
}

@property (nonatomic, copy) NSDate *dueDate;
@property (nonatomic, retain) UIColor *listColor;
@property (nonatomic, copy) NSString *title;

- (id).cxx_destruct;
- (id)dueDate;
- (double)firstBaselineOffsetFromTop;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)lastBaselineOffsetFromBottom;
- (void)layoutSubviews;
- (id)listColor;
- (void)setDueDate:(id)arg1;
- (void)setListColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;

@end
