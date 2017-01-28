/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVRoute : NSObject {
    NSArray * _auxiliaryDevices;
    NSDictionary * _avRouteDescription;
    MPAVBatteryLevel * _batteryLevel;
    bool  _carplayRoute;
    long long  _displayRouteType;
    long long  _pickableRouteType;
    bool  _picked;
    bool  _pickedOnPairedDevice;
    bool  _playingOnPairedDevice;
    bool  _requiresPassword;
    NSString * _routeName;
    long long  _routeSubtype;
    long long  _routeType;
    NSString * _routeUID;
    MPAVRoute * _wirelessDisplayRoute;
}

@property (getter=isAirpodsRoute, nonatomic, readonly) bool airpodsRoute;
@property (nonatomic, readonly) NSArray *auxiliaryDevices;
@property (nonatomic, readonly) MPAVBatteryLevel *batteryLevel;
@property (getter=isBeatsSoloRoute, nonatomic, readonly) bool beatsSoloRoute;
@property (getter=isBeatsXRoute, nonatomic, readonly) bool beatsXRoute;
@property (getter=isCarplayRoute, nonatomic, readonly) bool carplayRoute;
@property (nonatomic, readonly) bool displayIsPicked;
@property (nonatomic, readonly) long long displayRouteType;
@property (nonatomic, readonly) bool isDeviceRoute;
@property (nonatomic, readonly) long long passwordType;
@property (nonatomic, readonly) long long pickableRouteType;
@property (getter=isPicked, nonatomic, readonly) bool picked;
@property (getter=isPickedOnPairedDevice, nonatomic, readonly) bool pickedOnPairedDevice;
@property (getter=isPlayingOnPairedDevice, nonatomic, readonly) bool playingOnPairedDevice;
@property (getter=isPowerbeatsRoute, nonatomic, readonly) bool powerbeatsRoute;
@property (nonatomic, readonly) bool requiresPassword;
@property (nonatomic, readonly) NSString *routeName;
@property (nonatomic, readonly) long long routeSubtype;
@property (nonatomic, readonly) long long routeType;
@property (nonatomic, readonly) NSString *routeUID;
@property (nonatomic, readonly) MPAVRoute *wirelessDisplayRoute;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (void).cxx_destruct;
- (id)_initWithAVRouteDescription:(id)arg1;
- (id)_productIdentifier;
- (void)_routingControllerPickedRouteNotification:(id)arg1;
- (id)auxiliaryDevices;
- (id)avRouteDescription;
- (id)batteryLevel;
- (void)dealloc;
- (id)description;
- (bool)displayIsPicked;
- (long long)displayRouteType;
- (unsigned long long)hash;
- (bool)isAirpodsRoute;
- (bool)isBeatsSoloRoute;
- (bool)isBeatsXRoute;
- (bool)isCarplayRoute;
- (bool)isDeviceRoute;
- (bool)isEqual:(id)arg1;
- (bool)isPicked;
- (bool)isPickedOnPairedDevice;
- (bool)isPlayingOnPairedDevice;
- (bool)isPowerbeatsRoute;
- (long long)passwordType;
- (long long)pickableRouteType;
- (bool)requiresPassword;
- (id)routeName;
- (long long)routeSubtype;
- (long long)routeType;
- (id)routeUID;
- (void)setAVRouteDescription:(id)arg1;
- (void)setDisplayRouteType:(long long)arg1;
- (void)setPicked:(bool)arg1;
- (void)setRouteName:(id)arg1;
- (void)setWirelessDisplayRoute:(id)arg1;
- (id)wirelessDisplayRoute;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

- (long long)rc_audioRouteType;
- (bool)rc_shouldExpectFaceContact;

@end
