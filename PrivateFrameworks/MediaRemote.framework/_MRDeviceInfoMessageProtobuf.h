/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRDeviceInfoMessageProtobuf : PBCodable <NSCopying> {
    bool  _allowsPairing;
    NSString * _applicationBundleIdentifier;
    NSString * _applicationBundleVersion;
    NSData * _bluetoothAddress;
    bool  _connected;
    int  _deviceClass;
    NSString * _groupName;
    NSString * _groupUID;
    NSMutableArray * _groupedDevices;
    struct { 
        unsigned int protocolVersion : 1; 
        unsigned int deviceClass : 1; 
        unsigned int lastSupportedMessageType : 1; 
        unsigned int logicalDeviceCount : 1; 
        unsigned int sharedQueueVersion : 1; 
        unsigned int allowsPairing : 1; 
        unsigned int connected : 1; 
        unsigned int isAirplayActive : 1; 
        unsigned int isGroupLeader : 1; 
        unsigned int isProxyGroupPlayer : 1; 
        unsigned int supportsACL : 1; 
        unsigned int supportsExtendedMotion : 1; 
        unsigned int supportsSharedQueue : 1; 
        unsigned int supportsSystemPairing : 1; 
        unsigned int tightlySyncedGroup : 1; 
    }  _has;
    bool  _isAirplayActive;
    bool  _isGroupLeader;
    bool  _isProxyGroupPlayer;
    unsigned int  _lastSupportedMessageType;
    NSString * _localReceiverPairingIdentity;
    NSString * _localizedModelName;
    unsigned int  _logicalDeviceCount;
    NSString * _managedConfigDeviceID;
    NSString * _name;
    unsigned long long  _protocolVersion;
    unsigned int  _sharedQueueVersion;
    bool  _supportsACL;
    bool  _supportsExtendedMotion;
    bool  _supportsSharedQueue;
    bool  _supportsSystemPairing;
    NSString * _systemBuildVersion;
    NSString * _systemMediaApplication;
    NSString * _tightSyncUID;
    bool  _tightlySyncedGroup;
    NSString * _uniqueIdentifier;
}

@property (nonatomic) bool allowsPairing;
@property (nonatomic, retain) NSString *applicationBundleIdentifier;
@property (nonatomic, retain) NSString *applicationBundleVersion;
@property (nonatomic, retain) NSData *bluetoothAddress;
@property (nonatomic) bool connected;
@property (nonatomic) int deviceClass;
@property (nonatomic, readonly) NSString *deviceUID;
@property (nonatomic, retain) NSString *groupName;
@property (nonatomic, retain) NSString *groupUID;
@property (nonatomic, retain) NSMutableArray *groupedDevices;
@property (nonatomic) bool hasAllowsPairing;
@property (nonatomic, readonly) bool hasApplicationBundleIdentifier;
@property (nonatomic, readonly) bool hasApplicationBundleVersion;
@property (nonatomic, readonly) bool hasBluetoothAddress;
@property (nonatomic) bool hasConnected;
@property (nonatomic) bool hasDeviceClass;
@property (nonatomic, readonly) bool hasGroupName;
@property (nonatomic, readonly) bool hasGroupUID;
@property (nonatomic) bool hasIsAirplayActive;
@property (nonatomic) bool hasIsGroupLeader;
@property (nonatomic) bool hasIsProxyGroupPlayer;
@property (nonatomic) bool hasLastSupportedMessageType;
@property (nonatomic, readonly) bool hasLocalReceiverPairingIdentity;
@property (nonatomic, readonly) bool hasLocalizedModelName;
@property (nonatomic) bool hasLogicalDeviceCount;
@property (nonatomic, readonly) bool hasManagedConfigDeviceID;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasProtocolVersion;
@property (nonatomic) bool hasSharedQueueVersion;
@property (nonatomic) bool hasSupportsACL;
@property (nonatomic) bool hasSupportsExtendedMotion;
@property (nonatomic) bool hasSupportsSharedQueue;
@property (nonatomic) bool hasSupportsSystemPairing;
@property (nonatomic, readonly) bool hasSystemBuildVersion;
@property (nonatomic, readonly) bool hasSystemMediaApplication;
@property (nonatomic, readonly) bool hasTightSyncUID;
@property (nonatomic) bool hasTightlySyncedGroup;
@property (nonatomic, readonly) bool hasUniqueIdentifier;
@property (nonatomic) bool isAirplayActive;
@property (nonatomic) bool isGroupLeader;
@property (nonatomic) bool isProxyGroupPlayer;
@property (nonatomic) unsigned int lastSupportedMessageType;
@property (nonatomic, retain) NSString *localReceiverPairingIdentity;
@property (nonatomic, retain) NSString *localizedModelName;
@property (nonatomic) unsigned int logicalDeviceCount;
@property (nonatomic, retain) NSString *managedConfigDeviceID;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned long long protocolVersion;
@property (nonatomic) unsigned int sharedQueueVersion;
@property (nonatomic) bool supportsACL;
@property (nonatomic) bool supportsExtendedMotion;
@property (nonatomic) bool supportsSharedQueue;
@property (nonatomic) bool supportsSystemPairing;
@property (nonatomic, retain) NSString *systemBuildVersion;
@property (nonatomic, retain) NSString *systemMediaApplication;
@property (nonatomic, retain) NSString *tightSyncUID;
@property (nonatomic) bool tightlySyncedGroup;
@property (nonatomic, retain) NSString *uniqueIdentifier;

