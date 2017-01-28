/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEFunctionArgumentSpec : NSObject <NSCopying> {
    int  mAccessorMode;
    int  mArgumentContext;
    int  mArgumentType;
    short  mDefaultModeIndex;
    bool  mDisallowCurrency;
    bool  mDisallowDuration;
    NSArray * mDisallowedTypes;
    bool  mForceArrayMode;
    TSCEFunctionSpec * mFunctionSpec;
    short  mIndex;
    bool  mIsInteger;
    bool  mMaxInclusive;
    double  mMaxValue;
    bool  mMinInclusive;
    double  mMinValue;
    struct vector<TSCEValue, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x1; struct TSCEValue {} *x2; struct __compressed_pair<TSCEValue *, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x_3_1_1; } x3; } * mModeValues;
    unsigned char  mRangeContext;
    bool  mReferenceForGeometryOnly;
}

@property (nonatomic, readonly) int accessorMode;
@property (nonatomic, readonly) int argumentContext;
@property (nonatomic, readonly) short defaultModeIndex;
@property (nonatomic, readonly) bool disallowCurrency;
@property (nonatomic, readonly) bool disallowDuration;
@property (nonatomic, readonly) NSArray *disallowedTypes;
@property (nonatomic, readonly) bool forceArrayMode;
@property (nonatomic) TSCEFunctionSpec *functionSpec;
@property (nonatomic, readonly) short index;
@property (nonatomic, readonly) bool isInteger;
@property (nonatomic, readonly) bool isMode;
@property (nonatomic, readonly) bool isOptional;
@property (nonatomic, readonly) bool maxInclusive;
@property (nonatomic, readonly) double maxValue;
@property (nonatomic, readonly) bool minInclusive;
@property (nonatomic, readonly) double minValue;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<TSCEValue' */ struct *modeValues; /* unknown property attribute:  std::__1::allocator<TSCEValue> >=^{TSCEValue}}} */
@property (nonatomic, readonly) short numModes;
@property (nonatomic) unsigned char rangeContext;
@property (nonatomic, readonly) bool referenceForGeometryOnly;

+ (id)argumentSpecWithIndex:(short)arg1 type:(int)arg2 accessorMode:(int)arg3 disallowedTypes:(id)arg4 argumentContext:(int)arg5 rangeContext:(unsigned char)arg6 minValue:(double)arg7 minInclusive:(bool)arg8 maxValue:(double)arg9 maxInclusive:(bool)arg10 isInteger:(bool)arg11 disallowDuration:(bool)arg12 disallowCurrency:(bool)arg13 modeValues:(struct vector<TSCEValue, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x1; struct TSCEValue {} *x2; struct __compressed_pair<TSCEValue *, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x_3_1_1; } x3; }*)arg14 defaultModeIndex:(short)arg15 referenceForGeometryOnly:(bool)arg16 forceArrayMode:(bool)arg17;

- (int)accessorMode;
- (int)argumentContext;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (short)defaultModeIndex;
- (bool)disallowCurrency;
- (bool)disallowDuration;
- (id)disallowedTypes;
- (bool)forceArrayMode;
- (id)functionSpec;
- (short)index;
- (long long)indexForModeBool:(bool)arg1 locale:(id)arg2;
- (long long)indexForModeNumber:(double)arg1 locale:(id)arg2;
- (long long)indexForModeString:(id)arg1 locale:(id)arg2;
- (long long)indexForModeValue:(struct TSCEValue { unsigned long long x1[10]; int x2; }*)arg1 locale:(id)arg2;
- (id)initArgumentSpecWithIndex:(short)arg1 type:(int)arg2 accessorMode:(int)arg3 disallowedTypes:(id)arg4 argumentContext:(int)arg5 rangeContext:(unsigned char)arg6 minValue:(double)arg7 minInclusive:(bool)arg8 maxValue:(double)arg9 maxInclusive:(bool)arg10 isInteger:(bool)arg11 disallowDuration:(bool)arg12 disallowCurrency:(bool)arg13 modeValues:(struct vector<TSCEValue, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x1; struct TSCEValue {} *x2; struct __compressed_pair<TSCEValue *, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x_3_1_1; } x3; }*)arg14 defaultModeIndex:(short)arg15 referenceForGeometryOnly:(bool)arg16 forceArrayMode:(bool)arg17;
- (bool)isInteger;
- (bool)isMode;
- (bool)isOptional;
- (id)localizedArgumentNameForLocale:(id)arg1;
- (id)localizedFunctionNameForLocale:(id)arg1;
- (id)localizedModeMenuItemStringForModeIndex:(short)arg1 locale:(id)arg2;
- (id)localizedModeNameForModeIndex:(short)arg1 locale:(id)arg2;
- (id)localizedModeNamesForLocale:(id)arg1;
- (id)localizedModeToolTipStringForModeIndex:(short)arg1 locale:(id)arg2;
- (id)localizedToolTipStringForLocale:(id)arg1;
- (bool)maxInclusive;
- (double)maxValue;
- (bool)minInclusive;
- (double)minValue;
- (struct vector<TSCEValue, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x1; struct TSCEValue {} *x2; struct __compressed_pair<TSCEValue *, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x_3_1_1; } x3; }*)modeValues;
- (id)nativeSyntaxString;
- (id)nativeSyntaxStringForModeIndex:(short)arg1;
- (short)numModes;
- (int)preferredType;
- (unsigned char)rangeContext;
- (bool)referenceForGeometryOnly;
- (void)setFunctionSpec:(id)arg1;
- (void)setRangeContext:(unsigned char)arg1;
- (bool)typeIsDisallowed:(int)arg1 value:(struct TSCEValue { unsigned long long x1[10]; int x2; }*)arg2;
- (struct TSCEValue { unsigned long long x1[10]; int x2; })valueForModeIndex:(short)arg1;

@end
