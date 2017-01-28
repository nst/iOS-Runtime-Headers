/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKAttendee : EKParticipant

@property (nonatomic) bool commentChanged;
@property (nonatomic, readonly) NSDate *lastModifiedParticipationStatus;
@property (nonatomic) long long participantRole;
@property (nonatomic) long long participantStatus;
@property (nonatomic) long long participantType;
@property (nonatomic) long long pendingStatus;
@property (nonatomic) bool proposedStartDateChanged;
@property (nonatomic) bool statusChanged;

+ (id)attendeeWithEmailAddress:(id)arg1 name:(id)arg2;
+ (id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3;

- (id)_persistentAttendee;
- (bool)commentChanged;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3;
- (bool)isCurrentUser;
- (bool)isEqual:(id)arg1;
- (id)lastModifiedParticipationStatus;
- (id)lazyLoadRelationForKey:(id)arg1;
- (id)owner;
- (long long)participantRole;
- (long long)participantStatus;
- (long long)participantType;
- (long long)pendingStatus;
- (bool)proposedStartDateChanged;
- (void)setCommentChanged:(bool)arg1;
- (void)setParticipantRole:(long long)arg1;
- (void)setParticipantStatus:(long long)arg1;
- (void)setParticipantType:(long long)arg1;
- (void)setPendingStatus:(long long)arg1;
- (void)setProposedStartDateChanged:(bool)arg1;
- (void)setStatusChanged:(bool)arg1;
- (bool)statusChanged;

@end
