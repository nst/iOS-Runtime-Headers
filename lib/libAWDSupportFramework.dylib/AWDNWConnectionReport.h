/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDNWConnectionReport : PBCodable <NSCopying> {
    int  _connectedAddressFamily;
    unsigned long long  _connectedAddressIndex;
    int  _connectedInterfaceType;
    int  _connectionMode;
    unsigned long long  _connectionReuseCount;
    bool  _customProxyConfigured;
    unsigned long long  _dataStallCount;
    int  _failureReason;
    bool  _fallbackEligible;
    int  _firstAddressFamily;
    unsigned long long  _flowConnectMilliseconds;
    unsigned long long  _flowDurationMilliseconds;
    struct { 
        unsigned int connectedAddressIndex : 1; 
        unsigned int connectionReuseCount : 1; 
        unsigned int dataStallCount : 1; 
        unsigned int flowConnectMilliseconds : 1; 
        unsigned int flowDurationMilliseconds : 1; 
        unsigned int ipv4AddressCount : 1; 
        unsigned int ipv6AddressCount : 1; 
        unsigned int pathTriggerMilliseconds : 1; 
        unsigned int proxyMilliseconds : 1; 
        unsigned int resolutionMilliseconds : 1; 
        unsigned int timestamp : 1; 
        unsigned int tlsMilliseconds : 1; 
        unsigned int trafficClass : 1; 
        unsigned int connectedAddressFamily : 1; 
        unsigned int connectedInterfaceType : 1; 
        unsigned int connectionMode : 1; 
        unsigned int failureReason : 1; 
        unsigned int firstAddressFamily : 1; 
        unsigned int usedProxyType : 1; 
        unsigned int customProxyConfigured : 1; 
        unsigned int fallbackEligible : 1; 
        unsigned int multipathConfigured : 1; 
        unsigned int resolutionRequired : 1; 
        unsigned int synthesizedIPv6Address : 1; 
        unsigned int systemProxyConfigured : 1; 
        unsigned int tfoConfigured : 1; 
        unsigned int tlsConfigured : 1; 
        unsigned int triggeredPath : 1; 
        unsigned int usedFallback : 1; 
        unsigned int weakFallback : 1; 
    }  _has;
    unsigned long long  _ipv4AddressCount;
    unsigned long long  _ipv6AddressCount;
    bool  _multipathConfigured;
    unsigned long long  _pathTriggerMilliseconds;
    unsigned long long  _proxyMilliseconds;
    unsigned long long  _resolutionMilliseconds;
    bool  _resolutionRequired;
    bool  _synthesizedIPv6Address;
    bool  _systemProxyConfigured;
    bool  _tfoConfigured;
    unsigned long long  _timestamp;
    bool  _tlsConfigured;
    unsigned long long  _tlsMilliseconds;
    unsigned long long  _trafficClass;
    bool  _triggeredPath;
    bool  _usedFallback;
    int  _usedProxyType;
    bool  _weakFallback;
}

