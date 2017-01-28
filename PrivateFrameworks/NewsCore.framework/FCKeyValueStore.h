/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCKeyValueStore : NSObject {
    FCKeyValueStoreClassRegistry * _classRegistry;
    unsigned long long  _clientVersion;
    <FCKeyValueStoreMigrating> * _migrator;
    NSString * _name;
    bool  _needSave;
    NSMutableDictionary * _objectsByKey;
    unsigned long long  _optionsMask;
    NSString * _storeDirectory;
    unsigned long long  _storeSize;
    FCMutexLock * _writeLock;
}

@property (nonatomic, retain) FCKeyValueStoreClassRegistry *classRegistry;
@property (nonatomic) unsigned long long clientVersion;
@property (nonatomic, retain) <FCKeyValueStoreMigrating> *migrator;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) bool needSave;
@property (nonatomic, retain) NSMutableDictionary *objectsByKey;
@property (nonatomic) unsigned long long optionsMask;
@property (nonatomic, retain) NSString *storeDirectory;
@property (nonatomic) unsigned long long storeSize;
@property (nonatomic, retain) FCMutexLock *writeLock;

+ (id)persistenceQueue;

- (void).cxx_destruct;
- (void)_clearStore;
- (id)_initializeStoreDirectoryWithName:(id)arg1;
- (bool)_isBackupEnabled;
- (id)_loadFromDisk;
- (void)_logCacheStatus;
- (void)_queueSave;
- (void)_saveAsyncWithCompletionHandler:(id)arg1;
- (bool)_shouldMigrateOnUpgrade;
- (void)addAllEntriesToDictionary:(id)arg1;
- (void)addEntriesFromDictionary:(id)arg1;
- (id)allKeys;
- (bool)boolValueForKey:(id)arg1;
- (id)classRegistry;
- (unsigned long long)clientVersion;
- (bool)containsObjectForKey:(id)arg1;
- (id)init;
- (id)initWithName:(id)arg1 directory:(id)arg2 version:(unsigned long long)arg3 options:(unsigned long long)arg4 classRegistry:(id)arg5;
- (id)initWithName:(id)arg1 directory:(id)arg2 version:(unsigned long long)arg3 options:(unsigned long long)arg4 classRegistry:(id)arg5 migrator:(id)arg6;
- (id)migrator;
- (id)name;
- (bool)needSave;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectsByKey;
- (id)objectsForKeys:(id)arg1;
- (unsigned long long)optionsMask;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)saveWithCompletionHandler:(id)arg1;
- (void)setBoolValue:(bool)arg1 forKey:(id)arg2;
- (void)setClassRegistry:(id)arg1;
- (void)setClientVersion:(unsigned long long)arg1;
- (void)setMigrator:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNeedSave:(bool)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObjects:(id)arg1 forKeys:(id)arg2;
- (void)setObjectsByKey:(id)arg1;
- (void)setOptionBackupEnabled:(bool)arg1;
- (void)setOptionsMask:(unsigned long long)arg1;
- (void)setStoreDirectory:(id)arg1;
- (void)setStoreSize:(unsigned long long)arg1;
- (void)setWriteLock:(id)arg1;
- (id)storeDirectory;
- (unsigned long long)storeSize;
- (void)updateObjectsForKeys:(id)arg1 withBlock:(id)arg2;
- (id)writeLock;

@end
