/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFURLSessionConfiguration : NSURLSessionConfiguration <NSCopying, NSSecureCoding> {
    NSString * _CTDataConnectionServiceType;
    id  _HTTPAdditionalHeaders;
    unsigned long long  _HTTPCookieAcceptPolicy;
    long long  _HTTPMaximumConnectionsPerHost;
    bool  _HTTPShouldSetCookies;
    bool  _HTTPShouldUsePipelining;
    unsigned long long  _TCPAdaptiveReadTimeout;
    unsigned long long  _TCPAdaptiveWriteTimeout;
    int  _TLSMaximumSupportedProtocol;
    int  _TLSMinimumSupportedProtocol;
    bool  _allowTCPIOConnectionStreamTask;
    bool  _allowsCellularAccess;
    bool  _allowsExpensiveAccess;
    bool  _allowsIndefiniteConnections;
    bool  _allowsMultipathTCP;
    bool  _allowsPowerNapScheduling;
    bool  _allowsResponseMonitoringDuringBodyTranmission;
    bool  _allowsRetryForBackgroundDataTasks;
    bool  _allowsTCPFastOpen;
    bool  _allowsTLSSessionResumption;
    bool  _allowsTLSSessionTickets;
    <NSURLSessionAppleIDContext> * _appleIDContext;
    NSData * _atsContext;
    NSSet * _authenticatorStatusCodes;
    bool  _backgroundSession;
    bool  _collectsTimingData;
    NSString * _companionAppBundleIdentifier;
    double  _connectionCacheCellPurgeTimeout;
    double  _connectionCachePurgeTimeout;
    NSString * _connectionPoolName;
    id  _connectionProxyDictionary;
    NSArray * _contentDispHeadEncFallback;
    unsigned long long  _customReadBufferSize;
    double  _customReadBufferTimeout;
    NSURL * _directoryForDownloadedFiles;
    bool  _disablesOutOfProcessDirectWiFiUsage;
    bool  _disablesUseOfProxySession;
    bool  _disallowsSPDY;
    bool  _discretionary;
    NSString * _disposition;
    unsigned long long  _forcedNetworkServiceType;
    bool  _forcesNewConnections;
    NSString * _identifier;
    bool  _infersDiscretionaryFromOriginatingClient;
    NSString * _ledBellyServiceIdentifier;
    double  _longLivedConnectionCacheCellPurgeTimeout;
    double  _longLivedConnectionCachePurgeTimeout;
    long long  _minimumFastLanePriority;
    unsigned long long  _networkServiceType;
    long long  _numFastLanes;
    long long  _numPriorityLevels;
    bool  _onBehalfOfPairedDevice;
    NSDictionary * _overriddenDelegateOptions;
    bool  _overridesBackgroundSessionAutoRedirect;
    bool  _performsEVCertCheck;
    NSHTTPCookieStorage * _phskip_cookieStorage;
    bool  _phskip_cookieStorageSet;
    NSURLCredentialStorage * _phskip_credStorage;
    bool  _phskip_credStorageSet;
    struct _CFHSTSPolicy { } * _phskip_hstsStorage;
    bool  _phskip_hstsStorageSet;
    NSURLCache * _phskip_urlCache;
    bool  _phskip_urlCacheSet;
    long long  _pipeliningHighWatermark;
    long long  _pipeliningLowWatermark;
    bool  _prefersInfraWiFi;
    bool  _preventsDirectWiFiAccess;
    bool  _preventsIdleSleep;
    bool  _preventsIdleSleepOnceConnected;
    id  _protocolClasses;
    bool  _proxySession;
    unsigned long long  _requestCachePolicy;
    bool  _requiresClientToOpenFiles;
    bool  _requiresPowerPluggedIn;
    bool  _respectsAllowsCellularAccessForDiscretionaryTasks;
    bool  _sessionSendsLaunchEvents;
    bool  _sessionSendsLaunchOnDemandEvents;
    NSString * _sharedContainerIdentifier;
    bool  _shouldPreserveBackgroundSessionDisposition;
    bool  _shouldSkipPreferredClientCertificateLookup;
    bool  _shouldUseExtendedBackgroundIdleMode;
    bool  _skip_download_unlink;
    NSDictionary * _socketStreamProperties;
    NSData * _sourceApplicationAuditTokenData;
    NSString * _sourceApplicationBundleIdentifier;
    NSString * _sourceApplicationSecondaryIdentifier;
    bool  _supportsAVAssetDownloads;
    NSString * _tcpConnectionPoolName;
    double  _timeoutIntervalForRequest;
    double  _timeoutIntervalForResource;
    long long  _timingDataOptions;
    bool  _usePipeliningHeuristics;
    NSString * _watchAppBundleIdentifier;
    NSString * _watchExtensionBundleIdentifier;
}

