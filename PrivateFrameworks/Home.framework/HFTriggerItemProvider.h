/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFTriggerItemProvider : HFItemProvider {
    id  _filter;
    NSMutableSet * _triggerItems;
}

@property (nonatomic, copy) id filter;
@property (nonatomic, retain) NSMutableSet *triggerItems;

- (void).cxx_destruct;
- (id)filter;
- (id)initWithHome:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (void)setFilter:(id)arg1;
- (void)setTriggerItems:(id)arg1;
- (id)triggerItems;

@end
