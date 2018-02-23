/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLMorphDeformer : NSObject <MDLMorphDeformerComponent, NSCopying> {
    NSData * _targetCounts;
    NSArray * _targetShapes;
    NSData * _targetWeights;
    MDLAnimatedScalarArray * _weights;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *shapeSetTargetCounts;
@property (nonatomic, readonly) NSArray *shapeSetTargetWeights;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSData *targetCounts;
@property (nonatomic, readonly) NSArray *targetShapes;
@property (nonatomic, retain) NSData *targetWeights;
@property (nonatomic, retain) MDLAnimatedScalarArray *weights;

- (void).cxx_destruct;
- (unsigned long long)copyShapeSetTargetCountsInto:(unsigned int*)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)copyShapeSetTargetWeightsInto:(float*)arg1 maxCount:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithOther:(id)arg1;
- (id)initWithTargetShapes:(id)arg1 shapeSetTargetWeights:(const float*)arg2 count:(unsigned long long)arg3 shapeSetTargetCounts:(const unsigned int*)arg4 count:(unsigned long long)arg5;
- (id)initWithTargetShapes:(id)arg1 shapeSetTargetWeights:(id)arg2 shapeSetTargetCounts:(id)arg3;
- (void)setTargetCounts:(id)arg1;
- (void)setTargetWeights:(id)arg1;
- (void)setWeights:(id)arg1;
- (id)shapeSetTargetCounts;
- (id)shapeSetTargetWeights;
- (id)targetCounts;
- (id)targetShapes;
- (id)targetWeights;
- (id)weights;

@end
