/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFForecastRequest : WFTask {
    bool  _attachRawAPIData;
    id  _completionHandler;
    NSDateComponents * _date;
    unsigned long long  _forecastType;
    NSLocale * _locale;
    WFLocation * _location;
    NSData * _rawAPIData;
    NSString * _trackingParameter;
}

@property (nonatomic) bool attachRawAPIData;
@property (nonatomic, copy) id completionHandler;
@property (nonatomic, copy) NSDateComponents *date;
@property (nonatomic) unsigned long long forecastType;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic, copy) WFLocation *location;
@property (nonatomic, retain) NSData *rawAPIData;
@property (nonatomic, retain) NSString *trackingParameter;

+ (id)forecastRequestForLocation:(id)arg1 date:(id)arg2 completionHandler:(id)arg3;

- (void).cxx_destruct;
- (bool)attachRawAPIData;
- (void)cleanup;
- (id)completionHandler;
- (id)date;
- (id)description;
- (id)editLinksForForecast:(id)arg1;
- (unsigned long long)forecastType;
- (void)handleCancellation;
- (void)handleResponse:(id)arg1;
- (id)initWithLocation:(id)arg1 completionHandler:(id)arg2;
- (id)initWithLocation:(id)arg1 date:(id)arg2 completionHandler:(id)arg3;
- (id)locale;
- (id)location;
- (id)rawAPIData;
- (void)setAttachRawAPIData:(bool)arg1;
- (void)setCompletionHandler:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setForecastType:(unsigned long long)arg1;
- (void)setLocale:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setRawAPIData:(id)arg1;
- (void)setTrackingParameter:(id)arg1;
- (void)startWithService:(id)arg1;
- (id)trackingParameter;

@end
