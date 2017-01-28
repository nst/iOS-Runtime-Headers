/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKFitnessFriendsRelationship : NSObject <HDFitnessFriendsCloudKitCodable, NSCopying, NSSecureCoding> {
    NSSet * _addresses;
    NSData * _archivedCloudKitSystemFields;
    NSData * _archivedRelationshipShareID;
    NSData * _archivedRemoteActivityDataShareID;
    NSData * _archivedRemoteRelationshipShareID;
    NSString * _cloudKitAddress;
    NSString * _incomingHandshakeToken;
    NSString * _outgoingHandshakeToken;
    NSString * _preferredReachableAddress;
    NSString * _preferredReachableService;
    NSArray * _relationshipEvents;
    NSUUID * _relationshipUUID;
    long long  _version;
}

@property (nonatomic, copy) NSSet *addresses;
@property (nonatomic, copy) NSData *archivedCloudKitSystemFields;
@property (nonatomic, copy) NSData *archivedRelationshipShareID;
@property (nonatomic, copy) NSData *archivedRemoteActivityDataShareID;
@property (nonatomic, copy) NSData *archivedRemoteRelationshipShareID;
@property (nonatomic, copy) NSString *cloudKitAddress;
@property (nonatomic, readonly) NSDate *dateActivityDataBecameVisible;
@property (nonatomic, readonly) NSDate *dateForLatestDataHidden;
@property (nonatomic, readonly) NSDate *dateForLatestOutgoingInviteRequest;
@property (nonatomic, readonly) NSDate *dateForLatestRelationshipStart;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIncomingInviteRequest;
@property (nonatomic, readonly) bool hasOutgoingInviteRequest;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *incomingHandshakeToken;
@property (nonatomic, readonly) bool isActivityDataCurrentlyVisible;
@property (nonatomic, readonly) bool isAwaitingInviteResponse;
@property (nonatomic, readonly) bool isFriendshipCurrentlyActive;
@property (nonatomic, readonly) bool isMuteEnabled;
@property (nonatomic, copy) NSString *outgoingHandshakeToken;
@property (nonatomic, copy) NSString *preferredReachableAddress;
@property (nonatomic, copy) NSString *preferredReachableService;
@property (nonatomic, copy) NSArray *relationshipEvents;
@property (nonatomic, copy) NSUUID *relationshipUUID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic) long long version;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_enumerateEventsInReverseChronologicalOrderUsingBlock:(id)arg1;
- (bool)_isActivityDataVisibleForDate:(id)arg1;
- (id)_mostRecentEventsWithCount:(long long)arg1;
- (unsigned long long)_nextAnchor;
- (id)addresses;
- (id)archivedCloudKitSystemFields;
- (id)archivedRelationshipShareID;
- (id)archivedRemoteActivityDataShareID;
- (id)archivedRemoteRelationshipShareID;
- (id)cloudKitAddress;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateActivityDataBecameVisible;
- (id)dateForLatestDataHidden;
- (id)dateForLatestOutgoingInviteRequest;
- (id)dateForLatestRelationshipStart;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIncomingInviteRequest;
- (bool)hasOutgoingInviteRequest;
- (id)incomingHandshakeToken;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)insertEventWithType:(long long)arg1;
- (void)insertEvents:(id)arg1;
- (bool)isActivityDataCurrentlyVisible;
- (bool)isActivityDataVisibleForDate:(id)arg1;
- (bool)isAwaitingInviteResponse;
- (bool)isFriendshipCurrentlyActive;
- (bool)isHidingActivityDataForDate:(id)arg1;
- (bool)isMuteEnabled;
- (id)outgoingHandshakeToken;
- (id)preferredReachableAddress;
- (id)preferredReachableService;
- (id)relationshipEvents;
- (id)relationshipUUID;
- (void)setAddresses:(id)arg1;
- (void)setArchivedCloudKitSystemFields:(id)arg1;
- (void)setArchivedRelationshipShareID:(id)arg1;
- (void)setArchivedRemoteActivityDataShareID:(id)arg1;
- (void)setArchivedRemoteRelationshipShareID:(id)arg1;
- (void)setCloudKitAddress:(id)arg1;
- (void)setIncomingHandshakeToken:(id)arg1;
- (void)setOutgoingHandshakeToken:(id)arg1;
- (void)setPreferredReachableAddress:(id)arg1;
- (void)setPreferredReachableService:(id)arg1;
- (void)setRelationshipEvents:(id)arg1;
- (void)setRelationshipUUID:(id)arg1;
- (void)setVersion:(long long)arg1;
- (id)timestamp;
- (long long)version;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (void)_fitnessFriendRelationshipWithRecord:(id)arg1 relationshipEventRecords:(id)arg2 completion:(id)arg3;
+ (id)fitnessFriendRelationshipsWithRelationshipAndEventRecords:(id)arg1;

- (id)recordFromArchivedSystemFields;
- (id)recordWithZoneID:(id)arg1;

@end
