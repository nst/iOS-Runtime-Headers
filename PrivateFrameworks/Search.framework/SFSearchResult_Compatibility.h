/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SFSearchResult_Compatibility : SFSearchResult_SpotlightExtras <NSCopying> {
    NSArray * _contactIdentifiers;
    bool  _hasAssociatedUserActivity;
    bool  _hasSearchResultDomain;
    unsigned long long  _resultScore;
    int  _searchResultDomain;
    NSString * _secondary_title;
    double  _sectionScore;
    NSString * _section_header;
    NSString * _sourceDomain;
    NSString * _subtitle;
    NSString * _templateName;
    bool  _thumbnail_align_right;
    bool  _userActivityEligibleForPublicIndexing;
}

@property (nonatomic, retain) NSString *adam_id;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSString *compatibilityTitle;
@property (nonatomic, retain) NSArray *contactIdentifiers;
@property (nonatomic, retain) NSString *externalIdentifier;
@property (nonatomic) bool hasAssociatedUserActivity;
@property (readonly) bool hasSearchResultDomain;
@property (nonatomic, retain) NSString *resultIdentifier;
@property (nonatomic) unsigned long long resultScore;
@property int searchResultDomain;
@property (nonatomic, readonly) NSString *secondary_title;
@property (nonatomic) double sectionScore;
@property (nonatomic, retain) NSString *section_header;
@property (nonatomic, retain) NSString *sourceDomain;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *templateName;
@property (nonatomic) bool thumbnail_align_right;
@property int title_maxlines;
@property bool userActivityEligibleForPublicIndexing;

- (void).cxx_destruct;
- (id)adam_id;
- (id)bundleID;
- (Class)classForCoder;
- (Class)classForKeyedArchiver;
- (id)compatibilityTitle;
- (id)contactIdentifiers;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)externalIdentifier;
- (bool)hasAssociatedUserActivity;
- (bool)hasSearchResultDomain;
- (bool)isQuickGlance;
- (id)resultIdentifier;
- (unsigned long long)resultScore;
- (int)searchResultDomain;
- (id)secondary_title;
- (double)sectionScore;
- (id)section_header;
- (void)setAdam_id:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setCompatibilityTitle:(id)arg1;
- (void)setContactIdentifiers:(id)arg1;
- (void)setExternalIdentifier:(id)arg1;
- (void)setHasAssociatedUserActivity:(bool)arg1;
- (void)setResultIdentifier:(id)arg1;
- (void)setResultScore:(unsigned long long)arg1;
- (void)setSearchResultDomain:(int)arg1;
- (void)setSectionScore:(double)arg1;
- (void)setSection_header:(id)arg1;
- (void)setSimpleTitle:(id)arg1;
- (void)setSourceDomain:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTemplateName:(id)arg1;
- (void)setThumbnail_align_right:(bool)arg1;
- (void)setTitle_maxlines:(int)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setUserActivityEligibleForPublicIndexing:(bool)arg1;
- (id)simpleTitle;
- (id)sourceDomain;
- (id)subtitle;
- (id)templateName;
- (bool)thumbnail_align_right;
- (int)title_maxlines;
- (id)uniqueIdentifier;
- (bool)userActivityEligibleForPublicIndexing;
- (void)writeTo:(id)arg1;

@end