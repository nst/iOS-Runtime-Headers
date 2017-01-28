/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDExteriorTextWrap : NSObject <NSCopying, NSMutableCopying> {
    double  _alphaThreshold;
    int  _direction;
    int  _fitType;
    bool  _isHTMLWrap;
    double  _margin;
    int  _type;
}

@property (nonatomic, readonly) double alphaThreshold;
@property (nonatomic, readonly) int direction;
@property (nonatomic, readonly) int fitType;
@property (nonatomic, readonly) bool isHTMLWrap;
@property (nonatomic, readonly) double margin;
@property (nonatomic, readonly) int type;

+ (id)exteriorTextWrap;
+ (id)exteriorTextWrapWithIsHTMLWrap:(bool)arg1 type:(int)arg2 direction:(int)arg3 fitType:(int)arg4 margin:(double)arg5 alphaThreshold:(double)arg6;

- (double)alphaThreshold;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)direction;
- (int)fitType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArchive:(const struct ExteriorTextWrapArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned int x5; unsigned int x6; unsigned int x7; float x8; float x9; bool x10; }*)arg1;
- (id)initWithIsHTMLWrap:(bool)arg1 type:(int)arg2 direction:(int)arg3 fitType:(int)arg4 margin:(double)arg5 alphaThreshold:(double)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isHTMLWrap;
- (double)margin;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)saveToArchive:(struct ExteriorTextWrapArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned int x5; unsigned int x6; unsigned int x7; float x8; float x9; bool x10; }*)arg1 archiver:(id)arg2;
- (int)type;

@end
