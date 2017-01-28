/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKVariantNode : SKCropNode {
    SKSpriteNode * _transitionMask;
}

@property (nonatomic, readonly) NTKCollectionNode *labels;
@property (nonatomic, readonly) NTKCollectionNode *other;
@property (nonatomic, readonly) NTKCollectionNode *ticks;

- (void).cxx_destruct;
- (void)_stopMasking;
- (void)appearAnimated;
- (void)applyAppearanceFraction:(double)arg1;
- (void)applyAppearanceFraction:(double)arg1 inverted:(bool)arg2;
- (void)applyFullAppearance;
- (void)createTransitionMaskLazily;
- (void)disappearAnimated;
- (id)initWithElements:(id)arg1;
- (id)labels;
- (id)other;
- (void)resetAlphaAndScale;
- (void)revealWithFraction:(double)arg1 invert:(bool)arg2;
- (id)ticks;

@end
