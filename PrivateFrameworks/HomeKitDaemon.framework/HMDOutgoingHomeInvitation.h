/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDOutgoingHomeInvitation : HMDHomeInvitation {
    NSString * _inviteeDestinationAddress;
    NSUUID * _messageIdentifier;
    NSArray * _operations;
    bool  _responseReceived;
    HMDUser * _user;
}

@property (nonatomic, readonly) NSArray *accessoryInvitationsInformation;
@property (getter=isComplete, nonatomic, readonly) bool complete;
@property (nonatomic, retain) NSString *inviteeDestinationAddress;
@property (nonatomic, readonly) NSUUID *messageIdentifier;
@property (nonatomic, retain) NSArray *operations;
@property (nonatomic) bool responseReceived;
@property (nonatomic, readonly) HMDUser *user;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryInvitationsInformation;
- (void)cancel;
- (id)debugDescription;
- (id)describeWithFormat;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInvitee:(id)arg1 invitationState:(long long)arg2 forHome:(id)arg3 expiryDate:(id)arg4 messageIdentifier:(id)arg5;
- (void)invitationRemovedDuringMerge;
- (id)inviteeDestinationAddress;
- (bool)isComplete;
- (bool)mergeWithInvitation:(id)arg1;
- (id)messageIdentifier;
- (id)operations;
- (bool)responseReceived;
- (void)setInviteeDestinationAddress:(id)arg1;
- (void)setOperations:(id)arg1;
- (void)setResponseReceived:(bool)arg1;
- (id)shortDescription;
- (id)user;

@end
