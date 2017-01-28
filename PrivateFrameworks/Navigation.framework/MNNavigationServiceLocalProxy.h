/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNNavigationServiceLocalProxy : NSObject <MNAudioOutputSettingsManagerObserver, MNGuidanceLevelUpdaterDelegate, MNNavigationServiceDaemonInterface, MNNavigationSessionObserver, MNNavigationTraceManagerDelegate> {
    id  _activeNavigationHandler;
    MNAudioOutputSettingsManager * _audioOutputSettingsManager;
    <MNNavigationServiceClientInterface> * _delegate;
    MNGuidanceLevelUpdater * _guidanceLevelUpdater;
    unsigned long long  _navigationServiceState;
    MNNavigationSession * _navigationSession;
    MNNavigationProxyUpdater * _proxyUpdater;
    MNRouteManager * _routeManager;
    MNSettings * _settings;
    MNSettingsManager * _settingsManager;
    MNNavigationTraceManager * _traceManager;
    NSMutableDictionary * _trafficIncidentAlertCallbacks;
    NSObject<OS_os_transaction> * _xpcTransaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MNNavigationServiceClientInterface> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool guidancePromptsEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) int headingOrientation;
@property (nonatomic, readonly) MNNavigationSession *navigationSession;
@property (nonatomic, readonly) MNSettings *settings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_endXPCTransaction;
- (void)_failWithError:(id)arg1;
- (id)_guidanceLevelUpdater;
- (id)_routeManager;
- (void)_setupLocationManager;
- (void)_startXPCTransaction;
- (id)_traceManager;
- (void)_transitionToState:(unsigned long long)arg1 withSuccessHandler:(id)arg2;
- (void)acceptReroute:(bool)arg1 forTrafficIncidentAlertDetails:(id)arg2;
- (void)audioOutputSettingsManager:(id)arg1 didUpdateCurrentSetting:(id)arg2;
- (void)audioOutputSettingsManager:(id)arg1 didUpdateCurrentSettingForVoicePrompt:(id)arg2;
- (void)audioOutputSettingsManager:(id)arg1 didUpdateRouteSelection:(unsigned long long)arg2;
- (void)audioOutputSettingsManager:(id)arg1 didUpdateSettings:(id)arg2;
- (void)changeSettings:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)guidanceLevelUpdater:(id)arg1 didUpdateGuidanceLevel:(int)arg2;
- (bool)guidancePromptsEnabled;
- (int)headingOrientation;
- (id)init;
- (id)navigationSession;
- (void)navigationSession:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
- (void)navigationSession:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilSign:(double)arg3 timeUntilSign:(double)arg4;
- (void)navigationSession:(id)arg1 didActivateAudioSession:(bool)arg2;
- (void)navigationSession:(id)arg1 didChangeGuidanceState:(id)arg2;
- (void)navigationSession:(id)arg1 didChangeNavigationState:(int)arg2;
- (void)navigationSession:(id)arg1 didEnableGuidancePrompts:(bool)arg2;
- (void)navigationSession:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;
- (void)navigationSession:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2 responseCallback:(id)arg3;
- (void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3;
- (void)navigationSession:(id)arg1 didSignalAlightForStepAtIndex:(unsigned long long)arg2;
- (void)navigationSession:(id)arg1 didStartSpeakingPrompt:(id)arg2;
- (void)navigationSession:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;
- (void)navigationSession:(id)arg1 didUpdateFeedback:(id)arg2 forAlightingStepAtIndex:(unsigned long long)arg3;
- (void)navigationSession:(id)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;
- (void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)navigationSession:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)navigationSession:(id)arg1 didUpdateTrafficForETARoute:(id)arg2 from:(unsigned int)arg3 to:(unsigned int)arg4;
- (void)navigationSession:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;
- (void)navigationSession:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)navigationSession:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(bool)arg8;
- (void)navigationSession:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;
- (void)navigationSession:(id)arg1 failedRerouteWithErrorCode:(long long)arg2;
- (void)navigationSession:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
- (void)navigationSession:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4;
- (void)navigationSessionDidArrive:(id)arg1;
- (void)navigationSessionDidCancelReroute:(id)arg1;
- (void)navigationSessionHideSecondaryStep:(id)arg1;
- (void)navigationSessionWillPause:(id)arg1;
- (void)navigationSessionWillReroute:(id)arg1;
- (void)navigationSessionWillResumeFromPause:(id)arg1;
- (void)navigationTraceManager:(id)arg1 didUpdateTracePlaybackDetails:(id)arg2;
- (void)navigationTraceManagerDidFailToRecordTrace:(id)arg1;
- (void)pauseGuidanceLevelUpdates;
- (void)prepareNavigationWithRouteDetails:(id)arg1;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (void)repeatCurrentGuidanceWithReply:(id)arg1;
- (void)repeatCurrentTrafficAlertWithReply:(id)arg1;
- (void)resumeGuidanceLevelUpdates;
- (void)resumeOriginalDestination;
- (void)setCurrentAudioOutputSetting:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setGuidancePromptsEnabled:(bool)arg1;
- (void)setHFPPreference:(bool)arg1 forSetting:(id)arg2;
- (void)setHeadingOrientation:(int)arg1;
- (void)setIsConnectedToCarplay:(bool)arg1;
- (void)setRideIndex:(unsigned long long)arg1 forLegIndex:(unsigned long long)arg2;
- (void)setTraceIsPlaying:(bool)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTracePosition:(double)arg1;
- (id)settings;
- (void)startNavigationForRouteDetails:(id)arg1 handler:(id)arg2;
- (void)stopCurrentGuidancePrompt;
- (void)stopNavigation;
- (void)updateDestination:(id)arg1;
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(id)arg2;

@end