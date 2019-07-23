/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKHeartRhythmAvailability : NSObject {
    HKActiveWatchFeatureAvailabilityDataSource * _availabilityDataSource;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cacheLock;
    int  _featureAvailabilityConditionsDidUpdateNotificationToken;
    HKHealthStore * _healthStore;
    HKObserverSet * _heartRhythmAvailabilityObservers;
    NSUserDefaults * _heartRhythmUserDefaults;
    NSNumber * _isAtrialFibrillationDetectionDisabledCache;
    NSNumber * _isElectrocardiogramDisabledCache;
    HKKeyValueDomain * _keyValueDomain;
    HKMobileCountryCodeManager * _mobileCountryCodeManager;
    int  _onboardingStateDidChangeNotificationToken;
    NPSManager * _syncManager;
}

@property (getter=isAtrialFibrillationDetectionDisabled, nonatomic, readonly) bool atrialFibrillationDetectionDisabled;
@property (getter=isAtrialFibrillationDetectionOnboardingCompleted, nonatomic, readonly) bool atrialFibrillationDetectionOnboardingCompleted;
@property (nonatomic, retain) HKActiveWatchFeatureAvailabilityDataSource *availabilityDataSource;
@property (nonatomic, readonly) NSDate *electrocardiogramFirstOnboardingCompletedDate;
@property (getter=isElectrocardiogramFirstRecordingCompleted, nonatomic) bool electrocardiogramFirstRecordingCompleted;
@property (getter=isElectrocardiogramOnboardingCompleted, nonatomic, readonly) bool electrocardiogramOnboardingCompleted;
@property (getter=isElectrocardiogramRecordingDisabled, nonatomic, readonly) bool electrocardiogramRecordingDisabled;
@property (nonatomic) int featureAvailabilityConditionsDidUpdateNotificationToken;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) HKObserverSet *heartRhythmAvailabilityObservers;
@property (nonatomic, retain) NSUserDefaults *heartRhythmUserDefaults;
@property (nonatomic, retain) HKKeyValueDomain *keyValueDomain;
@property (nonatomic, retain) HKMobileCountryCodeManager *mobileCountryCodeManager;
@property (nonatomic) int onboardingStateDidChangeNotificationToken;
@property (nonatomic, retain) NPSManager *syncManager;

+ (unsigned long long)_atrialFibrillationDetectionSupportedStateForDeviceRegion:(id)arg1;
+ (bool)_isAtrialFibrillationDetectionDisabledWithDataSource:(id)arg1;
+ (bool)_isAtrialFibrillationDetectionStateSupportedOrNeedsGeolocationOnWatch:(id)arg1;
+ (bool)_isAtrialFibrillationDetectionSupportedOnPhone:(id)arg1;
+ (bool)_isDeviceRunningSeed:(id)arg1;
+ (bool)_isElectrocardiogramDisabledWithDataSource:(id)arg1;
+ (bool)_isElectrocardiogramSupportedOnPhone:(id)arg1;
+ (bool)_isRunningSeed;
+ (id)activePairedDevice;
+ (bool)atrialFibrillationDetectionSupportedForDevice:(id)arg1;
+ (unsigned long long)atrialFibrillationDetectionSupportedState;
+ (unsigned long long)atrialFibrillationDetectionSupportedStateForActiveWatch;
+ (unsigned long long)atrialFibrillationDetectionSupportedStateForWatch:(id)arg1;
+ (long long)currentAtrialFibrillationDetectionOnboardingVersion;
+ (long long)currentElectrocardiogramOnboardingVersion;
+ (bool)electrocardiogramSupportedForDevice:(id)arg1;
+ (unsigned long long)electrocardiogramSupportedState;
+ (unsigned long long)electrocardiogramSupportedStateForActiveWatch;
+ (unsigned long long)electrocardiogramSupportedStateForWatch:(id)arg1;
+ (id)featureAvailabilityUserDefaults;
+ (bool)isAtrialFibrillationDetectionDisabledForOnboardingCountryCode:(id)arg1;
+ (bool)isAtrialFibrillationDetectionSettingEnabled;
+ (bool)isAtrialFibrillationDetectionStateSupportedOrNeedsGeolocationOnActiveWatch;
+ (bool)isAtrialFibrillationDetectionStateSupportedOrNeedsGeolocationOnAllWatches;
+ (bool)isAtrialFibrillationDetectionStateSupportedOrNeedsGeolocationOnAnyWatch;
+ (bool)isAtrialFibrillationDetectionSupportedOnPairedPhone;
+ (bool)isDeviceSeries3OrOlder:(id)arg1;
+ (bool)isElectrocardiogramSupportedOnActiveWatch;
+ (bool)isElectrocardiogramSupportedOnAllWatches;
+ (bool)isElectrocardiogramSupportedOnAnyWatch;
+ (bool)isElectrocardiogramSupportedOnPairedPhone;
+ (bool)isElectrocardiogramSupportedOnWatch:(id)arg1;
+ (bool)isHeartRateEnabledInPrivacy;
+ (id)pairedDevices;
+ (bool)shouldAdvertiseAtrialFibrillationDetectionForActiveWatch;
+ (bool)shouldAdvertiseAtrialFibrillationDetectionForWatch:(id)arg1;
+ (bool)shouldAdvertiseElectrocardiogramForActiveWatch;
+ (bool)shouldAdvertiseElectrocardiogramForWatch:(id)arg1;
+ (bool)shouldInstallWatchApp;

