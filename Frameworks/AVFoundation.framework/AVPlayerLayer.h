/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerLayer : CALayer <AVKeyPathDependencyHost, AVWeakObservable> {
    AVPlayerLayerInternal * _playerLayer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *pixelBufferAttributes;
@property (nonatomic, retain) AVPlayer *player;
@property (getter=isReadyForDisplay, nonatomic, readonly) bool readyForDisplay;
@property (readonly) Class superclass;
@property (copy) NSString *videoGravity;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } videoRect;

+ (void)_swapSublayersBetweenPlayerLayer:(id)arg1 andPlayerLayer:(id)arg2;
+ (id)keyPathsForValuesAffectingVideoRect;
+ (id)makeClosedCaptionLayer;
+ (id)playerLayerWithPlayer:(id)arg1;

- (void)_addAnimationsForClosedCaptionLayer:(id)arg1 gravity:(id)arg2 forKey:(id)arg3;
- (void)_addAnimationsForMaskLayer:(id)arg1 forKey:(id)arg2;
- (void)_addAnimationsForPIPPlaceholderLayer:(id)arg1 forKey:(id)arg2;
- (void)_addAnimationsForVideoLayer:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 gravity:(id)arg3 forKey:(id)arg4;
- (void)_addBoundsAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3;
- (void)_addPositionAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3;
- (void)_addSublayerTransformAnimationToLayer:(id)arg1 fromTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg2 usingAnimation:(id)arg3 gravity:(id)arg4 presentationSize:(struct CGSize { double x1; double x2; })arg5 forKey:(id)arg6;
- (void)_applyCurrentItemPresentationSizeChangeAndForceUpdate:(bool)arg1;
- (void)_associateWithPIPLayer:(id)arg1;
- (id)_associatedPIPLayer;
- (id)_closedCaptionLayer;
- (void)_configurePlayerWhenEnteringPIP;
- (void)_configurePlayerWhenLeavingPIP;
- (void)_disassociateWithPIPLayer;
- (struct CGSize { double x1; double x2; })_displaySize;
- (void)_forBoundsAnimations:(id)arg1 applyBlock:(id)arg2;
- (void)_forceLayout;
- (void)_getMaskLayer:(id*)arg1 videoLayer:(id*)arg2 subtitleLayer:(id*)arg3 closedCaptionLayer:(id*)arg4;
- (id)_maskLayer;
- (void)_mergeClientLayersIntoMaskLayer:(id)arg1;
- (void)_notifyPlayerOfDisplaySize;
- (struct CGSize { double x1; double x2; })_playerCurrentItemPresentationSize;
- (bool)_preventsChangesToSublayerHierarchy;
- (void)_restoreClientLayers:(id)arg1 intoMaskLayer:(id)arg2;
- (void)_scaleVideoLayerUsingLanczosFilterWithSublayerTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (void)_setCanEnterPIPMode:(bool)arg1;
- (void)_setPreventsChangesToSublayerHierarchy:(bool)arg1;
- (void)_setSublayersForPIP:(id)arg1;
- (void)_setSublayersPreventChangesToSublayerHierarchy:(bool)arg1;
- (void)_setSubtitleGravity:(id)arg1;
- (void)_setWillManageSublayersAsSwappedLayers:(bool)arg1;
- (void)_startObservingPlayer:(id)arg1;
- (void)_stopObservingPlayer:(id)arg1;
- (id)_sublayersForPIP;
- (id)_subtitleGravity;
- (id)_subtitleLayer;
- (void)_syncToPlayer:(id)arg1;
- (id)_videoLayer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_videoRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_willManageSublayersAsSwappedLayers;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addCallbackToCancelDuringDeallocation:(id)arg1;
- (void)addSublayer:(id)arg1;
- (bool)canEnterPIPMode;
- (void)dealloc;
- (void)declareKeyPathDependenciesWithRegistry:(id)arg1;
- (void)enterPIPModeRedirectingVideoToLayer:(id)arg1;
- (void)finalize;
- (id)init;
- (id)initWithLayer:(id)arg1;
- (void)insertSublayer:(id)arg1 above:(id)arg2;
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertSublayer:(id)arg1 below:(id)arg2;
- (bool)isLanczosFilterDownscalingEnabled;
- (bool)isOverscanSubtitleSupportEnabled;
- (bool)isPIPModeEnabled;
- (bool)isReadyForDisplay;
- (long long)lanczosFilterDownscaleFactor;
- (void)layerDidBecomeVisible:(bool)arg1;
- (void)layoutSublayers;
- (void)leavePIPMode;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)pixelBufferAttributes;
- (id)placeholderContentLayerDuringPIPMode;
- (id)player;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeFromSuperlayer;
- (void)replaceSublayer:(id)arg1 with:(id)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentsScale:(double)arg1;
- (void)setLanczosFilterDownscaleFactor:(long long)arg1;
- (void)setLanczosFilterDownscalingEnabled:(bool)arg1;
- (void)setOverscanSubtitleSupportEnabled:(bool)arg1;
- (void)setPIPModeEnabled:(bool)arg1;
- (void)setPixelBufferAttributes:(id)arg1;
- (void)setPlaceholderContentLayerDuringPIPMode:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setSublayers:(id)arg1;
- (void)setVideoGravity:(id)arg1;
- (id)videoGravity;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })videoRect;

@end
