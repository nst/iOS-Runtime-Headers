/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFWirelessChargingMonitor : NSObject {
    bool  _allDevicesCharged;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _invalidationHandler;
    SFWirelessChargingDevicePhone * _meChargingDevice;
    bool  _meDeviceWasWirelesslyCharging;
    SFPowerSourceMonitor * _monitor;
    id /* block */  _wirelessPowerSourceChangedHandler;
    id /* block */  _wirelessPowerSourceFoundHandler;
    id /* block */  _wirelessPowerSourceLostHandler;
}

@property (nonatomic, readonly) bool allDevicesCharged;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, readonly) SFWirelessChargingDevicePhone *meChargingDevice;
@property (nonatomic) bool meDeviceWasWirelesslyCharging;
@property (nonatomic, retain) SFPowerSourceMonitor *monitor;
@property (nonatomic, readonly, copy) NSSet *wirelessChargingDevices;
@property (nonatomic, copy) id /* block */ wirelessPowerSourceChangedHandler;
@property (nonatomic, copy) id /* block */ wirelessPowerSourceFoundHandler;
@property (nonatomic, copy) id /* block */ wirelessPowerSourceLostHandler;

- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)arg1;
- (bool)allDevicesCharged;
- (id)chargingDeviceForPowerSources:(id)arg1;
- (id)dispatchQueue;
- (void)evaluatePowerSources:(id)arg1 found:(bool)arg2 changed:(bool)arg3 lost:(bool)arg4;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)meChargingDevice;
- (bool)meDeviceWasWirelesslyCharging;
- (id)monitor;
- (void)refreshOnSameMatAsMeChargingDevice:(id)arg1 withMeWirelesslyCharging:(bool)arg2;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setMeDeviceWasWirelesslyCharging:(bool)arg1;
- (void)setMonitor:(id)arg1;
- (void)setUpMonitor;
- (void)setWirelessPowerSourceChangedHandler:(id /* block */)arg1;
- (void)setWirelessPowerSourceFoundHandler:(id /* block */)arg1;
- (void)setWirelessPowerSourceLostHandler:(id /* block */)arg1;
- (id)wirelessChargingDevices;
- (id /* block */)wirelessPowerSourceChangedHandler;
- (id /* block */)wirelessPowerSourceFoundHandler;
- (id /* block */)wirelessPowerSourceLostHandler;

@end
