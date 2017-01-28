/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDHealthService : NSObject <CBPeripheralDelegate, HDHSCharacteristicsDelegate> {
    bool  _characteristicsDiscovered;
    NSObject<OS_dispatch_queue> * _dataQueue;
    bool  _deliverData;
    HDDeviceEntity * _deviceEntity;
    HKDevice * _deviceInformation;
    int  _deviceInformationLoaded;
    <HDHealthDaemon> * _healthDaemon;
    NSMutableArray * _pendingObjectBuffer;
    NSMutableArray * _pendingWrites;
    CBPeripheral * _peripheral;
    NSString * _peripheralName;
    NSUUID * _peripheralUUID;
    NSString * _serviceId;
    HDHealthServiceManager * _serviceManager;
    CBCharacteristic * _writableCharacteristic;
    NSObject<OS_dispatch_queue> * _writeQueue;
}

@property (nonatomic, readonly) bool characteristicsDiscovered;
@property (readonly, copy) NSString *debugDescription;
@property bool deliverData;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HKDevice *deviceInformation;
@property (nonatomic) int deviceInformationLoaded;
@property (readonly) unsigned long long hash;
@property (nonatomic) <HDHealthDaemon> *healthDaemon;
@property (nonatomic, retain) NSMutableArray *pendingWrites;
@property (nonatomic, readonly) CBPeripheral *peripheral;
@property (nonatomic, copy) NSString *peripheralName;
@property (nonatomic, readonly) NSUUID *peripheralUUID;
@property (nonatomic, retain) NSString *serviceId;
@property (nonatomic, retain) HDHealthServiceManager *serviceManager;
@property (readonly) Class superclass;
@property (nonatomic, retain) CBCharacteristic *writableCharacteristic;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *writeQueue;

+ (id)dateFromData:(const char **)arg1 before:(const char *)arg2;
+ (double)doubleFromFLOAT:(unsigned int)arg1;
+ (double)doubleFromFLOATData:(const char **)arg1 before:(const char *)arg2;
+ (float)floatFromSFLOAT:(unsigned short)arg1;
+ (float)floatFromSFLOATData:(const char **)arg1 before:(const char *)arg2;
+ (id)implementedProperties;
+ (short)int16FromData:(const char **)arg1 before:(const char *)arg2;
+ (long long)serviceType;
+ (id)serviceUUID;
+ (bool)uint16:(unsigned short)arg1 toData:(char **)arg2 before:(const char *)arg3;
+ (unsigned short)uint16FromData:(const char **)arg1 before:(const char *)arg2;
+ (bool)uint32:(unsigned int)arg1 toData:(char **)arg2 before:(const char *)arg3;
+ (unsigned int)uint32FromData:(const char **)arg1 before:(const char *)arg2;
+ (bool)uint8:(unsigned char)arg1 toData:(char **)arg2 before:(const char *)arg3;
+ (unsigned char)uint8FromData:(const char **)arg1 before:(const char *)arg2;

- (void).cxx_destruct;
- (void)_bufferObjectToBePersisted:(id)arg1;
- (id)_dataQueue_deviceEntity;
- (void)_dataQueue_deviceUpdated;
- (void)_dataQueue_persistData:(id)arg1;
- (void)_loadDeviceWithPropertyManager:(id)arg1;
- (bool)_shouldPersistObjects;
- (bool)characteristicsDiscovered;
- (bool)deliverData;
- (id)description;
- (void)deviceDisconnecting;
- (id)deviceInformation;
- (int)deviceInformationLoaded;
- (void)executeFirstWrite;
- (id)healthDaemon;
- (id)initWithServiceManager:(id)arg1 propertyManager:(id)arg2 healthDaemon:(id)arg3 peripheral:(id)arg4;
- (void)markCharacteristicsDiscovered;
- (id)pendingWrites;
- (void)performOperation:(id)arg1 onPeripheral:(id)arg2 withParameters:(id)arg3 completion:(id)arg4;
- (id)peripheral;
- (void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverDescriptorsForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverIncludedServicesForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)peripheral:(id)arg1 didModifyServices:(id)arg2;
- (void)peripheral:(id)arg1 didReadRSSI:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForDescriptor:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didWriteValueForDescriptor:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didWriteValueResponse:(id)arg2 error:(id)arg3;
- (void)peripheralDidUpdateName:(id)arg1;
- (id)peripheralName;
- (id)peripheralUUID;
- (void)readProperty:(id)arg1;
- (void)respondFirstWriteWithData:(id)arg1 error:(id)arg2;
- (void)serviceDataReceived:(id)arg1;
- (id)serviceId;
- (id)serviceManager;
- (void)servicesInvalidatedWithError:(id)arg1;
- (void)setDeliverData:(bool)arg1;
- (void)setDeviceInformation:(id)arg1;
- (void)setDeviceInformationLoaded:(int)arg1;
- (void)setHealthDaemon:(id)arg1;
- (void)setPendingWrites:(id)arg1;
- (void)setPeripheralName:(id)arg1;
- (void)setServiceId:(id)arg1;
- (void)setServiceManager:(id)arg1;
- (void)setWritableCharacteristic:(id)arg1;
- (void)setWriteQueue:(id)arg1;
- (void)transitoryDataReceived:(id)arg1 withError:(id)arg2;
- (id)writableCharacteristic;
- (id)writeQueue;
- (void)writeValue:(id)arg1 onPeripheral:(id)arg2 expectResponse:(bool)arg3 completion:(id)arg4;

@end
