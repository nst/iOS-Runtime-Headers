/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

@interface _UIDocumentPickerContainerMetadataItem : _UIDocumentPickerContainerItem {
    NSDate * _cachedContentModifiedDate;
    NSString * _cachedContentType;
    NSNumber * _cachedFileObjectID;
    unsigned long long  _cachedIndentation;
    bool  _cachedRenameable;
    NSString * _cachedSortPath;
    NSString * _cachedSubtitle;
    NSString * _cachedSubtitle2;
    NSArray * _cachedTags;
    NSString * _cachedTitle;
    long long  _cachedType;
    NSURL * _cachedURL;
    NSURL * _cachedURLInLocalContainer;
}

- (void).cxx_destruct;
- (void)_cacheIndentationLevelWithSortPathComponents:(id)arg1;
- (void)_modelChanged;
- (void)_removeCachedValues;
- (void)cacheValues:(id)arg1;
- (id)contentType;
- (unsigned long long)hash;
- (unsigned long long)indentationLevel;
- (id)initWithMetadataItem:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)modificationDate;
- (bool)renameable;
- (id)sortDate;
- (id)sortPath;
- (id)sortPathComponents;
- (id)subtitle;
- (id)subtitle2;
- (id)tags;
- (id)title;
- (long long)type;
- (id)url;
- (id)urlInLocalContainer;

@end
