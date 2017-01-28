/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDDrawableInfo : TSPObject <TSDChangeableInfo, TSDScrollingAwareChangeSource, TSKDocumentObject, TSKSearchable, TSKTransformableObject> {
    NSString * mAccessibilityDescription;
    bool  mAspectRatioLocked;
    TSSPropertySetChangeDetails * mChanges;
    TSDDrawableComment * mComment;
    TSDDefaultPartitioner * mDefaultPartitioner;
    TSDExteriorTextWrap * mExteriorTextWrap;
    TSDInfoGeometry * mGeometry;
    NSURL * mHyperlinkURL;
    bool  mLocked;
    TSPObject<TSDOwningAttachment> * mOwningAttachment;
    NSObject<TSDContainerInfo> * mParentInfo;
    TSPLazyReference * mParentInfoReference;
}

@property (nonatomic, readonly) KNAbstractSlide *abstractSlide;
@property (nonatomic, copy) NSString *accessibilityDescription;
@property (nonatomic, readonly) NSSet *actionBuilds;
@property (nonatomic, readonly) NSArray *activeBuildChunks;
@property (getter=isAnchoredToText, nonatomic, readonly) bool anchoredToText;
@property (nonatomic) bool aspectRatioLocked;
@property (getter=isAttachedToBodyText, nonatomic, readonly) bool attachedToBodyText;
@property (nonatomic, readonly) NSArray *buildChunks;
@property (nonatomic, readonly) unsigned long long buildCount;
@property (nonatomic, readonly) KNBuild *buildIn;
@property (nonatomic, readonly) KNBuild *buildOut;
@property (nonatomic, readonly) NSSet *builds;
@property (nonatomic, readonly) bool canSizeBeChangedIncrementally;
@property (nonatomic, retain) TSDDrawableComment *comment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) TSDExteriorTextWrap *exteriorTextWrap;
@property (getter=isFloatingAboveText, nonatomic, readonly) bool floatingAboveText;
@property (nonatomic, copy) TSDInfoGeometry *geometry;
@property (nonatomic, readonly) NSArray *ghostInfos;
@property (nonatomic, readonly) bool hasActionBuilds;
@property (nonatomic, readonly) bool hasBuilds;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSURL *hyperlinkURL;
@property (getter=isInlineWithText, nonatomic, readonly) bool inlineWithText;
@property (nonatomic, readonly) bool isRightToLeft;
@property (nonatomic, readonly) bool isUserModifiable;
@property (getter=isLockable, nonatomic, readonly) bool lockable;
@property (getter=isLocked, nonatomic) bool locked;
@property (nonatomic) bool matchesObjectPlaceholderGeometry;
@property (nonatomic, readonly) bool mayHaveImplicitBuildEvents;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (nonatomic, readonly) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property (nonatomic, readonly) KNSlide *slide;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAttachedComments;
@property (nonatomic, readonly) bool supportsHyperlinks;

+ (bool)canPartition;
+ (void)load;
+ (bool)needsObjectUUID;
+ (void)setShouldPartitionByDefault:(bool)arg1;

- (id)abstractSlide;
- (id)accessibilityDescription;
- (id)actionBuilds;
- (id)activeBuildChunks;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)animationFilters;
- (bool)aspectRatioLocked;
- (void)beginCollectingChanges;
- (id)buildChunks;
- (id)buildChunksForAnimationType:(long long)arg1;
- (unsigned long long)buildCount;
- (id)buildIn;
- (id)buildOut;
- (id)builds;
- (bool)canAnchor;
- (bool)canChangeWrapType;
- (bool)canSizeBeChangedIncrementally;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 byGlyphStyle:(int)arg2 animationFilter:(id)arg3;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (void)coalesceChanges:(id)arg1;
- (id)comment;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })computeFullTransform;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })computeLayoutFullTransform;
- (id)containingGroup;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)descriptionForPasteboard;
- (id)descriptionForPasteboardWithSource:(id)arg1;
- (void)didCopy;
- (int)elementKind;
- (id)endCollectingChanges;
- (id)exteriorTextWrap;
- (id)exteriorTextWrapForMovingToFloating;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })fullTransformInRoot;
- (id)geometry;
- (id)ghostInfos;
- (bool)hasActionBuilds;
- (bool)hasBuildOfAnimationType:(long long)arg1;
- (bool)hasBuilds;
- (id)hyperlinkURL;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (bool)isAnchoredToText;
- (bool)isAttachedToBodyText;
- (bool)isFloatingAboveText;
- (bool)isInlineWithText;
- (bool)isLockable;
- (bool)isLocked;
- (bool)isRightToLeft;
- (bool)isSelectable;
- (bool)isThemeContent;
- (bool)isUserModifiable;
- (Class)layoutClass;
- (void)loadFromArchive:(const struct DrawableArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct GeometryArchive {} *x5; struct Reference {} *x6; struct ExteriorTextWrapArchive {} *x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x8; struct Reference {} *x9; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x10; bool x11; bool x12; }*)arg1 unarchiver:(id)arg2;
- (id)localizedChunkNameForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2 chunkIndex:(unsigned long long)arg3;
- (bool)matchesObjectPlaceholderGeometry;
- (bool)mayHaveImplicitBuildEvents;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)objectUUIDPath;
- (id)owningAttachment;
- (id)owningAttachmentNoRecurse;
- (id)parentInfo;
- (id)partitioner;
- (void)performBlockWithTemporaryLayout:(id)arg1;
- (id)presetKind;
- (Class)repClass;
- (bool)reverseChunkingIsSupported;
- (void)saveToArchive:(struct DrawableArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct GeometryArchive {} *x5; struct Reference {} *x6; struct ExteriorTextWrapArchive {} *x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x8; struct Reference {} *x9; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x10; bool x11; bool x12; }*)arg1 archiver:(id)arg2;
- (void)setAccessibilityDescription:(id)arg1;
- (void)setAspectRatioLocked:(bool)arg1;
- (void)setComment:(id)arg1;
- (void)setExteriorTextWrap:(id)arg1;
- (void)setGeometry:(id)arg1;
- (void)setHyperlinkURL:(id)arg1;
- (void)setInsertionCenterPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLocked:(bool)arg1;
- (void)setMatchesObjectPlaceholderGeometry:(bool)arg1;
- (void)setOwningAttachment:(id)arg1;
- (void)setParentInfo:(id)arg1;
- (void)setParentInfoDuringUnarchiving:(id)arg1 inDocument:(bool)arg2;
- (void)setPrimitiveGeometry:(id)arg1;
- (bool)shouldCancelScrollingToSelectionPath:(id)arg1 forChanges:(id)arg2;
- (id)slide;
- (bool)supportsAttachedComments;
- (bool)supportsHyperlinks;
- (bool)swizzled_matchesObjectPlaceholderGeometry;
- (void)swizzled_setMatchesObjectPlaceholderGeometry:(bool)arg1;
- (unsigned long long)textureDeliveryStyleFromDeliveryString:(id)arg1;
- (id)textureDeliveryStylesLocalized:(bool)arg1 animationFilter:(id)arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformInRoot;
- (struct CGPoint { double x1; double x2; })transformableObjectAnchorPoint;
- (id)transformedGeometryWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)validBuildsInBuilds:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)willChangeProperties:(id)arg1;
- (void)willChangeProperty:(int)arg1;
- (void)willCopyWithOtherDrawables:(id)arg1;

@end
