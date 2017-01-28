/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface WATodayAutoupdatingLocationModel : WATodayModel <CLLocationManagerDelegate, SynchronizedDefaultsDelegate> {
    id  _WeatherLocationManagerGenerator;
    unsigned long long  _citySource;
    WFGeocodeRequest * _geocodeRequest;
    bool  _isLocationTrackingEnabled;
    WeatherLocationManager * _locationManager;
    bool  _locationServicesActive;
    WeatherPreferences * _preferences;
}

@property (nonatomic, copy) id WeatherLocationManagerGenerator;
@property (nonatomic) unsigned long long citySource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) WFGeocodeRequest *geocodeRequest;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isLocationTrackingEnabled;
@property (nonatomic, retain) WeatherLocationManager *locationManager;
@property (nonatomic) bool locationServicesActive;
@property (nonatomic, retain) WeatherPreferences *preferences;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)WeatherLocationManagerGenerator;
- (void)_executeLocationUpdateForFirstWeatherCityWithCompletion:(id)arg1;
- (void)_executeLocationUpdateForLocalWeatherCityWithCompletion:(id)arg1;
- (void)_executeLocationUpdateWithCompletion:(id)arg1;
- (void)_kickstartLocationManager;
- (void)_persistStateWithModel:(id)arg1;
- (bool)_reloadForecastData:(bool)arg1;
- (void)_teardownLocationManager;
- (void)_weatherPreferencesWereSynchronized:(id)arg1;
- (void)_willDeliverForecastModel:(id)arg1;
- (unsigned long long)citySource;
- (void)dealloc;
- (id)forecastModel;
- (id)geocodeRequest;
- (id)init;
- (id)initWithPreferences:(id)arg1 effectiveBundleIdentifier:(id)arg2;
- (bool)isLocationTrackingEnabled;
- (id)locationManager;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (bool)locationServicesActive;
- (id)preferences;
- (void)setCitySource:(unsigned long long)arg1;
- (void)setCitySource:(unsigned long long)arg1 fireNotification:(bool)arg2;
- (void)setGeocodeRequest:(id)arg1;
- (void)setIsLocationTrackingEnabled:(bool)arg1;
- (void)setLocationManager:(id)arg1;
- (void)setLocationServicesActive:(bool)arg1;
- (void)setPreferences:(id)arg1;
- (void)setWeatherLocationManagerGenerator:(id)arg1;
- (void)ubiquitousDefaultsDidChange:(id)arg1;

@end
