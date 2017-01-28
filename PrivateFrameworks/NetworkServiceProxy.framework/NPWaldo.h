/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NPWaldo : NSObject <NSSecureCoding> {
    NPLocation * _cachedLocation;
    long long  _connectionIdleTimeout;
    long long  _connectionTimeout;
    long long  _currentEdgeIndex;
    NSArray * _currentEdges;
    NSDictionary * _currentNetworkCharacteristics;
    NSData * _dayPass;
    bool  _dayPassExtendedValidation;
    bool  _dayPassExtendedValidationFromWaldo;
    NSString * _dayPassHostname;
    bool  _daypassRefreshInProgress;
    NSArray * _daypassSoftExpiry;
    <NPWaldoDelegate> * _delegate;
    unsigned long long  _diskVersion;
    double  _edgeFairnessFactor;
    NSArray * _edges;
    bool  _enableLatencyDerivation;
    bool  _enableLatencyDerivationFromWaldo;
    long long  _fallbackTimeout;
    unsigned int  _generation;
    unsigned int  _lastFailureReason;
    double  _latencyFactorA;
    double  _latencyFactorB;
    double  _latencyFactorX;
    long long  _locationCheckInterval;
    NSDate * _locationCheckTimestamp;
    NSDate * _locationExpiration;
    long long  _locationTTL;
    long long  _locationToleranceDistance;
    NSMutableDictionary * _networkInformation;
    NPTuscanyEdge * _nextEdge;
    NSDictionary * _nextProbeDates;
    long long  _observedRTTSampleSize;
    double  _probeFrequency;
    long long  _probePause;
    bool  _reprocessAfterCancelled;
    bool  _reprocessCancelled;
    bool  _reprocessPending;
    long long  _reprocessSampleCount;
    long long  _reprocessSampleSize;
    long long  _reprocessSamplingInterval;
    NSObject<OS_dispatch_source> * _reprocessSamplingTimer;
    NSDate * _resurrectionDate;
    long long  _retryPause;
    bool  _shouldSave;
    NSMutableDictionary * _signatureEdgeLists;
    long long  _signatureLimit;
    NSMutableDictionary * _signatureReprocessRateLimits;
    NSString * _tag;
    double  _telemetryRatio;
    NSString * _telemetryService;
    NSURL * _telemetryURL;
    unsigned int  _timestamp;
    bool  _useGeohashFromServer;
    unsigned long long  _version;
    long long  _viewSize;
}

@property (retain) NPLocation *cachedLocation;
@property long long connectionIdleTimeout;
@property long long connectionTimeout;
@property (readonly) NPTuscanyEdge *currentEdge;
@property long long currentEdgeIndex;
@property (readonly) NSArray *currentEdgeList;
@property (readonly) NSArray *currentEdges;
@property (readonly) NSDate *currentNetworkLastUsed;
@property (retain) NSData *dayPass;
@property bool dayPassExtendedValidation;
@property bool dayPassExtendedValidationFromWaldo;
@property (readonly) long long dayPassFetchCount;
@property (retain) NSString *dayPassHostname;
@property bool daypassRefreshInProgress;
@property (readonly) NSArray *daypassSoftExpiry;
@property <NPWaldoDelegate> *delegate;
@property (readonly) unsigned long long diskVersion;
@property (readonly) unsigned long long edgeCount;
@property double edgeFairnessFactor;
@property (retain) NSArray *edges;
@property bool enableLatencyDerivation;
@property bool enableLatencyDerivationFromWaldo;
@property (readonly) NSDate *expirationDate;
@property long long fallbackTimeout;
@property unsigned int generation;
@property (readonly) bool hasEdges;
@property unsigned int lastFailureReason;
@property double latencyFactorA;
@property double latencyFactorB;
@property double latencyFactorX;
@property long long locationCheckInterval;
@property (retain) NSDate *locationCheckTimestamp;
@property (retain) NSDate *locationExpiration;
@property long long locationTTL;
@property long long locationToleranceDistance;
@property (retain) NSMutableDictionary *networkInformation;
@property (readonly) NPTuscanyEdge *nextEdge;
@property (retain) NSDictionary *nextProbeDates;
@property (readonly) long long observedRTTSampleSize;
@property (readonly) double probeFrequency;
@property long long probePause;
@property (readonly) unsigned long long probeSize;
@property bool reprocessAfterCancelled;
@property bool reprocessCancelled;
@property bool reprocessPending;
@property long long reprocessSampleCount;
@property (readonly) long long reprocessSampleSize;
@property (readonly) long long reprocessSamplingInterval;
@property (retain) NSObject<OS_dispatch_source> *reprocessSamplingTimer;
@property (readonly) NSDate *resurrectionDate;
@property (readonly) long long retryPause;
@property bool shouldSave;
@property (retain) NSMutableDictionary *signatureEdgeLists;
@property long long signatureLimit;
@property (retain) NSMutableDictionary *signatureReprocessRateLimits;
@property (readonly) NSString *tag;
@property double telemetryRatio;
@property (retain) NSString *telemetryService;
@property (retain) NSURL *telemetryURL;
@property (readonly) unsigned int timestamp;
@property (readonly) bool useGeohashFromServer;
@property (readonly) unsigned long long version;
@property long long viewSize;

