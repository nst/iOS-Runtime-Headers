/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKBehavior : NSObject {
    bool  _collectsData;
    bool  _futureMigrationsEnabled;
    bool  _hasTelephonyCapability;
    NSString * _hostReadAuthorizationUsageDescription;
    NSString * _hostWriteAuthorizationUsageDescription;
    bool  _isAppleInternalInstall;
    bool  _isAppleWatch;
    bool  _isCompanionCapable;
    bool  _isDeviceSupported;
    bool  _isRunningStoreDemoMode;
    bool  _isTestingDevice;
    NSNumber * _overridenSupportsSwimmingWorkoutSessions;
    bool  _runningInStoreDemoModeF201;
    bool  _supportsAWDMetricSubmission;
    bool  _supportsAchievementAssets;
    bool  _supportsActivitySharing;
    bool  _supportsAppSubscriptions;
    bool  _supportsCloudSync;
    bool  _supportsHeartRateDataCollection;
    bool  _supportsNanoSync;
    bool  _supportsRemoteAuthorization;
    bool  _supportsSampleExpiration;
}

@property (nonatomic) bool collectsData;
@property (nonatomic, readonly, copy) NSString *currentDeviceClass;
@property (nonatomic, readonly, copy) NSString *currentDeviceDisplayName;
@property (nonatomic, readonly, copy) NSString *currentDeviceManufacturer;
@property (nonatomic, readonly, copy) NSString *currentDeviceName;
@property (nonatomic, readonly, copy) NSString *currentDeviceProductType;
@property (nonatomic, readonly) unsigned long long currentDiskSpaceAvailable;
@property (nonatomic, readonly) NSDictionary *currentDiskUsage;
@property (nonatomic, readonly, copy) NSString *currentInternalDeviceModel;
@property (nonatomic, readonly, copy) NSString *currentOSBuild;
@property (nonatomic, readonly, copy) NSString *currentOSVersion;
@property (nonatomic, readonly) struct { long long x1; long long x2; long long x3; } currentOSVersionStruct;
@property (nonatomic) bool futureMigrationsEnabled;
@property (nonatomic) bool hasTelephonyCapability;
@property (nonatomic, copy) NSString *hostReadAuthorizationUsageDescription;
@property (nonatomic, copy) NSString *hostWriteAuthorizationUsageDescription;
@property (nonatomic) bool isAppleInternalInstall;
@property (nonatomic) bool isAppleWatch;
@property (nonatomic) bool isCompanionCapable;
@property (nonatomic, readonly) bool isCurrentDeviceN2XA;
@property (nonatomic) bool isDeviceSupported;
@property (nonatomic, readonly) bool isRunningStoreDemoMode;
@property (nonatomic) bool isTestingDevice;
@property (nonatomic, readonly, copy) NSTimeZone *localTimeZone;
@property (nonatomic, readonly) bool runningInStoreDemoModeF201;
@property (nonatomic) bool supportsAWDMetricSubmission;
@property (nonatomic) bool supportsAchievementAssets;
@property (nonatomic) bool supportsActivitySharing;
@property (nonatomic) bool supportsAppSubscriptions;
@property (nonatomic) bool supportsCloudSync;
@property (nonatomic) bool supportsHeartRateDataCollection;
@property (nonatomic) bool supportsNanoSync;
@property (nonatomic) bool supportsRemoteAuthorization;
@property (nonatomic) bool supportsSampleExpiration;
@property (nonatomic) bool supportsSwimmingWorkoutSessions;
@property (nonatomic, readonly) unsigned long long totalDiskCapacity;

