/* Generated by RuntimeBrowser.
 */

@protocol WBSFormAutoFillCorrectionsStore <NSObject>

@required

- (void)getClassificationForFieldWithFingerprint:(void *)arg1 onDomain:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSString *, void*
- (void)getLastCrowdsourcedCorrectionsRetrievalURLStringWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSString *, void*
- (void)getLastWhitelistRetrievalURLStringWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSString *, void*
- (void)getWhitelistStatusForDomain:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, bool, void*
- (void)removeAllLocalClassificationsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, bool, void*
- (void)removeLocalClassificationsForDomain:(void *)arg1 recordedOnOrAfter:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSDate *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, bool, void*
- (void)replaceCrowdsourcedCorrectionSetsWithCorrectionSets:(void *)arg1 retrievalURLString:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSArray *, NSString *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, bool, void*
- (void)replaceDomainWhitelistWithDomains:(void *)arg1 retrievalURLString:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSArray *, NSString *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, bool, void*
- (void)setCrowdsourcedClassification:(void *)arg1 forFieldWithFingerprint:(void *)arg2 onDomain:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, NSString *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, bool, void*
- (void)setDomain:(void *)arg1 isWhitelistedForFeedback:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, bool, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, bool, void*
- (void)setLastCrowdsourcedCorrectionsRetrievalURLString:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, bool, void*
- (void)setLastWhitelistRetrievalURLString:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, bool, void*
- (void)setLocalClassification:(void *)arg1 forFieldWithFingerprint:(void *)arg2 onDomain:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, NSString *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, bool, void*

@end