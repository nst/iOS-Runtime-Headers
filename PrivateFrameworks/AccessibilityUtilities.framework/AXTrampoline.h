/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXTrampoline : NSObject {
    id  _caller;
    Class  _targetClass;
    bool  _warnAboutUnknownSelectors;
}

@property (nonatomic) id caller;
@property (nonatomic) Class targetClass;
@property (nonatomic) bool warnAboutUnknownSelectors;

+ (void)methodDoesNotExistSentinal;
+ (id)methodNotFoundSentinal;
+ (id)trampolineWithCaller:(id)arg1 targetClass:(Class)arg2;

- (int (*)_findIMPForSelector:(SEL)arg1;
- (id)caller;
- (bool)callerIsClass;
- (void)dealloc;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)initWithCaller:(id)arg1 targetClass:(Class)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setCaller:(id)arg1;
- (void)setTargetClass:(Class)arg1;
- (void)setWarnAboutUnknownSelectors:(bool)arg1;
- (Class)targetClass;
- (bool)warnAboutUnknownSelectors;

@end
