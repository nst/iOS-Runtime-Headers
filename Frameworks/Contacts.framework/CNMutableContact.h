/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNMutableContact : CNContact {
    bool  _hasChanges;
}

@property (nonatomic, copy) NSDictionary *activityAlerts;
@property (nonatomic, copy) CNContactKeyVector *availableKeyDescriptor;
@property (nonatomic, copy) NSDateComponents *birthday;
@property (nonatomic, copy) NSArray *birthdays;
@property (nonatomic, copy) NSArray *calendarURIs;
@property (nonatomic, copy) CNActivityAlert *callAlert;
@property (nonatomic, copy) NSString *cardDAVUID;
@property (copy) NSString *companyName;
@property (nonatomic, copy) NSArray *contactRelations;
@property (nonatomic) long long contactType;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (nonatomic, copy) NSArray *dates;
@property (nonatomic, copy) NSString *departmentName;
@property (nonatomic, copy) NSArray *emailAddresses;
@property (nonatomic, copy) NSString *familyName;
@property (copy) NSString *firstName;
@property (nonatomic, copy) NSData *fullscreenImageData;
@property (nonatomic, copy) NSString *givenName;
@property (nonatomic, readonly) bool hasChanges;
@property (nonatomic) int iOSLegacyIdentifier;
@property (nonatomic, copy) NSData *imageData;
@property (nonatomic) bool imageDataAvailable;
@property (nonatomic, copy) NSArray *instantMessageAddresses;
@property (nonatomic, copy) NSString *jobTitle;
@property (copy) NSString *lastName;
@property (nonatomic, copy) NSString *linkIdentifier;
@property (nonatomic, copy) NSArray *linkedContacts;
@property (copy) NSString *maidenName;
@property (nonatomic, copy) NSString *mapsData;
@property (nonatomic, copy) NSString *middleName;
@property (nonatomic, copy) NSDate *modificationDate;
@property (nonatomic, copy) NSString *namePrefix;
@property (nonatomic, copy) NSString *nameSuffix;
@property (copy) NSString *nameTitle;
@property (nonatomic, copy) NSString *nickname;
@property (nonatomic, copy) NSDateComponents *nonGregorianBirthday;
@property (nonatomic, copy) NSString *note;
@property (nonatomic, copy) NSString *organizationName;
@property (nonatomic, copy) NSArray *phoneNumbers;
@property (nonatomic, copy) NSString *phonemeData;
@property (nonatomic, copy) NSString *phoneticCompanyName;
@property (nonatomic, copy) NSString *phoneticFamilyName;
@property (copy) NSString *phoneticFirstName;
@property (nonatomic, copy) NSString *phoneticGivenName;
@property (copy) NSString *phoneticLastName;
@property (nonatomic, copy) NSString *phoneticMiddleName;
@property (nonatomic, copy) NSString *phoneticOrganizationName;
@property (nonatomic, copy) NSArray *postalAddresses;
@property (nonatomic, copy) NSString *preferredApplePersonaIdentifier;
@property (getter=isPreferredForImage, nonatomic) bool preferredForImage;
@property (getter=isPreferredForName, nonatomic) bool preferredForName;
@property (nonatomic, copy) NSString *preferredLikenessSource;
@property (nonatomic, copy) NSString *previousFamilyName;
@property (nonatomic, copy) NSString *pronunciationFamilyName;
@property (nonatomic, copy) NSString *pronunciationGivenName;
@property (copy) NSArray *relatedNames;
@property (nonatomic, copy) NSString *searchIndex;
@property (nonatomic, copy) NSString *sectionForSortingByFamilyName;
@property (nonatomic, copy) NSString *sectionForSortingByGivenName;
@property (nonatomic, copy) CNContact *snapshot;
@property (nonatomic, copy) NSArray *socialProfiles;
@property (nonatomic, copy) NSString *storeIdentifier;
@property (nonatomic, copy) NSDictionary *storeInfo;
@property (nonatomic, copy) CNActivityAlert *textAlert;
@property (nonatomic, copy) NSData *thumbnailImageData;
@property (nonatomic, copy) NSArray *urlAddresses;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

+ (id)imageDataDescriptions;
+ (id)unifyContacts:(id)arg1;

