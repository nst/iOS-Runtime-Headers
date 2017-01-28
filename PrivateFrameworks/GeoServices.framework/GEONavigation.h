/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavigation : NSObject {
    NSDate * _arrivalDate;
    GEONavigationDetails * _details;
    NSDate * _displayETA;
    double  _displayRemainingTime;
    NSTimer * _etaUpdateTimer;
    bool  _forceUpdateETA;
    GEONavigationGuidanceState * _guidanceState;
    bool  _hasStartedGuidance;
    NSData * _lastSentRouteContext;
    NSXPCConnection * _nanomapscdConnection;
    NSPointerArray * _observers;
    <GEORoutePreloadSession> * _preloadSession;
    GEOLocation * _previousLocation;
    bool  _shouldSendRouteWithStatus;
}

@property (nonatomic) unsigned long long announcementStage;
@property (nonatomic, readonly) NSDate *arrivalDate;
@property (nonatomic, readonly) NSString *destinationName;
@property (nonatomic) long long displayStep;
@property (nonatomic, readonly) double distanceRemainingOnRoute;
@property (nonatomic, readonly) double distanceToManeuverEnd;
@property (nonatomic, readonly) double distanceToManeuverStart;
@property (nonatomic, readonly) double distanceToRoute;
@property (nonatomic) int guidanceLevel;
@property (nonatomic, readonly) int guidanceLevelIgnoringTimeCriterion;
@property (nonatomic) bool guidancePromptsEnabled;
@property (nonatomic, readonly) bool hasStartedGuidance;
@property (nonatomic, readonly) bool isNavigating;
@property (nonatomic, readonly) GEOLocation *location;
@property (nonatomic, readonly) bool locationUnreliable;
@property (nonatomic) int navigationState;
@property (nonatomic) int navigationTransportType;
@property (nonatomic, readonly) unsigned long long nextAnnouncementStage;
@property (nonatomic, readonly) double remainingTime;
@property (nonatomic, readonly) GEOComposedRoute *route;
@property (nonatomic, readonly) GEORouteMatch *routeMatch;
@property (nonatomic, readonly) bool shouldSuppressCellularDataAlerts;
@property (nonatomic, readonly) double timeUntilNextAnnouncement;

+ (bool)_canRunNavigationBasedOnDistanceForRoute:(id)arg1 withCurrentLocation:(id)arg2;
+ (bool)canNavigateWithTransportType:(int)arg1;
+ (bool)canRunNavigationForRoute:(id)arg1 withCurrentLocation:(id)arg2;
+ (id)displayDateForDate:(id)arg1;
+ (double)displayTimeIntervalForTimeInterval:(double)arg1;
+ (id)sharedInstance;

- (void)_clearETATimer;
- (void)_closeNanomapscdConnection;
- (void)_createNanomapscdConnection;
- (void)_forceUpdateETA;
- (void)_invalidateNavigationSessionWithRouteContext:(id)arg1;
- (void)_notifyObserversOfGuidanceStateChange;
- (void)_updateETA;
- (void)_updateNavigationGuidanceStateCellularDataAlertsAttribute:(bool)arg1;
- (void)_updateNavigationRouteDetails:(id)arg1 routeStatus:(id)arg2 routeContext:(id)arg3;
- (void)_updateNavigationRouteStatus;
- (void)addObserver:(id)arg1;
- (unsigned long long)announcementStage;
- (id)arrivalDate;
- (void)dealloc;
- (id)destinationName;
- (long long)displayStep;
- (double)distanceRemainingOnRoute;
- (double)distanceToManeuverEnd;
- (double)distanceToManeuverStart;
- (double)distanceToRoute;
- (int)guidanceLevel;
- (int)guidanceLevelIgnoringTimeCriterion;
- (bool)guidancePromptsEnabled;
- (bool)hasStartedGuidance;
- (id)init;
- (bool)isNavigating;
- (id)location;
- (bool)locationUnreliable;
- (int)navigationState;
- (int)navigationTransportType;
- (unsigned long long)nextAnnouncementStage;
- (id)preloadSessionForRoute:(id)arg1 loggingEnabled:(bool)arg2 minimalDebugging:(bool)arg3 fullDebugging:(bool)arg4 delegate:(id)arg5 traits:(id)arg6 withBatteryHandler:(id)arg7;
- (void)recalculatedToRoute:(id)arg1 location:(id)arg2 routeMatch:(id)arg3;
- (double)remainingTime;
- (void)removeObserver:(id)arg1;
- (id)route;
- (id)routeMatch;
- (void)selectRoute:(id)arg1 currentLocation:(id)arg2;
- (void)sendNavigationStatus;
- (void)setAnnouncementStage:(unsigned long long)arg1;
- (void)setDisplayStep:(long long)arg1;
- (void)setGuidanceLevel:(int)arg1;
- (void)setGuidancePromptsEnabled:(bool)arg1;
- (void)setNavigationState:(int)arg1;
- (void)setNavigationTransportType:(int)arg1;
- (void)setNextAnnouncementStage:(unsigned long long)arg1 andTime:(double)arg2;
- (void)setRoute:(id)arg1;
- (bool)shouldSuppressCellularDataAlerts;
- (void)startTrackingFromLocation:(id)arg1;
- (void)startTurnByTurnNavigationForTransportType:(int)arg1 state:(int)arg2;
- (void)startWithDestinationName:(id)arg1 stringFormatter:(id)arg2;
- (void)stop;
- (void)stopTracking;
- (void)stopTurnByTurnNavigation;
- (double)timeUntilNextAnnouncement;
- (void)updateLocation:(id)arg1 routeMatch:(id)arg2 etaRoute:(id)arg3 locationUnreliable:(bool)arg4;
- (void)updatePreloaderWithGuidanceLevel:(int)arg1;
- (void)updateRouteGuidanceLevelForLocation:(id)arg1 shouldFilterLocationUpdatesOnDistance:(bool)arg2;
- (void)updatedETA:(id)arg1;

@end
