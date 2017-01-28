/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicJSProfileNativeViewController : MusicJSNativeViewController <MusicJSProfileNativeViewController, SKUIDOMFeature> {
    NSDictionary * _availableContentFlags;
    IKAppDocument * _biographyEditorDocument;
    NSDictionary * _biographyEditorDocumentOptions;
    <MusicJSProfileNativeViewControllerDelegate> * _delegate;
    NSString * _followerCountText;
    NSString * _followersText;
    IKAppDocument * _moreRelatedContentDocument;
    NSDictionary * _moreRelatedContentDocumentOptions;
    long long  _numberOfFollowers;
    NSDictionary * _profileEntityValueProviderData;
    IKAppDocument * _relatedContentDocument;
    NSDictionary * _relatedContentDocumentOptions;
    IKDOMDocument * _relatedContentJSDocument;
    NSDictionary * _reportingInformation;
    NSMutableDictionary * _segmentDocumentOptions;
    NSMutableDictionary * _segmentDocuments;
    NSMutableDictionary * _segmentJSDocuments;
    NSString * _selectedSegmentIdentifier;
    IKAppDocument * _shareDocument;
    NSDictionary * _shareDocumentOptions;
    bool  _socialHidden;
    NSArray * _visibleSegments;
}

@property (nonatomic, readonly) IKAppContext *appContext;
@property (nonatomic, readonly) NSDictionary *availableContentFlags;
@property (nonatomic, readonly) IKAppDocument *biographyEditorDocument;
@property (nonatomic, readonly) NSDictionary *biographyEditorDocumentOptions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MusicJSProfileNativeViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *featureName;
@property (nonatomic, readonly) NSString *followerCountText;
@property (nonatomic, readonly) NSString *followersText;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) IKAppDocument *moreRelatedContentDocument;
@property (nonatomic, readonly) NSDictionary *moreRelatedContentDocumentOptions;
@property (nonatomic, readonly) IKJSNavigationDocument *navigationDocument;
@property (nonatomic, readonly) long long numberOfFollowers;
@property (nonatomic, readonly) NSDictionary *profileEntityValueProviderData;
@property (nonatomic, readonly) IKAppDocument *relatedContentDocument;
@property (nonatomic, readonly) NSDictionary *relatedContentDocumentOptions;
@property (nonatomic, readonly) NSDictionary *reportingInformation;
@property (nonatomic, readonly) NSString *selectedSegmentIdentifier;
@property (nonatomic, readonly) IKAppDocument *shareDocument;
@property (nonatomic, readonly) NSDictionary *shareDocumentOptions;
@property (getter=isSocialHidden, nonatomic) bool socialHidden;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *visibleSegments;

+ (id)featureName;

- (void).cxx_destruct;
- (id)availableContentFlags;
- (id)biographyEditorDocument;
- (id)biographyEditorDocumentOptions;
- (id)delegate;
- (id)documentForSegmentIdentifier:(id)arg1;
- (id)documentOptionsForSegmentIdentifier:(id)arg1;
- (void)enumerateSegmentIdentifiersAndDocumentsUsingBlock:(id)arg1;
- (id)followerCountText;
- (id)followersText;
- (bool)isSocialHidden;
- (id)moreRelatedContentDocument;
- (id)moreRelatedContentDocumentOptions;
- (id)nativeViewIdentifier;
- (void)navigationDocumentDidChange;
- (long long)numberOfFollowers;
- (void)presentBiographyEditorDocument:(id)arg1 :(id)arg2;
- (void)presentShareDocument:(id)arg1 :(id)arg2;
- (id)profileEntityValueProviderData;
- (id)relatedContentDocument;
- (id)relatedContentDocumentOptions;
- (id)reportingInformation;
- (id)selectedSegmentIdentifier;
- (void)setAvailableContentFlags:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFollowerCountText:(id)arg1 :(id)arg2;
- (void)setMoreRelatedContentDocument:(id)arg1 :(id)arg2;
- (void)setNumberOfFollowers:(unsigned long long)arg1;
- (void)setProfileEntityValueProvider:(id)arg1;
- (void)setRelatedContentDocument:(id)arg1 :(id)arg2;
- (void)setReportingInformation:(id)arg1;
- (void)setSegmentDocument:(id)arg1 :(id)arg2 :(id)arg3;
- (void)setSelectedSegment:(id)arg1;
- (void)setSocialHidden:(bool)arg1;
- (void)setVisibleSegments:(id)arg1;
- (id)shareDocument;
- (id)shareDocumentOptions;
- (bool)supportsRelatedContentDocument;
- (id)visibleSegments;

@end
