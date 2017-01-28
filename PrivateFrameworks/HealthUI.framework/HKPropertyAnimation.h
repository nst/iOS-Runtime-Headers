/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKPropertyAnimation : NSObject <NSCopying> {
    NSDate * _appliedDate;
    id  _completion;
    double  _duration;
    id  _fromValue;
    NSString * _property;
    id  _propertyApplicationFunction;
    long long  _secondaryAnimationCurve;
    CAMediaTimingFunction * _timingFunction;
    id  _toValue;
}

@property (nonatomic, retain) NSDate *appliedDate;
@property (nonatomic, copy) id completion;
@property (nonatomic) double duration;
@property (nonatomic, retain) id fromValue;
@property (nonatomic, retain) NSString *property;
@property (nonatomic, copy) id propertyApplicationFunction;
@property (nonatomic) long long secondaryAnimationCurve;
@property (nonatomic, retain) CAMediaTimingFunction *timingFunction;
@property (nonatomic, retain) id toValue;

- (void).cxx_destruct;
- (void)_applyWithCurrentDate:(id)arg1;
- (void)_finish;
- (bool)_isCompleted;
- (void)_validate;
- (id)appliedDate;
- (id)completion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)duration;
- (id)fromValue;
- (id)init;
- (id)property;
- (id)propertyApplicationFunction;
- (long long)secondaryAnimationCurve;
- (void)setAppliedDate:(id)arg1;
- (void)setCompletion:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setFromValue:(id)arg1;
- (void)setProperty:(id)arg1;
- (void)setPropertyApplicationFunction:(id)arg1;
- (void)setSecondaryAnimationCurve:(long long)arg1;
- (void)setTimingFunction:(id)arg1;
- (void)setToValue:(id)arg1;
- (id)timingFunction;
- (id)toValue;

@end
