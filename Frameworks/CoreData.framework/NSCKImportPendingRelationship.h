/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCKImportPendingRelationship : NSObject {
    NSString * _entityName;
    NSNumber * _fetchedPKNum;
    bool  _isDeleted;
    NSCKImportOperation * _operation;
    NSString * _recordName;
    NSString * _relatedEntityName;
    NSString * _relatedRecordName;
    NSString * _relationshipName;
}

@property (nonatomic, readonly) NSString *entityName;
@property (nonatomic, readonly) NSNumber *fetchedPKNum;
@property (nonatomic, readonly) bool isDeleted;
@property (nonatomic, readonly) NSCKImportOperation *operation;
@property (nonatomic, readonly) NSString *recordName;
@property (nonatomic, readonly) NSString *relatedEntityName;
@property (nonatomic, readonly) NSString *relatedRecordName;
@property (nonatomic, readonly) NSString *relationshipName;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)entityName;
- (id)fetchedPKNum;
- (id)initWithFailedRelationship:(id)arg1 andOperation:(id)arg2;
- (id)initWithFetchResult:(id)arg1 operationsByPk:(id)arg2 andSQLEntity:(id)arg3;
- (bool)isDeleted;
- (id)operation;
- (id)recordName;
- (id)relatedEntityName;
- (id)relatedRecordName;
- (id)relationshipName;
- (void)setBindValue:(id)arg1;

@end
