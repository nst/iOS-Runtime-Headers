/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNGeometry : NSObject <NSCopying, NSSecureCoding, SCNAnimatable, SCNBoundingVolume, SCNShadable> {
    SCNOrderedDictionary * _animations;
    NSMutableDictionary * _bindings;
    SCNGeometryElement * _edgeCreasesElement;
    SCNGeometrySource * _edgeCreasesSource;
    NSMutableArray * _elements;
    struct SCNVector3 { float x1; float x2; float x3; } * _fixedBoundingBoxExtrema;
    struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; struct { /* ? */ } *x7; unsigned int x8 : 1; int (*x9)(); struct { unsigned char x_10_1_1; bool x_10_1_2; struct { bool x_3_2_1; unsigned char x_3_2_2; unsigned char x_3_2_3; unsigned char x_3_2_4; } x_10_1_3; struct __C3DMeshElement {} *x_10_1_4; struct __C3DMeshSource {} *x_10_1_5; struct __C3DMesh {} *x_10_1_6; void *x_10_1_7; void *x_10_1_8; } x10; struct { unsigned char x_11_1_1; float x_11_1_2; unsigned int x_11_1_3; unsigned char x_11_1_4; union { struct { float x_1_3_1; float x_1_3_2; } x_5_2_1; struct { float x_2_3_1; } x_5_2_2; struct { float x_3_3_1; } x_5_2_3; struct { unsigned char x_4_3_1; unsigned int x_4_3_2 : 1; unsigned int x_4_3_3 : 1; } x_5_2_4; } x_11_1_5; } x11; } * _geometry;
    unsigned int  _isPresentationInstance;
    NSArray * _levelsOfDetail;
    NSMutableArray * _materials;
    NSString * _name;
    SCNShadableHelper * _shadableHelper;
    NSArray * _sourceChannels;
    NSMutableArray * _sources;
    bool  _subdivisionIsAdaptive;
    unsigned long long  _subdivisionLevel;
    struct { 
        bool enableVertexWeldingAtImport; 
        unsigned char boundaryInterpolationRule; 
        unsigned char faceVaryingInterpolationRule; 
        unsigned char normalSmoothingMode; 
    }  _subdivisionSettings;
    SCNGeometryTessellator * _tessellator;
    NSMutableDictionary * _valuesForUndefinedKeys;
}

@property (readonly) NSArray *animationKeys;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SCNGeometryElement *edgeCreasesElement;
@property (nonatomic, retain) SCNGeometrySource *edgeCreasesSource;
@property (nonatomic, retain) SCNMaterial *firstMaterial;
@property (nonatomic, readonly) long long geometryElementCount;
@property (nonatomic, readonly) NSArray *geometryElements;
@property (nonatomic, readonly) NSArray *geometrySources;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *levelsOfDetail;
@property (nonatomic, copy) NSArray *materials;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) SCNProgram *program;
@property (nonatomic, copy) NSDictionary *shaderModifiers;
@property (nonatomic) unsigned long long subdivisionLevel;
@property (readonly) Class superclass;
@property (nonatomic, retain) SCNGeometryTessellator *tessellator;
@property (nonatomic) bool wantsAdaptiveSubdivision;

+ (id)boxWithWidth:(double)arg1 height:(double)arg2 length:(double)arg3 cornerRadius:(double)arg4 options:(id)arg5;
+ (id)capsuleWithRadius:(double)arg1 height:(double)arg2 options:(id)arg3;
+ (id)coneWithHeight:(double)arg1 topRadius:(double)arg2 bottomRadius:(double)arg3 options:(id)arg4;
+ (id)cylinderWithRadius:(double)arg1 height:(double)arg2 options:(id)arg3;
+ (id)floorWithOptions:(id)arg1;
+ (id)geometry;
+ (id)geometryWithGeometryRef:(struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; struct { /* ? */ } *x7; unsigned int x8 : 1; int (*x9)(); struct { unsigned char x_10_1_1; bool x_10_1_2; struct { bool x_3_2_1; unsigned char x_3_2_2; unsigned char x_3_2_3; unsigned char x_3_2_4; } x_10_1_3; struct __C3DMeshElement {} *x_10_1_4; struct __C3DMeshSource {} *x_10_1_5; struct __C3DMesh {} *x_10_1_6; void *x_10_1_7; void *x_10_1_8; } x10; struct { unsigned char x_11_1_1; float x_11_1_2; unsigned int x_11_1_3; unsigned char x_11_1_4; union { struct { float x_1_3_1; float x_1_3_2; } x_5_2_1; struct { float x_2_3_1; } x_5_2_2; struct { float x_3_3_1; } x_5_2_3; struct { unsigned char x_4_3_1; unsigned int x_4_3_2 : 1; unsigned int x_4_3_3 : 1; } x_5_2_4; } x_11_1_5; } x11; }*)arg1;
+ (id)geometryWithMDLMesh:(id)arg1;
+ (id)geometryWithMDLMesh:(id)arg1 submesh:(id)arg2;
+ (id)geometryWithSources:(id)arg1 elements:(id)arg2;
+ (id)geometryWithSources:(id)arg1 elements:(id)arg2 sourceChannels:(id)arg3;
+ (id)morpherWithMDLMesh:(id)arg1;
+ (id)planeWithWidth:(double)arg1 height:(double)arg2 options:(id)arg3;
+ (id)pyramidWithWidth:(double)arg1 height:(double)arg2 length:(double)arg3 options:(id)arg4;
+ (bool)resolveInstanceMethod:(SEL)arg1;
+ (id)sphereWithRadius:(double)arg1 options:(id)arg2;
+ (bool)supportsSecureCoding;
+ (id)torusWithRingRadius:(double)arg1 pipeRadius:(double)arg2 options:(id)arg3;
+ (id)tubeWithInnerRadius:(double)arg1 outerRadius:(double)arg2 height:(double)arg3 options:(id)arg4;

