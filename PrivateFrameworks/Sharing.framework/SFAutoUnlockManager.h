/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFAutoUnlockManager : NSObject <SFUnlockClientProtocol> {
    <SFAutoUnlockManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFAutoUnlockManagerDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double spinnerDelay;
@property (readonly) Class superclass;

+ (bool)autoUnlockEnabled:(unsigned int)arg1;
+ (bool)autoUnlockSupported;
+ (bool)bluetoothAndWiFiEnabled;
+ (void)enableBluetoothAndWiFi;

- (void).cxx_destruct;
- (void)attemptAutoUnlock;
- (void)autoUnlockStateWithCompletionHandler:(id)arg1;
- (void)beganAttemptWithDevice:(id)arg1;
- (void)cancelAutoUnlock;
- (void)cancelEnablingAutoUnlockForDevice:(id)arg1;
- (void)completedUnlockWithDevice:(id)arg1;
- (id)delegate;
- (id)delegateQueue;
- (void)disableAutoUnlockForDevice:(id)arg1 completionHandler:(id)arg2;
- (void)eligibleAutoUnlockDevicesWithCompletionHandler:(id)arg1;
- (void)enableAutoUnlockWithDevice:(id)arg1 passcode:(id)arg2;
- (void)enableAutoUnlockWithDevice:(id)arg1 passcode:(id)arg2 completionHandler:(id)arg3;
- (void)enabledDevice:(id)arg1;
- (void)failedToEnableDevice:(id)arg1 error:(id)arg2;
- (void)failedUnlockWithError:(id)arg1;
- (id)init;
- (void)keyDeviceLocked:(id)arg1;
- (void)onDelegateQueue_notifyDelegateOfAttemptError:(id)arg1;
- (void)onDelegateQueue_notifyDelegateOfEnableError:(id)arg1 device:(id)arg2;
- (void)repairCloudPairing;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (double)spinnerDelay;

@end