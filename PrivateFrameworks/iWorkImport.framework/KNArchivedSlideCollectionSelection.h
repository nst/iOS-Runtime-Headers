/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNArchivedSlideCollectionSelection : TSPObject <TSKArchivedSelection> {
    KNSlideCollectionSelection * mSelection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TSKSelection *selection;
@property (nonatomic, readonly) KNSlideCollectionSelection *slideCollectionSelection;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)selection;
- (void)setSelection:(id)arg1;
- (id)slideCollectionSelection;

@end
