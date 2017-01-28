/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteLocalContactResultTransformBuilder : NSObject {
    unsigned long long  _builtContactType;
    CNAutocompleteResultFactory * _factory;
    NSMutableArray * _transforms;
}

@property unsigned long long builtContactType;

+ (long long)addressTypeForProperty:(id)arg1;
+ (id)localContactBuilderWithResultFactory:(id)arg1;
+ (id)resultValueForContactPropertyValue:(id)arg1 propertyKey:(id)arg2 contact:(id)arg3;
+ (id)serverContactBuilderWithResultFactory:(id)arg1;
+ (id)suggestedContactBuilderWithResultFactory:(id)arg1;

- (void).cxx_destruct;
- (void)addTransformForProperty:(id)arg1;
- (id)build;
- (id)buildAggregateTransform;
- (unsigned long long)builtContactType;
- (id)initWithResultFactory:(id)arg1;
- (id)makeTransformForProperty:(id)arg1;
- (void)setBuiltContactType:(unsigned long long)arg1;

@end
