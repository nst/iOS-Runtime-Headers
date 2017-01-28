/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTRoutineManager : NSObject <RTFrameworkProtocol> {
    RTRoutineManagerRegistrantApplicationPrediction * _applicationPredictionRegistrant;
    RTEventAgentHelper * _eventAgentHelper;
    id  _leechedVisitHandler;
    id  _nextPredictedLocationsOfInterestHandler;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _restorationIdentifier;
    RTRoutineManagerRegistrantRoomPrediction * _roomPredictionRegistrant;
    NSMutableDictionary * _scenarioTriggerHandlers;
    id  _vehicleEventsHandler;
    id  _visitHandler;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) RTRoutineManagerRegistrantApplicationPrediction *applicationPredictionRegistrant;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) RTEventAgentHelper *eventAgentHelper;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id leechedVisitHandler;
@property (nonatomic, copy) id nextPredictedLocationsOfInterestHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSString *restorationIdentifier;
@property (nonatomic, retain) RTRoutineManagerRegistrantRoomPrediction *roomPredictionRegistrant;
@property (nonatomic, retain) NSMutableDictionary *scenarioTriggerHandlers;
@property (readonly) Class superclass;
@property (nonatomic, copy) id vehicleEventsHandler;
@property (nonatomic, copy) id visitHandler;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)defaultManager;
+ (id)modeOfTransportationToString:(long long)arg1;
+ (id)routineModeToString:(long long)arg1;

