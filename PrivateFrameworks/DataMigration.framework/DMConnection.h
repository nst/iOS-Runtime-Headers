/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
 */

@interface DMConnection : DMXPCConnection <DMMigratorServiceProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)changeVisibility:(bool)arg1 completion:(id)arg2;
- (void)forceMigrationOnNextRebootWithCompletion:(id)arg1;
- (void)isMigrationNeeded:(id)arg1;
- (void)migrateCheckingNecessity:(bool)arg1 lastRelevantPlugin:(id)arg2 completion:(id)arg3;
- (void)orderedPluginIdentifiersWithCompletion:(id)arg1;
- (void)previousBuildVersion:(id)arg1;
- (void)reportMigrationFailure;
- (void)testMigrationUIWithProgress:(bool)arg1 forceInvert:(bool)arg2 completion:(id)arg3;
- (void)userDataDisposition:(id)arg1;

@end
