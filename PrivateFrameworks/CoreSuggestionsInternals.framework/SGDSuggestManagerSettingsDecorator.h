/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDSuggestManagerSettingsDecorator : NSObject <SGDSuggestManagerAllProtocol> {
    SGDSuggestManager * _manager;
}

+ (void)initialize;

- (void).cxx_destruct;
- (void)addInteractions:(id)arg1 bundleId:(id)arg2 completion:(id)arg3;
- (void)addSearchableItemMetadata:(id)arg1 htmlData:(id)arg2 completion:(id)arg3;
- (void)addSearchableItems:(id)arg1 completion:(id)arg2;
- (void)drainQueueCompletelyWithCompletion:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)guardAllArgumentsInBlockMethodSignatureAreObjectsOrThrow:(id)arg1;
- (void)harvestedSuggestionsFromMessage:(id)arg1 bundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completionHandler:(id)arg4;
- (void)harvestedSuggestionsFromMessages:(id)arg1 bundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completionHandler:(id)arg4;
- (id)initWithManager:(id)arg1;
- (void)isEnabledWithCompletion:(id)arg1;
- (void)keepDirty:(bool)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)prepareForRealtimeExtraction:(id)arg1;
- (void)resetConfirmationAndRejectionHistory:(id)arg1;
- (void)suggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id)arg3;

@end