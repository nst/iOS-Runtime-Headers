/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSubscriptionStatusPlaybackInformation : NSObject {
    long long  _accountSubscriptionStatus;
    long long  _carrierBundlingStatus;
    bool  _definitiveInformation;
    bool  _hasPlaybackCapability;
    bool  _requiresCarrierManualVerification;
    bool  _shouldUseAccountLessStreaming;
    bool  _shouldUseLease;
}

@property (getter=isDefinitiveInformation, nonatomic, readonly) bool definitiveInformation;
@property (nonatomic, readonly) bool hasPlaybackCapability;
@property (nonatomic, readonly) bool requiresCarrierManualVerification;
@property (nonatomic, readonly) bool shouldUseAccountLessStreaming;
@property (nonatomic, readonly) bool shouldUseLease;

- (id)description;
- (bool)hasPlaybackCapability;
- (id)initWithSubscriptionStatus:(id)arg1;
- (bool)isDefinitiveInformation;
- (bool)requiresCarrierManualVerification;
- (bool)shouldUseAccountLessStreaming;
- (bool)shouldUseLease;

@end
