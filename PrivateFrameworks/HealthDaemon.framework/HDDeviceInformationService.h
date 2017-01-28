/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDeviceInformationService : HDHealthService {
    NSMutableDictionary * _characteristics;
    bool  _deviceInformationHasBeenLoaded;
    NSMutableArray * _pendingDeviceInformationLoadedBlocks;
    NSMutableSet * _propertiesLeftToFetch;
    HDHealthServicePropertyManager * _propertyManager;
    NSMutableDictionary * _propertyValues;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSMutableDictionary *characteristics;
@property (nonatomic) bool deviceInformationHasBeenLoaded;
@property (readonly) NSString *firmwareRevision;
@property (readonly) NSString *hardwareRevision;
@property (readonly) NSString *manufacturerName;
@property (readonly) NSString *modelNumber;
@property (nonatomic, retain) NSMutableArray *pendingDeviceInformationLoadedBlocks;
@property (nonatomic, retain) NSMutableSet *propertiesLeftToFetch;
@property (nonatomic) HDHealthServicePropertyManager *propertyManager;
@property (nonatomic, retain) NSMutableDictionary *propertyValues;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSString *serialNumber;
@property (readonly) NSString *softwareRevision;

+ (id)implementedProperties;
+ (long long)serviceType;
+ (id)serviceUUID;

- (void).cxx_destruct;
- (id)_propertyValueForCharacteristic:(id)arg1;
- (id)_propertyValueForPropertyName:(id)arg1;
- (void)_queue_peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
- (void)_queue_peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)_queue_readProperty:(id)arg1;
- (void)_queue_setDeviceInformationHasBeenLoaded;
- (void)_startDeviceInformationLoadingTimeoutTimer;
- (id)characteristics;
- (bool)deviceInformationHasBeenLoaded;
- (id)firmwareRevision;
- (id)hardwareRevision;
- (id)initWithDevicePropertyManager:(id)arg1 healthDaemon:(id)arg2 peripheral:(id)arg3;
- (id)manufacturerName;
- (id)modelNumber;
- (id)pendingDeviceInformationLoadedBlocks;
- (void)performWhenDeviceInformationHasBeenLoaded:(id)arg1;
- (void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (id)propertiesLeftToFetch;
- (id)propertyManager;
- (id)propertyValues;
- (id)queue;
- (void)readProperty:(id)arg1;
- (id)serialNumber;
- (void)setCharacteristics:(id)arg1;
- (void)setDeviceInformationHasBeenLoaded:(bool)arg1;
- (void)setPendingDeviceInformationLoadedBlocks:(id)arg1;
- (void)setPropertiesLeftToFetch:(id)arg1;
- (void)setPropertyManager:(id)arg1;
- (void)setPropertyValues:(id)arg1;
- (void)setQueue:(id)arg1;
- (id)softwareRevision;

@end
