/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKEmitterNode : SKNode {
    SKKeyframeSequence * _alphaSequence;
    SKKeyframeSequence * _colorBlendSequence;
    SKKeyframeSequence * _colorSequence;
    SKKeyframeSequence * _fieldInfluenceSequence;
    unsigned long long  _particleRenderOrder;
    SKKeyframeSequence * _particleSpeedSequence;
    SKTexture * _particleTexture;
    SKKeyframeSequence * _rotationSequence;
    SKKeyframeSequence * _scaleSequence;
    struct SKCEmitterNode { int (**x1)(); id x2; struct unordered_map<std::__1::basic_string<char>, SKAttributeValue *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKAttributeValue *> > > { struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; } * _skcEmitterNode;
    SKNode * _target;
}

@property (nonatomic, copy) NSDictionary *attributeValues;
@property (nonatomic) double emissionAngle;
@property (nonatomic) double emissionAngleRange;
@property (nonatomic) unsigned int fieldBitMask;
@property (nonatomic) unsigned long long numParticlesToEmit;
@property (nonatomic, copy) SKAction *particleAction;
@property (nonatomic) double particleAlpha;
@property (nonatomic) double particleAlphaRange;
@property (nonatomic, retain) SKKeyframeSequence *particleAlphaSequence;
@property (nonatomic) double particleAlphaSpeed;
@property (nonatomic) double particleBirthRate;
@property (nonatomic) long long particleBlendMode;
@property (nonatomic, retain) UIColor *particleColor;
@property (nonatomic) double particleColorAlphaRange;
@property (nonatomic) double particleColorAlphaSpeed;
@property (nonatomic) double particleColorBlendFactor;
@property (nonatomic) double particleColorBlendFactorRange;
@property (nonatomic, retain) SKKeyframeSequence *particleColorBlendFactorSequence;
@property (nonatomic) double particleColorBlendFactorSpeed;
@property (nonatomic) double particleColorBlueRange;
@property (nonatomic) double particleColorBlueSpeed;
@property (nonatomic) double particleColorGreenRange;
@property (nonatomic) double particleColorGreenSpeed;
@property (nonatomic) double particleColorRedRange;
@property (nonatomic) double particleColorRedSpeed;
@property (nonatomic, retain) SKKeyframeSequence *particleColorSequence;
@property (nonatomic) double particleLifetime;
@property (nonatomic) double particleLifetimeRange;
@property (nonatomic) struct CGPoint { double x1; double x2; } particlePosition;
@property (nonatomic) struct CGVector { double x1; double x2; } particlePositionRange;
@property (nonatomic) unsigned long long particleRenderOrder;
@property (nonatomic) double particleRotation;
@property (nonatomic) double particleRotationRange;
@property (nonatomic) double particleRotationSpeed;
@property (nonatomic) double particleScale;
@property (nonatomic) double particleScaleRange;
@property (nonatomic, retain) SKKeyframeSequence *particleScaleSequence;
@property (nonatomic) double particleScaleSpeed;
@property (nonatomic) struct CGSize { double x1; double x2; } particleSize;
@property (nonatomic) double particleSpeed;
@property (nonatomic) double particleSpeedRange;
@property (nonatomic, retain) SKTexture *particleTexture;
@property (nonatomic) double particleZPosition;
@property (nonatomic) double particleZPositionRange;
@property (nonatomic) double particleZPositionSpeed;
@property (nonatomic, retain) SKShader *shader;
@property (nonatomic) SKNode *targetNode;
@property (nonatomic) double xAcceleration;
@property (nonatomic) double yAcceleration;

- (void).cxx_destruct;
- (void)_didMakeBackingNode;
- (struct SKCNode { int (**x1)(); id x2; struct unordered_map<std::__1::basic_string<char>, SKAttributeValue *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKAttributeValue *> > > { struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; }*)_makeBackingNode;
- (unsigned int)activeParticleCount;
- (void)addSubEmitterNode:(id)arg1;
- (void)advanceSimulationTime:(double)arg1;
- (void)copyParticlePropertiesToNode:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)densityBased;
- (id)description;
- (double)emissionAngle;
- (double)emissionAngleRange;
- (double)emissionDistance;
- (double)emissionDistanceRange;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)fieldBitMask;
- (id)fieldInfluenceSequence;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMinimumParticleCapacity:(unsigned long long)arg1;
- (id)initWithMinimumParticleCapacity:(unsigned long long)arg1 minimumPositionBufferCapacity:(unsigned long long)arg2;
- (bool)isEqualToNode:(id)arg1;
- (unsigned long long)numParticlesToEmit;
- (id)particleAction;
- (double)particleAlpha;
- (double)particleAlphaRange;
- (id)particleAlphaSequence;
- (double)particleAlphaSpeed;
- (double)particleBirthRate;
- (long long)particleBlendMode;
- (id)particleColor;
- (double)particleColorAlphaRange;
- (double)particleColorAlphaSpeed;
- (double)particleColorBlendFactor;
- (double)particleColorBlendFactorRange;
- (id)particleColorBlendFactorSequence;
- (double)particleColorBlendFactorSpeed;
- (double)particleColorBlueRange;
- (double)particleColorBlueSpeed;
- (double)particleColorGreenRange;
- (double)particleColorGreenSpeed;
- (double)particleColorRedRange;
- (double)particleColorRedSpeed;
- (id)particleColorSequence;
- (double)particleDensity;
- (double)particleLifetime;
- (double)particleLifetimeRange;
- (struct CGPoint { double x1; double x2; })particlePosition;
- (struct CGVector { double x1; double x2; })particlePositionRange;
- (unsigned long long)particleRenderOrder;
- (double)particleRotation;
- (double)particleRotationRange;
- (id)particleRotationSequence;
- (double)particleRotationSpeed;
- (double)particleScale;
- (double)particleScaleRange;
- (id)particleScaleSequence;
- (double)particleScaleSpeed;
- (struct CGSize { double x1; double x2; })particleSize;
- (double)particleSpeed;
- (double)particleSpeedRange;
- (id)particleSpeedSequence;
- (id)particleTexture;
- (double)particleZPosition;
- (double)particleZPositionRange;
- (double)particleZPositionSpeed;
- (id)physicsWorld;
- (void)resetSimulation;
- (void)setDensityBased:(bool)arg1;
- (void)setEmissionAngle:(double)arg1;
- (void)setEmissionAngleRange:(double)arg1;
- (void)setEmissionDistance:(double)arg1;
- (void)setEmissionDistanceRange:(double)arg1;
- (void)setFieldBitMask:(unsigned int)arg1;
- (void)setFieldInfluenceSequence:(id)arg1;
- (void)setNumParticlesToEmit:(unsigned long long)arg1;
- (void)setParticleAction:(id)arg1;
- (void)setParticleAlpha:(double)arg1;
- (void)setParticleAlphaRange:(double)arg1;
- (void)setParticleAlphaSequence:(id)arg1;
- (void)setParticleAlphaSpeed:(double)arg1;
- (void)setParticleBirthRate:(double)arg1;
- (void)setParticleBlendMode:(long long)arg1;
- (void)setParticleColor:(id)arg1;
- (void)setParticleColorAlphaRange:(double)arg1;
- (void)setParticleColorAlphaSpeed:(double)arg1;
- (void)setParticleColorBlendFactor:(double)arg1;
- (void)setParticleColorBlendFactorRange:(double)arg1;
- (void)setParticleColorBlendFactorSequence:(id)arg1;
- (void)setParticleColorBlendFactorSpeed:(double)arg1;
- (void)setParticleColorBlueRange:(double)arg1;
- (void)setParticleColorBlueSpeed:(double)arg1;
- (void)setParticleColorGreenRange:(double)arg1;
- (void)setParticleColorGreenSpeed:(double)arg1;
- (void)setParticleColorRedRange:(double)arg1;
- (void)setParticleColorRedSpeed:(double)arg1;
- (void)setParticleColorSequence:(id)arg1;
- (void)setParticleDensity:(double)arg1;
- (void)setParticleLifetime:(double)arg1;
- (void)setParticleLifetimeRange:(double)arg1;
- (void)setParticlePosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setParticlePositionRange:(struct CGVector { double x1; double x2; })arg1;
- (void)setParticleRenderOrder:(unsigned long long)arg1;
- (void)setParticleRotation:(double)arg1;
- (void)setParticleRotationRange:(double)arg1;
- (void)setParticleRotationSequence:(id)arg1;
- (void)setParticleRotationSpeed:(double)arg1;
- (void)setParticleScale:(double)arg1;
- (void)setParticleScaleRange:(double)arg1;
- (void)setParticleScaleSequence:(id)arg1;
- (void)setParticleScaleSpeed:(double)arg1;
- (void)setParticleSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setParticleSpeed:(double)arg1;
- (void)setParticleSpeedRange:(double)arg1;
- (void)setParticleSpeedSequence:(id)arg1;
- (void)setParticleTexture:(id)arg1;
- (void)setParticleZPosition:(double)arg1;
- (void)setParticleZPositionRange:(double)arg1;
- (void)setParticleZPositionSpeed:(double)arg1;
- (void)setPhysicsWorld:(id)arg1;
- (void)setShader:(id)arg1;
- (void)setTargetNode:(id)arg1;
- (void)setUsesPointSprites:(bool)arg1;
- (void)setWantsNewParticles:(bool)arg1;
- (void)setXAcceleration:(double)arg1;
- (void)setYAcceleration:(double)arg1;
- (void)setZPosition:(double)arg1;
- (id)shader;
- (id)subEmitterNode;
- (id)targetNode;
- (bool)usesPointSprites;
- (bool)wantsNewParticles;
- (double)xAcceleration;
- (double)yAcceleration;

@end
