/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UpNextWidget.framework/UpNextWidget
 */

@interface UpNextWidget.GutterizedEventTrailingView : UIView {
    void dateInterval;
    void intraBaselineDistance;
    void location;
    void locationLabel;
    void showTravelAdvisoryText;
    void timeLabel;
    void title;
    void titleLabel;
    void topBaselineDistance;
    void travelAdvisoryLabel;
    void travelAdvisoryText;
}

@property (nonatomic, retain) NSDateInterval *dateInterval;
@property (nonatomic, copy) NSString *location;
@property (nonatomic) bool showTravelAdvisoryText;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) NSAttributedString *travelAdvisoryText;

- (id).cxx_destruct;
- (double)capHeightOffsetFromTop;
- (id)dateInterval;
- (double)firstBaselineOffsetFromTop;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)lastBaselineOffsetFromBottom;
- (void)layoutSubviews;
- (id)location;
- (void)setDateInterval:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setShowTravelAdvisoryText:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setTravelAdvisoryText:(id)arg1;
- (bool)showTravelAdvisoryText;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;
- (id)travelAdvisoryText;

@end
