/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBLockScreenPluginContext : NSObject <NSCopying> {
    id  _auxiliaryAnimation;
    NSString * _name;
    <SBLockScreenPluginLifecycleObserver> * _observer;
    <FBSProcess> * _process;
    NSDictionary * _userInfo;
}

@property (nonatomic, copy) id auxiliaryAnimation;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) <SBLockScreenPluginLifecycleObserver> *observer;
@property (nonatomic, retain) <FBSProcess> *process;
@property (nonatomic, copy) NSDictionary *userInfo;

+ (id)contextWithName:(id)arg1;

- (void).cxx_destruct;
- (id)auxiliaryAnimation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)name;
- (id)observer;
- (id)process;
- (void)setAuxiliaryAnimation:(id)arg1;
- (void)setName:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)setProcess:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)userInfo;

@end