+ (bool)_futureMigrationsEnabled;
+ (bool)_hasCompletedBuddy;
+ (bool)_hasTelephonyCapability;
+ (bool)_isAppleInternalInstall;
+ (bool)_isDeviceSupported;
+ (bool)_isForceBuddyEnabled;
+ (bool)_isRunningStoreDemoMode;
+ (bool)_runningInStoreDemoModeF201;
+ (long long)_runningInStoreDemoModeFProgramNumber;
+ (bool)_shouldShowBuddy;
+ (bool)activePairedWatchHasSmartFitnessCoaching;
+ (id)activePairedWatchWithoutSOSMedicalIDContactsSupport;
+ (bool)allPairedWatchesMeetMinimumVersion:(int)arg1;
+ (bool)anyPairedWatchHasFlightsClimbedCapability;
+ (bool)anyPairedWatchHasSOSModeCapability;
+ (id)behaviorQueue;
+ (id)currentDeviceClass;
+ (id)currentDeviceDisplayName;
+ (id)currentDeviceManufacturer;
+ (id)currentDeviceName;
+ (id)currentDeviceProductType;
+ (id)currentOSBuild;
+ (id)currentOSVersion;
+ (struct { long long x1; long long x2; long long x3; })currentOSVersionStruct;
+ (bool)currentlyPairedWatchMeetsMinimumVersion:(int)arg1;
+ (void)disableForceBuddy;
+ (bool)hasCompletedBuddy;
+ (bool)hasPairedWatch;
+ (bool)hasTelephonyCapability;
+ (bool)isAppleInternalInstall;
+ (bool)isDeviceSupported;
+ (bool)isRunningStoreDemoMode;
+ (bool)isTestingDevice;
+ (void)resetSharedBehavior;
+ (bool)runningInStoreDemoModeF201;
+ (void)setSharedBehavior:(id)arg1;
+ (id)sharedBehavior;
+ (bool)shouldShowBuddy;
+ (int)syncProtocolVersionForNRDevice:(id)arg1;
+ (int)syncProtocolVersionForSystemBuildVersion:(id)arg1;

- (void).cxx_destruct;
- (bool)collectsData;
- (id)currentDeviceClass;
- (id)currentDeviceDisplayName;
- (id)currentDeviceManufacturer;
- (id)currentDeviceName;
- (id)currentDeviceProductType;
- (unsigned long long)currentDiskSpaceAvailable;
- (id)currentDiskUsage;
- (id)currentInternalDeviceModel;
- (id)currentOSBuild;
- (id)currentOSVersion;
- (struct { long long x1; long long x2; long long x3; })currentOSVersionStruct;
- (bool)futureMigrationsEnabled;
- (bool)hasTelephonyCapability;
- (id)hostReadAuthorizationUsageDescription;
- (id)hostWriteAuthorizationUsageDescription;
- (id)init;
- (bool)isAppleInternalInstall;
- (bool)isAppleWatch;
- (bool)isCompanionCapable;
- (bool)isCurrentDeviceN2XA;
- (bool)isDeviceSupported;
- (bool)isRunningStoreDemoMode;
- (bool)isTestingDevice;
- (id)localTimeZone;
- (bool)runningInStoreDemoModeF201;
- (void)setCollectsData:(bool)arg1;
- (void)setFutureMigrationsEnabled:(bool)arg1;
- (void)setHasTelephonyCapability:(bool)arg1;
- (void)setHostReadAuthorizationUsageDescription:(id)arg1;
- (void)setHostWriteAuthorizationUsageDescription:(id)arg1;
- (void)setIsAppleInternalInstall:(bool)arg1;
- (void)setIsAppleWatch:(bool)arg1;
- (void)setIsCompanionCapable:(bool)arg1;
- (void)setIsDeviceSupported:(bool)arg1;
- (void)setIsTestingDevice:(bool)arg1;
- (void)setSupportsAWDMetricSubmission:(bool)arg1;
- (void)setSupportsAchievementAssets:(bool)arg1;
- (void)setSupportsActivitySharing:(bool)arg1;
- (void)setSupportsAppSubscriptions:(bool)arg1;
- (void)setSupportsCloudSync:(bool)arg1;
- (void)setSupportsHeartRateDataCollection:(bool)arg1;
- (void)setSupportsNanoSync:(bool)arg1;
- (void)setSupportsRemoteAuthorization:(bool)arg1;
- (void)setSupportsSampleExpiration:(bool)arg1;
- (void)setSupportsSwimmingWorkoutSessions:(bool)arg1;
- (bool)supportsAWDMetricSubmission;
- (bool)supportsAchievementAssets;
- (bool)supportsActivitySharing;
- (bool)supportsAppSubscriptions;
- (bool)supportsCloudSync;
- (bool)supportsHeartRateDataCollection;
- (bool)supportsNanoSync;
- (bool)supportsRemoteAuthorization;
- (bool)supportsSampleExpiration;
- (bool)supportsSwimmingWorkoutSessions;
- (unsigned long long)totalDiskCapacity;

@end
