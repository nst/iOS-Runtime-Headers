/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCContentContext : NSObject <FCContentContext, FCCoreConfigurationObserving, FCNetworkReachabilityRequirementObserving> {
    FCArticleController * _articleController;
    NSURL * _assetCacheDirectoryURL;
    <FCAssetKeyCacheType> * _assetKeyCache;
    <FCAssetKeyManagerType> * _assetKeyManager;
    <FCAssetKeyServiceType> * _assetKeyService;
    FCAssetManager * _assetManager;
    <FCBackgroundTaskable> * _backgroundTaskable;
    <FCCoreConfigurationManager> * _configurationManager;
    NSString * _contentDirectory;
    FCContextConfiguration * _contextConfiguration;
    FCFlintResourceManager * _flintResourceManager;
    FCContentContextInternal * _internalContentContext;
    FCNetworkBehaviorMonitor * _networkBehaviorMonitor;
    <FCPPTContext> * _pptContext;
    long long  _preferredMediaQuality;
    <FCNetworkReachabilityRequirement> * _supportedCountryNetworkReachabilityRequirement;
    FCTagController * _tagController;
    NSURL * _webArchiveCacheDirectoryURL;
    <FCWebArchiveSource> * _webArchiveSource;
}

@property (nonatomic, readonly) <FCNewsAppConfigurationManager> *appConfigurationManager;
@property (nonatomic, readonly) FCArticleController *articleController;
@property (nonatomic, retain) NSURL *assetCacheDirectoryURL;
@property (nonatomic, retain) <FCAssetKeyCacheType> *assetKeyCache;
@property (nonatomic, retain) <FCAssetKeyManagerType> *assetKeyManager;
@property (nonatomic, retain) <FCAssetKeyServiceType> *assetKeyService;
@property (nonatomic, readonly) FCAssetManager *assetManager;
@property (nonatomic, readonly) <FCBackgroundTaskable> *backgroundTaskable;
@property (nonatomic, readonly) <FCCoreConfigurationManager> *configurationManager;
@property (nonatomic, copy) NSString *contentDirectory;
@property (nonatomic, readonly, copy) NSString *contentEnvironmentToken;
@property (nonatomic, readonly, copy) NSString *contentStoreFrontID;
@property (nonatomic, copy) FCContextConfiguration *contextConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FCFlintResourceManager *flintResourceManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FCContentContextInternal *internalContentContext;
@property (nonatomic, readonly) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (nonatomic, readonly) <FCPPTContext> *pptContext;
@property (nonatomic, readonly) long long preferredMediaQuality;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *supportedContentStoreFrontID;
@property (nonatomic, retain) <FCNetworkReachabilityRequirement> *supportedCountryNetworkReachabilityRequirement;
@property (nonatomic, readonly) FCTagController *tagController;
@property (nonatomic, retain) NSURL *webArchiveCacheDirectoryURL;
@property (nonatomic, retain) <FCWebArchiveSource> *webArchiveSource;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (void)initialize;

- (void).cxx_destruct;
- (void)_updateReachabilityGivenRequirements;
- (id)appConfigurationManager;
- (id)articleController;
- (id)assetCacheDirectoryURL;
- (id)assetKeyCache;
- (id)assetKeyManager;
- (id)assetKeyService;
- (id)assetManager;
- (id)backgroundTaskable;
- (id)configurationManager;
- (void)configurationManager:(id)arg1 configurationDidChange:(id)arg2;
- (id)contentDirectory;
- (id)contentEnvironmentToken;
- (id)contentStoreFrontID;
- (id)contextConfiguration;
- (void)dealloc;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1;
- (id)flintResourceManager;
- (id)initWithConfiguration:(id)arg1 configurationManager:(id)arg2 contentDatabase:(id)arg3 contentHostDirectory:(id)arg4 networkBehaviorMonitor:(id)arg5 setupCustomURLProtocols:(bool)arg6 desiredHeadlineFieldOptions:(unsigned long long)arg7 feedUsage:(long long)arg8 assetKeyManagerDelegate:(id)arg9 appActivityMonitor:(id)arg10 backgroundTaskable:(id)arg11 preferredMediaQuality:(long long)arg12 pptContext:(id)arg13;
- (id)initWithConfiguration:(id)arg1 configurationManager:(id)arg2 contentHostDirectory:(id)arg3 networkBehaviorMonitor:(id)arg4 desiredHeadlineFieldOptions:(unsigned long long)arg5 feedUsage:(long long)arg6 assetKeyManagerDelegate:(id)arg7 appActivityMonitor:(id)arg8 backgroundTaskable:(id)arg9 preferredMediaQuality:(long long)arg10 pptContext:(id)arg11;
- (id)internalContentContext;
- (id)magazinesConfigurationManager;
- (id)networkBehaviorMonitor;
- (void)networkReachabilityRequirementDidBecomeDirty:(id)arg1;
- (id)news_core_ConfigurationManager;
- (id)pptContext;
- (void)ppt_overrideFeedEndpoint:(long long)arg1;
- (long long)preferredMediaQuality;
- (id)recordSourceWithSchema:(id)arg1;
- (id)recordTreeSourceWithRecordSources:(id)arg1;
- (void)setAssetCacheDirectoryURL:(id)arg1;
- (void)setAssetKeyCache:(id)arg1;
- (void)setAssetKeyManager:(id)arg1;
- (void)setAssetKeyService:(id)arg1;
- (void)setContentDirectory:(id)arg1;
- (void)setContextConfiguration:(id)arg1;
- (void)setInternalContentContext:(id)arg1;
- (void)setSupportedCountryNetworkReachabilityRequirement:(id)arg1;
- (void)setWebArchiveCacheDirectoryURL:(id)arg1;
- (void)setWebArchiveSource:(id)arg1;
- (id)supportedContentStoreFrontID;
- (id)supportedCountryNetworkReachabilityRequirement;
- (id)tagController;
- (id)webArchiveCacheDirectoryURL;
- (id)webArchiveSource;
- (id)webArchiveSourceAllowingNil;

// Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday

+ (id)nt_contentContextWithConfigurationManager:(id)arg1 contentHostDirectory:(id)arg2 networkBehaviorMonitor:(id)arg3;

@end
