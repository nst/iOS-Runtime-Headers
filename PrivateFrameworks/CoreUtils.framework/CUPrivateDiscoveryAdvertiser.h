/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUPrivateDiscoveryAdvertiser : NSObject <CUPrivateDiscoveryXPCClientInterface, NSSecureCoding> {
    bool  _activateCalled;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _label;
    NSString * _serviceType;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    NSXPCConnection * _xpcCnx;
    NSString * _xpcServiceName;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *serviceType;
@property (nonatomic, copy) NSString *xpcServiceName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activateDirect;
- (void)_activateXPC:(bool)arg1;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidated;
- (void)activate;
- (void)dealloc;
- (id)description;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (id)serviceType;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setServiceType:(id)arg1;
- (void)setXpcServiceName:(id)arg1;
- (void)xpcPrivateDiscoveryEndpointFound:(id)arg1;
- (void)xpcPrivateDiscoveryEndpointLost:(id)arg1;
- (id)xpcServiceName;

@end
