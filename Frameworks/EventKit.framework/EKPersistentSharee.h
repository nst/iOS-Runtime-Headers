/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentSharee : EKPersistentObject <NSCopying>

@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, copy) NSString *address;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *emailAddress;
@property (nonatomic, copy) NSString *externalID;
@property (nonatomic, copy) NSString *firstName;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic) unsigned long long shareeAccessLevel;
@property (nonatomic) unsigned long long shareeStatus;

+ (id)defaultPropertiesToLoad;
+ (id)relations;
+ (id)shareeWithEmailAddress:(id)arg1 name:(id)arg2;
+ (id)shareeWithName:(id)arg1 emailAddress:(id)arg2 externalID:(id)arg3;

- (id)UUID;
- (id)address;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (id)emailAddress;
- (int)entityType;
- (id)externalID;
- (id)firstName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 externalID:(id)arg3;
- (id)lastName;
- (id)owner;
- (void)setAddress:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setExternalID:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setShareeAccessLevel:(unsigned long long)arg1;
- (void)setShareeStatus:(unsigned long long)arg1;
- (unsigned long long)shareeAccessLevel;
- (unsigned long long)shareeStatus;

@end
