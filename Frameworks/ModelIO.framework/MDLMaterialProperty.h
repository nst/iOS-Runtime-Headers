/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLMaterialProperty : NSObject <MDLNamed, NSCopying> {
    NSURL * _URLValue;
    struct CGColor { } * _color;
    void _float;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _matrix;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _matrix4x4;
    NSString * _name;
    MDLMaterialPropertyNode * _node;
    MDLMaterialProperty * _overridee;
    MDLMaterialProperty * _overrider;
    unsigned long long  _semantic;
    NSString * _string;
    MDLTextureSampler * _textureSampler;
    unsigned long long  _type;
    NSURL * _url;
}

@property (nonatomic, copy) NSURL *URLValue;
@property (nonatomic) struct CGColor { }*color;
@property (nonatomic) void float2Value;
@property (nonatomic) void float3Value;
@property (nonatomic) void float4Value;
@property (nonatomic) float floatValue;
@property (nonatomic) float luminance;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } matrix4x4;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned long long semantic;
@property (nonatomic, copy) NSString *stringValue;
@property (nonatomic, retain) MDLTextureSampler *textureSamplerValue;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)URLValue;
- (struct CGColor { }*)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)float2Value;
- (void)float3Value;
- (void)float4Value;
- (float)floatValue;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 URL:(id)arg3;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 color:(struct CGColor { }*)arg3;
- (id)initWithName:(void *)arg1 semantic:(void *)arg2 float2:(void *)arg3; // needs 3 arg types, found 2: id, unsigned long long
- (id)initWithName:(void *)arg1 semantic:(void *)arg2 float3:(void *)arg3; // needs 3 arg types, found 2: id, unsigned long long
- (id)initWithName:(void *)arg1 semantic:(void *)arg2 float4:(void *)arg3; // needs 3 arg types, found 2: id, unsigned long long
- (id)initWithName:(void *)arg1 semantic:(void *)arg2 float4WithSRGBA:(void *)arg3; // needs 3 arg types, found 2: id, unsigned long long
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 float:(float)arg3;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 matrix4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 string:(id)arg3;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 textureSampler:(id)arg3;
- (float)luminance;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })matrix4x4;
- (id)name;
- (unsigned long long)semantic;
- (void)setColor:(struct CGColor { }*)arg1;
- (void)setFloat2Value;
- (void)setFloat3Value;
- (void)setFloat4Value;
- (void)setFloatValue:(float)arg1;
- (void)setLuminance:(float)arg1;
- (void)setMatrix4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setMatrix4x4Value:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setName:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setSemantic:(unsigned long long)arg1;
- (void)setStringValue:(id)arg1;
- (void)setTextureSamplerValue:(id)arg1;
- (void)setURLValue:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)stringValue;
- (id)textureSamplerValue;
- (unsigned long long)type;

@end
