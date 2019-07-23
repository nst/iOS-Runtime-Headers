/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMutableMusicSubscriptionStatus : ICMusicSubscriptionStatus

@property (getter=isAdministrator, nonatomic) bool administrator;
@property (nonatomic) long long carrierBundlingErrorCode;
@property (nonatomic) long long carrierBundlingStatusType;
@property (nonatomic, copy) NSString *cellularOperatorName;
@property (getter=isDiscoveryModeEligible, nonatomic) bool discoveryModeEligible;
@property (getter=isEligibleForFreeTrial, nonatomic) bool eligibleForFreeTrial;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic) bool hasFamily;
@property (nonatomic) bool hasFamilyGreaterThanOneMember;
@property (nonatomic) bool hasOfflineSlots;
@property (getter=isHeadOfHousehold, nonatomic) bool headOfHousehold;
@property (getter=isInFreeTrial, nonatomic) bool inFreeTrial;
@property (getter=isMatchEnabled, nonatomic) bool matchEnabled;
@property (getter=isMinorAccountHolder, nonatomic) bool minorAccountHolder;
@property (nonatomic, copy) NSString *phoneNumber;
@property (getter=isPurchaser, nonatomic) bool purchaser;
@property (nonatomic) long long reasonType;
@property (nonatomic, copy) NSString *sessionIdentifier;
@property (nonatomic) long long sourceType;
@property (nonatomic) long long statusCode;
@property (nonatomic) long long statusType;
@property (nonatomic, copy) NSArray *termsStatusList;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAdministrator:(bool)arg1;
- (void)setCarrierBundlingErrorCode:(long long)arg1;
- (void)setCarrierBundlingStatusType:(long long)arg1;
- (void)setCellularOperatorName:(id)arg1;
- (void)setDiscoveryModeEligible:(bool)arg1;
- (void)setEligibleForFreeTrial:(bool)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setHasFamily:(bool)arg1;
- (void)setHasFamilyGreaterThanOneMember:(bool)arg1;
- (void)setHasOfflineSlots:(bool)arg1;
- (void)setHeadOfHousehold:(bool)arg1;
- (void)setInFreeTrial:(bool)arg1;
- (void)setMatchEnabled:(bool)arg1;
- (void)setMinorAccountHolder:(bool)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setPurchaser:(bool)arg1;
- (void)setReasonType:(long long)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setSourceType:(long long)arg1;
- (void)setStatusCode:(long long)arg1;
- (void)setStatusType:(long long)arg1;
- (void)setTermsStatusList:(id)arg1;

@end
