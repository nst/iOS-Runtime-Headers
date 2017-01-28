/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADLineEnd : OADProperties <NSCopying> {
    unsigned int  mIsLengthOverridden;
    unsigned int  mIsTypeOverridden;
    unsigned int  mIsWidthOverridden;
    unsigned char  mLength;
    unsigned char  mType;
    unsigned char  mWidth;
}

+ (id)defaultProperties;
+ (id)stringForLineEndLength:(unsigned char)arg1;
+ (id)stringForLineEndType:(unsigned char)arg1;
+ (id)stringForLineEndWidth:(unsigned char)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDefaults;
- (id)initWithType:(unsigned char)arg1 width:(unsigned char)arg2 length:(unsigned char)arg3;
- (bool)isAnythingOverridden;
- (bool)isEqual:(id)arg1;
- (bool)isLengthOverridden;
- (bool)isTypeOverridden;
- (bool)isWidthOverridden;
- (unsigned char)length;
- (void)removeUnnecessaryOverrides;
- (void)setLength:(unsigned char)arg1;
- (void)setType:(unsigned char)arg1;
- (void)setWidth:(unsigned char)arg1;
- (unsigned char)type;
- (unsigned char)width;

@end
