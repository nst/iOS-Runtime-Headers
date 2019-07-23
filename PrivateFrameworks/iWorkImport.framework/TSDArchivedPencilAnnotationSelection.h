/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDArchivedPencilAnnotationSelection : TSPObject <TSKArchivedSelection> {
    TSDPencilAnnotationSelection * _pencilAnnotationSelection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TSDPencilAnnotationSelection *pencilAnnotationSelection;
@property (nonatomic, retain) TSKSelection *selection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (void)loadFromArchive:(const struct PencilAnnotationSelectionArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct Reference {} *x5; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)pencilAnnotationSelection;
- (void)saveToArchiver:(id)arg1;
- (id)selection;
- (void)setPencilAnnotationSelection:(id)arg1;
- (void)setSelection:(id)arg1;

@end
