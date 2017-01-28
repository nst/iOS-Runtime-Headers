/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGRe2Subregexps : SGRe2 {
    SGRe2PrefilterTree * _prefilter;
    NSArray * _subregexps;
}

- (void).cxx_destruct;
- (int)_enumerateMatchesInUtf8:(const char *)arg1 fromString:(id)arg2 ngroups:(unsigned long long)arg3 block:(id)arg4;
- (id)description;
- (id)existsInUtf8:(const char *)arg1;
- (id)initWithSubregexps:(id)arg1 prefilter:(id)arg2;
- (id)matchesUtf8:(const char *)arg1;

@end
