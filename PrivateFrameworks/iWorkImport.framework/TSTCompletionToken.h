/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCompletionToken : TSTWPTokenAttachment {
    <TSTCanvasReferenceProvider> * _canvasReferenceProvider;
    NSString * _completionText;
    TSTReferenceNode * _editingReferenceNode;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _prefixRange;
    TSUColor * _referenceColor;
    int  _renderAsTokenType;
}

@property (nonatomic) <TSTCanvasReferenceProvider> *canvasReferenceProvider;
@property (nonatomic, retain) NSString *completionText;
@property (nonatomic, retain) TSTReferenceNode *editingReferenceNode;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } prefixRange;
@property (nonatomic, retain) TSUColor *referenceColor;
@property (nonatomic, readonly) int renderAsTokenType;

- (void).cxx_destruct;
- (id)canvasReferenceProvider;
- (id)completionText;
- (id)copyIntoContext:(id)arg1 bakeModes:(bool)arg2;
- (void)dealloc;
- (id)description;
- (id)editingReferenceNode;
- (id)initWithContext:(id)arg1 completionText:(id)arg2;
- (id)initWithContext:(id)arg1 expressionNode:(id)arg2;
- (void)loadFromArchive:(const struct CompletionTokenAttachmentArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; struct TokenAttachmentArchive {} *x6; unsigned int x7; unsigned int x8; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)makeTokenReflectChoice:(id)arg1;
- (void)p_createCanvasReference;
- (void)p_removeCanvasReference;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })prefixRange;
- (id)referenceColor;
- (int)renderAsTokenType;
- (void)saveToArchive:(struct CompletionTokenAttachmentArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; struct TokenAttachmentArchive {} *x6; unsigned int x7; unsigned int x8; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setCanvasReferenceProvider:(id)arg1;
- (void)setCompletionText:(id)arg1;
- (void)setEditingReferenceNode:(id)arg1;
- (void)setExpressionNode:(id)arg1;
- (void)setPrefixRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setReferenceColor:(id)arg1;
- (id)tokenText;

@end
