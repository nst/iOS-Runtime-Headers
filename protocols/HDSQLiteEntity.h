/* Generated by RuntimeBrowser.
 */

@protocol HDSQLiteEntity <NSObject>

@required

+ (NSArray *)allDatabaseColumnNames;
+ (NSString *)associationPropertyForEntityClass:(Class)arg1;
+ (NSArray *)columnsDefinition;
+ (NSString *)databaseName;
+ (NSString *)databaseTable;
+ (HDSQLiteStatement *)deleteStatementWithProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;
+ (NSString *)disambiguatedDatabaseTable;
+ (NSString *)disambiguatedSQLForProperty:(NSString *)arg1;
+ (Class)entityForProperty:(NSString *)arg1;
+ (NSArray *)indices;
+ (NSSet *)joinClausesForProperty:(NSString *)arg1;
+ (NSArray *)privateSubEntities;
+ (NSArray *)tableAliases;

- (NSUUID *)UUIDForProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;
- (bool)booleanForProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;
- (NSDate *)dateForProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;
- (bool)deleteFromDatabase:(HDSQLiteDatabase *)arg1 error:(id*)arg2;
- (bool)getValuesForProperties:(void *)arg1 database:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 9: NSArray *, HDSQLiteDatabase *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSArray *, struct HDSQLiteRow { }*, void*
- (bool)getValuesForProperties:(void *)arg1 withDatabase:(void *)arg2 applier:(void *)arg3; // needs 3 arg types, found 9: NSArray *, HDSQLiteDatabase *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, NSArray *, struct HDSQLiteRow { }*, void*
- (id)valueForProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;

@optional

+ (NSString *)columnNameForSortIdentifier:(NSString *)arg1;

@end
