/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFTriggerBuilder : HFItemBuilder {
    HFMutableSetDiff * _actionSetBuilders;
    HFTriggerAnonymousActionSetBuilder * _anonymousActionSetBuilder;
    NSArray * _conditions;
    bool  _enabled;
    NSString * _name;
}

@property (nonatomic, retain) HFMutableSetDiff *actionSetBuilders;
@property (nonatomic, readonly) NSArray *actionSets;
@property (nonatomic, retain) HFTriggerAnonymousActionSetBuilder *anonymousActionSetBuilder;
@property (nonatomic, retain) NSArray *conditions;
@property (nonatomic) bool enabled;
@property (nonatomic, readonly) bool hasActions;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) bool requiresConfirmationToRun;
@property (nonatomic, readonly) HMTrigger *trigger;

+ (Class)homeKitRepresentationClass;
+ (bool)supportsConditions;
+ (id)triggerBuilderForTrigger:(id)arg1 inHome:(id)arg2;

- (void).cxx_destruct;
- (id)_performValidation;
- (id)_updateActionSets;
- (id)_updateAnonymousActionSet;
- (id)_updateConditions;
- (id)_updateEnabledState;
- (id)_updateName;
- (id)actionSetBuilders;
- (id)actionSets;
- (void)addAction:(id)arg1;
- (void)addActionSet:(id)arg1;
- (void)addCondition:(id)arg1;
- (id)anonymousActionSetBuilder;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (id)commitItem;
- (id)conditions;
- (bool)enabled;
- (bool)hasActions;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (id)name;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1;
- (void)removeAction:(id)arg1;
- (void)removeActionSet:(id)arg1;
- (void)removeAllActionsAndActionSets;
- (void)removeCondition:(id)arg1;
- (bool)requiresConfirmationToRun;
- (void)setActionSetBuilders:(id)arg1;
- (void)setAnonymousActionSetBuilder:(id)arg1;
- (void)setConditions:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setTrigger:(id)arg1;
- (id)trigger;
- (void)updateAction:(id)arg1;
- (void)updateActionSet:(id)arg1;
- (void)updateCondition:(id)arg1;

@end
