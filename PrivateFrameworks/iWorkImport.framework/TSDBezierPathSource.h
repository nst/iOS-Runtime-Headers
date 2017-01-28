/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDBezierPathSource : TSDPathSource <TSDMixing> {
    bool  mIsRectangular;
    struct CGSize { 
        double width; 
        double height; 
    }  mNaturalSize;
    TSUBezierPath * mPath;
}

@property (nonatomic) struct CGSize { double x1; double x2; } naturalSize;

+ (id)pathSourceWithBezierPath:(id)arg1;

- (id)bezierPathWithoutFlips;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArchive:(const struct PathSourceArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct PointPathSourceArchive {} *x5; struct ScalarPathSourceArchive {} *x6; struct BezierPathSourceArchive {} *x7; struct CalloutPathSourceArchive {} *x8; struct ConnectionLinePathSourceArchive {} *x9; struct EditableBezierPathSourceArchive {} *x10; bool x11; bool x12; }*)arg1;
- (id)initWithArchive:(const struct PathSourceArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct PointPathSourceArchive {} *x5; struct ScalarPathSourceArchive {} *x6; struct BezierPathSourceArchive {} *x7; struct CalloutPathSourceArchive {} *x8; struct ConnectionLinePathSourceArchive {} *x9; struct EditableBezierPathSourceArchive {} *x10; bool x11; bool x12; }*)arg1 andBezierArchive:(const struct BezierPathSourceArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct Size {} *x6; struct Path {} *x7; }*)arg2;
- (id)initWithBezierPath:(id)arg1;
- (id)initWithNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)isCircular;
- (bool)isClosed;
- (bool)isEqual:(id)arg1;
- (bool)isRectangular;
- (bool)isRectangularForever;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (struct CGSize { double x1; double x2; })naturalSize;
- (void)p_setBezierPath:(id)arg1;
- (void)saveToArchive:(struct PathSourceArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct PointPathSourceArchive {} *x5; struct ScalarPathSourceArchive {} *x6; struct BezierPathSourceArchive {} *x7; struct CalloutPathSourceArchive {} *x8; struct ConnectionLinePathSourceArchive {} *x9; struct EditableBezierPathSourceArchive {} *x10; bool x11; bool x12; }*)arg1;
- (void)saveToArchive:(struct PathSourceArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct PointPathSourceArchive {} *x5; struct ScalarPathSourceArchive {} *x6; struct BezierPathSourceArchive {} *x7; struct CalloutPathSourceArchive {} *x8; struct ConnectionLinePathSourceArchive {} *x9; struct EditableBezierPathSourceArchive {} *x10; bool x11; bool x12; }*)arg1 andBezierArchive:(struct BezierPathSourceArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct Size {} *x6; struct Path {} *x7; }*)arg2;
- (void)setNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformToNaturalSize;

@end
