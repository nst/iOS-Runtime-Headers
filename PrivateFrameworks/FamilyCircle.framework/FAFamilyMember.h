/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FAFamilyMember : NSObject <NSSecureCoding> {
    NSDictionary * _dictionary;
}

@property (nonatomic, readonly) unsigned long long age;
@property (nonatomic, readonly, copy) NSString *appleID;
@property (nonatomic, readonly, copy) NSDictionary *dictionary;
@property (nonatomic, readonly, copy) NSNumber *dsid;
@property (nonatomic, readonly, copy) NSString *firstName;
@property (nonatomic, readonly) bool hasAskToBuyEnabled;
@property (nonatomic, readonly) bool hasLinkediTunesAccount;
@property (nonatomic, readonly) bool hasParentalControlsEnabled;
@property (nonatomic, readonly, copy) NSString *hashedDSID;
@property (nonatomic, readonly) NSNumber *iTunesAccountDSID;
@property (nonatomic, readonly, copy) NSString *iTunesAccountUsername;
@property (nonatomic, readonly, copy) NSString *inviteEmail;
@property (nonatomic, readonly) bool isChildAccount;
@property (nonatomic, readonly) bool isMe;
@property (nonatomic, readonly) bool isParent;
@property (nonatomic, readonly, copy) NSDate *joinedDate;
@property (nonatomic, readonly, copy) NSString *lastName;
@property (nonatomic, readonly, copy) NSString *memberTypeDisplayString;
@property (nonatomic, readonly, copy) NSString *memberTypeString;
@property (nonatomic, readonly, copy) NSString *statusString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)age;
- (id)appleID;
- (id)description;
- (id)dictionary;
- (id)dsid;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchFamilyPhotoWithRequestedSize:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)fetchFamilyPhotoWithRequestedSize:(unsigned long long)arg1 fallbackToLocalAddressBook:(bool)arg2 completionHandler:(id)arg3;
- (id)firstName;
- (bool)hasAskToBuyEnabled;
- (bool)hasLinkediTunesAccount;
- (bool)hasParentalControlsEnabled;
- (id)hashedDSID;
- (id)iTunesAccountDSID;
- (id)iTunesAccountUsername;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)inviteEmail;
- (bool)isChildAccount;
- (bool)isMe;
- (bool)isParent;
- (id)joinedDate;
- (id)lastName;
- (id)memberTypeDisplayString;
- (id)memberTypeString;
- (id)statusString;

@end
