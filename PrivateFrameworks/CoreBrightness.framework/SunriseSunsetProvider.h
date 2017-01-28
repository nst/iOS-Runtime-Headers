/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface SunriseSunsetProvider : NSObject {
    id  _callbackBlock;
    _CDClientContext * _duetContextStore;
    NSObject<OS_dispatch_semaphore> * _duetDispatchSemaphore;
    NSDictionary * _duetInfo;
    _CDContextualKeyPath * _duetKeyPath;
    _CDContextualChangeRegistration * _duetRegistration;
    int  _logLevel;
    bool  _sunriseSunsetNotificationEnabled;
}

@property int logLevel;

- (void)cancel;
- (id)copySunriseSunsetInfo:(int)arg1;
- (id)copySunsetSunriseInfoFromContext;
- (void)dealloc;
- (id)initWithCallback:(id)arg1;
- (int)logLevel;
- (void)registerBlock:(id)arg1;
- (void)setLogLevel:(int)arg1;
- (void)unregisterBlock;
- (void)unregisterNotification;
- (void)updateSunriseSunsetInfo;

@end
