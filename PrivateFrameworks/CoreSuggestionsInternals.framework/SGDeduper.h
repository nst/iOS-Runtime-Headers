/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDeduper : NSObject

+ (id)_dedupeGenericContactDetails:(id)arg1;
+ (id)_dedupePostalAddresses:(id)arg1;
+ (id)bucketerWithEqualityTest:(id)arg1;
+ (id)bucketerWithLabeledBuckets:(id)arg1;
+ (id)bucketerWithMapping:(id)arg1;
+ (id)dedupe:(id)arg1 bucketer:(id)arg2 resolver:(id)arg3;
+ (id)dedupeContactDetails:(id)arg1;
+ (void)enumerateEKEventsForPseudoEventBySimilarTitleAndStartTime:(id)arg1 store:(id)arg2 usingBlock:(id)arg3;
+ (id)resolveByPairs:(id)arg1;
+ (id)resolveByScoreBreakTiesArbitrarily:(id)arg1;
+ (id)resolveSGContactDetailsPreferringPhraseExtractionsAndLabels;
+ (id)splitContactDetailsByType:(id)arg1;

@end
