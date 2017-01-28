/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAttachmentModel : NSObject <QLPreviewItem> {
    ICAttachment * _attachment;
    bool  _hasAdditionalSearchIndexStrings;
    struct CGSize { 
        double width; 
        double height; 
    }  _intrinsicContentSize;
    bool  _mergeableDataDirty;
    bool  _previewGenerationOperationCancelled;
    NSArray * _searchStrings;
}

@property (nonatomic, readonly) ICAttachment *attachment;
@property (nonatomic, readonly) bool canMarkup;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool generateAsynchronousPreviews;
@property (nonatomic, readonly) bool generatePreviewsDuringCloudActivity;
@property (nonatomic, readonly) id genericBrickThumbnailCreator;
@property (nonatomic, readonly) id genericListThumbnailCreator;
@property bool hasAdditionalSearchIndexStrings;
@property (nonatomic, readonly) bool hasPreviews;
@property (nonatomic, readonly) bool hasThumbnailImage;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } intrinsicContentSize;
@property (getter=isMergeableDataDirty, nonatomic) bool mergeableDataDirty;
@property (nonatomic, readonly) bool needToGeneratePreviews;
@property bool previewGenerationOperationCancelled;
@property (nonatomic, readonly) NSString *previewItemTitle;
@property (nonatomic, readonly) NSURL *previewItemURL;
@property (nonatomic, readonly) bool requiresNetworkToGeneratePreview;
@property (readonly, copy) NSArray *searchStrings;
@property (nonatomic, readonly) bool showThumbnailInNoteList;
@property (readonly) Class superclass;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;
+ (struct UIImage { Class x1; }*)fileIconForURL:(id)arg1 withPreferredSize:(struct CGSize { double x1; double x2; })arg2;
+ (void)populateLocationSearchStringsIfPossible:(id)arg1 forAttachment:(id)arg2;

- (void).cxx_destruct;
- (id)activityItems;
- (id)attachment;
- (id)attachmentModelType;
- (bool)canMarkup;
- (void)didCancelPreviewGeneratorOperation;
- (struct UIImage { Class x1; }*)fileIconWithPreferredSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)generateAsynchronousPreviews;
- (bool)generatePreviewsDuringCloudActivity;
- (void)generatePreviewsInOperation:(id)arg1;
- (id)generateSearchIndexStringsOperation;
- (id)genericBrickThumbnailCreator;
- (id)genericListThumbnailCreator;
- (bool)hasAdditionalSearchIndexStrings;
- (bool)hasPreviews;
- (bool)hasThumbnailImage;
- (id)initWithAttachment:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateSearchStrings;
- (bool)isMergeableDataDirty;
- (bool)isReadyToPresent;
- (void)mergeWithMergeableData:(id)arg1;
- (bool)needToGeneratePreviews;
- (int)populateSearchStrings:(id)arg1;
- (bool)previewGenerationOperationCancelled;
- (long long)previewImageOrientation;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })previewImageOrientationTransform;
- (id)previewItemTitle;
- (id)previewItemURL;
- (bool)requiresNetworkToGeneratePreview;
- (id)searchStrings;
- (void)setHasAdditionalSearchIndexStrings:(bool)arg1;
- (void)setIntrinsicContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMergeableDataDirty:(bool)arg1;
- (void)setPreviewGenerationOperationCancelled:(bool)arg1;
- (bool)showThumbnailInNoteList;
- (void)updateAttachmentSize;
- (void)updateFileBasedAttributes;
- (void)writeMergeableData;

@end
