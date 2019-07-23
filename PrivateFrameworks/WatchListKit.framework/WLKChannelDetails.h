/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKChannelDetails : NSObject <WLKInstallable> {
    bool  _apSubscription;
    NSArray * _appAdamIDs;
    NSArray * _appBundleIDs;
    bool  _appInstalled;
    NSString * _appName;
    NSString * _appStoreURLString;
    NSString * _channelID;
    unsigned long long  _channelType;
    bool  _consented;
    bool  _firstParty;
    WLKArtworkVariantListing * _images;
    bool  _itunes;
    NSString * _minRequiredAppVersion;
    NSString * _name;
    NSDictionary * _rateLimit;
    bool  _requiresAccountLevelConsent;
    bool  _requiresSubscriptionForConsent;
    bool  _shouldIncludeInConsent;
    bool  _shouldPromptForConsentOnSubscriptionChange;
    bool  _shouldTrackPlayActivity;
    bool  _subscribed;
    bool  _watchListEnabled;
}

@property (getter=isApSubscription, nonatomic, readonly) bool apSubscription;
@property (nonatomic, readonly, copy) NSArray *appAdamIDs;
@property (nonatomic, readonly, copy) NSArray *appBundleIDs;
@property (getter=isAppInstalled, nonatomic, readonly) bool appInstalled;
@property (nonatomic, readonly, copy) NSString *appName;
@property (nonatomic, readonly, copy) NSURL *appStoreURL;
@property (nonatomic, copy) NSString *appStoreURLString;
@property (nonatomic, readonly, copy) NSString *channelID;
@property (nonatomic, readonly) unsigned long long channelType;
@property (getter=isConsented, nonatomic, readonly) bool consented;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFirstParty, nonatomic, readonly) bool firstParty;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WLKArtworkVariantListing *images;
@property (getter=isiTunes, nonatomic, readonly) bool itunes;
@property (nonatomic, readonly) NSString *minRequiredAppVersion;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) NSDictionary *rateLimit;
@property (nonatomic, readonly) bool requiresAccountLevelConsent;
@property (nonatomic, readonly) bool requiresSubscriptionForConsent;
@property (nonatomic, readonly) bool shouldIncludeInConsent;
@property (nonatomic, readonly) bool shouldPromptForConsentOnSubscriptionChange;
@property (nonatomic, readonly) bool shouldTrackPlayActivity;
@property (getter=isSubscribed, nonatomic, readonly) bool subscribed;
@property (readonly) Class superclass;
@property (getter=isWatchListEnabled, nonatomic, readonly) bool watchListEnabled;

- (void).cxx_destruct;
- (id)appAdamIDs;
- (id)appBundleIDs;
- (id)appIconURLForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)appName;
- (id)appStoreURL;
- (id)appStoreURLString;
- (id)channelID;
- (unsigned long long)channelType;
- (id)description;
- (id)images;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (bool)isApSubscription;
- (bool)isAppInstalled;
- (bool)isConsented;
- (bool)isFirstParty;
- (bool)isSubscribed;
- (bool)isWatchListEnabled;
- (bool)isiTunes;
- (id)minRequiredAppVersion;
- (id)name;
- (id)rateLimit;
- (bool)requiresAccountLevelConsent;
- (bool)requiresSubscriptionForConsent;
- (void)setAppStoreURLString:(id)arg1;
- (bool)shouldIncludeInConsent;
- (bool)shouldPromptForConsentOnSubscriptionChange;
- (bool)shouldTrackPlayActivity;
- (id)sui_channelName;

@end
