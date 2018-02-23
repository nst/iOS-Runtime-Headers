/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNFloor : SCNGeometry {
    unsigned int  _isPresentationInstance;
    double  _length;
    unsigned long long  _reflectionCategoryBitMask;
    float  _reflectionFalloffEnd;
    float  _reflectionFalloffStart;
    float  _reflectionResolutionScaleFactor;
    unsigned long long  _reflectionSampleCount;
    float  _reflectivity;
    unsigned int  _usesCustomScaleFactor;
    double  _width;
}

@property (nonatomic) double length;
@property (nonatomic) unsigned long long reflectionCategoryBitMask;
@property (nonatomic) double reflectionFalloffEnd;
@property (nonatomic) double reflectionFalloffStart;
@property (nonatomic) double reflectionResolutionScaleFactor;
@property (nonatomic) double reflectivity;
@property (nonatomic) double width;

+ (id)floor;
+ (bool)supportsSecureCoding;

- (struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; struct { /* ? */ } *x7; unsigned int x8 : 1; int (*x9)(); struct { unsigned char x_10_1_1; bool x_10_1_2; struct { bool x_3_2_1; unsigned char x_3_2_2; unsigned char x_3_2_3; unsigned char x_3_2_4; } x_10_1_3; struct __C3DMeshElement {} *x_10_1_4; struct __C3DMeshSource {} *x_10_1_5; struct __C3DMesh {} *x_10_1_6; void *x_10_1_7; void *x_10_1_8; } x10; struct { unsigned char x_11_1_1; float x_11_1_2; unsigned int x_11_1_3; unsigned char x_11_1_4; union { struct { float x_1_3_1; float x_1_3_2; } x_5_2_1; struct { float x_2_3_1; } x_5_2_2; struct { float x_3_3_1; } x_5_2_3; struct { unsigned char x_4_3_1; unsigned int x_4_3_2 : 1; unsigned int x_4_3_3 : 1; } x_5_2_4; } x_11_1_5; } x11; }*)__createCFObject;
- (void)_customDecodingOfSCNFloor:(id)arg1;
- (void)_syncObjCModel;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (struct __C3DFloor { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_3_1; unsigned long long x_1_3_2; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; struct __C3DScene {} *x_1_2_6; long long x_1_2_7; } x_1_1_1; struct __C3DMesh {} *x_1_1_2; struct __C3DMaterial {} *x_1_1_3; struct __CFArray {} *x_1_1_4; struct __CFSet {} *x_1_1_5; struct __CFArray {} *x_1_1_6; struct { /* ? */ } *x_1_1_7; unsigned int x_1_1_8 : 1; int (*x_1_1_9)(); struct { unsigned char x_10_2_1; bool x_10_2_2; struct { bool x_3_3_1; unsigned char x_3_3_2; unsigned char x_3_3_3; unsigned char x_3_3_4; } x_10_2_3; struct __C3DMeshElement {} *x_10_2_4; struct __C3DMeshSource {} *x_10_2_5; struct __C3DMesh {} *x_10_2_6; void *x_10_2_7; void *x_10_2_8; } x_1_1_10; struct { unsigned char x_11_2_1; float x_11_2_2; unsigned int x_11_2_3; unsigned char x_11_2_4; union { struct { float x_1_4_1; float x_1_4_2; } x_5_3_1; struct { float x_2_4_1; } x_5_3_2; struct { float x_3_4_1; } x_5_3_3; struct { unsigned char x_4_4_1; unsigned int x_4_4_2 : 1; unsigned int x_4_4_3 : 1; } x_5_3_4; } x_11_2_5; } x_1_1_11; } x1; }*)floorRef;
- (double)height;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFloorGeometryRef:(struct __C3DFloor { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_3_1; unsigned long long x_1_3_2; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; struct __C3DScene {} *x_1_2_6; long long x_1_2_7; } x_1_1_1; struct __C3DMesh {} *x_1_1_2; struct __C3DMaterial {} *x_1_1_3; struct __CFArray {} *x_1_1_4; struct __CFSet {} *x_1_1_5; struct __CFArray {} *x_1_1_6; struct { /* ? */ } *x_1_1_7; unsigned int x_1_1_8 : 1; int (*x_1_1_9)(); struct { unsigned char x_10_2_1; bool x_10_2_2; struct { bool x_3_3_1; unsigned char x_3_3_2; unsigned char x_3_3_3; unsigned char x_3_3_4; } x_10_2_3; struct __C3DMeshElement {} *x_10_2_4; struct __C3DMeshSource {} *x_10_2_5; struct __C3DMesh {} *x_10_2_6; void *x_10_2_7; void *x_10_2_8; } x_1_1_10; struct { unsigned char x_11_2_1; float x_11_2_2; unsigned int x_11_2_3; unsigned char x_11_2_4; union { struct { float x_1_4_1; float x_1_4_2; } x_5_3_1; struct { float x_2_4_1; } x_5_3_2; struct { float x_3_4_1; } x_5_3_3; struct { unsigned char x_4_4_1; unsigned int x_4_4_2 : 1; unsigned int x_4_4_3 : 1; } x_5_3_4; } x_11_2_5; } x_1_1_11; } x1; }*)arg1;
- (double)length;
- (unsigned long long)reflectionCategoryBitMask;
- (double)reflectionFallOffEnd;
- (double)reflectionFallOffStart;
- (double)reflectionFalloffEnd;
- (double)reflectionFalloffStart;
- (double)reflectionResolutionScaleFactor;
- (unsigned long long)reflectionSampleCount;
- (double)reflectivity;
- (void)setHeight:(double)arg1;
- (void)setLength:(double)arg1;
- (void)setReflectionCategoryBitMask:(unsigned long long)arg1;
- (void)setReflectionFallOffEnd:(double)arg1;
- (void)setReflectionFallOffStart:(double)arg1;
- (void)setReflectionFalloffEnd:(double)arg1;
- (void)setReflectionFalloffStart:(double)arg1;
- (void)setReflectionResolutionScaleFactor:(double)arg1;
- (void)setReflectionSampleCount:(unsigned long long)arg1;
- (void)setReflectivity:(double)arg1;
- (void)setWidth:(double)arg1;
- (double)width;

@end
