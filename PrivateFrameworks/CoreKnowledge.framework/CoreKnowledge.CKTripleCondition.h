/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CoreKnowledge.CKTripleCondition : NSObject {
    void negated;
    void sql.storage;
    void type;
}

@property (nonatomic) bool negated;
@property (nonatomic, copy) NSString *sql;

- (id).cxx_destruct;
- (id)and:(id)arg1;
- (bool)evaluateOn:(id)arg1;
- (id)init;
- (id)init:(long long)arg1 value:(id)arg2 negated:(bool)arg3;
- (id)initWithSubject:(id)arg1 predicate:(id)arg2 object:(id)arg3;
- (id)initWithValue:(bool)arg1;
- (bool)negated;
- (id)or:(id)arg1;
- (void)setNegated:(bool)arg1;
- (void)setSql:(id)arg1;
- (id)sql;

@end