- (void).cxx_destruct;
- (void)_createConnection;
- (id)_proxyForServicingSelector:(SEL)arg1;
- (id)_proxyForServicingSelector:(SEL)arg1 withErrorHandler:(id)arg2;
- (void)addLocationOfInterestOfType:(long long)arg1 mapItem:(id)arg2 handler:(id)arg3;
- (void)addLocationOfInterestOfType:(long long)arg1 mapItem:(id)arg2 withHandler:(id)arg3;
- (id)applicationPredictionRegistrant;
- (void)clearAllVehicleEvents;
- (void)clearAllVehicleEventsWithHandler:(id)arg1;
- (void)clearRoutine;
- (void)createConnection;
- (void)dealloc;
- (void)engageInVehicleEventWithIdentifier:(id)arg1;
- (id)eventAgentHelper;
- (void)fetchAllLocationsOfInterestForSettingsWithHandler:(id)arg1;
- (void)fetchAllLocationsOfInterestWithHandler:(id)arg1;
- (void)fetchBBPluginSupportedWithHandler:(id)arg1;
- (void)fetchLastVehicleEventsWithHandler:(id)arg1;
- (void)fetchLocationOfInterestAtCachedLocationWithHandler:(id)arg1;
- (void)fetchLocationOfInterestAtCurrentLocationWithHandler:(id)arg1;
- (void)fetchLocationOfInterestAtLocation:(id)arg1 withHandler:(id)arg2;
- (void)fetchLocationOfInterestWithIdentifier:(id)arg1 withHandler:(id)arg2;
- (void)fetchLocationsOfInterestAssociatedToIdentifier:(id)arg1 withHandler:(id)arg2;
- (void)fetchLocationsOfInterestOfType:(long long)arg1 withHandler:(id)arg2;
- (void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 withHandler:(id)arg3;
- (void)fetchMonitoredScenarioTriggerTypesWithHandler:(id)arg1;
- (void)fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withHandler:(id)arg4;
- (void)fetchNextPredictedLocationsOfInterestWithHandler:(id)arg1;
- (void)fetchPathToDiagnosticFilesWithHandler:(id)arg1;
- (void)fetchPredictedApplications:(id)arg1;
- (void)fetchPredictedApplicationsAtLocation:(id)arg1 handler:(id)arg2;
- (void)fetchPredictedApplicationsWithPredicate:(id)arg1 handler:(id)arg2;
- (void)fetchPredictedConditionsForAction:(id)arg1 withHandler:(id)arg2;
- (void)fetchPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 withHandler:(id)arg3;
- (void)fetchPredictedExitDatesWithHandler:(id)arg1;
- (void)fetchPredictedLocationsOfInterestAssociatedToTitle:(id)arg1 location:(id)arg2 calendarIdentifier:(id)arg3 withHandler:(id)arg4;
- (void)fetchPredictedLocationsOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2 withHandler:(id)arg3;
- (void)fetchPredictedLocationsOfInterestOnDate:(id)arg1 withHandler:(id)arg2;
- (void)fetchPredictedRoomsAtCurrentLocationWithHandler:(id)arg1;
- (void)fetchRoutineEnabledWithHandler:(id)arg1;
- (void)fetchRoutineModeFromLocation:(id)arg1 withHandler:(id)arg2;
- (void)handleDaemonStart;
- (id)init;
- (id)initWithRestorationIdentifier:(id)arg1;
- (id)leechedVisitHandler;
- (id)nextPredictedLocationsOfInterestHandler;
- (void)onLeechedVisit:(id)arg1 withError:(id)arg2;
- (void)onNextPredictedLocationsOfInterest:(id)arg1 withError:(id)arg2;
- (void)onPredictedApplications:(id)arg1 error:(id)arg2;
- (void)onPredictedRooms:(id)arg1 error:(id)arg2;
- (void)onScenarioTrigger:(id)arg1 withError:(id)arg2;
- (void)onVehicleEvents:(id)arg1 error:(id)arg2;
- (void)onVisit:(id)arg1 withError:(id)arg2;
- (id)queue;
- (id)restorationIdentifier;
- (id)roomPredictionRegistrant;
- (id)scenarioTriggerHandlers;
- (void)setApplicationPredictionRegistrant:(id)arg1;
- (void)setEventAgentHelper:(id)arg1;
- (void)setLeechedVisitHandler:(id)arg1;
- (void)setMapItem:(id)arg1 forLocationOfInterestWithIdentifier:(id)arg2;
- (void)setNextPredictedLocationsOfInterestHandler:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRestorationIdentifier:(id)arg1;
- (void)setRoomPredictionRegistrant:(id)arg1;
- (void)setRoutineEnabled:(bool)arg1;
- (void)setScenarioTriggerHandlers:(id)arg1;
- (void)setVehicleEventsHandler:(id)arg1;
- (void)setVisitHandler:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)simulateApplicationPredictionWithBundleIdentifier:(id)arg1 reason:(long long)arg2 handler:(id)arg3;
- (void)startLeechingVisitsWithHandler:(id)arg1;
- (void)startMonitoringForPredictedApplicationsUsingPredicate:(id)arg1 handler:(id)arg2;
- (void)startMonitoringForPredictedApplicationsWithHandler:(id)arg1;
- (void)startMonitoringForPredictedRoomsWithHandler:(id)arg1;
- (void)startMonitoringNextPredictedLocationsOfInterestWithHandler:(id)arg1;
- (void)startMonitoringScenarioTriggerOfType:(unsigned long long)arg1 withHandler:(id)arg2;
- (void)startMonitoringVehicleEventsWithHandler:(id)arg1;
- (void)startMonitoringVisitsWithHandler:(id)arg1;
- (void)stopLeechingVisits;
- (void)stopMonitoringForPredictedApplications;
- (void)stopMonitoringForPredictedRooms;
- (void)stopMonitoringNextPredictedLocationsOfInterest;
- (void)stopMonitoringScenarioTriggerOfType:(unsigned long long)arg1;
- (void)stopMonitoringVehicleEvents;
- (void)stopMonitoringVisits;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 customLabel:(id)arg2 handler:(id)arg3;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 mapItem:(id)arg2 handler:(id)arg3;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 handler:(id)arg3;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 mapItem:(id)arg3 customLabel:(id)arg4 handler:(id)arg5;
- (void)updateVehicleEventWithIdentifier:(id)arg1 geoMapItem:(id)arg2;
- (void)updateVehicleEventWithIdentifier:(id)arg1 location:(id)arg2;
- (void)updateVehicleEventWithIdentifier:(id)arg1 notes:(id)arg2;
- (void)updateVehicleEventWithIdentifier:(id)arg1 photo:(id)arg2;
- (void)userInteractionWithPredictedLocationOfInterest:(id)arg1 interaction:(unsigned long long)arg2 feedback:(id)arg3;
- (void)vehicleEventAtLocation:(id)arg1 notes:(id)arg2;
- (void)vehicleEventAtLocation:(id)arg1 notes:(id)arg2 handler:(id)arg3;
- (id)vehicleEventsHandler;
- (id)visitHandler;
- (id)xpcConnection;

@end
