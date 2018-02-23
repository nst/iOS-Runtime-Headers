/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDaemon : NSObject <HDDiagnosticObject, HDHealthDaemon, HDXPCListenerDelegate> {
    HDAchievementAssetManager * _achievementAssetManager;
    HDAchievementDefinitionAlertManager * _achievementDefinitionAlertManager;
    <HDAchievementDefinitionAlertNotifier> * _achievementDefinitionAlertNotifier;
    <HDAchievementDefinitionAlertSuppressor> * _achievementDefinitionAlertSuppressor;
    HDAchievementDoctorManager * _achievementDoctorManager;
    <HDAchievementEvaluationDelegate> * _achievementEvaluationDelegate;
    <HDNanoAlertSuppressionService> * _alertSuppressionService;
    HDAppLauncher * _appLauncher;
    HDBackgroundTaskScheduler * _backgroundTaskScheduler;
    _HKBehavior * _behavior;
    HDCloudSyncCoordinator * _cloudSyncCoordinator;
    HDCoachingDiagnosticManager * _coachingDiagnosticManager;
    HDCompanionAchievementManager * _companionAchievementManager;
    HDCompanionWorkoutCreditManager * _companionWorkoutCreditManager;
    HDContentProtectionManager * _contentProtectionManager;
    NSMutableArray * _daemonLaunchObservers;
    bool  _daemonReady;
    <HDDaemonTester> * _daemonTester;
    HDDemoDataGenerator * _demoDataFactory;
    struct MGNotificationTokenStruct { } * _deviceNameChangesToken;
    int  _didStart;
    HDDynamicAchievementDefinitionDataStore * _dynamicAchievementDefinitionDataStore;
    HDDynamicAchievementDefinitionDataStore * _dynamicAchievementDefinitionStore;
    NSMutableSet * _endpoints;
    HDFitnessAppBadgeManager * _fitnessAppBadgeManager;
    NSString * _healthDirectoryPath;
    int  _languageChangeNotifyToken;
    NSObject<OS_dispatch_queue> * _mainQueue;
    NSString * _medicalIDDirectoryPath;
    HDPluginManager * _pluginManager;
    HDPrimaryProfile * _primaryProfile;
    HDProcessStateManager * _processStateManager;
    HDProfileManager * _profileManager;
    HDQueryManager * _queryManager;
    HDXPCListener * _serviceListener;
}

