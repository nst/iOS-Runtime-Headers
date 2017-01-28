/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUEffectiveProgressObserver : NSObject {
    id  _observerBlock;
    double  _targetEffectiveProgress;
    <NACancelable> * _timerCancellationToken;
}

@property (nonatomic, readonly, copy) id observerBlock;
@property (nonatomic, readonly) double targetEffectiveProgress;
@property (nonatomic, retain) <NACancelable> *timerCancellationToken;

- (void).cxx_destruct;
- (id)initWithTargetEffectiveProgress:(double)arg1 observerBlock:(id)arg2;
- (id)observerBlock;
- (void)setTimerCancellationToken:(id)arg1;
- (double)targetEffectiveProgress;
- (id)timerCancellationToken;

@end