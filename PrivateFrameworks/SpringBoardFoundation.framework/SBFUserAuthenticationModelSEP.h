/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFUserAuthenticationModelSEP : NSObject <SBFUserAuthenticationModel> {
    <SBFUserAuthenticationModelDelegate> * _delegate;
    SBFMobileKeyBag * _keybag;
    bool  _pendingWipe;
    bool  _permanentlyBlocked;
    SBSecurityDefaults * _securityDefaults;
    double  _unblockTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBFUserAuthenticationModelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPermanentlyBlocked, nonatomic, readonly) bool permanentlyBlocked;
@property (readonly) Class superclass;
@property (getter=isTemporarilyBlocked, nonatomic, readonly) bool temporarilyBlocked;
@property (nonatomic, readonly) double timeUntilUnblockedSinceReferenceDate;

- (void).cxx_destruct;
- (bool)_isDeviceWipePreferenceEnabled;
- (void)_refreshStateAndNotify:(bool)arg1;
- (void)_refreshStateForMkbState:(id)arg1 notify:(bool)arg2;
- (void)clearBlockedState;
- (id)delegate;
- (id)description;
- (id)descriptionBuilder;
- (id)initWithKeyBag:(id)arg1;
- (bool)isPermanentlyBlocked;
- (bool)isTemporarilyBlocked;
- (void)noteNewMkbDeviceLockState:(id)arg1;
- (void)notePasscodeEntryBegan;
- (void)notePasscodeEntryCancelled;
- (void)notePasscodeUnlockFailedWithError:(id)arg1;
- (void)notePasscodeUnlockSucceeded;
- (void)performPasswordTest:(id)arg1;
- (void)refreshBlockedState;
- (void)setDelegate:(id)arg1;
- (void)synchronize;
- (double)timeUntilUnblockedSinceReferenceDate;

@end
