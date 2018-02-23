/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaLibraryEntityTranslationContext : NSObject {
    NSArray * _allowedItemIdentifiers;
    unsigned long long  _filteringOptions;
    MPMediaLibrary * _mediaLibrary;
    MPModelKind * _modelKind;
    bool  _multiQuery;
    NSArray * _scopedContainers;
}

@property (nonatomic, retain) NSArray *allowedItemIdentifiers;
@property (nonatomic) unsigned long long filteringOptions;
@property (nonatomic, retain) MPMediaLibrary *mediaLibrary;
@property (nonatomic, retain) MPModelKind *modelKind;
@property (getter=isMultiQuery, nonatomic) bool multiQuery;
@property (nonatomic, retain) NSArray *scopedContainers;

- (void).cxx_destruct;
- (id)allowedItemIdentifiers;
- (unsigned long long)filteringOptions;
- (bool)isMultiQuery;
- (id)mediaLibrary;
- (id)modelKind;
- (id)scopedContainers;
- (void)setAllowedItemIdentifiers:(id)arg1;
- (void)setFilteringOptions:(unsigned long long)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setModelKind:(id)arg1;
- (void)setMultiQuery:(bool)arg1;
- (void)setScopedContainers:(id)arg1;

@end