+ (bool)supportsSecureCoding;

- (id)HTTPAdditionalHeaders;
- (unsigned long long)HTTPCookieAcceptPolicy;
- (id)HTTPCookieStorage;
- (long long)HTTPMaximumConnectionsPerHost;
- (bool)HTTPShouldSetCookies;
- (bool)HTTPShouldUsePipelining;
- (int)TLSMaximumSupportedProtocol;
- (int)TLSMinimumSupportedProtocol;
- (id)URLCache;
- (id)URLCredentialStorage;
- (id)_CTDataConnectionServiceType;
- (unsigned long long)_TCPAdaptiveReadTimeout;
- (unsigned long long)_TCPAdaptiveWriteTimeout;
- (bool)_allowTCPIOConnectionStreamTask;
- (bool)_allowsExpensiveAccess;
- (bool)_allowsIndefiniteConnections;
- (bool)_allowsMultipathTCP;
- (bool)_allowsPowerNapScheduling;
- (bool)_allowsResponseMonitoringDuringBodyTranmission;
- (bool)_allowsRetryForBackgroundDataTasks;
- (bool)_allowsTCPFastOpen;
- (bool)_allowsTLSSessionResumption;
- (bool)_allowsTLSSessionTickets;
- (id)_appleIDContext;
- (id)_atsContext;
- (id)_authenticatorStatusCodes;
- (bool)_collectsTimingData;
- (id)_companionAppBundleIdentifier;
- (double)_connectionCacheCellPurgeTimeout;
- (double)_connectionCachePurgeTimeout;
- (id)_connectionPoolName;
- (id)_contentDispHeadEncFallback;
- (void*)_copyAttribute:(struct __CFString { }*)arg1;
- (struct OpaqueCFHTTPCookieStorage { }*)_copyCFCookieStorage;
- (unsigned long long)_customReadBufferSize;
- (double)_customReadBufferTimeout;
- (id)_directoryForDownloadedFiles;
- (bool)_disablesOutOfProcessDirectWiFiUsage;
- (bool)_disablesUseOfProxySession;
- (bool)_disallowsSPDY;
- (unsigned long long)_forcedNetworkServiceType;
- (bool)_forcesNewConnections;
- (bool)_infersDiscretionaryFromOriginatingClient;
- (bool)_isProxySession;
- (id)_ledBellyServiceIdentifier;
- (double)_longLivedConnectionCacheCellPurgeTimeout;
- (double)_longLivedConnectionCachePurgeTimeout;
- (bool)_onBehalfOfPairedDevice;
- (id)_overriddenDelegateOptions;
- (bool)_overridesBackgroundSessionAutoRedirect;
- (bool)_performsEVCertCheck;
- (id)_phskip_cookieStorage;
- (bool)_phskip_cookieStorageSet;
- (id)_phskip_credStorage;
- (bool)_phskip_credStorageSet;
- (struct _CFHSTSPolicy { }*)_phskip_hstsStorage;
- (bool)_phskip_hstsStorageSet;
- (id)_phskip_urlCache;
- (bool)_phskip_urlCacheSet;
- (bool)_prefersInfraWiFi;
- (bool)_preventsDirectWiFiAccess;
- (bool)_preventsIdleSleep;
- (bool)_preventsIdleSleepOnceConnected;
- (bool)_requiresClientToOpenFiles;
- (bool)_requiresPowerPluggedIn;
- (bool)_respectsAllowsCellularAccessForDiscretionaryTasks;
- (bool)_sessionSendsLaunchOnDemandEvents;
- (bool)_shouldPreserveBackgroundSessionDisposition;
- (bool)_shouldSkipPreferredClientCertificateLookup;
- (id)_socketStreamProperties;
- (id)_sourceApplicationAuditTokenData;
- (id)_sourceApplicationBundleIdentifier;
- (id)_sourceApplicationSecondaryIdentifier;
- (bool)_supportsAVAssetDownloads;
- (id)_tcpConnectionPoolName;
- (long long)_timingDataOptions;
- (bool)_usePipeliningHeuristics;
- (id)_watchAppBundleIdentifier;
- (id)_watchExtensionBundleIdentifier;
- (bool)allowsCellularAccess;
- (id)connectionProxyDictionary;
- (struct _CFHSTSPolicy { }*)copyHSTSPolicy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)disposition;
- (void)encodeWithCoder:(id)arg1;
- (struct HTTPConnectionCacheLimits { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; })getConnectionCacheLimits;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisposition:(id)arg1;
- (bool)isBackgroundSession;
- (bool)isDiscretionary;
- (bool)isEqual:(id)arg1;
- (long long)minimumFastLanePriority;
- (unsigned long long)networkServiceType;
- (long long)numFastLanes;
- (long long)numPriorityLevels;
- (long long)pipeliningHighWatermark;
- (long long)pipeliningLowWatermark;
- (id)protocolClasses;
- (unsigned long long)requestCachePolicy;
- (bool)sessionSendsLaunchEvents;
- (void)setAllowsCellularAccess:(bool)arg1;
- (void)setBackgroundSession:(bool)arg1;
- (void)setConnectionProxyDictionary:(id)arg1;
- (void)setDiscretionary:(bool)arg1;
- (void)setDisposition:(id)arg1;
- (void)setHSTSPolicy:(struct _CFHSTSPolicy { }*)arg1;
- (void)setHTTPAdditionalHeaders:(id)arg1;
- (void)setHTTPCookieAcceptPolicy:(unsigned long long)arg1;
- (void)setHTTPCookieStorage:(id)arg1;
- (void)setHTTPMaximumConnectionsPerHost:(long long)arg1;
- (void)setHTTPShouldSetCookies:(bool)arg1;
- (void)setHTTPShouldUsePipelining:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMinimumFastLanePriority:(long long)arg1;
- (void)setNetworkServiceType:(unsigned long long)arg1;
- (void)setNumFastLanes:(long long)arg1;
- (void)setNumPriorityLevels:(long long)arg1;
- (void)setPipeliningHighWatermark:(long long)arg1;
- (void)setPipeliningLowWatermark:(long long)arg1;
- (void)setProtocolClasses:(id)arg1;
- (void)setRequestCachePolicy:(unsigned long long)arg1;
- (void)setSessionSendsLaunchEvents:(bool)arg1;
- (void)setSharedContainerIdentifier:(id)arg1;
- (void)setShouldUseExtendedBackgroundIdleMode:(bool)arg1;
- (void)setSkip_download_unlink:(bool)arg1;
- (void)setTLSMaximumSupportedProtocol:(int)arg1;
- (void)setTLSMinimumSupportedProtocol:(int)arg1;
- (void)setTimeoutIntervalForRequest:(double)arg1;
- (void)setTimeoutIntervalForResource:(double)arg1;
- (void)setURLCache:(id)arg1;
- (void)setURLCredentialStorage:(id)arg1;
- (void)set_CTDataConnectionServiceType:(id)arg1;
- (void)set_TCPAdaptiveReadTimeout:(unsigned long long)arg1;
- (void)set_TCPAdaptiveWriteTimeout:(unsigned long long)arg1;
- (void)set_allowTCPIOConnectionStreamTask:(bool)arg1;
- (void)set_allowsExpensiveAccess:(bool)arg1;
- (void)set_allowsIndefiniteConnections:(bool)arg1;
- (void)set_allowsMultipathTCP:(bool)arg1;
- (void)set_allowsPowerNapScheduling:(bool)arg1;
- (void)set_allowsResponseMonitoringDuringBodyTranmission:(bool)arg1;
- (void)set_allowsRetryForBackgroundDataTasks:(bool)arg1;
- (void)set_allowsTCPFastOpen:(bool)arg1;
- (void)set_allowsTLSSessionResumption:(bool)arg1;
- (void)set_allowsTLSSessionTickets:(bool)arg1;
- (void)set_appleIDContext:(id)arg1;
- (void)set_atsContext:(id)arg1;
- (void)set_authenticatorStatusCodes:(id)arg1;
- (void)set_collectsTimingData:(bool)arg1;
- (void)set_companionAppBundleIdentifier:(id)arg1;
- (void)set_connectionCacheCellPurgeTimeout:(double)arg1;
- (void)set_connectionCachePurgeTimeout:(double)arg1;
- (void)set_connectionPoolName:(id)arg1;
- (void)set_contentDispHeadEncFallback:(id)arg1;
- (void)set_customReadBufferSize:(unsigned long long)arg1;
- (void)set_customReadBufferTimeout:(double)arg1;
- (void)set_directoryForDownloadedFiles:(id)arg1;
- (void)set_disablesOutOfProcessDirectWiFiUsage:(bool)arg1;
- (void)set_disablesUseOfProxySession:(bool)arg1;
- (void)set_disallowsSPDY:(bool)arg1;
- (void)set_forcedNetworkServiceType:(unsigned long long)arg1;
- (void)set_forcesNewConnections:(bool)arg1;
- (void)set_infersDiscretionaryFromOriginatingClient:(bool)arg1;
- (void)set_ledBellyServiceIdentifier:(id)arg1;
- (void)set_longLivedConnectionCacheCellPurgeTimeout:(double)arg1;
- (void)set_longLivedConnectionCachePurgeTimeout:(double)arg1;
- (void)set_onBehalfOfPairedDevice:(bool)arg1;
- (void)set_overriddenDelegateOptions:(id)arg1;
- (void)set_overridesBackgroundSessionAutoRedirect:(bool)arg1;
- (void)set_performsEVCertCheck:(bool)arg1;
- (void)set_phskip_cookieStorage:(id)arg1;
- (void)set_phskip_cookieStorageSet:(bool)arg1;
- (void)set_phskip_credStorage:(id)arg1;
- (void)set_phskip_credStorageSet:(bool)arg1;
- (void)set_phskip_hstsStorage:(struct _CFHSTSPolicy { }*)arg1;
- (void)set_phskip_hstsStorageSet:(bool)arg1;
- (void)set_phskip_urlCache:(id)arg1;
- (void)set_phskip_urlCacheSet:(bool)arg1;
- (void)set_prefersInfraWiFi:(bool)arg1;
- (void)set_preventsDirectWiFiAccess:(bool)arg1;
- (void)set_preventsIdleSleep:(bool)arg1;
- (void)set_preventsIdleSleepOnceConnected:(bool)arg1;
- (void)set_proxySession:(bool)arg1;
- (void)set_requiresClientToOpenFiles:(bool)arg1;
- (void)set_requiresPowerPluggedIn:(bool)arg1;
- (void)set_respectsAllowsCellularAccessForDiscretionaryTasks:(bool)arg1;
- (void)set_sessionSendsLaunchOnDemandEvents:(bool)arg1;
- (void)set_shouldPreserveBackgroundSessionDisposition:(bool)arg1;
- (void)set_shouldSkipPreferredClientCertificateLookup:(bool)arg1;
- (void)set_socketStreamProperties:(id)arg1;
- (void)set_sourceApplicationAuditTokenData:(id)arg1;
- (void)set_sourceApplicationBundleIdentifier:(id)arg1;
- (void)set_sourceApplicationSecondaryIdentifier:(id)arg1;
- (void)set_supportsAVAssetDownloads:(bool)arg1;
- (void)set_tcpConnectionPoolName:(id)arg1;
- (void)set_timingDataOptions:(long long)arg1;
- (void)set_usePipeliningHeuristics:(bool)arg1;
- (void)set_watchAppBundleIdentifier:(id)arg1;
- (void)set_watchExtensionBundleIdentifier:(id)arg1;
- (id)sharedContainerIdentifier;
- (bool)shouldUseExtendedBackgroundIdleMode;
- (bool)skip_download_unlink;
- (double)timeoutIntervalForRequest;
- (double)timeoutIntervalForResource;

@end
