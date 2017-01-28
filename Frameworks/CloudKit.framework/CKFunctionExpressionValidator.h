/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFunctionExpressionValidator : CKPredicateValidatorInstance {
    NSArray * _argumentValidators;
    NSString * _functionName;
}

@property (nonatomic, retain) NSArray *argumentValidators;
@property (nonatomic, retain) NSString *functionName;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)argumentValidators;
- (id)functionName;
- (id)initWithFunctionName:(id)arg1 validators:(id)arg2;
- (void)setArgumentValidators:(id)arg1;
- (void)setFunctionName:(id)arg1;
- (bool)validate:(id)arg1 error:(id*)arg2;

@end
