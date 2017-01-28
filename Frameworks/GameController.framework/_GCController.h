/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface _GCController : GCController <NSSecureCoding> {
    id  _controllerPausedHandler;
    unsigned long long  _deviceHash;
    NSObject<OS_dispatch_queue> * _handlerQueue;
    NSMutableArray * _hidServices;
    long long  _playerIndex;
    <GCNamedProfile> * _profile;
    unsigned int  _service;
    NSString * _vendorName;
    NSString * physicalDeviceUniqueID;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addServiceRefs:(id)arg1;
- (void)clearServiceRef;
- (id)controllerPausedHandler;
- (void)dealloc;
- (id)description;
- (unsigned long long)deviceHash;
- (void)encodeWithCoder:(id)arg1;
- (id)extendedGamepad;
- (id)gamepad;
- (id)handlerQueue;
- (bool)hasServiceRef:(struct __IOHIDServiceClient { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (id)initWithServiceRef:(struct __IOHIDServiceClient { }*)arg1;
- (bool)isAttachedToDevice;
- (bool)isEqualToController:(id)arg1;
- (id)microGamepad;
- (id)motion;
- (id)physicalDeviceUniqueID;
- (long long)playerIndex;
- (id)profile;
- (void)removeServiceRef:(struct __IOHIDServiceClient { }*)arg1;
- (unsigned int)service;
- (void)setControllerPausedHandler:(id)arg1;
- (void)setHandlerQueue:(id)arg1;
- (void)setPhysicalDeviceUniqueID:(id)arg1;
- (void)setPlayerIndex:(long long)arg1;
- (void)setProfile:(id)arg1;
- (id)vendorName;

@end
