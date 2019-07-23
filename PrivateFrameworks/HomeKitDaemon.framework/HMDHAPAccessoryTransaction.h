/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHAPAccessoryTransaction : HMDAccessoryTransaction

@property (nonatomic, retain) NSNumber *accessoryFlags;
@property (nonatomic, retain) NSData *accessorySetupHash;
@property (nonatomic, retain) NSString *bridgeUUID;
@property (nonatomic, retain) NSData *broadcastKey;
@property (nonatomic, retain) NSNumber *certificationStatus;
@property (nonatomic, retain) HMFConnectivityInfo *connectivityInfo;
@property (nonatomic, retain) NSNumber *hardwareSupport;
@property (nonatomic, retain) NSNumber *keyUpdatedStateNumber;
@property (nonatomic, retain) NSDate *keyUpdatedTime;
@property (nonatomic, retain) NSString *pairingUsername;
@property (nonatomic, retain) NSData *publicKey;
@property (nonatomic, retain) NSData *relayAccessToken;
@property (nonatomic, retain) NSString *relayIdentifier;
@property (nonatomic, retain) NSNumber *relayState;
@property (nonatomic, retain) NSNumber *supportsRelay;
@property (nonatomic, retain) NSArray *targetUUIDs;
@property (nonatomic, retain) NSArray *transportInformation;
@property (nonatomic, retain) NSString *uniqueIdentifier;

+ (id)properties;

- (id)dependentUUIDs;

@end
