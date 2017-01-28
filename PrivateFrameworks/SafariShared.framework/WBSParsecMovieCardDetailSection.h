/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSParsecMovieCardDetailSection : WBSParsecModel {
    unsigned long long  _descriptionMaxLines;
    NSString * _descriptionText;
    NSString * _title;
}

@property (nonatomic, readonly) unsigned long long descriptionMaxLines;
@property (nonatomic, readonly, copy) NSString *descriptionText;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)movieCardDetailSectionSchema;

- (void).cxx_destruct;
- (unsigned long long)descriptionMaxLines;
- (id)descriptionText;
- (id)initWithDictionary:(id)arg1;
- (id)title;

@end
