/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCPasscodeManager : NSObject

+ (id)_localizedDescriptionOfPasscodePolicyFromRestrictions:(id)arg1 shouldBeDefault:(bool)arg2;
+ (bool)_passcodeCharacteristics:(id)arg1 compliesWithPolicyFromRestrictions:(id)arg2 outError:(id*)arg3;
+ (id)characteristicsDictionaryFromPasscode:(id)arg1;
+ (int)defaultNewPasscodeEntrySimplePasscodeType;
+ (id)deviceLockedError;
+ (id)generateSalt;
+ (id)hashForPasscode:(id)arg1 usingMethod:(int)arg2 salt:(id)arg3;
+ (bool)isDeviceUnlocked;
+ (id)localizedDescriptionOfDefaultNewPasscodePolicyFromRestrictions:(id)arg1;
+ (id)localizedDescriptionOfPasscodePolicyFromRestrictions:(id)arg1;
+ (bool)passcode:(id)arg1 compliesWithPolicyFromRestrictions:(id)arg2 checkHistory:(bool)arg3 outError:(id*)arg4;
+ (id)sharedManager;
+ (int)unlockScreenTypeForPasscodeCharacteristics:(id)arg1;
+ (int)unlockScreenTypeForPasscodeCharacteristics:(id)arg1 outSimplePasscodeType:(int*)arg2;
+ (int)unlockScreenTypeForRestrictions:(id)arg1;
+ (int)unlockScreenTypeForRestrictions:(id)arg1 outSimplePasscodeType:(int*)arg2;

- (bool)_checkPasscode:(id)arg1 againstHistoryWithRestrictions:(id)arg2 outError:(id*)arg3;
- (int)_newPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int*)arg1 shouldBeMinimum:(bool)arg2;
- (id)_passcodeCharacteristics;
- (id)_privatePasscodeDict;
- (id)_publicPasscodeDict;
- (id)_wrongPasscodeError;
- (bool)currentPasscodeCompliesWithPolicyFromRestrictions:(id)arg1 outError:(id*)arg2;
- (int)currentUnlockScreenType;
- (int)currentUnlockSimplePasscodeType;
- (int)defaultNewPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int*)arg1;
- (bool)isCurrentPasscodeCompliantOutError:(id*)arg1;
- (bool)isDeviceLocked;
- (bool)isPasscodeSet;
- (id)localizedDescriptionOfDefaultNewPasscodePolicy;
- (id)localizedDescriptionOfPasscodePolicy;
- (void)lockDevice;
- (void)lockDeviceImmediately:(bool)arg1;
- (int)minimumNewPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int*)arg1;
- (int)newPasscodeEntryScreenType;
- (int)newPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int*)arg1;
- (bool)passcode:(id)arg1 compliesWithPolicyCheckHistory:(bool)arg2 outError:(id*)arg3;
- (void)passcodeExpiryDateCompletionBlock:(id)arg1;
- (id)passcodeExpiryDateOutError:(id*)arg1;
- (bool)unlockDeviceWithPasscode:(id)arg1 outError:(id*)arg2;

@end
