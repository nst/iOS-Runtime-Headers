/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKComplicationDisplayWrapperView : UIControl <NTKComplicationDisplayObserver, NTKControl, NTKTimeTravel> {
    double  _alphaForDimmedState;
    UIView * _clipView;
    NSString * _complicationSlotIdentifier;
    CLKComplicationTemplate * _complicationTemplate;
    UIView * _currentComplicationView;
    UIView * _deferredComplicationView;
    bool  _didChangeLayoutOverride;
    bool  _dimmed;
    UIView<NTKComplicationDisplay> * _display;
    id  _displayConfigurationHandler;
    UIView * _earlierContainerView;
    bool  _editing;
    long long  _family;
    bool  _hasLegacyDisplay;
    bool  _isAnimating;
    UIView * _laterContainerView;
    long long  _layoutOverride;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxSize;
    id  _needsResizeHandler;
    UIView * _nextComplicationView;
    bool  _paused;
    bool  _tapEnabled;
    id  _tapHandler;
    CLKComplicationTemplate * _template;
    NSDate * _timeTravelDate;
}

@property (nonatomic) double alphaForDimmedState;
@property (nonatomic, retain) NSString *complicationSlotIdentifier;
@property (nonatomic, readonly) CLKComplicationTemplate *complicationTemplate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDimmed, nonatomic) bool dimmed;
@property (nonatomic, readonly) UIView<NTKComplicationDisplay> *display;
@property (nonatomic, copy) id displayConfigurationHandler;
@property (nonatomic) bool editing;
@property (nonatomic, readonly) long long family;
@property (nonatomic, readonly) bool hasLegacyDisplay;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long layoutOverride;
@property (nonatomic) struct CGSize { double x1; double x2; } maxSize;
@property (nonatomic, copy) id needsResizeHandler;
@property (nonatomic) bool paused;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredSize;
@property (readonly) Class superclass;
@property (nonatomic) bool tapEnabled;
@property (nonatomic, copy) id tapHandler;

- (void).cxx_destruct;
- (void)_didSetDisplayFromDisplay:(id)arg1 withComplicationAnimation:(unsigned long long)arg2;
- (void)_invokeNeedsResizeHandler;
- (void)_invokeTapHandler;
- (void)_prepareToSetDisplay:(id)arg1 withComplicationAnimation:(inout unsigned long long*)arg2;
- (void)_removeDisplay:(id)arg1;
- (void)_resetComplicationViews;
- (void)_setDimmed:(bool)arg1 animated:(bool)arg2;
- (void)_setDisplay:(id)arg1 withComplicationAnimation:(unsigned long long)arg2;
- (void)_setDisplayEditing:(bool)arg1;
- (void)_setDisplayMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_tryToSetDisplayHighlighted:(bool)arg1;
- (double)alphaForDimmedState;
- (void)complicationDisplayNeedsResize:(id)arg1;
- (id)complicationSlotIdentifier;
- (id)complicationTemplate;
- (void)dealloc;
- (id)display;
- (id)displayConfigurationHandler;
- (bool)editing;
- (long long)family;
- (bool)hasLegacyDisplay;
- (id)init;
- (id)initWithFamily:(long long)arg1;
- (id)initWithLegacyDisplay:(id)arg1;
- (id)initWithLegacyDisplay:(id)arg1 layoutOverride:(long long)arg2;
- (bool)isDimmed;
- (long long)layoutOverride;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })maxSize;
- (void)needsResize;
- (id)needsResizeHandler;
- (bool)paused;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (struct CGSize { double x1; double x2; })preferredSize;
- (void)setAlphaForDimmedState:(double)arg1;
- (void)setComplicationSlotIdentifier:(id)arg1;
- (void)setComplicationTemplate:(id)arg1 withComplicationAnimation:(unsigned long long)arg2;
- (void)setComplicationView:(id)arg1 withComplicationAnimation:(unsigned long long)arg2;
- (void)setDimmed:(bool)arg1;
- (void)setDimmed:(bool)arg1 animated:(bool)arg2;
- (void)setDisplayConfigurationHandler:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNeedsResizeHandler:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setTapEnabled:(bool)arg1;
- (void)setTapHandler:(id)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(bool)arg2;
- (bool)shouldCancelTouchesInScrollview;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)tapEnabled;
- (id)tapHandler;

@end
