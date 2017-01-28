/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXDataStore : NSObject {
    struct sqlite3 { } * _db;
    PETScalarEventTracker * _dbMigrationTracker;
    _ATXDuetHelper * _duetHelper;
    NSString * _path;
    NSObject<OS_dispatch_queue> * _queue;
    int  _restoreStartedCnt;
    unsigned long long  _schemaVersion;
}

+ (id)defaultPath;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_databaseSchema;
- (void)_disconnectFromDb;
- (void)_removeFeedbackForBundleId:(id)arg1;
- (bool)_reset;
- (void)_testMigrate;
- (void)addAppInstallForBundleId:(id)arg1 withDate:(id)arg2;
- (void)addAppLaunchForBundleId:(id)arg1 withDate:(id)arg2 withLaunchType:(long long)arg3;
- (void)addHistogramData:(id)arg1 forHistogramOfType:(long long)arg2;
- (id)appInfoForBundleId:(id)arg1;
- (void)beginRestoring;
- (void)clearAppInstallInfo;
- (void)clearAppLaunchInfo;
- (void)clearDatabase;
- (long long)configureDatabase;
- (long long)currentSchemaVersion;
- (void)dealloc;
- (void)deleteLaunchesFollowingBundle:(id)arg1;
- (void)enumerateAppInfoBundlesExecutingBlock:(id)arg1;
- (void)enumerateStateForApps:(id)arg1 withGlobalBlock:(id)arg2 thenWithPerAppBlock:(id)arg3;
- (void)enumerateStateForApps:(id)arg1 withGlobalBlock:(id)arg2 thenWithPerAppBlock:(id)arg3 readOnly:(bool)arg4;
- (void)enumerateStateForAppsReadOnly:(id)arg1 withGlobalBlock:(id)arg2 thenWithPerAppBlock:(id)arg3;
- (void)finishedRestoring;
- (id)getColumnNameForLaunchType:(long long)arg1;
- (id)histogramDataForHistogramType:(long long)arg1;
- (id)init;
- (id)initWithInMemoryDataStore;
- (id)initWithPath:(id)arg1 andDuetHelper:(id)arg2;
- (long long)launchedAppCount;
- (id)loadAppInfo;
- (id)loadDataFromFile:(id)arg1;
- (id)loadLaunchesFollowingBundle:(id)arg1;
- (void)migrate;
- (long long)migrateToVersion:(unsigned long long)arg1 withMigrationPlan:(id)arg2;
- (long long)migration_AppLaunchHistogramToTable;
- (long long)migration_DelinkFromCoreLocationVisitMonitoring;
- (long long)migration_InstallDateToAppTable;
- (long long)migration_LaunchHistoriesToAppTable;
- (long long)migration_RemoveAllSubsequentLaunches;
- (long long)migration_RemoveFeedbackForUninstalledApps;
- (long long)migration_RemoveRestoreUserDefault;
- (void)notifyObserversAboutRestoreCompletion;
- (void)notifyObserversAboutRestoreStart;
- (id)pathsToBackUp;
- (void)removeAllFeedback;
- (void)removeAppInfoForBundleId:(id)arg1;
- (void)removeAppLaunchesForBundleId:(id)arg1;
- (void)removeFeedbackForBundleId:(id)arg1;
- (bool)removeFile:(id)arg1;
- (long long)runMigrationPlan:(id)arg1;
- (void)runQuery:(id)arg1 onPrep:(id)arg2 onRow:(id)arg3 onError:(id)arg4;
- (long long)skipFromZeroSchema;
- (void)swapInDuetHelperStub:(id)arg1;
- (bool)updateOrInsertHistogramData:(id)arg1 forHistogram:(long long)arg2;
- (bool)updateOrInsertSubsequentLaunchCountData:(id)arg1 forBundleId:(id)arg2;
- (bool)updateOrInsertTimestamp:(long long)arg1 intoColumn:(id)arg2 forBundleId:(id)arg3;
- (void)updateSchemaVersionNumberTo:(long long)arg1;
- (void)writeLaunches:(id)arg1 followingBundle:(id)arg2;

@end
