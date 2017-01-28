/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVFairPlaySubscriptionStatus : NSObject <SSXPCCoding> {
    bool  _hasSubscriptionLease;
    bool  _hasSubscriptionSlot;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasSubscriptionLease;
@property (nonatomic) bool hasSubscriptionSlot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)copyXPCEncoding;
- (id)description;
- (bool)hasSubscriptionLease;
- (bool)hasSubscriptionSlot;
- (unsigned long long)hash;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setHasSubscriptionLease:(bool)arg1;
- (void)setHasSubscriptionSlot:(bool)arg1;

@end
