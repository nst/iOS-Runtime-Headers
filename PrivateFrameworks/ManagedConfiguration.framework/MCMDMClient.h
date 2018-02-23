/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCMDMClient : NSObject {
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)sharedClient;

- (void).cxx_destruct;
- (void)_createAndStartMDMXPCConnection;
- (int)accessRights;
- (bool)authenticateWithCheckInURL:(id)arg1 identity:(struct __SecIdentity { }*)arg2 topic:(id)arg3 useDevelopmentAPNS:(bool)arg4 signMessage:(bool)arg5 outError:(id*)arg6;
- (bool)checkOutCheckInURL:(id)arg1 identity:(struct __SecIdentity { }*)arg2 topic:(id)arg3 signMessage:(bool)arg4 outError:(id*)arg5;
- (void)dealloc;
- (void)getAssertionDescriptionsWithCompletion:(id /* block */)arg1;
- (bool)isActivationLockAllowedWhileSupervised;
- (bool)isManagedByMDM;
- (void)migrateMDMWithContext:(int)arg1 completion:(id /* block */)arg2;
- (void)notifyNewConfiguration;
- (void)processDeviceRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)processDeviceRequest:(id)arg1 outError:(id*)arg2;
- (void)retryNotNowResponse;
- (void)scheduleTokenUpdate;
- (void)scheduleTokenUpdateIfNecessary;
- (void)setXpcConnection:(id)arg1;
- (void)simulatePush;
- (void)simulatePushIfNetworkTetheredWithCompletion:(id /* block */)arg1;
- (void)uprootMDM;
- (id)xpcConnection;

@end
