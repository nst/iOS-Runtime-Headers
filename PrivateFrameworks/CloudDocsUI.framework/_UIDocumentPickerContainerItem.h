/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

@interface _UIDocumentPickerContainerItem : NSObject <_UIDocumentPickerDirectoryObserverItem> {
    _UIDocumentPickerURLContainerModel * _model;
    long long  _modelDisplayCount;
    _UIDocumentPickerContainerModel * _parentModel;
    NSString * _pickabilityReason;
    bool  _pickable;
    id  _resourceIdentifier;
    NSOperation * _thumbnailLoadOperation;
    NSMapTable * _thumbnailsBySize;
    long long  _type;
    _UIDocumentPickerURLContainerModel * _weak_model;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) _UIDocumentPickerContainerModel *model;
@property (nonatomic) _UIDocumentPickerContainerModel *parentModel;
@property (nonatomic, copy) NSString *pickabilityReason;
@property (nonatomic) bool pickable;
@property (nonatomic, readonly) bool renameable;
@property (nonatomic, readonly) NSDate *sortDate;
@property (nonatomic, readonly, retain) NSString *subtitle;
@property (nonatomic, readonly, retain) NSString *subtitle2;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMapTable *thumbnailsBySize;
@property (nonatomic, readonly, retain) NSString *title;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, retain) NSURL *url;
@property (nonatomic, readonly, retain) NSURL *urlInLocalContainer;

+ (id)_blockingBadgeForContainer:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;
+ (id)_blockingFolderIconForURL:(id)arg1 container:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 scale:(double)arg4;
+ (id)_blockingIconForDocumentProxy:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)_blockingIconForURL:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)_blockingThumbnailForItem:(id)arg1 documentProxy:(id)arg2 withSize:(struct CGSize { double x1; double x2; })arg3 scale:(double)arg4 wantsBorder:(bool*)arg5 generatedThumbnail:(bool*)arg6;
+ (id)_lruThumbnailArray;
+ (void)clearLRUThumbnailCache;
+ (void)markThumbnailAsRecentlyUsed:(id)arg1;

- (void).cxx_destruct;
- (id)_blipWithTags:(id)arg1 height:(double)arg2 scale:(double)arg3;
- (id)_blockingThumbnailWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 wantsBorder:(bool*)arg3;
- (id)_createThumbnailWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (void)_ensureModelPresent;
- (id)_formattedSubtitleForNumberOfItems:(unsigned long long)arg1;
- (void)_modelChanged;
- (id)_resourceIdentifier;
- (id)contentType;
- (void)dealloc;
- (void)decrementModelDisplayCount;
- (id)description;
- (unsigned long long)hash;
- (void)incrementModelDisplayCount;
- (unsigned long long)indentationLevel;
- (id)init;
- (bool)isActionApplicableForItem:(long long)arg1;
- (bool)isAlias;
- (bool)isEqual:(id)arg1;
- (id)model;
- (void)modelChanged;
- (id)modificationDate;
- (id)parentModel;
- (id)pickabilityReason;
- (bool)pickable;
- (bool)renameable;
- (void)setParentModel:(id)arg1;
- (void)setPickabilityReason:(id)arg1;
- (void)setPickable:(bool)arg1;
- (void)setThumbnailsBySize:(id)arg1;
- (id)sortDate;
- (id)sortPath;
- (id)sortTag;
- (id)subtitle;
- (id)subtitle2;
- (id)tagBlipsWithHeight:(double)arg1 scale:(double)arg2;
- (id)tags;
- (id)thumbnailWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)thumbnailsBySize;
- (id)title;
- (long long)type;
- (id)url;
- (id)urlInLocalContainer;

@end
