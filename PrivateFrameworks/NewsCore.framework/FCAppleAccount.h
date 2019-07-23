/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCAppleAccount : NSObject <FCAppleAccount> {
    NSString * _DSID;
    NSString * _contentStoreFrontID;
    bool  _iCloudAccountChanged;
    NSString * _overrideContentStoreFrontID;
    bool  _runningPPT;
    NSString * _userStoreFrontID;
}

@property (nonatomic, copy) NSString *DSID;
@property (nonatomic, copy) NSString *contentStoreFrontID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *endpointConnectionClientID;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool iCloudAccountChanged;
@property (nonatomic, readonly) bool isContentStoreFrontSupported;
@property (nonatomic, copy) NSString *overrideContentStoreFrontID;
@property (nonatomic, readonly) NSString *primaryLanguageCode;
@property (getter=isPrivateDataSyncingEnabled, nonatomic, readonly) bool privateDataSyncingEnabled;
@property (getter=isRunningPPT) bool runningPPT;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *supportedContentStoreFrontID;
@property (nonatomic, readonly) NSArray *supportedLanguageCodes;
@property (getter=isUserSignedInToiCloud, nonatomic, readonly) bool userSignedInToiCloud;
@property (nonatomic, copy) NSString *userStoreFrontID;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (void)enableStoreFrontLocking;
+ (id)sharedAccount;

- (void).cxx_destruct;
- (id)DSID;
- (void)_loadStoreFrontIfNeededWithCallbackAndAccessQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)_refreshUbiquityIdentityToken;
- (void)_setStoreFrontDependentPropertiesWithStoreFrontLockingEnabled:(bool)arg1;
- (id)activeiTunesAccount;
- (void)checkAllDevicesRunningMinimumiOSVersion:(struct { long long x1; long long x2; })arg1 macOSVersion:(struct { long long x1; long long x2; })arg2 orInactiveForTimeInterval:(double)arg3 completionHandler:(id /* block */)arg4;
- (void)checkAlliOSDevicesRunningMinimumOSVersion:(struct { long long x1; long long x2; })arg1 orInactiveForTimeInterval:(double)arg2 completionHandler:(id /* block */)arg3;
- (id)contentStoreFrontID;
- (id)currentStoreFrontID;
- (id)endpointConnectionClientID;
- (bool)iCloudAccountChanged;
- (id)iCloudAccountDSID;
- (id)iTunesAccountDSID;
- (id)iTunesAccountName;
- (id)init;
- (bool)isContentStoreFrontSupported;
- (bool)isPrimaryAccountEmailAddress;
- (bool)isPrivateDataSyncingEnabled;
- (bool)isRunningPPT;
- (bool)isUserSignedInToiCloud;
- (bool)isUserSignedIntoiTunes;
- (void)loadStoreFrontIfNeeded;
- (id)overrideContentStoreFrontID;
- (id)primaryLanguageCode;
- (void)setContentStoreFrontID:(id)arg1;
- (void)setDSID:(id)arg1;
- (void)setICloudAccountChanged:(bool)arg1;
- (void)setOverrideContentStoreFrontID:(id)arg1;
- (void)setRunningPPT:(bool)arg1;
- (void)setUserStoreFrontID:(id)arg1;
- (id)supportedContentStoreFrontID;
- (id)supportedLanguageCodes;
- (void)t_startOverridingContentStoreFrontID:(id)arg1;
- (void)t_stopOverridingContentStoreFrontID;
- (id)userStoreFrontID;

// Image: /System/Library/PrivateFrameworks/Stocks/StocksCore.framework/StocksCore

- (void)sc_checkAllDevicesRunningMinimumiOSVersion:(struct { long long x1; long long x2; })arg1 macOSVersion:(struct { long long x1; long long x2; })arg2 orInactiveForTimeInterval:(double)arg3 completionHandler:(id /* block */)arg4;

@end
