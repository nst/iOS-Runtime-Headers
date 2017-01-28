/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMaskInfo : TSDDrawableInfo <TSDInfoWithPathSource, TSDMixing> {
    TSDPathSource * mPathSource;
}

@property (getter=isAnchoredToText, nonatomic, readonly) bool anchoredToText;
@property (getter=isAttachedToBodyText, nonatomic, readonly) bool attachedToBodyText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFloatingAboveText, nonatomic, readonly) bool floatingAboveText;
@property (nonatomic, copy) TSDInfoGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (getter=isInlineWithText, nonatomic, readonly) bool inlineWithText;
@property (nonatomic) bool matchesObjectPlaceholderGeometry;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (nonatomic, readonly) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property (nonatomic, copy) TSDPathSource *pathSource;
@property (readonly) Class superclass;

- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 pathSource:(id)arg3;
- (bool)isEqualToMaskInfo:(id)arg1;
- (bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (Class)layoutClass;
- (void)loadFromArchive:(const struct MaskArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct DrawableArchive {} *x5; struct PathSourceArchive {} *x6; }*)arg1 unarchiver:(id)arg2;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)objectForProperty:(int)arg1;
- (id)pathSource;
- (Class)repClass;
- (void)saveToArchive:(struct MaskArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct DrawableArchive {} *x5; struct PathSourceArchive {} *x6; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setGeometry:(id)arg1;
- (void)setPathSource:(id)arg1;

@end
