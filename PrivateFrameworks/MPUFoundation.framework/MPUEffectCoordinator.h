/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUEffectCoordinator : NSObject {
    NSMutableArray * _applyBlocks;
    id  _completionHandler;
    unsigned long long  _pendingEffectsCount;
}

@property (nonatomic, copy) id completionHandler;

- (void).cxx_destruct;
- (void)addApplyChangesBlock:(id)arg1;
- (void)beginChangeForEffectView:(id)arg1;
- (id)completionHandler;
- (void)finishChangeForEffectView:(id)arg1;
- (void)setCompletionHandler:(id)arg1;

@end
