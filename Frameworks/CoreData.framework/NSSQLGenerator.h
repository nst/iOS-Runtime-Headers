/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLGenerator : NSObject {
    NSSQLCore * _persistentStore;
}

+ (void)initialize;

- (id)_predicateForSpecificEntity:(id)arg1;
- (id)_predicateRestrictingSuperentitiesForEntity:(id)arg1;
- (id)_predicateRestrictingToSubentitiesForEntity:(id)arg1;
- (void)generateGroupByIntermediatesForProperties:(id)arg1 inContext:(id)arg2;
- (void)generateHavingIntermediateForPredicate:(id)arg1 inContext:(id)arg2;
- (void)generateIntermediateForLimit:(unsigned long long)arg1 inContext:(id)arg2;
- (void)generateIntermediateForOffset:(unsigned long long)arg1 inContext:(id)arg2;
- (id)generateIntermediatesForFetchInContext:(id)arg1 countOnly:(bool)arg2;
- (id)generateIntermediatesForUpdateInContext:(id)arg1;
- (void)generateOrderIntermediateInContext:(id)arg1;
- (void)generateSelectIntermediateInContext:(id)arg1;
- (id)generateUpdateColumnsIntermediateInContext:(id)arg1;
- (void)generateWhereIntermediatesInContext:(id)arg1;
- (id)initWithPersistentStore:(id)arg1;
- (id)initializeContextForFetchRequest:(id)arg1 ignoreInheritance:(bool)arg2 nestingLevel:(unsigned int)arg3 nestIsWhereScoped:(bool)arg4 requestContext:(id)arg5;
- (id)initializeContextForRequest:(id)arg1 ignoreInheritance:(bool)arg2 nestingLevel:(unsigned int)arg3;
- (id)initializeContextForUpdateRequest:(id)arg1;
- (id)newSQLStatementForFetchRequest:(id)arg1 ignoreInheritance:(bool)arg2 countOnly:(bool)arg3 nestingLevel:(unsigned int)arg4 nestIsWhereScoped:(bool)arg5 requestContext:(id)arg6;
- (id)newSQLStatementForRequest:(id)arg1 ignoreInheritance:(bool)arg2 countOnly:(bool)arg3 nestingLevel:(unsigned int)arg4 nestIsWhereScoped:(bool)arg5 requestContext:(id)arg6;
- (id)newSQLStatementForUpdateRequest:(id)arg1;
- (id)predicateForRequestInContext:(id)arg1;

@end
