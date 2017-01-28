/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface TWCCityUpdater : NSObject {
    <WeatherUpdaterDelegate> * _delegate;
    WAForecastModelController * _forecastModelController;
    NSLocale * _locale;
}

@property (nonatomic) <WeatherUpdaterDelegate> *delegate;
@property (nonatomic, retain) WAForecastModelController *forecastModelController;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic, retain) NSString *trackingParameter;

+ (id)sharedCityUpdater;

- (void).cxx_destruct;
- (void)cancel;
- (id)delegate;
- (id)forecastModelController;
- (id)init;
- (bool)isUpdatingCity:(id)arg1;
- (id)locale;
- (void)setDelegate:(id)arg1;
- (void)setForecastModelController:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setTrackingParameter:(id)arg1;
- (id)trackingParameter;
- (void)updateWeatherForCities:(id)arg1;
- (void)updateWeatherForCities:(id)arg1 withCompletionHandler:(id)arg2;
- (void)updateWeatherForCity:(id)arg1;

@end
