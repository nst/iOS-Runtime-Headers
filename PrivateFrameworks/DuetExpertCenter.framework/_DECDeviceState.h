/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECDeviceState : NSObject

+ (void)blockUntilFirstUnlock;
+ (bool)isClassCLocked;
+ (bool)isDemoModeEnabled;
+ (bool)isUnlocked;
+ (void)registerBlockForFirstUnlock:(id)arg1;
+ (void)registerBlockForFirstUnlock:(id)arg1 executeIfUnlocked:(bool)arg2;

@end
