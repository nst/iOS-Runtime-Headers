/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

@interface PKPeerPayment3DTextView : UIView <SCNSceneRendererDelegate> {
    PKPeerPayment3DStore * _3DStore;
    double  _animationDuration;
    NSMutableArray * _charactersToDraw;
    double  _dynamicRollPitchMix;
    unsigned long long  _framesFullyRendered;
    double  _lastRenderTime;
    bool  _layoutRequested;
    bool  _liveMotionEnabled;
    NSMutableArray * _performHandlers;
    unsigned long long  _renderStyle;
    PKPeerPayment3DScene * _scene;
    double  _sceneHeightUnits;
    SCNView * _sceneView;
    double  _sceneWidthUnits;
    bool  _snapshotRequested;
    double  _startAnimationTime;
    NSString * _text;
    bool  _usedForSnapshotting;
    bool  _willAnimate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long renderStyle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *text;

+ (id)supportedCharacterSet;

- (void).cxx_destruct;
- (void)dealloc;
- (void)didBecomeActive;
- (void)didMoveToWindow;
- (id)generatedSnapshot;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 renderStyle:(unsigned long long)arg2 usedForSnapshotting:(bool)arg3;
- (void)layoutSubviews;
- (void)layoutText;
- (void)loadCharactersAndLayout;
- (void)performPostRender:(id /* block */)arg1;
- (unsigned long long)renderStyle;
- (void)renderer:(id)arg1 didRenderScene:(id)arg2 atTime:(double)arg3;
- (void)renderer:(id)arg1 updateAtTime:(double)arg2;
- (void)setMotionEffectEnabled:(bool)arg1 animated:(bool)arg2;
- (bool)setText:(id)arg1;
- (id)text;
- (void)updateSceneUnits;
- (void)willResignActive;

@end