@property (nonatomic) int connectedAddressFamily;
@property (nonatomic) unsigned long long connectedAddressIndex;
@property (nonatomic) int connectedInterfaceType;
@property (nonatomic) int connectionMode;
@property (nonatomic) unsigned long long connectionReuseCount;
@property (nonatomic) bool customProxyConfigured;
@property (nonatomic) unsigned long long dataStallCount;
@property (nonatomic) int failureReason;
@property (nonatomic) bool fallbackEligible;
@property (nonatomic) int firstAddressFamily;
@property (nonatomic) unsigned long long flowConnectMilliseconds;
@property (nonatomic) unsigned long long flowDurationMilliseconds;
@property (nonatomic) bool hasConnectedAddressFamily;
@property (nonatomic) bool hasConnectedAddressIndex;
@property (nonatomic) bool hasConnectedInterfaceType;
@property (nonatomic) bool hasConnectionMode;
@property (nonatomic) bool hasConnectionReuseCount;
@property (nonatomic) bool hasCustomProxyConfigured;
@property (nonatomic) bool hasDataStallCount;
@property (nonatomic) bool hasFailureReason;
@property (nonatomic) bool hasFallbackEligible;
@property (nonatomic) bool hasFirstAddressFamily;
@property (nonatomic) bool hasFlowConnectMilliseconds;
@property (nonatomic) bool hasFlowDurationMilliseconds;
@property (nonatomic) bool hasIpv4AddressCount;
@property (nonatomic) bool hasIpv6AddressCount;
@property (nonatomic) bool hasMultipathConfigured;
@property (nonatomic) bool hasPathTriggerMilliseconds;
@property (nonatomic) bool hasProxyMilliseconds;
@property (nonatomic) bool hasResolutionMilliseconds;
@property (nonatomic) bool hasResolutionRequired;
@property (nonatomic) bool hasSynthesizedIPv6Address;
@property (nonatomic) bool hasSystemProxyConfigured;
@property (nonatomic) bool hasTfoConfigured;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTlsConfigured;
@property (nonatomic) bool hasTlsMilliseconds;
@property (nonatomic) bool hasTrafficClass;
@property (nonatomic) bool hasTriggeredPath;
@property (nonatomic) bool hasUsedFallback;
@property (nonatomic) bool hasUsedProxyType;
@property (nonatomic) bool hasWeakFallback;
@property (nonatomic) unsigned long long ipv4AddressCount;
@property (nonatomic) unsigned long long ipv6AddressCount;
@property (nonatomic) bool multipathConfigured;
@property (nonatomic) unsigned long long pathTriggerMilliseconds;
@property (nonatomic) unsigned long long proxyMilliseconds;
@property (nonatomic) unsigned long long resolutionMilliseconds;
@property (nonatomic) bool resolutionRequired;
@property (nonatomic) bool synthesizedIPv6Address;
@property (nonatomic) bool systemProxyConfigured;
@property (nonatomic) bool tfoConfigured;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) bool tlsConfigured;
@property (nonatomic) unsigned long long tlsMilliseconds;
@property (nonatomic) unsigned long long trafficClass;
@property (nonatomic) bool triggeredPath;
@property (nonatomic) bool usedFallback;
@property (nonatomic) int usedProxyType;
@property (nonatomic) bool weakFallback;

