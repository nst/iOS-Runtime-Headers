/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKLocationManager : NSObject <CLLocationManagerDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    CLLocationManager * _clLocationManager;
    NSXPCConnection * _connection;
    int  _didChangeNotificationToken;
    NSDictionary * _lastKnownLocation;
    id /* block */  _locationUpdateBlock;
    NSObject<OS_dispatch_queue> * _readWriteQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, retain) CLLocationManager *clLocationManager;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int didChangeNotificationToken;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *lastKnownLocation;
@property (nonatomic, copy) id /* block */ locationUpdateBlock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *readWriteQueue;
@property (readonly) Class superclass;

+ (id)defaultLocationManager;

- (void).cxx_destruct;
- (id)_connection;
- (id)_copyLastKnownLocation;
- (id)_createLocationObjFromLocationDictionary:(id)arg1;
- (id)_dictionaryForCLLocation:(id)arg1;
- (id)_dictionaryOnDisk;
- (void)_dictionaryOnDisk:(id /* block */)arg1;
- (id)_dictionaryRepresentation;
- (double)_getDistanceOfLastKnownLocationDictionary:(id)arg1 fromLocation:(id)arg2;
- (bool)_isLastKnownLocation:(id)arg1 freshForMaxAge:(double)arg2 fromNewTimestamp:(double)arg3;
- (bool)_isLastKnownLocationFresh:(id)arg1;
- (bool)_locationServicesEnabled;
- (void)_readFromDisk;
- (void)_requestActiveLocationChangeUpdates;
- (void)_requestCLLocationUpdates:(id /* block */)arg1;
- (void)_requestRecentCLLocation:(id /* block */)arg1;
- (bool)_shouldLastKnownLocation:(id)arg1 beUpdatedTo:(id)arg2;
- (long long)_statusForCLAuthorizationStatus:(int)arg1;
- (id)_supportPath;
- (void)_writeToDisk;
- (void)_writeToDisk:(id)arg1 completion:(id /* block */)arg2;
- (id)accessQueue;
- (long long)authorizationStatus;
- (id)clLocationManager;
- (id)connection;
- (void)dealloc;
- (int)didChangeNotificationToken;
- (id)init;
- (bool)isLastKnownLocation:(id)arg1 significantlyOlderThanNewLocation:(id)arg2;
- (id)lastKnownLocation;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id /* block */)locationUpdateBlock;
- (id)readWriteQueue;
- (void)requestAuthorization;
- (void)requestAuthorizationWithForcedPrompt:(bool)arg1;
- (void)setAccessQueue:(id)arg1;
- (void)setClLocationManager:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDidChangeNotificationToken:(int)arg1;
- (void)setLastKnownLocation:(id)arg1;
- (void)setLocationUpdateBlock:(id /* block */)arg1;
- (void)setReadWriteQueue:(id)arg1;
- (void)updateLocationIfNeeded;

@end
