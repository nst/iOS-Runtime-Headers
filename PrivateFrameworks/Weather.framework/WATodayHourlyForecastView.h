/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface WATodayHourlyForecastView : UIView {
    UIImageView * _conditionsImageView;
    NSArray * _constraints;
    UILabel * _temperatureLabel;
    UILabel * _timeLabel;
}

@property (nonatomic, retain) UIImage *conditionsImage;
@property (nonatomic, retain) UIImageView *conditionsImageView;
@property (nonatomic, retain) NSArray *constraints;
@property (nonatomic, copy) NSAttributedString *temperature;
@property (nonatomic, retain) UILabel *temperatureLabel;
@property (nonatomic, copy) NSAttributedString *time;
@property (nonatomic, retain) UILabel *timeLabel;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)applyVibrancyToTime;
- (id)conditionsImage;
- (id)conditionsImageView;
- (id)constraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setConditionsImage:(id)arg1;
- (void)setConditionsImageView:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setTemperature:(id)arg1;
- (void)setTemperatureLabel:(id)arg1;
- (void)setTime:(id)arg1;
- (void)setTimeLabel:(id)arg1;
- (id)temperature;
- (id)temperatureLabel;
- (id)time;
- (id)timeLabel;

@end