@property (nonatomic, retain) HDAchievementAssetManager *achievementAssetManager;
@property (nonatomic, retain) HDAchievementDefinitionAlertManager *achievementDefinitionAlertManager;
@property (nonatomic, retain) HDAchievementDoctorManager *achievementDoctorManager;
@property (nonatomic) <HDAchievementEvaluationDelegate> *achievementEvaluationDelegate;
@property (nonatomic, retain) <HDNanoAlertSuppressionService> *alertSuppressionService;
@property (nonatomic, readonly) HDAppLauncher *appLauncher;
@property (readonly) HDBackgroundTaskScheduler *backgroundTaskScheduler;
@property (readonly) _HKBehavior *behavior;
@property (nonatomic, readonly) HDCloudSyncCoordinator *cloudSyncCoordinator;
@property (nonatomic, readonly) HDCoachingDiagnosticManager *coachingDiagnosticManager;
@property (nonatomic, retain) HDCompanionAchievementManager *companionAchievementManager;
@property (nonatomic, readonly) HDCompanionWorkoutCreditManager *companionWorkoutCreditManager;
@property (nonatomic, readonly) HDContentProtectionManager *contentProtectionManager;
@property (nonatomic) <HDDaemonTester> *daemonTester;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HDDynamicAchievementDefinitionDataStore *dynamicAchievementDefinitionDataStore;
@property (nonatomic, readonly) HDFitnessAppBadgeManager *fitnessAppBadgeManager;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *healthDirectoryPath;
@property (readonly, copy) NSURL *healthDirectoryURL;
@property (readonly, copy) NSString *medicalIDDirectoryPath;
@property (readonly) HDPluginManager *pluginManager;
@property (nonatomic, readonly) HDPrimaryProfile *primaryProfile;
@property (nonatomic, readonly) HDProcessStateManager *processStateManager;
@property (nonatomic, readonly) HDProfileManager *profileManager;
@property (nonatomic, readonly) HDQueryManager *queryManager;
@property (nonatomic, readonly) HDXPCListener *serviceListener;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)IDSServiceWithIdentifier:(id)arg1;
- (id)_bundleIdentifiersToTerminateAfterObliteration;
- (void)_handleSigterm;
- (void)_localeOrLanguageChanged:(id)arg1;
- (bool)_motionTrackingAvailable;
- (id)_newBackgroundTaskScheduler;
- (id)_newBehavior;
- (id)_newCloudSyncCoordinator;
- (id)_newCompanionWorkoutCreditManager;
- (id)_newContentProtectionManager;
- (id)_newMainQueue;
- (id)_newPluginManager;
- (id)_newPrimaryProfile;
- (id)_newProcessStateManager;
- (id)_newProfileManager;
- (void)_notifyDaemonLaunchObservers;
- (void)_periodicUpdates;
- (void)_registerForDeviceNameChanges;
- (void)_registerLaunchEventDynamicallyForNotification:(const char *)arg1;
- (void)_resetPrivacySettings;
- (void)_setUpDistnotedEventHandler;
- (void)_setUpLaunchEventHandlers;
- (void)_setUpNotifydEventHandler;
- (void)_setUpPedometerLaunchEventHandler;
- (void)_setUpSignalHandlers;
- (void)_setupMemoryWarningHandler;
- (id)_setupSignal:(int)arg1 handler:(id /* block */)arg2;
- (bool)_shouldInitializeDaemon;
- (void)_terminationCleanup;
- (void)_unregisterLaunchEventDynamicallyForNotification:(const char *)arg1;
- (void)_updateCurrentDeviceName;
- (id)achievementAssetManager;
- (id)achievementDefinitionAlertManager;
- (id)achievementDoctorManager;
- (id)achievementEvaluationDelegate;
- (id)alertSuppressionService;
- (id)appLauncher;
- (id)backgroundTaskScheduler;
- (id)behavior;
- (id)cloudSyncCoordinator;
- (id)coachingDiagnosticManager;
- (id)companionAchievementManager;
- (id)companionWorkoutCreditManager;
- (id)contentProtectionManager;
- (id)createXPCListenerWithMachServiceName:(id)arg1;
- (id)daemonTester;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)dynamicAchievementDefinitionDataStore;
- (void)exitClean:(bool)arg1 reason:(id)arg2;
- (id)exportObjectForListener:(id)arg1 client:(id)arg2 error:(id*)arg3;
- (id)fitnessAppBadgeManager;
- (id)healthDirectoryPath;
- (id)healthDirectorySizeInBytes;
- (id)healthDirectoryURL;
- (id)healthDomainAccessorWithPairedDevice:(id)arg1;
- (id)healthLiteUserDefaultsDomain;
- (id)init;
- (id)initWithContainerDirectoryPath:(id)arg1;
- (id)initWithHealthDirectoryPath:(id)arg1 medicalIDDirectoryPath:(id)arg2;
- (void)invalidateAllServersForProfile:(id)arg1;
- (void)invalidateAndWait;
- (id)mainQueue;
- (id)medicalIDDirectoryPath;
- (id)nanoPairedDeviceRegistry;
- (void)obliterateAndTerminateWithOptions:(unsigned long long)arg1 reason:(id)arg2 completion:(id /* block */)arg3;
- (id)pairedSyncCoordinatorWithServiceName:(id)arg1;
- (void)performBlockWithPowerAssertionIdentifier:(id)arg1 transactionName:(id)arg2 powerAssertionInterval:(double)arg3 block:(id /* block */)arg4;
- (id)pluginManager;
- (id)primaryProfile;
- (id)processStateManager;
- (id)profileManager;
- (id)queryManager;
- (void)registerForDaemonReady:(id)arg1;
- (void)registerForLaunchNotification:(const char *)arg1;
- (id)serviceListener;
- (void)setAchievementAssetManager:(id)arg1;
- (void)setAchievementDefinitionAlertManager:(id)arg1;
- (void)setAchievementDoctorManager:(id)arg1;
- (void)setAchievementEvaluationDelegate:(id)arg1;
- (void)setAlertSuppressionService:(id)arg1;
- (void)setCompanionAchievementManager:(id)arg1;
- (void)setDaemonTester:(id)arg1;
- (void)setDynamicAchievementDefinitionDataStore:(id)arg1;
- (void)start;
- (void)terminateClean:(bool)arg1 reason:(id)arg2;
- (void)unitTest_didCreateProfile:(id)arg1;
- (void)unitTest_queryServerDidInit:(id)arg1;
- (void)unregisterForLaunchNotification:(const char *)arg1;

@end
