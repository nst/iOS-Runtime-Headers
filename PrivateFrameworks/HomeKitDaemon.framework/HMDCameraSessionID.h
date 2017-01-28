/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraSessionID : NSObject <NSCopying> {
    NSString * _accessoryName;
    NSString * _cameraProactiveSessionID;
    NSString * _cameraSessionAppID;
    NSString * _descriptionString;
    NSMutableDictionary * _deviceMilestones;
    NSString * _deviceSectionName;
    NSMutableDictionary * _milestones;
    HMDDevice * _remoteDevice;
    NSString * _sessionID;
    bool  _spiClient;
}

@property (nonatomic, readonly) NSString *accessoryName;
@property (nonatomic, readonly) NSString *cameraProactiveSessionID;
@property (nonatomic, readonly) NSString *cameraSessionAppID;
@property (nonatomic, readonly) NSString *descriptionString;
@property (nonatomic, readonly) NSMutableDictionary *deviceMilestones;
@property (nonatomic, readonly) NSString *deviceSectionName;
@property (nonatomic, readonly) NSMutableDictionary *milestones;
@property (nonatomic, readonly) HMDDevice *remoteDevice;
@property (nonatomic, readonly) NSString *sessionID;
@property (getter=isSPIClient, nonatomic, readonly) bool spiClient;

+ (id)millisecondsSince1970;

- (void).cxx_destruct;
- (id)_createDescriptionString;
- (id)_extractSessionAppID:(id)arg1;
- (void)_prepareDeviceMilestones;
- (id)accessoryName;
- (void)addParameterFor:(id)arg1 value:(id)arg2;
- (id)cameraProactiveSessionID;
- (id)cameraSessionAppID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionString;
- (id)deviceMilestones;
- (id)deviceSectionName;
- (unsigned long long)hash;
- (id)initWithAccessory:(id)arg1 service:(id)arg2 sessionID:(id)arg3 message:(id)arg4;
- (id)initWithAccessory:(id)arg1 sessionID:(id)arg2 message:(id)arg3;
- (id)initWithAccessoryName:(id)arg1 sessionID:(id)arg2 cameraSessionAppID:(id)arg3 cameraProactiveSessionID:(id)arg4 remoteDevice:(id)arg5 spiClient:(bool)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isSPIClient;
- (void)markMilestoneFor:(id)arg1;
- (void)markMilestoneForPath:(id)arg1;
- (id)milestones;
- (id)remoteDevice;
- (id)sessionID;
- (void)setParameterFor:(id)arg1 value:(id)arg2;
- (void)setParameterForPath:(id)arg1 value:(id)arg2;

@end
