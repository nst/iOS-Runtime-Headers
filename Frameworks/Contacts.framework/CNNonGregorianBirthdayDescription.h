/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNNonGregorianBirthdayDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void*)ABValueFromCNValue:(id)arg1;
- (id)CNValueForContact:(id)arg1;
- (id)CNValueFromABValue:(void*)arg1;
- (int)abPropertyID:(int*)arg1;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (id)fromPlistTransform;
- (id)init;
- (bool)isEqualForContact:(id)arg1 other:(id)arg2;
- (bool)isValidValue:(id)arg1 error:(id*)arg2;
- (bool)isValue:(id)arg1 equivalentToValue:(id)arg2;
- (bool)isValue:(id)arg1 preferredToEquivalentValue:(id)arg2;
- (void)setCNValue:(id)arg1 onContact:(id)arg2;
- (Class)valueClass;

@end
