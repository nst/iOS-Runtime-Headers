/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKParticipantToContactMatcher : NSObject {
    NSSet * _contactCompanyNames;
    NSSet * _contactEmailAddresses;
    NSSet * _contactNameComponents;
    NSArray * _contacts;
}

@property (nonatomic, retain) NSSet *contactCompanyNames;
@property (nonatomic, retain) NSSet *contactEmailAddresses;
@property (nonatomic, retain) NSSet *contactNameComponents;
@property (nonatomic, retain) NSArray *contacts;

+ (id)_allParticipantsOnItem:(id)arg1;
+ (id)_nameComponentsForContact:(id)arg1 reverse:(bool)arg2;
+ (id)_nameComponentsWithGivenName:(id)arg1 familyName:(id)arg2;

- (void).cxx_destruct;
- (void)_cacheContactData;
- (bool)anyContactMatchesAnyParticipant:(id)arg1;
- (bool)anyContactMatchesAnyParticipantFromItem:(id)arg1;
- (bool)anyContactMatchesParticipant:(id)arg1;
- (id)contactCompanyNames;
- (id)contactEmailAddresses;
- (id)contactNameComponents;
- (id)contacts;
- (id)initWithContacts:(id)arg1;
- (id)matchingParticipantsFromItem:(id)arg1;
- (id)matchingParticipantsFromParticipants:(id)arg1;
- (void)setContactCompanyNames:(id)arg1;
- (void)setContactEmailAddresses:(id)arg1;
- (void)setContactNameComponents:(id)arg1;
- (void)setContacts:(id)arg1;

@end
