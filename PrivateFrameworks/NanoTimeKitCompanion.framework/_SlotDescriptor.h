/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _SlotDescriptor : NSObject <NTKRestrictedApplicationsChangeObserver> {
    unsigned long long  _allowedTypes;
    long long  _family;
    unsigned long long  _slotAllowedTypes;
    NSArray * _typesRankedList;
}

@property (nonatomic, readonly) unsigned long long allowedTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long family;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *typesRankedList;

+ (id)descriptorWithComplicationFamily:(long long)arg1 complicationTypesRankedList:(id)arg2 allowedComplicationTypes:(unsigned long long)arg3;

- (void).cxx_destruct;
- (unsigned long long)allowedTypes;
- (bool)allowsType:(unsigned long long)arg1;
- (long long)family;
- (void)restrictedApplicationsDidChange;
- (id)typesRankedList;

@end
