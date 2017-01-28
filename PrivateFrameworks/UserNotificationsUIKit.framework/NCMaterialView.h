/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCMaterialView : UIView <_UISettingsKeyObserver> {
    _UIBackdropView * _backdropView;
    bool  _captureOnly;
    bool  _cornerRadiusIsContinuous;
    UIView * _cutoutOverlayView;
    UIView * _lightOverlayView;
    NCMaterialSettings * _settings;
    unsigned long long  _styleOptions;
    double  _subviewsContinuousCornerRadius;
    UIView * _whiteOverlayView;
}

@property (nonatomic) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double grayscaleValue;
@property (nonatomic, copy) NSString *groupName;
@property (readonly) unsigned long long hash;
@property (getter=_subviewsContinuousCornerRadius, setter=_setSubviewsContinuousCornerRadius:, nonatomic) double subviewsContinuousCornerRadius;
@property (readonly) Class superclass;

+ (id)materialViewWithStyleOptions:(unsigned long long)arg1;
+ (id)materialViewWithStyleOptions:(unsigned long long)arg1 materialSettings:(id)arg2;
+ (id)materialViewWithStyleOptions:(unsigned long long)arg1 materialSettings:(id)arg2 captureOnly:(bool)arg3;

- (void).cxx_destruct;
- (void)_configureBackdropViewIfNecessary;
- (void)_configureCutoutOverlayViewIfNecessary;
- (void)_configureIfNecessary;
- (void)_configureLightOverlayViewIfNecessary;
- (void)_configureWhiteOverlayViewIfNecessary;
- (double)_continuousCornerRadius;
- (void)_reduceTransparencyStatusDidChange;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_setSubviewsContinuousCornerRadius:(double)arg1;
- (double)_subviewsContinuousCornerRadius;
- (double)cornerRadius;
- (void)dealloc;
- (double)grayscaleValue;
- (id)groupName;
- (id)initWithStyleOptions:(unsigned long long)arg1 materialSettings:(id)arg2 captureOnly:(bool)arg3;
- (void)setCornerRadius:(double)arg1;
- (void)setGrayscaleValue:(double)arg1;
- (void)setGroupName:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;

@end