+ (id)removeFromKeychain;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)ageOutLatencyMap;
- (id)cachedLocation;
- (void)cancelProbes;
- (void)clearAllLatencyMaps;
- (long long)connectionIdleTimeout;
- (long long)connectionTimeout;
- (id)copyEdgeList:(id)arg1;
- (id)copyEdgeListRTTAverage:(id)arg1 observed:(bool)arg2 shortDescription:(bool)arg3;
- (id)copyLatencyInfoDictionary:(bool)arg1;
- (id)copyStateIncludeDistance:(bool)arg1;
- (id)currentEdge;
- (long long)currentEdgeIndex;
- (id)currentEdgeList;
- (id)currentEdges;
- (id)currentNetworkLastUsed;
- (id)dayPass;
- (bool)dayPassExtendedValidation;
- (bool)dayPassExtendedValidationFromWaldo;
- (long long)dayPassFetchCount;
- (id)dayPassHostname;
- (bool)daypassRefreshInProgress;
- (id)daypassSoftExpiry;
- (id)delegate;
- (id)description;
- (unsigned long long)diskVersion;
- (id)edgeAtIndex:(long long)arg1;
- (id)edgeContainingOnRamp:(id)arg1;
- (unsigned long long)edgeCount;
- (double)edgeFairnessFactor;
- (id)edges;
- (bool)enableLatencyDerivation;
- (bool)enableLatencyDerivationFromWaldo;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (long long)fallbackTimeout;
- (unsigned int)generation;
- (void)getDayPassRTT;
- (id)getLatencyFromList:(id)arg1 edgeIndex:(unsigned long long)arg2;
- (void)handleKeyUsageUpdate:(id)arg1 appData:(id)arg2;
- (bool)hasEdges;
- (long long)indexOfBestEdge;
- (id)initFromKeychain;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONData:(id)arg1 timestamp:(unsigned int)arg2 softExpiryOverride:(id)arg3;
- (unsigned int)lastFailureReason;
- (double)latencyFactorA;
- (double)latencyFactorB;
- (double)latencyFactorX;
- (void)loadObservedRTTSamples:(id)arg1;
- (long long)locationCheckInterval;
- (id)locationCheckTimestamp;
- (id)locationExpiration;
- (long long)locationTTL;
- (long long)locationToleranceDistance;
- (void)logEdgeList:(id)arg1 debug:(bool)arg2 toStdout:(bool)arg3;
- (void)logLatencyInfoToStdout:(bool)arg1;
- (id)networkInformation;
- (id)nextEdge;
- (id)nextProbeDates;
- (long long)observedRTTSampleSize;
- (double)probeFrequency;
- (long long)probePause;
- (unsigned long long)probeSize;
- (bool)pushCurrentDayPassesToKernelUpdateGeneration:(bool)arg1;
- (id)rebuildLatencyMap:(id)arg1 latencyMap:(id)arg2;
- (bool)rebuildLatencyMaps:(id)arg1;
- (void)refreshDayPassesWithCompletionHandler:(id)arg1;
- (bool)reprocessAfterCancelled;
- (bool)reprocessCancelled;
- (bool)reprocessPending;
- (long long)reprocessSampleCount;
- (long long)reprocessSampleSize;
- (long long)reprocessSamplingInterval;
- (id)reprocessSamplingTimer;
- (void)reprocessSamplingWithCompletionHandler:(id)arg1 fromScratch:(bool)arg2;
- (void)reprocessWithCompletionHandler:(id)arg1;
- (bool)reprocessWithNewRTT:(unsigned long long)arg1 reProbe:(bool*)arg2;
- (id)resurrectionDate;
- (void)retainValidDayPassesFromWaldoInfo:(id)arg1;
- (long long)retryPause;
- (void)saveToKeychain;
- (void)setCachedLocation:(id)arg1;
- (void)setConnectionIdleTimeout:(long long)arg1;
- (void)setConnectionTimeout:(long long)arg1;
- (void)setConstraint:(id)arg1;
- (void)setCurrentEdgeIndex:(long long)arg1;
- (void)setCurrentNetworkCharacteristics:(id)arg1;
- (void)setDayPass:(id)arg1;
- (void)setDayPassExtendedValidation:(bool)arg1;
- (void)setDayPassExtendedValidationFromWaldo:(bool)arg1;
- (void)setDayPassHostname:(id)arg1;
- (void)setDaypassRefreshInProgress:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEdgeFairnessFactor:(double)arg1;
- (void)setEdgeListForCurrentNetworkSignature:(id)arg1;
- (void)setEdges:(id)arg1;
- (void)setEnableLatencyDerivation:(bool)arg1;
- (void)setEnableLatencyDerivationFromWaldo:(bool)arg1;
- (void)setFallbackTimeout:(long long)arg1;
- (void)setGeneration:(unsigned int)arg1;
- (void)setLastFailureReason:(unsigned int)arg1;
- (void)setLatencyFactorA:(double)arg1;
- (void)setLatencyFactorB:(double)arg1;
- (void)setLatencyFactorX:(double)arg1;
- (void)setLocationCheckInterval:(long long)arg1;
- (void)setLocationCheckTimestamp:(id)arg1;
- (void)setLocationExpiration:(id)arg1;
- (void)setLocationTTL:(long long)arg1;
- (void)setLocationToleranceDistance:(long long)arg1;
- (void)setNetworkInformation:(id)arg1;
- (void)setNextProbeDates:(id)arg1;
- (void)setProbePause:(long long)arg1;
- (void)setReprocessAfterCancelled:(bool)arg1;
- (void)setReprocessCancelled:(bool)arg1;
- (void)setReprocessPending:(bool)arg1;
- (void)setReprocessSampleCount:(long long)arg1;
- (void)setReprocessSamplingTimer:(id)arg1;
- (void)setShouldSave:(bool)arg1;
- (void)setSignatureEdgeLists:(id)arg1;
- (void)setSignatureLimit:(long long)arg1;
- (void)setSignatureReprocessRateLimits:(id)arg1;
- (void)setTelemetryRatio:(double)arg1;
- (void)setTelemetryService:(id)arg1;
- (void)setTelemetryURL:(id)arg1;
- (void)setViewSize:(long long)arg1;
- (bool)shouldFetchWaldo;
- (bool)shouldPerformDayPassRefresh;
- (bool)shouldReprocess;
- (bool)shouldSave;
- (id)signatureEdgeLists;
- (long long)signatureLimit;
- (id)signatureReprocessRateLimits;
- (void)startProbingEdges:(id)arg1 atIndex:(unsigned long long)arg2 withResults:(id)arg3 completionHandler:(id)arg4;
- (id)tag;
- (double)telemetryRatio;
- (id)telemetryService;
- (id)telemetryURL;
- (unsigned int)timestamp;
- (void)timestampNetworkSignature:(id)arg1;
- (bool)useGeohashFromServer;
- (bool)validateEdgeList:(id)arg1;
- (unsigned long long)version;
- (long long)viewSize;

@end