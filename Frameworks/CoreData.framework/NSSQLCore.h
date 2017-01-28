/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLCore : NSPersistentStore <NSFilePresenter> {
    NSSQLiteAdapter * _adapter;
    NSSQLCoreDispatchManager * _dispatchManager;
    NSString * _externalDataLinksDirectory;
    NSString * _externalDataReferencesDirectory;
    NSGenerationalRowCache * _generationalRowCache;
    bool  _metadataIsClean;
    NSSQLModel * _model;
    id  _observer;
    NSSQLiteConnection * _queryGenerationTrackingConnection;
    NSSQLiteConnection * _schemaValidationConnection;
    struct _sqlCoreFlags { 
        unsigned int useSyntaxColoredLogging : 1; 
        unsigned int checkedExternalReferences : 1; 
        unsigned int fileProtectionType : 3; 
        unsigned int notifyFOKChanges : 1; 
        unsigned int initializationComplete : 1; 
        unsigned int connectionsAreLocal : 1; 
        unsigned int isXPCDelegate : 1; 
        unsigned int queryGenerationInitializationFailed : 1; 
        unsigned int _RESERVED : 22; 
    }  _sqlCoreFlags;
    int  _sqlCoreStateLock;
    NSMutableDictionary * _storeMetadata;
    int  _transactionInMemorySequence;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInitialized;
@property (nonatomic, readonly) NSSQLModel *model;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;

+ (bool)_destroyPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)_figureOutWhereExternalReferencesEndedUpRelativeTo:(id)arg1;
+ (bool)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 error:(id*)arg5;
+ (id)cachedModelForPersistentStoreWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (bool)coloredLoggingDefault;
+ (int)debugDefault;
+ (void)initialize;
+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2;
+ (id)metadataForPersistentStoreWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (Class)migrationManagerClass;
+ (Class)rowCacheClass;
+ (bool)sanityCheckFileAtURL:(id)arg1 error:(id*)arg2;
+ (void)setColoredLoggingDefault:(bool)arg1;
+ (void)setDebugDefault:(int)arg1;
+ (bool)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3;
+ (bool)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (bool)useConcurrentFetching;