- (void).cxx_destruct;
- (id)_electrocardiogramFirstOnboardingCompletedDate;
- (void)_featureAvailabilityConditionsDidUpdate;
- (bool)_isOnboardingCompletedForKey:(id)arg1 version:(long long)arg2;
- (void)_localeDidChange;
- (void)_pairedOrActiveDevicesDidChange:(id)arg1;
- (void)_registerForNotifications;
- (void)_resetIsAtrialFibrillationDetectionDisabledCacheWithLock:(bool)arg1;
- (void)_resetIsElectrocardiogramDisabledCacheWithLock:(bool)arg1;
- (void)_setAtrialFibrillationDetectionOnboardingCompletedForVersion:(long long)arg1 inCountryCode:(id)arg2;
- (void)_setElectrocardiogramOnboardingCompletedForVersion:(long long)arg1 inCountryCode:(id)arg2;
- (void)_setFirstOnboardingCompletedDate:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)_setOnboardingVersionCompleted:(long long)arg1 forKey:(id)arg2 additionalValues:(id)arg3 completion:(id /* block */)arg4;
- (void)_triggerFeatureAvailabilityUpdateOnPhoneAndWatchWithDelay:(long long)arg1;
- (void)_unregisterForNotifications;
- (void)addHeartRhythmAvailabilityObserver:(id)arg1;
- (id)atrialFibrillationDetectionOnboardingCountryCode;
- (id)availabilityDataSource;
- (void)dealloc;
- (id)electrocardiogramFirstOnboardingCompletedDate;
- (id)electrocardiogramOnboardingCountryCode;
- (int)featureAvailabilityConditionsDidUpdateNotificationToken;
- (id)healthStore;
- (id)heartRhythmAvailabilityObservers;
- (id)heartRhythmUserDefaults;
- (id)initWithHealthStore:(id)arg1;
- (bool)isAtrialFibrillationDetectionDisabled;
- (void)isAtrialFibrillationDetectionOnboardingAvailableInCurrentLocation:(id /* block */)arg1;
- (void)isAtrialFibrillationDetectionOnboardingAvailableInCurrentLocationForActiveWatch:(id /* block */)arg1;
- (void)isAtrialFibrillationDetectionOnboardingAvailableInCurrentLocationForWatch:(id)arg1 completion:(id /* block */)arg2;
- (bool)isAtrialFibrillationDetectionOnboardingCompleted;
- (bool)isElectrocardiogramFirstRecordingCompleted;
- (void)isElectrocardiogramOnboardingAvailableInCurrentLocation:(id /* block */)arg1;
- (void)isElectrocardiogramOnboardingAvailableInCurrentLocationForActiveWatch:(id /* block */)arg1;
- (void)isElectrocardiogramOnboardingAvailableInCurrentLocationForWatch:(id)arg1 completion:(id /* block */)arg2;
- (bool)isElectrocardiogramOnboardingCompleted;
- (bool)isElectrocardiogramRecordingDisabled;
- (id)keyValueDomain;
- (id)mobileCountryCodeManager;
- (void)notifyHeartRhythmAvailabilityDidUpdate;
- (int)onboardingStateDidChangeNotificationToken;
- (void)removeHeartRhythmAvailabilityObserver:(id)arg1;
- (void)resetAtrialFibrillationDetectionOnboarding;
- (void)resetElectrocardiogramOnboarding;
- (void)setAtrialFibrillationDetectionOnboardingCompletedForCountryCode:(id)arg1;
- (void)setAvailabilityDataSource:(id)arg1;
- (void)setElectrocardiogramFirstOnboardingCompletedDate:(id)arg1;
- (void)setElectrocardiogramFirstRecordingCompleted:(bool)arg1;
- (void)setElectrocardiogramOnboardingCompleted;
- (void)setElectrocardiogramOnboardingCompletedForCountryCode:(id)arg1;
- (void)setFeatureAvailabilityConditionsDidUpdateNotificationToken:(int)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setHeartRhythmAvailabilityObservers:(id)arg1;
- (void)setHeartRhythmUserDefaults:(id)arg1;
- (void)setKeyValueDomain:(id)arg1;
- (void)setMobileCountryCodeManager:(id)arg1;
- (void)setOnboardingStateDidChangeNotificationToken:(int)arg1;
- (void)setSyncManager:(id)arg1;
- (id)syncManager;

@end
