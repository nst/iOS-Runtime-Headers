/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNPostalAddressesDescription : CNCompoundMultiValuePropertyDescription <CNAbstractPropertyDescription>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void*)ABMultiValueValueFromCNLabeledValueValue:(id)arg1;
- (id)CNLabeledValueValueFromABMultiValueValue:(void*)arg1;
- (id)CNValueForContact:(id)arg1;
- (int)abPropertyID:(int*)arg1;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (id)dictionaryTransform;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (id)fromDictionaryTransform;
- (id)init;
- (bool)isEqualForContact:(id)arg1 other:(id)arg2;
- (bool)isNonnull;
- (bool)isValue:(id)arg1 equivalentToValue:(id)arg2;
- (Class)labeledValueClass;
- (void)setCNValue:(id)arg1 onContact:(id)arg2;
- (id)summarizationKeys;

@end