+ (Class)groupedDevicesType;

- (void).cxx_destruct;
- (int)StringAsDeviceClass:(id)arg1;
- (void)addGroupedDevices:(id)arg1;
- (bool)allowsPairing;
- (id)applicationBundleIdentifier;
- (id)applicationBundleVersion;
- (id)bluetoothAddress;
- (void)clearGroupedDevices;
- (bool)connected;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)deviceClass;
- (id)deviceClassAsString:(int)arg1;
- (id)deviceUID;
- (id)dictionaryRepresentation;
- (id)groupName;
- (id)groupUID;
- (id)groupedDevices;
- (id)groupedDevicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)groupedDevicesCount;
- (bool)hasAllowsPairing;
- (bool)hasApplicationBundleIdentifier;
- (bool)hasApplicationBundleVersion;
- (bool)hasBluetoothAddress;
- (bool)hasConnected;
- (bool)hasDeviceClass;
- (bool)hasGroupName;
- (bool)hasGroupUID;
- (bool)hasIsAirplayActive;
- (bool)hasIsGroupLeader;
- (bool)hasIsProxyGroupPlayer;
- (bool)hasLastSupportedMessageType;
- (bool)hasLocalReceiverPairingIdentity;
- (bool)hasLocalizedModelName;
- (bool)hasLogicalDeviceCount;
- (bool)hasManagedConfigDeviceID;
- (bool)hasName;
- (bool)hasProtocolVersion;
- (bool)hasSharedQueueVersion;
- (bool)hasSupportsACL;
- (bool)hasSupportsExtendedMotion;
- (bool)hasSupportsSharedQueue;
- (bool)hasSupportsSystemPairing;
- (bool)hasSystemBuildVersion;
- (bool)hasSystemMediaApplication;
- (bool)hasTightSyncUID;
- (bool)hasTightlySyncedGroup;
- (bool)hasUniqueIdentifier;
- (unsigned long long)hash;
- (bool)isAirplayActive;
- (bool)isEqual:(id)arg1;
- (bool)isGroupLeader;
- (bool)isProxyGroupPlayer;
- (unsigned int)lastSupportedMessageType;
- (id)localReceiverPairingIdentity;
- (id)localizedModelName;
- (unsigned int)logicalDeviceCount;
- (id)managedConfigDeviceID;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (unsigned long long)protocolVersion;
- (bool)readFrom:(id)arg1;
- (void)setAllowsPairing:(bool)arg1;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setApplicationBundleVersion:(id)arg1;
- (void)setBluetoothAddress:(id)arg1;
- (void)setConnected:(bool)arg1;
- (void)setDeviceClass:(int)arg1;
- (void)setGroupName:(id)arg1;
- (void)setGroupUID:(id)arg1;
- (void)setGroupedDevices:(id)arg1;
- (void)setHasAllowsPairing:(bool)arg1;
- (void)setHasConnected:(bool)arg1;
- (void)setHasDeviceClass:(bool)arg1;
- (void)setHasIsAirplayActive:(bool)arg1;
- (void)setHasIsGroupLeader:(bool)arg1;
- (void)setHasIsProxyGroupPlayer:(bool)arg1;
- (void)setHasLastSupportedMessageType:(bool)arg1;
- (void)setHasLogicalDeviceCount:(bool)arg1;
- (void)setHasProtocolVersion:(bool)arg1;
- (void)setHasSharedQueueVersion:(bool)arg1;
- (void)setHasSupportsACL:(bool)arg1;
- (void)setHasSupportsExtendedMotion:(bool)arg1;
- (void)setHasSupportsSharedQueue:(bool)arg1;
- (void)setHasSupportsSystemPairing:(bool)arg1;
- (void)setHasTightlySyncedGroup:(bool)arg1;
- (void)setIsAirplayActive:(bool)arg1;
- (void)setIsGroupLeader:(bool)arg1;
- (void)setIsProxyGroupPlayer:(bool)arg1;
- (void)setLastSupportedMessageType:(unsigned int)arg1;
- (void)setLocalReceiverPairingIdentity:(id)arg1;
- (void)setLocalizedModelName:(id)arg1;
- (void)setLogicalDeviceCount:(unsigned int)arg1;
- (void)setManagedConfigDeviceID:(id)arg1;
- (void)setName:(id)arg1;
- (void)setProtocolVersion:(unsigned long long)arg1;
- (void)setSharedQueueVersion:(unsigned int)arg1;
- (void)setSupportsACL:(bool)arg1;
- (void)setSupportsExtendedMotion:(bool)arg1;
- (void)setSupportsSharedQueue:(bool)arg1;
- (void)setSupportsSystemPairing:(bool)arg1;
- (void)setSystemBuildVersion:(id)arg1;
- (void)setSystemMediaApplication:(id)arg1;
- (void)setTightSyncUID:(id)arg1;
- (void)setTightlySyncedGroup:(bool)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (unsigned int)sharedQueueVersion;
- (bool)supportsACL;
- (bool)supportsExtendedMotion;
- (bool)supportsSharedQueue;
- (bool)supportsSystemPairing;
- (id)systemBuildVersion;
- (id)systemMediaApplication;
- (id)tightSyncUID;
- (bool)tightlySyncedGroup;
- (id)uniqueIdentifier;
- (void)writeTo:(id)arg1;

@end
