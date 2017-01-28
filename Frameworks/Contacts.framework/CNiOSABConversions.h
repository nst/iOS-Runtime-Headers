/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABConversions : NSObject

+ (id)accountFromABAccount:(void*)arg1;
+ (id)accountsFromABAccounts:(struct __CFArray { }*)arg1;
+ (id)arrayByMappingTransform:(id)arg1 onCFArray:(struct __CFArray { }*)arg2;
+ (id)contactFromABPerson:(void*)arg1 keysToConvert:(id)arg2 mutable:(bool)arg3;
+ (id)contactFromABPerson:(void*)arg1 uniqueKeysToConvert:(id)arg2 mutable:(bool)arg3;
+ (id)contactIdentifierFromABPerson:(void*)arg1;
+ (id)contactMatchInfoFromABMatchMetadataDictionary:(id)arg1;
+ (id)contactPropertiesByABPropertyID;
+ (id)containerFromABSource:(void*)arg1 remote:(bool)arg2 includeDisabledSources:(bool)arg3;
+ (id)containersFromABSources:(struct __CFArray { }*)arg1 remote:(bool)arg2 includeDisabledSources:(bool)arg3;
+ (id)groupFromABGroup:(void*)arg1;
+ (id)groupsFromABGroups:(struct __CFArray { }*)arg1;
+ (id)personToContactTransformWithKeysToFetch:(id)arg1 mutable:(bool)arg2;
+ (void)updateContact:(id)arg1 fromABPerson:(void*)arg2 keysToConvert:(id)arg3 availableKeys:(id*)arg4;

@end
