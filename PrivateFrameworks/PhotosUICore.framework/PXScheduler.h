/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXScheduler : NSObject {
    bool  _hasPendingPerformInDefaultRunLoopMode;
    bool  _isPerformingPendingBlocks;
    NSMutableArray * _pendingBlocks;
}

+ (id)sharedScheduler;

- (void).cxx_destruct;
- (void)_enteredDefaultRunLoopMode;
- (void)_performPendingBlocks;
- (void)_performPendingBlocksIfNeeded;
- (void)dispatchInMainTransaction:(id)arg1;
- (void)dispatchInMainTransactionAfterDelay:(double)arg1 block:(id)arg2;
- (id)init;
- (void)scrollViewDidScroll;
- (void)scrollViewWillLayoutSubviews;

@end
