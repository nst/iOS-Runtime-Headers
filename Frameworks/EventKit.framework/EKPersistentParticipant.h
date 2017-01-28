/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentParticipant : EKPersistentObject <NSCopying>

@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, copy) NSURL *address;
@property (nonatomic, copy) NSString *comment;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *emailAddress;
@property (nonatomic, copy) NSString *firstName;
@property (nonatomic, readonly) NSString *invitedBy;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic, copy) NSDate *proposedStartDate;
@property (nonatomic) int proposedStartDateStatus;

+ (id)defaultPropertiesToLoad;

- (id)UUID;
- (id)address;
- (id)comment;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayName;
- (id)emailAddress;
- (id)firstName;
- (unsigned long long)hash;
- (id)init;
- (id)invitedBy;
- (id)lastName;
- (id)owner;
- (id)proposedStartDate;
- (int)proposedStartDateStatus;
- (void)setAddress:(id)arg1;
- (void)setComment:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setProposedStartDate:(id)arg1;
- (void)setProposedStartDateStatus:(int)arg1;

@end
