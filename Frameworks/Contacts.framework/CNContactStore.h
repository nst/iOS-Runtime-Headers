/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNContactStore : NSObject

@property (nonatomic, readonly) CNiOSAddressBook *addressBook;
@property (nonatomic, readonly) bool hasMultipleGroupsOrAccounts;
@property (nonatomic, readonly) CNiOSAddressBookDataMapper *iOSMapper;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

+ (long long)authorizationStatusForEntityType:(long long)arg1;
+ (id)contactIdentifierFromInternalIdentifier:(id)arg1;
+ (bool)eraseAllDataAtLocationWithName:(id)arg1 error:(id*)arg2;
+ (bool)eraseAllDataAtURL:(id)arg1 error:(id*)arg2;
+ (void)initialize;
+ (id)internalIdentifierFromContactIdentifier:(id)arg1;
+ (id)standardLabelsForPropertyWithKey:(id)arg1;
+ (Class)storeClassWithIdentifier:(id)arg1;
+ (id)storeIdentifier;
+ (id)storeIdentifierFromContactIdentifier:(id)arg1;
+ (id)storeInfoClasses;
+ (id)storeWithEnvironment:(id)arg1 options:(unsigned long long)arg2;
+ (id)storeWithOptions:(unsigned long long)arg1;

- (id)_contactFromPersonID:(int)arg1 keysToFetch:(id)arg2;
- (id)_crossPlatformUnifiedMeContactWithKeysToFetch:(id)arg1 error:(id*)arg2;
- (id)_executeFetchRequestsWithInfos:(id)arg1 unifyResults:(bool)arg2 keysToFetch:(id)arg3 error:(id*)arg4;
- (id)_fetchRequestInfosForEmailOrPhoneForContact:(id)arg1;
- (id)_ios_meContactIdentifierWithError:(id*)arg1;
- (id)_ios_meContactWithKeysToFetch:(id)arg1 error:(id*)arg2;
- (id)accountsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)addressBook;
- (id)changeHistoryWithFetchRequest:(id)arg1 error:(id*)arg2;
- (bool)clearChangeHistoryForClient:(id)arg1 toSequenceNumber:(long long)arg2 error:(id*)arg3;
- (id)contactFromPerson:(void*)arg1;
- (id)contactFromPerson:(void*)arg1 keysToFetch:(id)arg2;
- (id)contactFromPerson:(void*)arg1 keysToFetch:(id)arg2 mutable:(bool)arg3;
- (id)contactFromPerson:(void*)arg1 mutable:(bool)arg2;
- (id)contactFromPersonID:(int)arg1;
- (id)contactFromPersonID:(int)arg1 keysToFetch:(id)arg2;
- (id)contactIdentifierFromPersonID:(int)arg1;
- (id)contactIdentifierWithMatchingDictionary:(id)arg1;
- (id)contactIdentifiersForFetchRequest:(id)arg1 error:(id*)arg2;
- (id)contactWithMatchingDictionary:(id)arg1 keysToFetch:(id)arg2;
- (id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2;
- (id)contactsMatchingPropertiesOfContact:(id)arg1 unifyResults:(bool)arg2 keysToFetch:(id)arg3 error:(id*)arg4;
- (id)containersMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)defaultContainerIdentifier;
- (id)descriptorForRequiredKeysForMatchingDictionary;
- (bool)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(id)arg3;
- (bool)enumerateContactsWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(id)arg3;
- (id)executeFetchRequest:(id)arg1 completion:(id)arg2;
- (id)executeFetchRequest:(id)arg1 progressiveResults:(id)arg2 completion:(id)arg3;
- (bool)executeSaveRequest:(id)arg1 error:(id*)arg2;
- (bool)executeSaveRequest:(id)arg1 response:(id*)arg2 error:(id*)arg3;
- (id)groupWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)groupsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (bool)hasMultipleGroupsOrAccounts;
- (id)iOSMapper;
- (id)identifierWithError:(id*)arg1;
- (id)init;
- (id)initWithAddressBook:(void*)arg1;
- (id)initWithDataLocationName:(id)arg1;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithEnvironment:(id)arg1 options:(unsigned long long)arg2;
- (id)matchingDictionaryForContact:(id)arg1;
- (id)meContactIdentifierWithError:(id*)arg1;
- (id)membersOfGroupWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;
- (id)originForSuggestion:(id)arg1 error:(id*)arg2;
- (void*)personFromContact:(id)arg1;
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id*)arg2;
- (bool)registerClientForChangeHistory:(id)arg1 error:(id*)arg2;
- (id)requestAccessForEntityType:(long long)arg1;
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(id)arg2;
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id*)arg2;
- (bool)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id*)arg4;
- (bool)setDefaultContainer:(id)arg1 forAccount:(id)arg2 error:(id*)arg3;
- (bool)setMeContact:(id)arg1 error:(id*)arg2;
- (bool)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id*)arg3;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id*)arg2;
- (bool)supportsSaveRequest:(id)arg1;
- (id)unifiedContactCountWithError:(id*)arg1;
- (id)unifiedContactWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;
- (id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;
- (id)unifiedMeContactMatchingEmailAddress:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;
- (id)unifiedMeContactMatchingEmailAddresses:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;
- (id)unifiedMeContactWithKeysToFetch:(id)arg1 error:(id*)arg2;
- (bool)unregisterClientForChangeHistory:(id)arg1 error:(id*)arg2;
- (id)usedLabelsForPropertyWithKey:(id)arg1 error:(id*)arg2;
- (id)userActivityUserInfoForContact:(id)arg1;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (id)_cnui_accountForContact:(id)arg1;
- (id)_cnui_containerForContact:(id)arg1;
- (id)_cnui_policyForContact:(id)arg1;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

- (id)_contactForEmailAddress:(id)arg1 keysToFetch:(id)arg2;
- (id)mf_fetchContactForEmailAddress:(id)arg1 keysToFetch:(id)arg2;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

- (id)contactForDestinationId:(id)arg1;
- (id)contactForDestinationId:(id)arg1 keysToFetch:(id)arg2;
- (id)contactForIdentifier:(id)arg1;
- (id)contactForIdentifier:(id)arg1 keysToFetch:(id)arg2;

@end
