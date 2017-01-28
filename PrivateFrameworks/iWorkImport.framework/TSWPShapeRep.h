/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPShapeRep : TSDShapeRep <TSDContainerRep, TSDMagicMoveMatching, TSWPShapeLayoutDelegate> {
    TSWPRep * _containedRep;
    struct CGColor { } * _containedRepSecondaryHighlightColor;
    int  _containedRepSecondaryHighlightPathStyle;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _containedRepSecondaryHighlightRange;
    bool  _editingContainedRep;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originalAutosizePositionOffset;
    CALayer * _overflowGlyphLayer;
}

@property (nonatomic, readonly) TSWPRep *containedRep;
@property (nonatomic, readonly) NSObject<TSDContainerInfo> *containerInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isShapeInvisible;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TSWPStorage *textStorageForTexture;

+ (id)magicMoveAnimationMatchesFromMatches:(id)arg1;
+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3;
+ (id)magicMoveTextMatchesBetweenOutgoingObjects:(id)arg1 andIncomingObjects:(id)arg2 textureContext:(id)arg3 textDeliveryType:(long long)arg4 repToOpacityTextRangeDictMap:(id)arg5;
+ (void)p_getOutgoingTextureSet:(id*)arg1 incomingTextureSet:(id*)arg2 withOutgoingRep:(id)arg3 outgoingChunkRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 incomingRep:(id)arg5 incomingChunkRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 includeListLabels:(bool)arg7;
+ (bool)p_listLabelsAreEqualWithOutgoingStorage:(id)arg1 outgoingCharIndex:(long long)arg2 incomingStorage:(id)arg3 incomingCharIndex:(long long)arg4 shouldMatch:(bool*)arg5;
+ (unsigned long long)p_longestChunkInOutgoingObjects:(id)arg1 incomingObjects:(id)arg2 textDeliveryType:(long long)arg3 addOutgoingChunksToArray:(id)arg4 addIncomingChunksToArray:(id)arg5;
+ (double)p_mmAttributeMatchPercentWithOutgoingTextChunk:(id)arg1 incomingTextChunk:(id)arg2;
+ (id)p_potentialMatchesWithChunkLength:(unsigned long long)arg1 outgoingTextChunks:(id)arg2 incomingTextChunks:(id)arg3 textureContext:(id)arg4 textDeliveryType:(long long)arg5;
+ (bool)p_shouldDisableTextMorphingBetweenOutgoingRep:(id)arg1 outgoingChunkRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 incomingRep:(id)arg3 incomingChunkRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
+ (id)p_stringByApplyingCapitalizationPropertyFromStorage:(id)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 toString:(id)arg3;
+ (id)p_textureSetFromRep:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 includeListLabel:(bool)arg3 desiredContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;

- (void)addAdditionalChildLayersToArray:(id)arg1;
- (bool)canSelectChildRep:(id)arg1;
- (id)childReps;
- (id)containedRep;
- (id)containerInfo;
- (void)dealloc;
- (id)hitRep:(struct CGPoint { double x1; double x2; })arg1;
- (id)hitReps:(struct CGPoint { double x1; double x2; })arg1 withSlop:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (bool)isShapeInvisible;
- (id)newTextureRenderableForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 includeListLabel:(bool)arg2 isMagicMove:(bool)arg3 desiredContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 includeGroupedShadow:(bool)arg5 groupedShadowOnly:(bool)arg6 textureBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg7;
- (void)p_drawRubyInContext:(struct CGContext { }*)arg1 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)p_getBoundsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg3 applyReflection:(bool*)arg4 applyShadow:(bool*)arg5 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 includeListLabel:(bool)arg7 isMagicMove:(bool)arg8;
- (bool)p_hasContentForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 labelOnly:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_rectForRubyFields:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (double)p_textureSetOpacity;
- (void)recursivelyPerformSelector:(SEL)arg1;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;
- (void)selectChildRep:(id)arg1 extendingSelection:(bool)arg2;
- (id)stageChunks;
- (long long)stageIndexForStorageRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)textStorageForTexture;
- (id)textureForContext:(id)arg1;
- (void)updateChildrenFromLayout;

@end
