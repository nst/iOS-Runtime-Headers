/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKPhysicsJointPin : SKPhysicsJoint {
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchor;
    double  _frictionTorque;
    double  _lowerAngleLimit;
    double  _rotationSpeed;
    bool  _shouldEnableLimits;
    double  _upperAngleLimit;
}

@property (readonly) struct CGPoint { double x1; double x2; } anchor;
@property (nonatomic) double frictionTorque;
@property (nonatomic) double lowerAngleLimit;
@property (nonatomic) double rotationSpeed;
@property (nonatomic) bool shouldEnableLimits;
@property (nonatomic) double upperAngleLimit;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(struct CGPoint { double x1; double x2; })arg3;

- (struct CGPoint { double x1; double x2; })anchor;
- (double)frictionTorque;
- (double)lowerAngleLimit;
- (double)rotationSpeed;
- (void)setFrictionTorque:(double)arg1;
- (void)setLowerAngleLimit:(double)arg1;
- (void)setRotationSpeed:(double)arg1;
- (void)setShouldEnableLimits:(bool)arg1;
- (void)setUpperAngleLimit:(double)arg1;
- (bool)shouldEnableLimits;
- (double)upperAngleLimit;

@end
