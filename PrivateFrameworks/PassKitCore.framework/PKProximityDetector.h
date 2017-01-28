/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKProximityDetector : NSObject {
    IDSDevice * _detectingDevice;
    bool  _detectingDeviceNearby;
    NSObject<OS_dispatch_queue> * _discoveryQueue;
    id  _handler;
    bool  _isDetecting;
    unsigned int  _powerAssertionIdentifier;
    SFDeviceDiscovery * _sharingDiscovery;
    double  _timeoutDuration;
    NSObject<OS_dispatch_source> * _timer;
    NSObject<OS_dispatch_queue> * _timerQueue;
}

@property (nonatomic, readonly) IDSDevice *detectingDevice;
@property (nonatomic, copy) id handler;
@property (nonatomic, readonly) bool isDetecting;

- (void).cxx_destruct;
- (void)_createPowerAssertion;
- (void)_endPowerAssertion;
- (void)dealloc;
- (id)detectingDevice;
- (void)endDetecting;
- (id)handler;
- (id)initWithDevice:(id)arg1;
- (bool)isDetecting;
- (void)setHandler:(id)arg1;
- (void)startDetectingForDuration:(double)arg1 completion:(id)arg2;

@end
