/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface SiriCoreWiFiManagerClient : NSObject {
    struct __WiFiManagerClient { } * _primitiveWiFiManagerClient;
    int  _type;
}

- (struct __WiFiManagerClient { }*)_primitiveWiFiManagerClient;
- (void)_setWiFiManagerClientType:(int)arg1;
- (void)dealloc;
- (void)disableWiFiTimeout;
- (void)enableWiFiTimeout;
- (bool)hasAssociatedNetwork;
- (id)init;
- (bool)isWifiEnabled;
- (void)registerOneShotEnabledHandler:(id)arg1;

@end