- (int)StringAsConnectedAddressFamily:(id)arg1;
- (int)StringAsConnectedInterfaceType:(id)arg1;
- (int)StringAsConnectionMode:(id)arg1;
- (int)StringAsFailureReason:(id)arg1;
- (int)StringAsFirstAddressFamily:(id)arg1;
- (int)StringAsUsedProxyType:(id)arg1;
- (int)connectedAddressFamily;
- (id)connectedAddressFamilyAsString:(int)arg1;
- (unsigned long long)connectedAddressIndex;
- (int)connectedInterfaceType;
- (id)connectedInterfaceTypeAsString:(int)arg1;
- (int)connectionMode;
- (id)connectionModeAsString:(int)arg1;
- (unsigned long long)connectionReuseCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)customProxyConfigured;
- (unsigned long long)dataStallCount;
- (id)description;
- (id)dictionaryRepresentation;
- (int)failureReason;
- (id)failureReasonAsString:(int)arg1;
- (bool)fallbackEligible;
- (int)firstAddressFamily;
- (id)firstAddressFamilyAsString:(int)arg1;
- (unsigned long long)flowConnectMilliseconds;
- (unsigned long long)flowDurationMilliseconds;
- (bool)hasConnectedAddressFamily;
- (bool)hasConnectedAddressIndex;
- (bool)hasConnectedInterfaceType;
- (bool)hasConnectionMode;
- (bool)hasConnectionReuseCount;
- (bool)hasCustomProxyConfigured;
- (bool)hasDataStallCount;
- (bool)hasFailureReason;
- (bool)hasFallbackEligible;
- (bool)hasFirstAddressFamily;
- (bool)hasFlowConnectMilliseconds;
- (bool)hasFlowDurationMilliseconds;
- (bool)hasIpv4AddressCount;
- (bool)hasIpv6AddressCount;
- (bool)hasMultipathConfigured;
- (bool)hasPathTriggerMilliseconds;
- (bool)hasProxyMilliseconds;
- (bool)hasResolutionMilliseconds;
- (bool)hasResolutionRequired;
- (bool)hasSynthesizedIPv6Address;
- (bool)hasSystemProxyConfigured;
- (bool)hasTfoConfigured;
- (bool)hasTimestamp;
- (bool)hasTlsConfigured;
- (bool)hasTlsMilliseconds;
- (bool)hasTrafficClass;
- (bool)hasTriggeredPath;
- (bool)hasUsedFallback;
- (bool)hasUsedProxyType;
- (bool)hasWeakFallback;
- (unsigned long long)hash;
- (unsigned long long)ipv4AddressCount;
- (unsigned long long)ipv6AddressCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)multipathConfigured;
- (unsigned long long)pathTriggerMilliseconds;
- (unsigned long long)proxyMilliseconds;
- (bool)readFrom:(id)arg1;
- (unsigned long long)resolutionMilliseconds;
- (bool)resolutionRequired;
- (void)setConnectedAddressFamily:(int)arg1;
- (void)setConnectedAddressIndex:(unsigned long long)arg1;
- (void)setConnectedInterfaceType:(int)arg1;
- (void)setConnectionMode:(int)arg1;
- (void)setConnectionReuseCount:(unsigned long long)arg1;
- (void)setCustomProxyConfigured:(bool)arg1;
- (void)setDataStallCount:(unsigned long long)arg1;
- (void)setFailureReason:(int)arg1;
- (void)setFallbackEligible:(bool)arg1;
- (void)setFirstAddressFamily:(int)arg1;
- (void)setFlowConnectMilliseconds:(unsigned long long)arg1;
- (void)setFlowDurationMilliseconds:(unsigned long long)arg1;
- (void)setHasConnectedAddressFamily:(bool)arg1;
- (void)setHasConnectedAddressIndex:(bool)arg1;
- (void)setHasConnectedInterfaceType:(bool)arg1;
- (void)setHasConnectionMode:(bool)arg1;
- (void)setHasConnectionReuseCount:(bool)arg1;
- (void)setHasCustomProxyConfigured:(bool)arg1;
- (void)setHasDataStallCount:(bool)arg1;
- (void)setHasFailureReason:(bool)arg1;
- (void)setHasFallbackEligible:(bool)arg1;
- (void)setHasFirstAddressFamily:(bool)arg1;
- (void)setHasFlowConnectMilliseconds:(bool)arg1;
- (void)setHasFlowDurationMilliseconds:(bool)arg1;
- (void)setHasIpv4AddressCount:(bool)arg1;
- (void)setHasIpv6AddressCount:(bool)arg1;
- (void)setHasMultipathConfigured:(bool)arg1;
- (void)setHasPathTriggerMilliseconds:(bool)arg1;
- (void)setHasProxyMilliseconds:(bool)arg1;
- (void)setHasResolutionMilliseconds:(bool)arg1;
- (void)setHasResolutionRequired:(bool)arg1;
- (void)setHasSynthesizedIPv6Address:(bool)arg1;
- (void)setHasSystemProxyConfigured:(bool)arg1;
- (void)setHasTfoConfigured:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTlsConfigured:(bool)arg1;
- (void)setHasTlsMilliseconds:(bool)arg1;
- (void)setHasTrafficClass:(bool)arg1;
- (void)setHasTriggeredPath:(bool)arg1;
- (void)setHasUsedFallback:(bool)arg1;
- (void)setHasUsedProxyType:(bool)arg1;
- (void)setHasWeakFallback:(bool)arg1;
- (void)setIpv4AddressCount:(unsigned long long)arg1;
- (void)setIpv6AddressCount:(unsigned long long)arg1;
- (void)setMultipathConfigured:(bool)arg1;
- (void)setPathTriggerMilliseconds:(unsigned long long)arg1;
- (void)setProxyMilliseconds:(unsigned long long)arg1;
- (void)setResolutionMilliseconds:(unsigned long long)arg1;
- (void)setResolutionRequired:(bool)arg1;
- (void)setSynthesizedIPv6Address:(bool)arg1;
- (void)setSystemProxyConfigured:(bool)arg1;
- (void)setTfoConfigured:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTlsConfigured:(bool)arg1;
- (void)setTlsMilliseconds:(unsigned long long)arg1;
- (void)setTrafficClass:(unsigned long long)arg1;
- (void)setTriggeredPath:(bool)arg1;
- (void)setUsedFallback:(bool)arg1;
- (void)setUsedProxyType:(int)arg1;
- (void)setWeakFallback:(bool)arg1;
- (bool)synthesizedIPv6Address;
- (bool)systemProxyConfigured;
- (bool)tfoConfigured;
- (unsigned long long)timestamp;
- (bool)tlsConfigured;
- (unsigned long long)tlsMilliseconds;
- (unsigned long long)trafficClass;
- (bool)triggeredPath;
- (bool)usedFallback;
- (int)usedProxyType;
- (id)usedProxyTypeAsString:(int)arg1;
- (bool)weakFallback;
- (void)writeTo:(id)arg1;

@end
