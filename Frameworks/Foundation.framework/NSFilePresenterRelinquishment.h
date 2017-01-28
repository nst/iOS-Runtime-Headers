/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFilePresenterRelinquishment : NSObject {
    NSCountedSet * _blockingAccessClaimIDs;
    NSMutableArray * _blockingPrerelinquishReplies;
    bool  _prerelinquishInProgress;
    id  _reacquirer;
    NSMutableArray * _relinquishReplies;
}

- (void)addPrerelinquishReply:(id)arg1;
- (void)addRelinquishReply:(id)arg1;
- (void)dealloc;
- (void)didRelinquish;
- (void)performRelinquishmentToAccessClaimIfNecessary:(id)arg1 usingBlock:(id)arg2 withReply:(id)arg3;
- (void)performRemoteDeletePrerelinquishmentIfNecessaryUsingBlock:(id)arg1 withReply:(id)arg2;
- (void)removeAllBlockingAccessClaimIDs;
- (void)removeBlockingAccessClaimID:(id)arg1;
- (void)removeBlockingAccessClaimID:(id)arg1 thenContinue:(id)arg2;
- (void)setReacquirer:(id)arg1;

@end
