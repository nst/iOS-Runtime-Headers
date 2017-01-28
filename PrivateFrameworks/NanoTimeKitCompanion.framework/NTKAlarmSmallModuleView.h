/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKAlarmSmallModuleView : NTKComplicationModuleView <NTKAlarmComplicationDisplay> {
    NSDate * _alarmDate;
    NTKStackedImagesComplicationImageView * _alarmGlyph;
    NTKColoringLabel * _messageLabel;
    bool  _snoozing;
    NTKDigitalTimeLabel * _timeLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <NTKComplicationDisplayObserver> *displayObserver;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic) bool shouldUseTemplateColors;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_alarmInactiveImageProviderXL:(bool)arg1;
- (void)_configureContentSubviews;
- (void)_enumerateForegroundColoringViewsWithBlock:(id)arg1;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(id)arg1;
- (void)_layoutContentView;
- (void)_updateTime;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsXL:(bool)arg1;
- (void)setStateActiveWithDate:(id)arg1;
- (void)setStateAllAlarmsOff;
- (void)setStateNoAlarms;
- (void)setStateSnoozingWithDuration:(double)arg1;

@end
