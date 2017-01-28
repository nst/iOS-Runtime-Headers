/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface NLArcLayer : CAShapeLayer <CALayerDelegate> {
    double  _arcStart;
    struct CGPoint { 
        double x; 
        double y; 
    }  _center;
    bool  _needsRegeneration;
    double  _radius;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } center;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double radius;
@property (readonly) Class superclass;

- (void)_regeneratePath;
- (id)actionForKey:(id)arg1;
- (void)animatePathCenter:(struct CGPoint { double x1; double x2; })arg1 radius:(double)arg2 lineWidth:(double)arg3 duration:(double)arg4;
- (struct CGPoint { double x1; double x2; })center;
- (id)init;
- (void)layoutSublayers;
- (double)radius;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLineWidth:(double)arg1;
- (void)setNeedsRegeneration;
- (void)setRadius:(double)arg1;

@end
