/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DPieWedgeGeometry : TSCH3DGeometry {
    long long  mAngleSteps;
    long long  mBevelEdgeSteps;
    float  mBottomZ;
    long long  mCapCount;
    long long  mCapOffset;
    float  mEndAngle;
    TSCH3DNormalDirectionMapper * mNormalDirectionMapper;
    float  mRadius;
    long long  mRadiusSteps;
    float  mStartAngle;
    float  mTopZ;
}

@property (nonatomic) long long angleSteps;
@property (nonatomic) long long bevelEdgeSteps;
@property (nonatomic) float bottomZ;
@property (nonatomic, readonly) long long capCount;
@property (nonatomic, readonly) long long capOffset;
@property (nonatomic) float endAngle;
@property (nonatomic, readonly) TSCH3DNormalDirectionMapper *normalDirectionMapper;
@property (nonatomic) float radius;
@property (nonatomic) long long radiusSteps;
@property (nonatomic) float startAngle;
@property (nonatomic) float topZ;

- (long long)angleSteps;
- (long long)bevelEdgeSteps;
- (float)bevelHeight;
- (float)bottomZ;
- (long long)capCount;
- (long long)capOffset;
- (void)dealloc;
- (float)endAngle;
- (void)generateArrays;
- (void)generateRoundedTop:(struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)arg1 radiusArray:(struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)arg2;
- (int)geometryCount;
- (id)init;
- (bool)isFullCircle;
- (id)normalDirectionMapper;
- (void)p_generateAngles:(struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)arg1;
- (void)p_generateBevelCoordinates:(struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> {} *x1; struct tvec3<float> {} *x2; struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> {} *x_3_1_1; } x3; }*)arg1 andAngles:(struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)arg2 radiusArray:(const struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)arg3 topArray:(const struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)arg4;
- (float)radius;
- (long long)radiusSteps;
- (id)selectionKnobPositions;
- (void)setAngleSteps:(long long)arg1;
- (void)setBevelEdgeSteps:(long long)arg1;
- (void)setBottomZ:(float)arg1;
- (void)setEndAngle:(float)arg1;
- (void)setRadius:(float)arg1;
- (void)setRadiusSteps:(long long)arg1;
- (void)setStartAngle:(float)arg1;
- (void)setTopZ:(float)arg1;
- (float)startAngle;
- (float)topZ;

@end
