/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNNavigationServiceLocalProxy : NSObject <MNNavigationServiceProxy, MNNavigationSessionManagerDelegate, MNNavigationStateObserver> {
    <MNNavigationServiceClientInterface> * _delegate;
    id /* block */  _navigationServiceActiveBlock;
    id /* block */  _navigationServiceActivePredictingBlock;
    unsigned long long  _navigationServiceState;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MNNavigationServiceClientInterface> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_serviceStateForStateType:(unsigned long long)arg1;
- (void)acceptReroute:(bool)arg1 forTrafficIncidentAlertDetails:(id)arg2;
- (void)acquireDesiredResourcePolicy;
- (void)changeSettings:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)interfaceHashesWithHandler:(id /* block */)arg1;
- (void)navigationSessionManager:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
- (void)navigationSessionManager:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilSign:(double)arg3 timeUntilSign:(double)arg4;
- (void)navigationSessionManager:(id)arg1 didChangeNavigationState:(int)arg2;
- (void)navigationSessionManager:(id)arg1 didEnableGuidancePrompts:(bool)arg2;
- (void)navigationSessionManager:(id)arg1 didFailWithError:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didRerouteWithDetails:(id)arg2 locationDetails:(id)arg3 withAlternateRoutes:(id)arg4;
- (void)navigationSessionManager:(id)arg1 didSignalAlightForStepAtIndex:(unsigned long long)arg2;
- (void)navigationSessionManager:(id)arg1 didStartSpeakingPrompt:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didStartUsingVoiceLanguage:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;
- (void)navigationSessionManager:(id)arg1 didUpdateActiveRouteDetails:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateAlternateRoutes:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateAudioRouteSelection:(unsigned long long)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateAudioSettings:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateCurrentAudioSetting:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateCurrentAudioSettingForVoicePrompt:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateDisplayETA:(id)arg2 displayRemainingMinutes:(unsigned long long)arg3 forRoute:(id)arg4;
- (void)navigationSessionManager:(id)arg1 didUpdateETAResponseForRoute:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateFeedback:(id)arg2 forAlightingStepAtIndex:(unsigned long long)arg3;
- (void)navigationSessionManager:(id)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;
- (void)navigationSessionManager:(id)arg1 didUpdateLocation:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)navigationSessionManager:(id)arg1 didUpdateStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
- (void)navigationSessionManager:(id)arg1 didUpdateTracePlaybackDetails:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateTrafficForETARoute:(id)arg2 from:(unsigned int)arg3 to:(unsigned int)arg4 forRoute:(id)arg5;
- (void)navigationSessionManager:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;
- (void)navigationSessionManager:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)navigationSessionManager:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(bool)arg8;
- (void)navigationSessionManager:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;
- (void)navigationSessionManager:(id)arg1 failedRerouteWithErrorCode:(long long)arg2;
- (void)navigationSessionManager:(id)arg1 hideLaneDirectionsForId:(id)arg2;
- (void)navigationSessionManager:(id)arg1 newGuidanceEventFeedback:(id)arg2;
- (void)navigationSessionManager:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4;
- (void)navigationSessionManager:(id)arg1 showLaneDirections:(id)arg2;
- (void)navigationSessionManager:(id)arg1 updateSignsWithInfo:(id)arg2;
- (void)navigationSessionManager:(id)arg1 updatedGuidanceEventFeedback:(id)arg2;
- (void)navigationSessionManager:(id)arg1 usePersistentDisplay:(bool)arg2;
- (void)navigationSessionManager:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
- (void)navigationSessionManagerBeginGuidanceUpdate:(id)arg1;
- (void)navigationSessionManagerDidArrive:(id)arg1;
- (void)navigationSessionManagerDidCancelReroute:(id)arg1;
- (void)navigationSessionManagerEndGuidanceUpdate:(id)arg1;
- (void)navigationSessionManagerHideSecondaryStep:(id)arg1;
- (void)navigationSessionManagerWillPause:(id)arg1;
- (void)navigationSessionManagerWillReroute:(id)arg1;
- (void)navigationSessionManagerWillResumeFromPause:(id)arg1;
- (void)prepareNavigationWithRouteDetails:(id)arg1;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (void)repeatCurrentGuidanceWithReply:(id /* block */)arg1;
- (void)repeatCurrentTrafficAlertWithReply:(id /* block */)arg1;
- (void)resumeOriginalDestination;
- (void)setCurrentAudioOutputSetting:(id)arg1;
- (void)setDelegate:(id)arg1;
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
- (void)start;
- (void)startNavigationForRouteDetails:(id)arg1 handler:(id /* block */)arg2;
- (void)startPredictingDestinationsWithHandler:(id /* block */)arg1;
- (void)stateManager:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)stateManager:(id)arg1 didUpdateIsInVehicle:(bool)arg2;
- (void)stateManager:(id)arg1 didUpdatePossibleDestinations:(id)arg2;
- (void)stateManager:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)stateManagerPredictingDidArrive:(id)arg1;
- (void)stopCurrentGuidancePrompt;
- (void)stopNavigation;
- (void)stopPredictingDestinations;
- (void)switchToRouteWithDetails:(id)arg1;
- (void)updateDestination:(id)arg1;
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(id /* block */)arg2;

@end
