/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMCTXPCServiceSubscriptionInfo : NSObject {
    NSArray * _allPhoneNumbers;
    CTXPCServiceSubscriptionInfo * _subscriptionInfo;
}

@property (nonatomic, retain) NSArray *allPhoneNumbers;
@property (nonatomic, retain) CTXPCServiceSubscriptionInfo *subscriptionInfo;

- (void).cxx_destruct;
- (id)__imSIMIDForSubscriptionSlot:(long long)arg1;
- (long long)__imSlotIDSForPhoneNumber:(id)arg1;
- (id)__im_contactPreferredSubscriptionContextForChatHandleIDs:(id)arg1;
- (bool)__im_containsPhoneNumber:(id)arg1;
- (bool)__im_hasMultipleSubscriptions;
- (id)__im_labelForPhoneNumber:(id)arg1 simID:(id)arg2;
- (bool)__im_onlyHasActiveSlots;
- (id)__im_phoneNumberForSlotID:(long long)arg1;
- (id)__im_phoneNumberForSlotIDOrDefault:(long long)arg1;
- (id)__im_phoneNumbersForAllSubscriptions;
- (id)__im_preferredSubscriptionContext;
- (id)__im_subscriptionContextForForSimID:(id)arg1;
- (id)__im_subscriptionContextForForSimID:(id)arg1 phoneNumber:(id)arg2;
- (id)__im_subscriptionContextForForSlotID:(long long)arg1;
- (id)__im_subscriptionContextForPhoneNumber:(id)arg1;
- (id)__im_subscriptionContextForPhoneNumberOrDefault:(id)arg1;
- (id)__im_subscriptionContextForSenderIdentity:(id)arg1;
- (id)__im_subscriptionContextOrDefaultForForSimID:(id)arg1 phoneNumber:(id)arg2;
- (id)__im_subscriptionContextOrDefaultForForSlotID:(long long)arg1;
- (id)__im_subscriptionsWithMMSSupport;
- (id)__im_switchSubscriptionContextFromPhoneNumber:(id)arg1 simID:(id)arg2;
- (id)__im_switchSubscriptionContextFromSubscriptionContext:(id)arg1;
- (void)_generatePhoneNumbersCache;
- (void)_invalidatePhoneNumbersCache;
- (id)_senderIdentityManager;
- (id)allPhoneNumbers;
- (id)allSubscriptions;
- (id)description;
- (id)initWithSubscriptionInfo:(id)arg1;
- (id)preferredOrDefaultSubscriptionContext;
- (void)setAllPhoneNumbers:(id)arg1;
- (void)setSubscriptionInfo:(id)arg1;
- (id)subscriptionInfo;
- (id)subscriptions;

@end
