/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKUser : NSObject <CRKCloudStoringSubItem, NSCopying, NSSecureCoding> {
    NSString * _displayName;
    NSString * _familyName;
    NSString * _givenName;
    NSString * _imageIdentifier;
    NSString * _imageURL;
    NSString * _phoneticFamilyName;
    NSString * _phoneticGivenName;
    long long  _role;
    bool  _useMeCardIfAvailable;
    NSString * _userIdentifier;
    CRKNotSoGoodImage * _userImage;
    NSData * _userImageData;
    NSString * _userSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *familyName;
@property (nonatomic, copy) NSString *givenName;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *imageIdentifier;
@property (nonatomic, copy) NSString *imageURL;
@property (nonatomic, readonly) bool isMeCardUser;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly, copy) NSPersonNameComponents *nameComponents;
@property (nonatomic, copy) NSString *phoneticFamilyName;
@property (nonatomic, copy) NSString *phoneticGivenName;
@property (nonatomic) long long role;
@property (readonly) Class superclass;
@property (getter=shouldUseMeCardIfAvailable, nonatomic) bool useMeCardIfAvailable;
@property (nonatomic, copy) NSString *userIdentifier;
@property (nonatomic, copy) CRKNotSoGoodImage *userImage;
@property (nonatomic, copy) NSData *userImageData;
@property (nonatomic, copy) NSString *userSource;

+ (id)customUserFromMeCardUser:(id)arg1;
+ (id)instanceWithKeyValue:(id)arg1;
+ (id)instanceWithParentObject:(id)arg1 keyValue:(id)arg2;
+ (id)instanceWithRecord:(id)arg1;
+ (id)meCardUser;
+ (id)recordType;
+ (id)skeletonInstance;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)applyFieldsToRecord:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryValue;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)familyName;
- (id)givenName;
- (unsigned long long)hash;
- (id)imageIdentifier;
- (id)imageURL;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isChangedFrom:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToUser:(id)arg1;
- (bool)isMeCardUser;
- (bool)isValid;
- (id)nameComponents;
- (id)phoneticFamilyName;
- (id)phoneticGivenName;
- (id)recordName;
- (long long)role;
- (void)setDisplayName:(id)arg1;
- (void)setFamilyName:(id)arg1;
- (void)setGivenName:(id)arg1;
- (void)setImageIdentifier:(id)arg1;
- (void)setImageURL:(id)arg1;
- (void)setPhoneticFamilyName:(id)arg1;
- (void)setPhoneticGivenName:(id)arg1;
- (void)setRole:(long long)arg1;
- (void)setUseMeCardIfAvailable:(bool)arg1;
- (void)setUserIdentifier:(id)arg1;
- (void)setUserImage:(id)arg1;
- (void)setUserImageData:(id)arg1;
- (void)setUserSource:(id)arg1;
- (bool)shouldUseMeCardIfAvailable;
- (void)updateUserImage;
- (id)userIdentifier;
- (id)userImage;
- (id)userImageData;
- (id)userSource;

@end
