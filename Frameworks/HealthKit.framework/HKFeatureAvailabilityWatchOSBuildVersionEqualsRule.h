/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKFeatureAvailabilityWatchOSBuildVersionEqualsRule : HKFeatureAvailabilityBaseRule <HKFeatureAvailabilityRule> {
    NSString * _buildVersion;
}

@property (nonatomic, retain) NSString *buildVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)ruleIdentifier;

- (void).cxx_destruct;
- (id)buildVersion;
- (bool)evaluate;
- (void)processUserInfo:(id)arg1;
- (void)setBuildVersion:(id)arg1;

@end
