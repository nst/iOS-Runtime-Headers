/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

@interface _PASAsset : NSObject {
    ASAsset * _bestAvailableAsset;
    unsigned long long  _bestAvailableVersion;
    NSString * _bundleIdentifier;
    unsigned long long  _compatibilityVersion;
    NSString * _defaultBundlePath;
    unsigned long long  _defaultBundleVersion;
    double  _delay;
    int  _installNotificationToken;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    int  _metadataNotificationToken;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSDictionary * _requiredMobileAssetProperties;
    _PASNotificationTracker * _updateNotificationTracker;
}

@property (nonatomic, readonly) NSString *assetType;
@property (nonatomic, readonly) unsigned long long assetVersion;
@property (nonatomic, readonly) unsigned long long compatibilityVersion;

- (void).cxx_destruct;
- (id)_assetDescription;
- (void)_downloadInitialAssetMetadata;
- (id)_initWithBundleIdentifier:(id)arg1 defaultBundlePath:(id)arg2 compatibilityVersion:(unsigned long long)arg3 matchingKeysAndValues:(id)arg4 notificationQueue:(id)arg5;
- (void)_issueUpdateNotifications;
- (void)_loadDefaultBundleVersion;
- (void)_updateAssetMetadata;
- (id)assetType;
- (unsigned long long)assetVersion;
- (unsigned long long)compatibilityVersion;
- (void)dealloc;
- (bool)deregisterUpdateHandlerAsyncWithToken:(id)arg1;
- (bool)deregisterUpdateHandlerWithToken:(id)arg1;
- (id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4;
- (id)pathForResourceWithName:(id)arg1 extension:(id)arg2 assetVersion:(unsigned long long*)arg3;
- (id)pathsForResourcesWithNames:(id)arg1 assetVersion:(unsigned long long*)arg2;
- (id)registerUpdateHandler:(id)arg1;

@end
