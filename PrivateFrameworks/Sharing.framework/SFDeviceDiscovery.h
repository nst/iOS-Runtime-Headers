/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFDeviceDiscovery : NSObject <NSSecureCoding, SFXPCInterface> {
    bool  _activateCalled;
    unsigned long long  _activateTicks;
    unsigned int  _changeFlags;
    NSObject<OS_dispatch_source> * _consoleUserTimer;
    id  _deviceChangedHandler;
    NSSet * _deviceFilter;
    id  _deviceFoundHandler;
    id  _deviceLostHandler;
    struct NSMutableDictionary { Class x1; } * _devices;
    unsigned long long  _discoveryFlags;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id  _invalidationHandler;
    bool  _legacy;
    long long  _rssiThreshold;
    bool  _scanCache;
    long long  _scanRate;
    bool  _targetUserSession;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic) unsigned int changeFlags;
@property (nonatomic, copy) id deviceChangedHandler;
@property (nonatomic, copy) NSSet *deviceFilter;
@property (nonatomic, copy) id deviceFoundHandler;
@property (nonatomic, copy) id deviceLostHandler;
@property (nonatomic) unsigned long long discoveryFlags;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id interruptionHandler;
@property (nonatomic, copy) id invalidationHandler;
@property (nonatomic) long long rssiThreshold;
@property (nonatomic) bool scanCache;
@property (nonatomic) long long scanRate;
@property (nonatomic) bool targetUserSession;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id)arg1;
- (int)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidate;
- (void)_invalidated;
- (void)_invokeBlockActivateSafe:(id)arg1;
- (void)_retryConsole;
- (void)activateWithCompletion:(id)arg1;
- (unsigned int)changeFlags;
- (void)dealloc;
- (id)description;
- (id)deviceChangedHandler;
- (void)deviceDiscoveryDeviceChanged:(id)arg1 changes:(unsigned int)arg2;
- (void)deviceDiscoveryFoundDevice:(id)arg1;
- (void)deviceDiscoveryLostDevice:(id)arg1;
- (id)deviceFilter;
- (id)deviceFoundHandler;
- (id)deviceLostHandler;
- (unsigned long long)discoveryFlags;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)interruptionHandler;
- (void)invalidate;
- (id)invalidationHandler;
- (long long)rssiThreshold;
- (bool)scanCache;
- (long long)scanRate;
- (void)setChangeFlags:(unsigned int)arg1;
- (void)setDeviceChangedHandler:(id)arg1;
- (void)setDeviceFilter:(id)arg1;
- (void)setDeviceFoundHandler:(id)arg1;
- (void)setDeviceLostHandler:(id)arg1;
- (void)setDiscoveryFlags:(unsigned long long)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id)arg1;
- (void)setInvalidationHandler:(id)arg1;
- (void)setRssiThreshold:(long long)arg1;
- (void)setScanCache:(bool)arg1;
- (void)setScanRate:(long long)arg1;
- (void)setTargetUserSession:(bool)arg1;
- (bool)targetUserSession;

@end
