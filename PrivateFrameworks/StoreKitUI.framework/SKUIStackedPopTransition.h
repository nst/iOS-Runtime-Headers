/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStackedPopTransition : NSObject <UIViewControllerAnimatedTransitioning> {
    SKUIStackedBar * _fromBar;
    double  _split;
    SKUIStackedBar * _toBar;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SKUIStackedBar *fromBar;
@property (readonly) unsigned long long hash;
@property (nonatomic) double split;
@property (readonly) Class superclass;
@property (nonatomic, retain) SKUIStackedBar *toBar;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (id)fromBar;
- (void)setFromBar:(id)arg1;
- (void)setSplit:(double)arg1;
- (void)setToBar:(id)arg1;
- (double)split;
- (id)toBar;
- (double)transitionDuration:(id)arg1;

@end
