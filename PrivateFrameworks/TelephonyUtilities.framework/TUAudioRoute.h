/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUAudioRoute : NSObject {
    TUAudioRoutePreferredRouteOptions * _preferredRouteOptions;
    NSDictionary * _route;
}

@property (getter=isAirTunes, nonatomic, readonly) bool airTunes;
@property (getter=isBluetooth, nonatomic, readonly) bool bluetooth;
@property (nonatomic, readonly) long long bluetoothEndpointType;
@property (getter=isCarAudio, nonatomic, readonly) bool carAudio;
@property (getter=isCurrentlyPicked, nonatomic, readonly) bool currentlyPicked;
@property (nonatomic, readonly) NSArray *identifiersOfOtherConnectedDevices;
@property (getter=isPreferred, nonatomic, readonly) bool preferred;
@property (nonatomic, retain) TUAudioRoutePreferredRouteOptions *preferredRouteOptions;
@property (getter=isReceiver, nonatomic, readonly) bool receiver;
@property (nonatomic, retain) NSDictionary *route;
@property (getter=isSpeaker, nonatomic, readonly) bool speaker;
@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (getter=isWirelessHeadset, nonatomic, readonly) bool wirelessHeadset;

- (void).cxx_destruct;
- (bool)_routeNameEqualTo:(id)arg1;
- (void)_updatePreferredRouteOptions;
- (long long)bluetoothEndpointType;
- (id)description;
- (id)identifiersOfOtherConnectedDevices;
- (id)initWithDictionary:(id)arg1;
- (bool)isAirTunes;
- (bool)isBluetooth;
- (bool)isCarAudio;
- (bool)isCurrentlyPicked;
- (bool)isPreferred;
- (bool)isReceiver;
- (bool)isSpeaker;
- (bool)isWirelessHeadset;
- (id)preferredRouteOptions;
- (id)route;
- (void)setPreferredRouteOptions:(id)arg1;
- (void)setRoute:(id)arg1;
- (id)uniqueIdentifier;

@end
