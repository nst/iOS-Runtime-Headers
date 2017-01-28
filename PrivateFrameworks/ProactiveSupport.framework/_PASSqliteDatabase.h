/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

@interface _PASSqliteDatabase : NSObject {
    bool  _currentExclusivity;
    struct sqlite3 { } * _db;
    NSString * _filename;
    struct atomic_flag { 
        bool _Value; 
    }  _isClosed;
    bool  _isInMemory;
    NSOperationQueue * _operationQueue;
    NSCache * _queryCache;
    NSObject<OS_dispatch_queue> * _queue;
    struct _opaque_pthread_t { long long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[8176]; } * _threadInQueue;
    int  _transactionDepth;
    bool  _transactionRolledback;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) struct sqlite3 { }*handle;
@property (nonatomic, readonly) bool isInMemory;

+ (int)bindParam:(struct sqlite3_stmt { }*)arg1 name:(const char *)arg2 double:(double)arg3;
+ (int)bindParam:(struct sqlite3_stmt { }*)arg1 name:(const char *)arg2 int64:(long long)arg3;
+ (int)bindParam:(struct sqlite3_stmt { }*)arg1 name:(const char *)arg2 int:(int)arg3;
+ (int)bindParam:(struct sqlite3_stmt { }*)arg1 name:(const char *)arg2 nscoding:(id)arg3;
+ (int)bindParam:(struct sqlite3_stmt { }*)arg1 name:(const char *)arg2 nsdata:(id)arg3;
+ (int)bindParam:(struct sqlite3_stmt { }*)arg1 name:(const char *)arg2 nsstring:(id)arg3;
+ (int)bindParamToNull:(struct sqlite3_stmt { }*)arg1 name:(const char *)arg2;
+ (id)corruptionMarkerFilename;
+ (id)corruptionMarkerPathForPath:(id)arg1;
+ (id)inMemoryPath;
+ (bool)isInMemoryPath:(id)arg1;
+ (id)protectedDatabaseWithFilename:(id)arg1 error:(id*)arg2;
+ (id)protectedDatabaseWithFilename:(id)arg1 flags:(int)arg2 error:(id*)arg3;
+ (id)randomlyNamedInMemoryPathWithBaseName:(id)arg1;
+ (bool)shouldCacheSql:(const char *)arg1;
+ (id)sqliteDatabaseInMemoryWithError:(id*)arg1;
+ (id)sqliteDatabaseWithFilename:(id)arg1 error:(id*)arg2;
+ (id)sqliteDatabaseWithFilename:(id)arg1 flags:(int)arg2 error:(id*)arg3;
+ (void)truncateDatabaseAtPath:(id)arg1;

- (void).cxx_destruct;
- (void)_prepAndRunQuery:(id)arg1 columns:(id)arg2 dictionary:(id)arg3 onError:(id)arg4;
- (bool)_transactionWithExclusivity:(bool)arg1 transaction:(id)arg2;
- (void)_txnBegin;
- (void)_txnBeginExclusive;
- (void)_txnEnd;
- (void)_txnRollback;
- (void)clearCaches;
- (void)closePermanently;
- (id)corruptionMarkerPath;
- (bool)createSnapshot:(id)arg1;
- (id)dbErrorWithCode:(unsigned long long)arg1 sqliteReturnValue:(int)arg2 lastErrno:(int)arg3 query:(id)arg4;
- (void)dealloc;
- (id)description;
- (id)filename;
- (bool)frailReadTransaction:(id)arg1;
- (bool)frailWriteTransaction:(id)arg1;
- (id)freeSpace;
- (struct sqlite3 { }*)handle;
- (bool)hasColumnOnTable:(id)arg1 named:(id)arg2;
- (bool)hasIndexNamed:(id)arg1;
- (bool)hasTableNamed:(id)arg1;
- (id)initWithFilename:(id)arg1 flags:(int)arg2 error:(id*)arg3;
- (void)insertOrReplaceIntoTable:(id)arg1 dictionary:(id)arg2 onError:(id)arg3;
- (bool)isInMemory;
- (id)languageForFTSTable:(id)arg1;
- (long long)lastInsertRowId;
- (unsigned long long)numberOfRowsInTable:(id)arg1;
- (void)placeCorruptionMarker;
- (bool)prepAndRunNonDataQueries:(id)arg1 onError:(id)arg2;
- (bool)prepAndRunQuery:(id)arg1 onPrep:(id)arg2 onRow:(id)arg3 onError:(id)arg4;
- (void)prepQuery:(id)arg1 onPrep:(id)arg2 onError:(id)arg3;
- (void)readTransaction:(id)arg1;
- (bool)runQuery:(struct sqlite3_stmt { }*)arg1 onRow:(id)arg2;
- (bool)runQuery:(struct sqlite3_stmt { }*)arg1 onRow:(id)arg2 onError:(id)arg3;
- (id)selectColumns:(id)arg1 fromTable:(id)arg2 whereClause:(id)arg3 onPrep:(id)arg4 onError:(id)arg5;
- (bool)setUserVersion:(unsigned long long)arg1;
- (void)simulateOnDiskDatabase;
- (id)tablesWithColumnNamed:(id)arg1;
- (void)updateTable:(id)arg1 dictionary:(id)arg2 whereClause:(id)arg3 onError:(id)arg4;
- (unsigned long long)userVersion;
- (void)withDbLockNonblocking:(id)arg1;
- (void)writeTransaction:(id)arg1;

@end
