/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentSession : NSObject {
    NFSession * _internalSession;
    NSObject<OS_dispatch_queue> * _internalSessionSerialQueue;
}

@property (nonatomic, readonly) unsigned long long lifecycleState;

+ (id)startContactlessInterfaceSessionWithCompletion:(id)arg1;
+ (id)startInAppSessionWithCompletion:(id)arg1;
+ (id)startReaderSessionWithCompletion:(id)arg1;

- (void).cxx_destruct;
- (id)initWithInternalSession:(id)arg1;
- (void)invalidateSession;
- (void)invalidateSessionWithCompletion:(id)arg1;
- (unsigned long long)lifecycleState;
- (void)performBlockAsyncOnInternalSession:(id)arg1;
- (void)performBlockSyncOnInternalSession:(id)arg1;

@end
