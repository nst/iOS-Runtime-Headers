/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFTriggerItem : HFItem <HFHomeKitItemProtocol> {
    HMHome * _home;
    HMTrigger * _trigger;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMTrigger *trigger;

- (void).cxx_destruct;
- (id)_descriptionForTrigger:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)home;
- (id)homeKitObject;
- (id)init;
- (id)initWithHome:(id)arg1 trigger:(id)arg2;
- (id)trigger;

@end
