/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFServiceItemProvider : HFItemProvider {
    id  _filter;
    <HFCharacteristicValueSource> * _overrideValueSource;
    NSMutableSet * _serviceItems;
    NSArray * _serviceTypes;
}

@property (nonatomic, copy) id filter;
@property (nonatomic, retain) <HFCharacteristicValueSource> *overrideValueSource;
@property (nonatomic, retain) NSMutableSet *serviceItems;
@property (nonatomic, retain) NSArray *serviceTypes;
@property (nonatomic, retain) <HFCharacteristicValueSource> *valueSource;

+ (id)standardServices;

- (void).cxx_destruct;
- (id)filter;
- (id)initWithHome:(id)arg1;
- (id)initWithHome:(id)arg1 serviceTypes:(id)arg2;
- (id)invalidationReasons;
- (id)items;
- (id)overrideValueSource;
- (id)reloadItems;
- (id)serviceItems;
- (id)serviceTypes;
- (void)setFilter:(id)arg1;
- (void)setOverrideValueSource:(id)arg1;
- (void)setServiceItems:(id)arg1;
- (void)setServiceTypes:(id)arg1;
- (void)setValueSource:(id)arg1;
- (id)valueSource;

@end