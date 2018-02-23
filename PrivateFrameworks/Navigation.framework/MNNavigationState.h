/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNNavigationState : NSObject <MNNavigationStateInterface> {
    double  _locationUpdateInterval;
    MNNavigationStateManager * _stateManager;
    double  _suggestionUpdateFrequency;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long desiredLocationProviderType;
@property (nonatomic, readonly) unsigned long long desiredResourcePolicy;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double locationUpdateInterval;
@property (nonatomic, readonly) bool requiresHighMemoryThreshold;
@property (nonatomic, readonly) MNNavigationStateManager *stateManager;
@property (nonatomic, readonly) double suggestionUpdateFrequency;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MNNavigationTraceManager *traceManager;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (void)acceptReroute:(bool)arg1 forTrafficIncidentAlertDetails:(id)arg2;
- (void)acquireDesiredResourcePolicy;
- (void)addCommuteDestinationSuggestion:(id)arg1;
- (void)changeSettings:(id)arg1;
- (void)confirmDestination:(id)arg1;
- (void)dealloc;
- (unsigned long long)desiredLocationProviderType;
- (unsigned long long)desiredResourcePolicy;
- (void)enterState;
- (id)init;
- (id)initWithStateManager:(id)arg1;
- (void)interfaceHashesWithHandler:(id /* block */)arg1;
- (void)leaveState;
- (double)locationUpdateInterval;
- (void)prepareNavigationWithRouteDetails:(id)arg1;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (void)repeatCurrentGuidanceWithReply:(id /* block */)arg1;
- (void)repeatCurrentTrafficAlertWithReply:(id /* block */)arg1;
- (bool)requiresHighMemoryThreshold;
- (void)resumeOriginalDestination;
- (void)setCurrentAudioOutputSetting:(id)arg1;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setFullGuidanceMode:(bool)arg1;
- (void)setGuidancePromptsEnabled:(bool)arg1;
- (void)setHFPPreference:(bool)arg1 forSetting:(id)arg2;
- (void)setHeadingOrientation:(int)arg1;
- (void)setIsConnectedToCarplay:(bool)arg1;
- (void)setRideIndex:(unsigned long long)arg1 forLegIndex:(unsigned long long)arg2;
- (void)setTraceIsPlaying:(bool)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTracePosition:(double)arg1;
- (void)startNavigationForRouteDetails:(id)arg1 handler:(id /* block */)arg2;
- (void)startPredictingDestinationsWithHandler:(id /* block */)arg1;
- (id)stateManager;
- (void)stopCurrentGuidancePrompt;
- (void)stopNavigation;
- (void)stopPredictingDestinations;
- (double)suggestionUpdateFrequency;
- (void)switchToRouteWithDetails:(id)arg1;
- (id)traceManager;
- (unsigned long long)type;
- (void)updateDestination:(id)arg1;
- (void)updateMapsActive:(bool)arg1;
- (void)updateVehicleDetected:(bool)arg1;
- (void)updateWithLocation:(id)arg1;
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(id /* block */)arg2;

@end