- (const void*)__CFObject;
- (struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; struct { /* ? */ } *x7; unsigned int x8 : 1; int (*x9)(); struct { unsigned char x_10_1_1; bool x_10_1_2; struct { bool x_3_2_1; unsigned char x_3_2_2; unsigned char x_3_2_3; unsigned char x_3_2_4; } x_10_1_3; struct __C3DMeshElement {} *x_10_1_4; struct __C3DMeshSource {} *x_10_1_5; struct __C3DMesh {} *x_10_1_6; void *x_10_1_7; void *x_10_1_8; } x10; struct { unsigned char x_11_1_1; float x_11_1_2; unsigned int x_11_1_3; unsigned char x_11_1_4; union { struct { float x_1_3_1; float x_1_3_2; } x_5_2_1; struct { float x_2_3_1; } x_5_2_2; struct { float x_3_3_1; } x_5_2_3; struct { unsigned char x_4_3_1; unsigned int x_4_3_2 : 1; unsigned int x_4_3_3 : 1; } x_5_2_4; } x_11_1_5; } x11; }*)__createCFObject;
- (bool)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (void)_copyAnimationsFrom:(id)arg1;
- (void)_customDecodingOfSCNGeometry:(id)arg1;
- (void)_customEncodingOfSCNGeometry:(id)arg1;
- (void)_discardOriginalTopology;
- (void)_expand;
- (id)_firstMaterial;
- (id)_geometryByAddingSourcesOfSkinner:(id)arg1;
- (id)_geometryByRemovingSkinnerSources;
- (id)_geometryByUnifyingNormalsWithCreaseThreshold:(double)arg1;
- (id)_geometryByWeldingVerticesWithThreshold:(double)arg1 normalThreshold:(double)arg2;
- (bool)_hasFixedBoundingBoxExtrema;
- (id)_materialWithName:(id)arg1;
- (void)_pauseAnimation:(bool)arg1 forKey:(id)arg2 pausedByNode:(bool)arg3;
- (void)_releaseCachedSourcesAndElements;
- (id)_renderableCopy;
- (id)_scnAnimationForKey:(id)arg1;
- (id)_scnBindings;
- (void)_setAttributes:(id)arg1;
- (void)_setGeometryRef:(struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; struct { /* ? */ } *x7; unsigned int x8 : 1; int (*x9)(); struct { unsigned char x_10_1_1; bool x_10_1_2; struct { bool x_3_2_1; unsigned char x_3_2_2; unsigned char x_3_2_3; unsigned char x_3_2_4; } x_10_1_3; struct __C3DMeshElement {} *x_10_1_4; struct __C3DMeshSource {} *x_10_1_5; struct __C3DMesh {} *x_10_1_6; void *x_10_1_7; void *x_10_1_8; } x10; struct { unsigned char x_11_1_1; float x_11_1_2; unsigned int x_11_1_3; unsigned char x_11_1_4; union { struct { float x_1_3_1; float x_1_3_2; } x_5_2_1; struct { float x_2_3_1; } x_5_2_2; struct { float x_3_3_1; } x_5_2_3; struct { unsigned char x_4_3_1; unsigned int x_4_3_2 : 1; unsigned int x_4_3_3 : 1; } x_5_2_4; } x_11_1_5; } x11; }*)arg1;
- (void)_setupGeometryElements;
- (void)_setupGeometrySources;
- (void)_setupObjCModelFrom:(id)arg1;
- (void)_setupShadableHelperIfNeeded;
- (void)_shadableSetValue:(id)arg1 forUndefinedKey:(id)arg2;
- (struct { bool x1; unsigned char x2; unsigned char x3; unsigned char x4; })_subdivisionSettings;
- (void)_syncEntityObjCModel;
- (void)_syncObjCAnimations;
- (void)_syncObjCModel;
- (void)_unifyNormals;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (struct __C3DAnimationManager { }*)animationManager;
- (id)animationPlayerForKey:(id)arg1;
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (id)copy;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)countOfMaterials;
- (id)customMaterialAttributeNames;
- (id)customMaterialAttributes;
- (id)customMaterialProperties;
- (id)customMaterialPropertyNames;
- (void)dealloc;
- (id)debugQuickLookData;
- (id)debugQuickLookObject;
- (id)description;
- (id)edgeCreasesElement;
- (id)edgeCreasesSource;
- (void)encodeWithCoder:(id)arg1;
- (id)firstMaterial;
- (id)geometryDescription;
- (id)geometryElementAtIndex:(long long)arg1;
- (long long)geometryElementCount;
- (id)geometryElements;
- (struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; struct { /* ? */ } *x7; unsigned int x8 : 1; int (*x9)(); struct { unsigned char x_10_1_1; bool x_10_1_2; struct { bool x_3_2_1; unsigned char x_3_2_2; unsigned char x_3_2_3; unsigned char x_3_2_4; } x_10_1_3; struct __C3DMeshElement {} *x_10_1_4; struct __C3DMeshSource {} *x_10_1_5; struct __C3DMesh {} *x_10_1_6; void *x_10_1_7; void *x_10_1_8; } x10; struct { unsigned char x_11_1_1; float x_11_1_2; unsigned int x_11_1_3; unsigned char x_11_1_4; union { struct { float x_1_3_1; float x_1_3_2; } x_5_2_1; struct { float x_2_3_1; } x_5_2_2; struct { float x_3_3_1; } x_5_2_3; struct { unsigned char x_4_3_1; unsigned int x_4_3_2 : 1; unsigned int x_4_3_3 : 1; } x_5_2_4; } x_11_1_5; } x11; }*)geometryRef;
- (id)geometrySourceChannels;
- (id)geometrySourceForSemantic:(id)arg1;
- (id)geometrySources;
- (id)geometrySourcesForSemantic:(id)arg1;
- (id)getBoundingBox;
- (bool)getBoundingBoxMin:(struct SCNVector3 { float x1; float x2; float x3; }*)arg1 max:(struct SCNVector3 { float x1; float x2; float x3; }*)arg2;
- (id)getBoundingSphere;
- (bool)getBoundingSphereCenter:(struct SCNVector3 { float x1; float x2; float x3; }*)arg1 radius:(double*)arg2;
- (void)handleBindingOfSymbol:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)handleUnbindingOfSymbol:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)identifier;
- (id)init;
- (id)initPresentationGeometryWithGeometryRef:(struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; struct { /* ? */ } *x7; unsigned int x8 : 1; int (*x9)(); struct { unsigned char x_10_1_1; bool x_10_1_2; struct { bool x_3_2_1; unsigned char x_3_2_2; unsigned char x_3_2_3; unsigned char x_3_2_4; } x_10_1_3; struct __C3DMeshElement {} *x_10_1_4; struct __C3DMeshSource {} *x_10_1_5; struct __C3DMesh {} *x_10_1_6; void *x_10_1_7; void *x_10_1_8; } x10; struct { unsigned char x_11_1_1; float x_11_1_2; unsigned int x_11_1_3; unsigned char x_11_1_4; union { struct { float x_1_3_1; float x_1_3_2; } x_5_2_1; struct { float x_2_3_1; } x_5_2_2; struct { float x_3_3_1; } x_5_2_3; struct { unsigned char x_4_3_1; unsigned int x_4_3_2 : 1; unsigned int x_4_3_3 : 1; } x_5_2_4; } x_11_1_5; } x11; }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeometryRef:(struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; struct { /* ? */ } *x7; unsigned int x8 : 1; int (*x9)(); struct { unsigned char x_10_1_1; bool x_10_1_2; struct { bool x_3_2_1; unsigned char x_3_2_2; unsigned char x_3_2_3; unsigned char x_3_2_4; } x_10_1_3; struct __C3DMeshElement {} *x_10_1_4; struct __C3DMeshSource {} *x_10_1_5; struct __C3DMesh {} *x_10_1_6; void *x_10_1_7; void *x_10_1_8; } x10; struct { unsigned char x_11_1_1; float x_11_1_2; unsigned int x_11_1_3; unsigned char x_11_1_4; union { struct { float x_1_3_1; float x_1_3_2; } x_5_2_1; struct { float x_2_3_1; } x_5_2_2; struct { float x_3_3_1; } x_5_2_3; struct { unsigned char x_4_3_1; unsigned int x_4_3_2 : 1; unsigned int x_4_3_3 : 1; } x_5_2_4; } x_11_1_5; } x11; }*)arg1;
- (void)insertMaterial:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertObject:(id)arg1 inMaterialsAtIndex:(unsigned long long)arg2;
- (id)interleavedCopy;
- (bool)isAnimationForKeyPaused:(id)arg1;
- (bool)isPausedOrPausedByInheritance;
- (bool)isPresentationInstance;
- (id)keyForNodeAttributes;
- (id)levelsOfDetail;
- (id)material;
- (struct __C3DMaterial { }*)materialRef;
- (struct __C3DMaterial { }*)materialRefCreateIfNeeded;
- (id)materialWithName:(id)arg1;
- (id)materials;
- (id)mutableCopy;
- (id)mutableMaterials;
- (id)name;
- (id)objectInMaterialsAtIndex:(unsigned long long)arg1;
- (bool)parseSpecialKey:(id)arg1 withPath:(id)arg2 intoDestination:(id*)arg3 remainingPath:(id*)arg4;
- (void)pauseAnimationForKey:(id)arg1;
- (id)presentationGeometry;
- (id)presentationInstance;
- (long long)primitiveType;
- (id)program;
- (void)removeAllAnimations;
- (void)removeAllMaterials;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)removeMaterial:(id)arg1;
- (void)removeMaterialAtIndex:(unsigned long long)arg1;
- (void)removeObjectFromMaterialsAtIndex:(unsigned long long)arg1;
- (void)replaceMaterial:(id)arg1 with:(id)arg2;
- (void)replaceMaterialAtIndex:(unsigned long long)arg1 withMaterial:(id)arg2;
- (void)replaceObjectInMaterialsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (id)scene;
- (struct __C3DScene { }*)sceneRef;
- (void)setBoundingBoxMin:(struct SCNVector3 { float x1; float x2; float x3; }*)arg1 max:(struct SCNVector3 { float x1; float x2; float x3; }*)arg2;
- (void)setEdgeCreasesElement:(id)arg1;
- (void)setEdgeCreasesSource:(id)arg1;
- (void)setFirstMaterial:(id)arg1;
- (void)setGeometryRef:(struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; struct { /* ? */ } *x7; unsigned int x8 : 1; int (*x9)(); struct { unsigned char x_10_1_1; bool x_10_1_2; struct { bool x_3_2_1; unsigned char x_3_2_2; unsigned char x_3_2_3; unsigned char x_3_2_4; } x_10_1_3; struct __C3DMeshElement {} *x_10_1_4; struct __C3DMeshSource {} *x_10_1_5; struct __C3DMesh {} *x_10_1_6; void *x_10_1_7; void *x_10_1_8; } x10; struct { unsigned char x_11_1_1; float x_11_1_2; unsigned int x_11_1_3; unsigned char x_11_1_4; union { struct { float x_1_3_1; float x_1_3_2; } x_5_2_1; struct { float x_2_3_1; } x_5_2_2; struct { float x_3_3_1; } x_5_2_3; struct { unsigned char x_4_3_1; unsigned int x_4_3_2 : 1; unsigned int x_4_3_3 : 1; } x_5_2_4; } x_11_1_5; } x11; }*)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLevelsOfDetail:(id)arg1;
- (void)setMaterial:(id)arg1;
- (void)setMaterials:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPrimitiveType:(long long)arg1;
- (void)setProgram:(id)arg1;
- (void)setShaderModifiers:(id)arg1;
- (void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;
- (void)setSubdivisionLevel:(unsigned long long)arg1;
- (void)setTessellator:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setValueForKey:(id)arg1 optionKey:(id)arg2 options:(id)arg3;
- (void)setWantsAdaptiveSubdivision:(bool)arg1;
- (void)set_subdivisionSettings:(struct { bool x1; unsigned char x2; unsigned char x3; unsigned char x4; })arg1;
- (id)shaderModifiers;
- (id)shaderModifiersArgumentsNames;
- (bool)simdGetBoundingSphereCenter:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 radius:(float*)arg2;
- (unsigned long long)subdivisionLevel;
- (id)tessellator;
- (void)unbindAnimatablePath:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (bool)wantsAdaptiveSubdivision;

@end
