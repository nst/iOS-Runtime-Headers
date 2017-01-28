/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFRecentWebSearchesController : WBSRecentWebSearchesController {
    NSString * _pathToLegacySearchesFile;
    NSString * _preferencesDomain;
}

+ (unsigned long long)_maximumNumberOfSearchesToTrack;

- (void).cxx_destruct;
- (void)_migrateLegacyData;
- (id)_recentSearchDictionariesFromUserDefaultsUsingKey:(id)arg1;
- (void)_removeLegacyRecentSearchesData;
- (void)_saveRecentSearchDictionaries:(id)arg1 toUserDefaultsUsingKey:(id)arg2;
- (id)initWithPreferencesDomain:(id)arg1 pathToLegacySearchesFile:(id)arg2;

@end
