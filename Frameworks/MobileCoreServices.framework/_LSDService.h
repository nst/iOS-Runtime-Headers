/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _LSDService : NSObject <NSXPCListenerDelegate> {
    NSXPCListener * _listener;
}

@property (readonly) NSXPCListener *XPCListener;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)XPCConnectionIsAlwaysPrivileged;
+ (id)XPCConnectionToService;
+ (id)XPCInterface;
+ (id)XPCProxyWithErrorHandler:(id)arg1;
+ (id)allServiceClasses;
+ (void)beginListeningWithAllServices;
+ (Class)clientClass;
+ (unsigned short)connectionType;
+ (id)dispatchQueue;
+ (bool)isEnabled;
+ (id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3;
+ (id)synchronous:(bool)arg1 XPCProxyWithErrorHandler:(id)arg2;
+ (id)synchronousXPCProxyWithErrorHandler:(id)arg1;

- (id)XPCListener;
- (id)initWithXPCListener:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end