/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

@interface ASDLevelControl : ASDControl {
    float  _decibelValue;
    float  _maximumDecibelValue;
    float  _minimumDecibelValue;
    unsigned int  _subclassID;
    bool  _valueIsSettable;
    NSObject<OS_dispatch_queue> * _valueQueue;
}

@property (nonatomic) float decibelValue;
@property (nonatomic) float maximumDecibelValue;
@property (nonatomic) float minimumDecibelValue;
@property (nonatomic) float scalarValue;
@property (nonatomic) unsigned int subclassID;

+ (id)volumeControlWithDecibelValue:(float)arg1 minimumValue:(float)arg2 maximumValue:(float)arg3 isSettable:(bool)arg4 forElement:(unsigned int)arg5 inScope:(unsigned int)arg6 withPlugin:(id)arg7;

- (void).cxx_destruct;
- (float)_decibelFromScalar:(float)arg1;
- (float)_scalarFromDecibel:(float)arg1;
- (unsigned int)baseClass;
- (void)changeDecibelValue:(float)arg1;
- (void)changeScalarValue:(float)arg1;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 andQualifierData:(const void*)arg3;
- (float)decibelFromScalar:(float)arg1;
- (float)decibelValue;
- (bool)getProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned int*)arg4 andData:(const void*)arg5 forClient:(int)arg6;
- (bool)hasProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1;
- (id)initWithDecibelValue:(float)arg1 minimumValue:(float)arg2 maximumValue:(float)arg3 isSettable:(bool)arg4 forElement:(unsigned int)arg5 inScope:(unsigned int)arg6 withPlugin:(id)arg7;
- (id)initWithElement:(unsigned int)arg1 inScope:(unsigned int)arg2 withPlugin:(id)arg3;
- (id)initWithPlugin:(id)arg1;
- (bool)isPropertySettable:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1;
- (float)maximumDecibelValue;
- (float)minimumDecibelValue;
- (unsigned int)objectClass;
- (float)scalarFromDecibel:(float)arg1;
- (float)scalarValue;
- (void)setDecibelValue:(float)arg1;
- (void)setMaximumDecibelValue:(float)arg1;
- (void)setMinimumDecibelValue:(float)arg1;
- (bool)setProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned int)arg4 andData:(const void*)arg5 forClient:(int)arg6;
- (void)setScalarValue:(float)arg1;
- (void)setSubclassID:(unsigned int)arg1;
- (unsigned int)subclassID;

@end
