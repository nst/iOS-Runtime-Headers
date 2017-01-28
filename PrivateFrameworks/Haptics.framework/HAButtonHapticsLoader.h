/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Haptics.framework/Haptics
 */

@interface HAButtonHapticsLoader : NSObject

@property (nonatomic, readonly) long long maxNumberOfSlots;
@property (nonatomic, readonly) bool serviceAvailable;

+ (id)sharedInstance;

- (void)dealloc;
- (float)defaultDownGainForType:(long long)arg1;
- (float)defaultUpGainForType:(long long)arg1;
- (bool)loadButtonHapticOfType:(long long)arg1 atSlot:(long long)arg2 error:(id*)arg3;
- (bool)loadButtonHapticOfType:(long long)arg1 withParameters:(id)arg2 atSlot:(long long)arg3 error:(id*)arg4;
- (long long)maxNumberOfSlots;
- (bool)serviceAvailable;

@end
