/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPHighlight : TSPObject <TSDComment, TSKDocumentObject, TSPCopying, TSWPOverlappingField, TSWPTextSpanningObject> {
    TSDCommentStorage * _commentStorage;
    TSWPStorage * _parentStorage;
    NSString * _textAttributeUUIDString;
}

@property (nonatomic, readonly) int annotationDisplayStringType;
@property (nonatomic, readonly) int annotationType;
@property (nonatomic, readonly) NSString *annotationUUID;
@property (nonatomic, retain) TSKAnnotationAuthor *author;
@property (nonatomic, retain) TSDCommentStorage *commentStorage;
@property (nonatomic, readonly) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isHighlight;
@property (nonatomic) TSWPStorage *parentStorage;
@property (nonatomic, copy) TSDCommentStorage *storage;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *textAttributeUUIDString;

+ (id)defaultHighlightWithContext:(id)arg1 includeCommentWithAuthor:(id)arg2;
+ (id)highlightTextColorForHighlights:(id)arg1;

- (void).cxx_destruct;
- (int)annotationDisplayStringType;
- (int)annotationType;
- (id)annotationUUID;
- (id)author;
- (id)commentStorage;
- (void)commentWillBeAddedToDocumentRoot;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (unsigned long long)hash;
- (void)i_setTextAttributeUUIDString:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 commentStorage:(id)arg2;
- (id)initWithContext:(id)arg1 commentStorage:(id)arg2 annotationUUID:(id)arg3;
- (bool)isCommentEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentToObject:(id)arg1;
- (bool)isFloatingComment;
- (bool)isHighlight;
- (bool)isInDocument;
- (void)loadFromArchive:(const struct HighlightArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; struct Reference {} *x6; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)p_invalidateAnnotationResultsForDocumentRoot:(id)arg1 key:(id)arg2;
- (id)parentStorage;
- (void)resetTextAttributeUUIDString;
- (void)saveToArchiver:(id)arg1;
- (void)setAuthor:(id)arg1;
- (void)setCommentStorage:(id)arg1;
- (void)setParentStorage:(id)arg1;
- (void)setStorage:(id)arg1;
- (void)setTextAttributeUUIDString:(id)arg1;
- (id)storage;
- (id)textAttributeUUIDString;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end
