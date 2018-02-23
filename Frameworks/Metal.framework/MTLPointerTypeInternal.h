/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLPointerTypeInternal : MTLPointerType {
    unsigned long long  _access;
    unsigned long long  _alignment;
    unsigned long long  _dataSize;
    unsigned long long  _dataType;
    bool  _elementIsArgumentBuffer;
    unsigned long long  _elementType;
    MTLType * _elementTypeInfo;
    bool  _isConstantBuffer;
}

- (unsigned long long)access;
- (unsigned long long)alignment;
- (unsigned long long)dataSize;
- (unsigned long long)dataType;
- (void)dealloc;
- (id)elementArrayType;
- (bool)elementIsArgumentBuffer;
- (bool)elementIsIndirectArgumentBuffer;
- (id)elementStructType;
- (unsigned long long)elementType;
- (id)elementTypeDescription;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithElementType:(unsigned long long)arg1 elementTypeDescription:(id)arg2 access:(unsigned long long)arg3 alignment:(unsigned long long)arg4 dataSize:(unsigned long long)arg5 elementIsIndirectArgumentBuffer:(bool)arg6 isConstantBuffer:(bool)arg7;
- (bool)isConstantBuffer;
- (void)setAlignment:(unsigned long long)arg1 dataSize:(unsigned long long)arg2;

@end
