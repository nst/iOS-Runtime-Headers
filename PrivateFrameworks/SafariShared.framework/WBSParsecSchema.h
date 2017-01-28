/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSParsecSchema : NSObject {
    NSError * _associatedError;
    Class  _expectedClass;
    bool  _optional;
    id  _specializedSchemaBlock;
    id  _validationBlock;
}

@property (nonatomic, retain) NSError *associatedError;
@property (nonatomic, retain) Class expectedClass;
@property (getter=isOptional, nonatomic) bool optional;
@property (nonatomic, copy) id specializedSchemaBlock;
@property (nonatomic, copy) id validationBlock;

+ (id)schemaForArrayWithElementSchema:(id)arg1;
+ (id)schemaForArrayWithElementSchema:(id)arg1 associatedError:(id)arg2;
+ (id)schemaForArrayWithElementSchema:(id)arg1 associatedError:(id)arg2 isOptional:(bool)arg3;
+ (id)schemaForDictionaryWithStructure:(id)arg1;
+ (id)schemaForDictionaryWithStructure:(id)arg1 associatedError:(id)arg2;
+ (id)schemaForDictionaryWithStructure:(id)arg1 associatedError:(id)arg2 isOptional:(bool)arg3;
+ (id)schemaWithConstantValue:(id)arg1;
+ (id)schemaWithExpectedClass:(Class)arg1;
+ (id)schemaWithExpectedClass:(Class)arg1 associatedError:(id)arg2;
+ (id)schemaWithExpectedClass:(Class)arg1 associatedError:(id)arg2 isOptional:(bool)arg3;

- (void).cxx_destruct;
- (id)_initWithExpectedClass:(Class)arg1 associatedError:(id)arg2 isOptional:(bool)arg3;
- (bool)_validateChild:(id)arg1 ofParent:(id)arg2 withParentAssociatedError:(id)arg3 errorHandler:(id)arg4;
- (id)associatedError;
- (Class)expectedClass;
- (bool)isOptional;
- (void)setAssociatedError:(id)arg1;
- (void)setExpectedClass:(Class)arg1;
- (void)setOptional:(bool)arg1;
- (void)setSpecializedSchemaBlock:(id)arg1;
- (void)setValidationBlock:(id)arg1;
- (id)specializedSchemaBlock;
- (void)validateObject:(id)arg1 withErrorHandler:(id)arg2;
- (id)validationBlock;

@end
