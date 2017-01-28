/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDService : NSObject <HMDBulletinIdentifiers, HMFDumpState, NSSecureCoding> {
    HMDAccessory * _accessory;
    HMDApplicationData * _appData;
    NSString * _associatedServiceType;
    HMDBulletinBoardNotification * _bulletinBoardNotification;
    NSArray * _characteristics;
    bool  _hidden;
    NSNumber * _instanceID;
    NSArray * _linkedServices;
    NSString * _name;
    bool  _primary;
    NSString * _providedName;
    NSString * _serviceType;
}

@property (nonatomic, readonly) HMDAccessory *accessory;
@property (nonatomic, retain) HMDApplicationData *appData;
@property (nonatomic, readonly) NSString *associatedServiceType;
@property (nonatomic, retain) HMDBulletinBoardNotification *bulletinBoardNotification;
@property (nonatomic, copy) NSArray *characteristics;
@property (nonatomic, readonly, copy) NSString *contextID;
@property (nonatomic, readonly, copy) NSUUID *contextSPIUniqueIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, copy) NSNumber *instanceID;
@property (nonatomic, retain) NSArray *linkedServices;
@property (getter=getName, nonatomic, copy) NSString *name;
@property (getter=isPrimary) bool primary;
@property (nonatomic, retain) NSString *providedName;
@property (nonatomic, readonly, copy) NSString *serviceIdentifier;
@property (nonatomic, retain) NSString *serviceType;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_createNotification;
- (void)_readRequiredBTLECharacteristicValuesForceReadName:(bool)arg1 forceReadFWVersion:(bool)arg2;
- (void)_setServiceProperties:(id)arg1;
- (void)_shouldServiceBeHidden;
- (bool)_supportsBulletinNotification;
- (void)_updateName:(id)arg1;
- (void)_updateProvidedName:(id)arg1;
- (id)accessory;
- (id)appData;
- (id)assistantObject;
- (id)associatedServiceType;
- (id)bulletinBoardNotification;
- (id)characteristics;
- (void)configureBulletinNotification:(id)arg1;
- (void)configureMsgDispatcher:(id)arg1;
- (id)configureWithService:(id)arg1 accessory:(id)arg2;
- (id)contextID;
- (id)contextSPIUniqueIdentifier;
- (id)description;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)findCharacteristic:(id)arg1;
- (id)findCharacteristicWithType:(id)arg1;
- (id)getConfiguredName;
- (id)getName;
- (id)initWithCoder:(id)arg1;
- (id)initWithService:(id)arg1 accessory:(id)arg2;
- (id)instanceID;
- (bool)isHidden;
- (bool)isPrimary;
- (id)linkedServices;
- (id)providedName;
- (id)serviceIdentifier;
- (id)serviceType;
- (void)setAppData:(id)arg1;
- (void)setBulletinBoardNotification:(id)arg1;
- (void)setCharacteristics:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setInstanceID:(id)arg1;
- (void)setLinkedServices:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPrimary:(bool)arg1;
- (void)setProvidedName:(id)arg1;
- (void)setServiceType:(id)arg1;
- (bool)shouldEnableDaemonRelaunch;
- (id)type;
- (void)updateAccessory:(id)arg1;
- (bool)updateAssociatedServiceType:(id)arg1 error:(id*)arg2;
- (void)updateLastKnownValues;
- (void)updateName:(id)arg1;
- (id)url;

@end
