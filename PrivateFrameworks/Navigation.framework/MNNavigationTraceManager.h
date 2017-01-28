/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNNavigationTraceManager : NSObject <GEOMotionContextProvider, MNLocationProvider, MNTracePlayerObserver> {
    <MNLocationProviderDelegate> * _locationProviderDelegate;
    <GEOMotionContextProviderDelegate> * _motionContextProviderDelegate;
    int  _navigationType;
    <MNNavigationTraceManagerDelegate> * _traceManagerDelegate;
    MNTracePlayer * _tracePlayer;
    MNTraceRecorder * _traceRecorder;
}

@property (nonatomic) long long activityType;
@property (nonatomic, copy) id authorizationRequestBlock;
@property (nonatomic, readonly) int authorizationStatus;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MNLocationProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double desiredAccuracy;
@property (nonatomic) double distanceFilter;
@property (nonatomic, retain) NSBundle *effectiveBundle;
@property (nonatomic, copy) NSString *effectiveBundleIdentifier;
@property (nonatomic, readonly) double expectedGpsUpdateInterval;
@property (readonly) unsigned long long hash;
@property (nonatomic) int headingOrientation;
@property (nonatomic, readonly) bool isSimulation;
@property (nonatomic, readonly) bool isTracePlayer;
@property (getter=isLocationServicesPreferencesDialogEnabled, nonatomic) bool locationServicesPreferencesDialogEnabled;
@property (nonatomic) bool matchInfoEnabled;
@property (nonatomic) <GEOMotionContextProviderDelegate> *motionDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeScale;
@property (nonatomic) <MNNavigationTraceManagerDelegate> *traceManagerDelegate;
@property (nonatomic, readonly) MNTracePlayer *tracePlayer;
@property (nonatomic, readonly) MNTraceRecorder *traceRecorder;
@property (nonatomic, readonly) bool usesCLMapCorrection;

- (void).cxx_destruct;
- (bool)_isNavigating;
- (unsigned long long)_startIndexForNavigation;
- (long long)activityType;
- (id)authorizationRequestBlock;
- (int)authorizationStatus;
- (void)close;
- (void)dealloc;
- (id)delegate;
- (double)desiredAccuracy;
- (double)distanceFilter;
- (id)effectiveBundle;
- (id)effectiveBundleIdentifier;
- (double)expectedGpsUpdateInterval;
- (int)headingOrientation;
- (bool)isLocationServicesPreferencesDialogEnabled;
- (bool)isSimulation;
- (bool)isTracePlayer;
- (bool)matchInfoEnabled;
- (id)motionDelegate;
- (void)openWithRoutePlanningDetails:(id)arg1;
- (void)requestWhenInUseAuthorization;
- (void)requestWhenInUseAuthorizationWithPrompt;
- (void)resetForActiveTileGroupChanged;
- (void)setActivityType:(long long)arg1;
- (void)setAuthorizationRequestBlock:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesiredAccuracy:(double)arg1;
- (void)setDistanceFilter:(double)arg1;
- (void)setEffectiveBundle:(id)arg1;
- (void)setEffectiveBundleIdentifier:(id)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)setLocationServicesPreferencesDialogEnabled:(bool)arg1;
- (void)setMatchInfoEnabled:(bool)arg1;
- (void)setMotionDelegate:(id)arg1;
- (void)setTraceManagerDelegate:(id)arg1;
- (void)startMotionUpdates;
- (void)startUpdatingHeading;
- (void)startUpdatingLocation;
- (void)startUpdatingVehicleHeading;
- (void)startUpdatingVehicleSpeed;
- (void)stopMotionUpdates;
- (void)stopUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)stopUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;
- (double)timeScale;
- (id)traceManagerDelegate;
- (id)tracePlayer;
- (void)tracePlayer:(id)arg1 didJumpToRouteResponse:(id)arg2 request:(id)arg3 destination:(id)arg4;
- (void)tracePlayer:(id)arg1 didPlayAtTime:(double)arg2;
- (void)tracePlayer:(id)arg1 didReceiveLocationError:(id)arg2;
- (void)tracePlayer:(id)arg1 didSeekToTime:(double)arg2 location:(id)arg3;
- (void)tracePlayer:(id)arg1 didSeekToTransportType:(int)arg2;
- (void)tracePlayer:(id)arg1 didUpdateHeading:(id)arg2;
- (void)tracePlayer:(id)arg1 didUpdateLocation:(id)arg2;
- (void)tracePlayer:(id)arg1 didUpdateMotion:(unsigned long long)arg2 exitType:(unsigned long long)arg3 confidence:(unsigned long long)arg4;
- (void)tracePlayer:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)tracePlayer:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)tracePlayerDidPause:(id)arg1;
- (void)tracePlayerDidPauseLocationUpdates:(id)arg1;
- (void)tracePlayerDidResume:(id)arg1;
- (void)tracePlayerDidResumeLocationUpdates:(id)arg1;
- (void)tracePlayerDidStart:(id)arg1;
- (void)tracePlayerDidStayOnRoute:(id)arg1;
- (void)tracePlayerDidStop:(id)arg1;
- (id)traceRecorder;
- (bool)usesCLMapCorrection;

@end
