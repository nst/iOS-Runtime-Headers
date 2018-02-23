/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNNavigationStateForegroundPredictedDestination : MNNavigationStateCommute

- (void)commuteSession:(id)arg1 didUpdateDestinations:(id)arg2;
- (unsigned long long)desiredCommuteSessionState;
- (unsigned long long)desiredLocationProviderType;
- (unsigned long long)desiredResourcePolicy;
- (void)enterState;
- (void)leaveState;
- (bool)requiresHighMemoryThreshold;
- (void)startPredictingDestinations;
- (void)stopPredictingDestinations;
- (unsigned long long)type;
- (void)updateMapsActive:(bool)arg1;

@end
