/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPIndoorEvent : PBCodable <NSCopying> {
    CLPIndoorCMAttitude * _cmAttitude;
    CLPIndoorCMPedometer * _cmPedometer;
    struct { 
        unsigned int type : 1; 
    }  _has;
    CLPLocation * _location;
    CLPIndoorMotionActivity * _motionActivity;
    CLPIndoorPressure * _pressure;
    int  _type;
    CLPIndoorWifiScan * _wifiScan;
}

@property (nonatomic, retain) CLPIndoorCMAttitude *cmAttitude;
@property (nonatomic, retain) CLPIndoorCMPedometer *cmPedometer;
@property (nonatomic, readonly) bool hasCmAttitude;
@property (nonatomic, readonly) bool hasCmPedometer;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic, readonly) bool hasMotionActivity;
@property (nonatomic, readonly) bool hasPressure;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasWifiScan;
@property (nonatomic, retain) CLPLocation *location;
@property (nonatomic, retain) CLPIndoorMotionActivity *motionActivity;
@property (nonatomic, retain) CLPIndoorPressure *pressure;
@property (nonatomic) int type;
@property (nonatomic, retain) CLPIndoorWifiScan *wifiScan;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (id)cmAttitude;
- (id)cmPedometer;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCmAttitude;
- (bool)hasCmPedometer;
- (bool)hasLocation;
- (bool)hasMotionActivity;
- (bool)hasPressure;
- (bool)hasType;
- (bool)hasWifiScan;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (id)motionActivity;
- (id)pressure;
- (bool)readFrom:(id)arg1;
- (void)setCmAttitude:(id)arg1;
- (void)setCmPedometer:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setMotionActivity:(id)arg1;
- (void)setPressure:(id)arg1;
- (void)setType:(int)arg1;
- (void)setWifiScan:(id)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)wifiScan;
- (void)writeTo:(id)arg1;

@end
