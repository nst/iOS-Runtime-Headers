/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKFetchOperation : NSObject {
    NSUUID * _UUID;
    long long  _clientPriority;
    <HKFetchOperationDelegate> * _delegate;
    long long  _operationPriority;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic) long long clientPriority;
@property (getter=_delegate, setter=_setDelegate:, nonatomic) <HKFetchOperationDelegate> *delegate;
@property (nonatomic) long long operationPriority;

- (void).cxx_destruct;
- (id)UUID;
- (void)_alertDelegateDidUpdatePriority;
- (id)_delegate;
- (void)_setDelegate:(id)arg1;
- (long long)clientPriority;
- (id)init;
- (long long)operationPriority;
- (void)setClientPriority:(long long)arg1;
- (void)setOperationPriority:(long long)arg1;
- (void)startOperationWithCompletion:(id)arg1;
- (void)stopOperation;

@end
