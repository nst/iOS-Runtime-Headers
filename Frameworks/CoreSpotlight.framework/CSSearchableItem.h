/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSSearchableItem : NSObject <CSIndexQueuableItem, NSCopying, NSSecureCoding> {
    CSSearchableItemAttributeSet * _attributeSet;
}

@property (retain) CSSearchableItemAttributeSet *attributeSet;
@property (copy) NSString *bundleID;
@property (copy) NSString *domainIdentifier;
@property (copy) NSDate *expirationDate;
@property bool isUpdate;
@property bool noIndex;
@property (copy) NSString *protection;
@property (copy) NSString *uniqueIdentifier;

// Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight

+ (id)searchableItemFromUserActivity:(id)arg1 bundleID:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_fixBrokenAuthorNames:(id)arg1;
- (bool)_hasAttributesOfType:(id)arg1;
- (bool)_isFullyFormed;
- (void)_populateMissingPeopleWithNames:(id)arg1 emailAddresses:(id)arg2 itemPersons:(id)arg3 personDictionary:(id)arg4 contactProperties:(id)arg5 nameKey:(id)arg6 emailKey:(id)arg7 contactIdentifierKey:(id)arg8 personKey:(id)arg9 attributeSet:(id)arg10;
- (id)_propertiesDescription;
- (void)_standardizeDeprecatedProperties:(id)arg1;
- (void)_standardizeHTML:(id)arg1;
- (void)_standardizePeople:(id)arg1;
- (void)_updateWithSearchableItem:(id)arg1;
- (id)attributeSet;
- (id)attributes;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)domainIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)filteredSpotlightAttributes;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAttributeSet:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 domainIdentifier:(id)arg2 attributeSet:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isUpdate;
- (bool)noIndex;
- (id)protection;
- (id)searchableItem;
- (void)setAttributeSet:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setDomainIdentifier:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setIsUpdate:(bool)arg1;
- (void)setNoIndex:(bool)arg1;
- (void)setProtection:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)standardizeAttributes;
- (id)uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore

- (id)_cnui_valueForAttribute:(id)arg1;

@end
