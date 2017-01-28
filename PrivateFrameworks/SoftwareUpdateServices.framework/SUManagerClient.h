/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUManagerClient : NSObject <SUManagerClientInterface> {
    int  _clientType;
    bool  _connected;
    <SUManagerClientDelegate> * _delegate;
    SUDescriptor * _installDescriptor;
    NSMutableDictionary * _installOperationIDsToOperationHandler;
    bool  _installing;
    SUDescriptor * _scanDescriptor;
    NSXPCConnection * _serverConnection;
    bool  _serverIsExiting;
}

@property (nonatomic) int clientType;
@property (nonatomic) <SUManagerClientDelegate> *delegate;
@property (nonatomic, retain) SUDescriptor *installDescriptor;
@property (nonatomic, retain) SUDescriptor *scanDescriptor;

+ (bool)_isMultiUserAppleId;
+ (bool)_shouldDisallowAvailabilityNotifications;

- (void)_cancelAutoInstallOperation:(id)arg1 withResult:(id)arg2;
- (void)_consentAutoInstallOperation:(id)arg1 withResult:(id)arg2;
- (void)_invalidateConnection;
- (void)_registerAutoInstallOperationClientHandler:(id)arg1;
- (id)_remoteInterface;
- (id)_remoteInterfaceWithErrorHandler:(id)arg1;
- (id)_remoteInterfaceWithErrorHandler:(id)arg1 connectIfNecessary:(bool)arg2;
- (id)_remoteSynchronousInterfaceWithErrorHandler:(id)arg1 connectIfNecessary:(bool)arg2;
- (void)_setClientType;
- (void)_unregisterAutoInstallOperationClientHandler:(id)arg1;
- (void)autoInstallOperationDidConsent:(id)arg1;
- (void)autoInstallOperationDidExpire:(id)arg1;
- (void)autoInstallOperationIsReadyToInstall:(id)arg1 withResult:(id)arg2;
- (void)autoInstallOperationWasCancelled:(id)arg1;
- (void)automaticDownloadDidFailToStartForNewUpdateAvailable:(id)arg1 withError:(id)arg2;
- (void)cancelDownload:(id)arg1;
- (int)clientType;
- (void)connectToServerIfNecessary;
- (bool)createInstallationKeybag:(id)arg1;
- (bool)createInstallationKeybag:(id)arg1 forUnattendedInstall:(bool)arg2;
- (void)currentAutoInstallOperation:(bool)arg1 withResult:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)deviceHasSufficientSpaceForDownload:(id)arg1;
- (void)download:(id)arg1;
- (void)downloadDidFail:(id)arg1 withError:(id)arg2;
- (void)downloadDidFinish:(id)arg1;
- (void)downloadDidStart:(id)arg1;
- (void)downloadProgressDidChange:(id)arg1;
- (void)downloadWasInvalidatedForNewUpdateAvailable:(id)arg1;
- (void)extraSpaceNeededForDownloadWithoutAppPurging:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 clientType:(int)arg2;
- (id)installDescriptor;
- (void)installDidFail:(id)arg1 withError:(id)arg2;
- (void)installDidFinish:(id)arg1;
- (void)installDidStart:(id)arg1;
- (void)installUpdate:(id)arg1;
- (void)invalidate;
- (void)isDownloading:(id)arg1;
- (bool)isInstallationKeybagRequired;
- (void)isScanning:(id)arg1;
- (void)isUpdateReadyForInstallation:(id)arg1;
- (void)noteConnectionDropped;
- (void)noteServerExiting;
- (void)pauseDownload:(id)arg1;
- (void)purgeDownload:(id)arg1;
- (void)resumeDownload:(id)arg1;
- (id)scanDescriptor;
- (void)scanDidCompleteWithNewUpdateAvailable:(id)arg1 error:(id)arg2;
- (void)scanForUpdates:(id)arg1 withResult:(id)arg2;
- (void)scanRequestDidFinishForOptions:(id)arg1 update:(id)arg2 error:(id)arg3;
- (void)scanRequestDidStartForOptions:(id)arg1;
- (void)setClientType:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInstallDescriptor:(id)arg1;
- (void)setScanDescriptor:(id)arg1;
- (void)slaVersion:(id)arg1;
- (void)startDownload:(id)arg1;
- (void)startDownloadWithMetadata:(id)arg1 withResult:(id)arg2;
- (unsigned long long)totalPurgeableSpace;
- (void)updateDownloadMetadata:(id)arg1 withResult:(id)arg2;

@end
