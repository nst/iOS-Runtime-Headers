/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISDynamicValueFilter : NSObject {
    CADisplayLink * __displayLink;
    bool  __isPerformingInputChanges;
    double  __speed;
    double  __time;
    double  _maximumDeceleration;
    double  _maximumSpeed;
    double  _outputValue;
    id  _outputValueChangeHandler;
    double  _targetValue;
}

@property (setter=_setDisplayLink:, nonatomic, retain) CADisplayLink *_displayLink;
@property (setter=_setPerformingInputChanges:, nonatomic) bool _isPerformingInputChanges;
@property (setter=_setSpeed:, nonatomic) double _speed;
@property (setter=_setTime:, nonatomic) double _time;
@property (nonatomic) double maximumDeceleration;
@property (nonatomic) double maximumSpeed;
@property (setter=_setOutputValue:, nonatomic) double outputValue;
@property (nonatomic, copy) id outputValueChangeHandler;
@property (nonatomic) double targetValue;

- (void).cxx_destruct;
- (id)_displayLink;
- (void)_handleDisplayLink:(id)arg1;
- (void)_inputDidChange;
- (bool)_isPerformingInputChanges;
- (void)_setDisplayLink:(id)arg1;
- (void)_setOutputValue:(double)arg1;
- (void)_setPerformingInputChanges:(bool)arg1;
- (void)_setSpeed:(double)arg1;
- (void)_setTime:(double)arg1;
- (double)_speed;
- (double)_time;
- (void)_update;
- (double)maximumDeceleration;
- (double)maximumSpeed;
- (double)outputValue;
- (id)outputValueChangeHandler;
- (void)performInputChanges:(id)arg1;
- (void)setMaximumDeceleration:(double)arg1;
- (void)setMaximumSpeed:(double)arg1;
- (void)setOutputValueChangeHandler:(id)arg1;
- (void)setTargetValue:(double)arg1;
- (void)setVisibilityOffset:(double)arg1;
- (double)targetValue;

@end
