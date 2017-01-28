/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMBalloonAppExtension : IMBalloonPlugin {
    NSExtension * _extension;
    LSPlugInKitProxy * _proxy;
    NSUUID * _requestIdentifier;
}

@property (nonatomic, readonly) NSString *containingBundleIdentifier;
@property (nonatomic, readonly, retain) NSExtension *extension;
@property (nonatomic, retain) LSPlugInKitProxy *proxy;
@property NSUUID *requestIdentifier;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithPluginBundle:(id)arg1 extension:(id)arg2 pluginKitProxyClass:(Class)arg3;
- (id)extension;
- (id)extensionConnection;
- (id)initWithPluginBundle:(id)arg1 extension:(id)arg2;
- (id)initWithPluginBundle:(id)arg1 pluginKitProxy:(id)arg2;
- (bool)isBetaPlugin;
- (id)proxy;
- (id)proxyWithErrorHandle:(id)arg1;
- (id)requestIdentifier;
- (void)setProxy:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (id)version;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)__ck_breadcrumbImage;
- (id)__ck_browserImage;
- (id)__ck_statusImage;
- (id)_adamID;
- (id)containingBundleIdentifier;

@end