- (id)availableKeyDescriptor;
- (id)birthday;
- (id)calendarURIs;
- (id)callAlert;
- (id)cardDAVUID;
- (id)contactRelations;
- (long long)contactType;
- (id)copyWithSelfAsSnapshot;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (id)dates;
- (id)departmentName;
- (id)emailAddresses;
- (id)familyName;
- (id)freeze;
- (id)freezeWithSelfAsSnapshot;
- (id)fullscreenImageData;
- (id)givenName;
- (bool)hasChanges;
- (id)imageData;
- (bool)imageDataAvailable;
- (id)initWithContact:(id)arg1;
- (id)instantMessageAddresses;
- (id)jobTitle;
- (id)linkIdentifier;
- (id)mapsData;
- (id)middleName;
- (id)modificationDate;
- (id)namePrefix;
- (id)nameSuffix;
- (id)nickname;
- (id)nonGregorianBirthday;
- (id)note;
- (id)organizationName;
- (void)overwriteStateFromContact:(id)arg1;
- (id)phoneNumbers;
- (id)phonemeData;
- (id)phoneticFamilyName;
- (id)phoneticGivenName;
- (id)phoneticMiddleName;
- (id)phoneticOrganizationName;
- (id)postalAddresses;
- (id)preferredApplePersonaIdentifier;
- (bool)preferredForImage;
- (bool)preferredForName;
- (id)preferredLikenessSource;
- (id)previousFamilyName;
- (id)pronunciationFamilyName;
- (id)pronunciationGivenName;
- (void)resetToNewContact;
- (id)searchIndex;
- (id)sectionForSortingByFamilyName;
- (id)sectionForSortingByGivenName;
- (void)setActivityAlerts:(id)arg1;
- (void)setAvailableKeyDescriptor:(id)arg1;
- (void)setBirthday:(id)arg1;
- (void)setCalendarURIs:(id)arg1;
- (void)setCallAlert:(id)arg1;
- (void)setCardDAVUID:(id)arg1;
- (void)setCompanyName:(id)arg1;
- (void)setContactRelations:(id)arg1;
- (void)setContactType:(long long)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDates:(id)arg1;
- (void)setDepartmentName:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setFamilyName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setFrozenSelfAsSnapshot;
- (void)setFullscreenImageData:(id)arg1;
- (void)setGivenName:(id)arg1;
- (void)setIOSLegacyIdentifier:(int)arg1;
- (void)setImageData:(id)arg1;
- (void)setImageDataAvailable:(bool)arg1;
- (void)setInstantMessageAddresses:(id)arg1;
- (void)setJobTitle:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setLinkIdentifier:(id)arg1;
- (void)setLinkedContacts:(id)arg1;
- (void)setMaidenName:(id)arg1;
- (void)setMapsData:(id)arg1;
- (void)setMiddleName:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setNamePrefix:(id)arg1;
- (void)setNameSuffix:(id)arg1;
- (void)setNameTitle:(id)arg1;
- (void)setNickname:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)setNonGregorianBirthday:(id)arg1;
- (void)setNote:(id)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setPhoneNumbers:(id)arg1;
- (void)setPhonemeData:(id)arg1;
- (void)setPhoneticCompanyName:(id)arg1;
- (void)setPhoneticFamilyName:(id)arg1;
- (void)setPhoneticFirstName:(id)arg1;
- (void)setPhoneticGivenName:(id)arg1;
- (void)setPhoneticLastName:(id)arg1;
- (void)setPhoneticMiddleName:(id)arg1;
- (void)setPhoneticOrganizationName:(id)arg1;
- (void)setPostalAddresses:(id)arg1;
- (void)setPreferredApplePersonaIdentifier:(id)arg1;
- (void)setPreferredForImage:(bool)arg1;
- (void)setPreferredForName:(bool)arg1;
- (void)setPreferredLikenessSource:(id)arg1;
- (void)setPreviousFamilyName:(id)arg1;
- (void)setPronunciationFamilyName:(id)arg1;
- (void)setPronunciationGivenName:(id)arg1;
- (void)setRelatedNames:(id)arg1;
- (void)setSearchIndex:(id)arg1;
- (void)setSectionForSortingByFamilyName:(id)arg1;
- (void)setSectionForSortingByGivenName:(id)arg1;
- (void)setSnapshot:(id)arg1;
- (void)setSocialProfiles:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (void)setStoreInfo:(id)arg1;
- (void)setTextAlert:(id)arg1;
- (void)setThumbnailImageData:(id)arg1;
- (void)setUrlAddresses:(id)arg1;
- (id)socialProfiles;
- (id)textAlert;
- (id)thumbnailImageData;
- (void)updateImageDataAvailableFromCurrentState;
- (void)updateStateFromContact:(id)arg1;
- (id)urlAddresses;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (id)addProperties:(id)arg1 excludingProperties:(id)arg2 fromContact:(id)arg3;
- (bool)hasNonPersistedData;
- (void)removePhoto;
- (bool)saveContactInStore:(id)arg1 group:(id)arg2 container:(id)arg3;
- (bool)saveContactInStore:(id)arg1 group:(id)arg2 container:(id)arg3 request:(id)arg4;
- (void)setBirthdays:(id)arg1;
- (void)updateContactType:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (void)populateNamesFromComponents:(id)arg1;

@end
