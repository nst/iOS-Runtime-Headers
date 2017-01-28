/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UpNextWidget.framework/UpNextWidget
 */

@interface UpNextWidget.LargeEventView : UIView {
    void calendarColor;
    void dateInterval;
    void gutterizedEventView;
    void gutterizedViewTapped;
    void location;
    void mapBaselineDistance;
    void mapImage;
    void mapView;
    void mapViewTapped;
    void showExpandedMode;
    void showTravelAdvisoryText;
    void title;
    void travelAdvisoryBaselineDistance;
    void travelAdvisoryText;
    void travelAdvisoryView;
    void travelAdvisoryViewTapped;
}

@property (nonatomic, retain) UIColor *calendarColor;
@property (nonatomic, retain) NSDateInterval *dateInterval;
@property (nonatomic, copy) id gutterizedViewTapped;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, retain) UIImage *mapImage;
@property (nonatomic, copy) id mapViewTapped;
@property (nonatomic) bool showExpandedMode;
@property (nonatomic) bool showTravelAdvisoryText;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) NSAttributedString *travelAdvisoryText;
@property (nonatomic, copy) id travelAdvisoryViewTapped;

- (id).cxx_destruct;
- (id)calendarColor;
- (id)dateInterval;
- (double)firstBaselineOffsetFromTop;
- (id)gutterizedViewTapped;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)lastBaselineOffsetFromBottom;
- (void)layoutSubviews;
- (id)location;
- (id)mapImage;
- (id)mapViewTapped;
- (void)recognizerTriggeredForGutterizedView:(id)arg1;
- (void)recognizerTriggeredForMapView:(id)arg1;
- (void)recognizerTriggeredForTravelAdvisoryView:(id)arg1;
- (void)setCalendarColor:(id)arg1;
- (void)setDateInterval:(id)arg1;
- (void)setGutterizedViewTapped:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setMapImage:(id)arg1;
- (void)setMapViewTapped:(id)arg1;
- (void)setShowExpandedMode:(bool)arg1;
- (void)setShowTravelAdvisoryText:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setTravelAdvisoryText:(id)arg1;
- (void)setTravelAdvisoryViewTapped:(id)arg1;
- (bool)showExpandedMode;
- (bool)showTravelAdvisoryText;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;
- (id)travelAdvisoryText;
- (id)travelAdvisoryViewTapped;

@end
