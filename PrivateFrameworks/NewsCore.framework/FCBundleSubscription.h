/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCBundleSubscription : NSObject <NSCopying> {
    NSArray * _bundleChannelIDs;
    NSString * _bundlePurchaseID;
    bool  _isPurchaser;
    unsigned long long  _unprotectedSubscriptionState;
}

@property (nonatomic, copy) NSArray *bundleChannelIDs;
@property (nonatomic, copy) NSString *bundlePurchaseID;
@property (nonatomic) bool isPurchaser;
@property (nonatomic) unsigned long long unprotectedSubscriptionState;

+ (id)subscriptionWithSubscriptionState:(unsigned long long)arg1 bundleChannelIDs:(id)arg2;

- (void).cxx_destruct;
- (id)bundleChannelIDs;
- (id)bundlePurchaseID;
- (bool)containsHeadline:(id)arg1;
- (bool)containsTagID:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (unsigned long long)hash;
- (id)initWithBundlePurchaseID:(id)arg1 bundleChannelIDs:(id)arg2 inTrialPeriod:(bool)arg3 isPurchaser:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isPurchaser;
- (void)setBundleChannelIDs:(id)arg1;
- (void)setBundlePurchaseID:(id)arg1;
- (void)setIsPurchaser:(bool)arg1;
- (void)setUnprotectedSubscriptionState:(unsigned long long)arg1;
- (unsigned long long)unprotectedSubscriptionState;

@end