- (bool)_aContextSomewhereCaresAboutGenerations;
- (id)_allOrderKeysForDestination:(id)arg1 inRelationship:(id)arg2 error:(id*)arg3;
- (void)_cacheModelIfNecessaryUsingConnection:(id)arg1;
- (void)_cacheRows:(id)arg1;
- (void)_checkAndRepairCorrelationTables:(bool)arg1 storeVersionNumber:(id)arg2 usingConnection:(id)arg3;
- (bool)_checkAndRepairSchemaUsingConnection:(id)arg1;
- (bool)_checkAndRepairTriggersUsingConnection:(id)arg1;
- (id)_collectSkewedComponents:(id*)arg1 usingConnection:(id)arg2;
- (struct __CFArray { }*)_deleteAllRowsNoRelationshipIntegrityForEntityWithAllSubentities:(id)arg1;
- (void)_disconnectAllConnections;
- (id)_dissectCorrelationTableCreationSQL:(id)arg1;
- (void)_doBasicTableNameCheckUsingConnection:(id)arg1;
- (void)_doUnboundedGrowthCheckAndConstraintUsingConnection:(id)arg1;
- (void)_ensureDatabaseMatchesModel;
- (id)_externalDataLinksDirectory;
- (void)_fixPrimaryKeyTableFromEntitiesAndJoinsUsingConnection:(id)arg1;
- (void)_fixPrimaryKeyTableFromEntitiesUsingConnection:(id)arg1;
- (bool)_fixPrimaryKeyTablesUsingConnection:(id)arg1;
- (void)_initializeQueryGenerationTrackingConnection;
- (id)_loadAndSetMetadata;
- (id)_loadAndSetMetadataReadOnly;
- (id)_newObjectIDForEntity:(id)arg1 referenceData64:(unsigned long long)arg2;
- (id)_newObjectIDForEntityDescription:(id)arg1 pk:(long long)arg2;
- (id)_newOrderedRelationshipInformationForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (id)_newReservedKeysForEntities:(id)arg1 counts:(id)arg2;
- (id)_newRowDataForXPCFetch:(id)arg1 variables:(id)arg2 context:(id)arg3 error:(id*)arg4;
- (id)_newValuesForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (Class)_objectIDClass;
- (bool)_prepareForExecuteRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (void)_purgeRowCache;
- (bool)_rebuildTriggerSchemaUsingConnection:(id)arg1 recomputeValues:(bool)arg2 error:(id*)arg3;
- (bool)_refreshTriggerValues:(id*)arg1;
- (bool)_registerNewQueryGenerationIdentifier:(id)arg1;
- (void)_repairDatabaseCorrelationTables:(id)arg1 brokenHashModel:(id)arg2 storeVersionNumber:(id)arg3 recurse:(bool)arg4 usingConnection:(id)arg5;
- (void)_setMetadata:(id)arg1;
- (void)_setMetadata:(id)arg1 clean:(bool)arg2;
- (id)_storeInfoForEntityDescription:(id)arg1;
- (id)_ubiquityDictionaryForAttribute:(id)arg1 onObject:(id)arg2;
- (void)_uncacheRows:(id)arg1;
- (bool)_unload:(id*)arg1;
- (void)_updateAutoVacuumMetadataWithValues:(id)arg1;
- (bool)_updateToVersion640PrimaryKeyTableUsingStatements:(id)arg1 connection:(id)arg2;
- (void)_useModel:(id)arg1;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id)arg1;
- (id)adapter;
- (void)addPeerRange:(id)arg1;
- (void)addPeerRangeForPeerID:(id)arg1 entityName:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 peerRangeStart:(id)arg5 peerRangeEnd:(id)arg6;
- (id)allPeerRanges;
- (id)cachedModelWithError:(id*)arg1;
- (void)configureUbiquityMetadataTable;
- (id)connectionForMigration;
- (id)createMapOfEntityNameToPKMaxForEntities:(id)arg1;
- (id)createMapOfEntityNameToPKMaxForEntitiesFromPKTable:(id)arg1;
- (id)createMapOfEntityNameToPKMaxForEntitiesFromUBRangeTable:(id)arg1;
- (id)currentQueryGeneration;
- (void)dealloc;
- (id)dispatchManager;
- (void)dispatchRequest:(id)arg1 withRetries:(long long)arg2;
- (void)dropUbiquityTables;
- (id)entityForEntityDescription:(id)arg1;
- (id)entityForFetchRequest:(id)arg1;
- (id)entityForObject:(id)arg1;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)externalDataLinksDirectory;
- (id)externalDataReferencesDirectory;
- (id)externalLocationForFileWithUUID:(id)arg1;
- (id)fetchTableNames;
- (id)fetchUbiquityKnowledgeVector;
- (int)fileProtectionLevel;
- (void)freeQueryGenerationWithIdentifier:(id)arg1;
- (id)identifier;
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;
- (bool)isInitialized;
- (bool)isUbiquitized;
- (bool)load:(id*)arg1;
- (bool)loadMetadata:(id*)arg1;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 generation:(id)arg2;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 generation:(id)arg2;
- (id)metadata;
- (id)metadataToWrite;
- (id)model;
- (id)newFetchUUIDSForSubentitiesRootedAt:(id)arg1;
- (struct _NSScalarObjectID { Class x1; }*)newForeignKeyID:(long long)arg1 entity:(id)arg2;
- (struct _NSScalarObjectID { Class x1; }*)newObjectIDForEntity:(id)arg1 pk:(long long)arg2;
- (id)newObjectIDSetsForToManyPrefetchingRequest:(id)arg1 andSourceObjectIDs:(id)arg2 orderColumnName:(id)arg3;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (Class)objectIDFactoryForEntity:(id)arg1;
- (Class)objectIDFactoryForSQLEntity:(id)arg1;
- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (id)processBatchDelete:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)processBatchUpdate:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)processCountRequest:(id)arg1 inContext:(id)arg2;
- (id)processFetchRequest:(id)arg1 inContext:(id)arg2;
- (id)processRefreshObjects:(id)arg1 inContext:(id)arg2;
- (id)processSaveChanges:(id)arg1 forContext:(id)arg2;
- (void)recomputePrimaryKeyMaxForEntities:(id)arg1;
- (void)removeRowCacheForGenerationWithIdentifier:(id)arg1;
- (void)removeUbiquityMetadata;
- (void)replaceUbiquityKnowledgeVector:(id)arg1;
- (void)resetExternalDataReferencesDirectories;
- (id)rowCacheForContext:(id)arg1;
- (id)rowCacheForGeneration:(id)arg1;
- (id)safeguardLocationForFileWithUUID:(id)arg1;
- (id)schemaValidationConnection;
- (void)setConnectionsAreLocal:(bool)arg1;
- (void)setExclusiveLockingMode:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setUbiquityTableValue:(id)arg1 forKey:(id)arg2;
- (bool)shouldNotifyFOKChanges;
- (bool)supportsComplexFeatures;
- (bool)supportsConcurrentRequestHandling;
- (bool)supportsGenerationalQuerying;
- (id)type;
- (id)ubiquityTableKeysAndValues;
- (id)ubiquityTableValueForKey:(id)arg1;
- (void)updateUbiquityKnowledgeForPeerWithID:(id)arg1 andTransactionNumber:(id)arg2;
- (void)updateUbiquityKnowledgeVector:(id)arg1;
- (void)willRemoveFromPersistentStoreCoordinator:(id)arg1;

@end
