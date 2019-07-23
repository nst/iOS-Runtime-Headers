/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOWiFiConnectionQuality : PBCodable <NSCopying> {
    NSMutableArray * _additionalUniqueIDs;
    unsigned int  _assocReason;
    unsigned int  _associatedTime;
    int  _associationLength;
    int  _associationReason;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _authTraits;
    unsigned int  _band;
    unsigned long long  _bytesInActive;
    unsigned long long  _bytesInTotal;
    unsigned long long  _bytesOutActive;
    unsigned long long  _bytesOutTotal;
    int  _captiveDetermination;
    unsigned int  _captiveFlag;
    int  _cca;
    unsigned int  _channel;
    unsigned int  _channelWidth;
    unsigned int  _colocatedState;
    unsigned long long  _dataStalls;
    unsigned int  _disassocReason;
    int  _disassociationReason;
    NSMutableArray * _essMembers;
    unsigned long long  _failedConnections;
    unsigned long long  _faultyStay;
    NSMutableArray * _feedbacks;
    struct { 
        unsigned int bytesInActive : 1; 
        unsigned int bytesInTotal : 1; 
        unsigned int bytesOutActive : 1; 
        unsigned int bytesOutTotal : 1; 
        unsigned int dataStalls : 1; 
        unsigned int failedConnections : 1; 
        unsigned int faultyStay : 1; 
        unsigned int lat : 1; 
        unsigned int lon : 1; 
        unsigned int lowLQMStay : 1; 
        unsigned int lowqStay : 1; 
        unsigned int lqmTranCount : 1; 
        unsigned int overAllStay : 1; 
        unsigned int packetsIn : 1; 
        unsigned int packetsOut : 1; 
        unsigned int reTxBytes : 1; 
        unsigned int receivedDupes : 1; 
        unsigned int rxOutOfOrderBytes : 1; 
        unsigned int successfulConnections : 1; 
        unsigned int timeOfDay : 1; 
        unsigned int timestamp : 1; 
        unsigned int assocReason : 1; 
        unsigned int associatedTime : 1; 
        unsigned int associationLength : 1; 
        unsigned int associationReason : 1; 
        unsigned int band : 1; 
        unsigned int captiveDetermination : 1; 
        unsigned int captiveFlag : 1; 
        unsigned int cca : 1; 
        unsigned int channel : 1; 
        unsigned int channelWidth : 1; 
        unsigned int colocatedState : 1; 
        unsigned int disassocReason : 1; 
        unsigned int disassociationReason : 1; 
        unsigned int networkOrigin : 1; 
        unsigned int networkType : 1; 
        unsigned int phyMode : 1; 
        unsigned int roundTripTimeAvg : 1; 
        unsigned int roundTripTimeAvgActive : 1; 
        unsigned int roundTripTimeMin : 1; 
        unsigned int roundTripTimeMinActive : 1; 
        unsigned int roundTripTimeVar : 1; 
        unsigned int roundTripTimeVarActive : 1; 
        unsigned int rssi : 1; 
        unsigned int securityType : 1; 
        unsigned int snr : 1; 
        unsigned int topDLRate : 1; 
        unsigned int wasCaptiveFlag : 1; 
        unsigned int hotspot20 : 1; 
        unsigned int isEdgeBSS : 1; 
        unsigned int isKnownGood : 1; 
        unsigned int lowInternetDL : 1; 
        unsigned int lowInternetUL : 1; 
    }  _has;
    bool  _hotspot20;
    bool  _isEdgeBSS;
    bool  _isKnownGood;
    double  _lat;
    GEOLocation * _location;
    double  _lon;
    bool  _lowInternetDL;
    bool  _lowInternetUL;
    unsigned long long  _lowLQMStay;
    unsigned long long  _lowqStay;
    unsigned long long  _lqmTranCount;
    NSMutableArray * _nearbyBSSs;
    int  _networkOrigin;
    int  _networkType;
    NSMutableArray * _otherUniqueIDs;
    unsigned long long  _overAllStay;
    unsigned long long  _packetsIn;
    unsigned long long  _packetsOut;
    unsigned int  _phyMode;
    unsigned long long  _reTxBytes;
    unsigned long long  _receivedDupes;
    float  _roundTripTimeAvg;
    float  _roundTripTimeAvgActive;
    float  _roundTripTimeMin;
    float  _roundTripTimeMinActive;
    float  _roundTripTimeVar;
    float  _roundTripTimeVarActive;
    int  _rssi;
    unsigned long long  _rxOutOfOrderBytes;
    unsigned int  _securityType;
    int  _snr;
    unsigned long long  _successfulConnections;
    unsigned long long  _timeOfDay;
    unsigned long long  _timestamp;
    float  _topDLRate;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _traits;
    NSString * _uniqueID;
    unsigned int  _wasCaptiveFlag;
}

@property (nonatomic, retain) NSMutableArray *additionalUniqueIDs;
@property (nonatomic) unsigned int assocReason;
@property (nonatomic) unsigned int associatedTime;
@property (nonatomic) int associationLength;
@property (nonatomic) int associationReason;
@property (nonatomic, readonly) int*authTraits;
@property (nonatomic, readonly) unsigned long long authTraitsCount;
@property (nonatomic) unsigned int band;
@property (nonatomic) unsigned long long bytesInActive;
@property (nonatomic) unsigned long long bytesInTotal;
@property (nonatomic) unsigned long long bytesOutActive;
@property (nonatomic) unsigned long long bytesOutTotal;
@property (nonatomic) int captiveDetermination;
@property (nonatomic) unsigned int captiveFlag;
@property (nonatomic) int cca;
@property (nonatomic) unsigned int channel;
@property (nonatomic) unsigned int channelWidth;
@property (nonatomic) unsigned int colocatedState;
@property (nonatomic) unsigned long long dataStalls;
@property (nonatomic) unsigned int disassocReason;
@property (nonatomic) int disassociationReason;
@property (nonatomic, retain) NSMutableArray *essMembers;
@property (nonatomic) unsigned long long failedConnections;
@property (nonatomic) unsigned long long faultyStay;
@property (nonatomic, retain) NSMutableArray *feedbacks;
@property (nonatomic) bool hasAssocReason;
@property (nonatomic) bool hasAssociatedTime;
@property (nonatomic) bool hasAssociationLength;
@property (nonatomic) bool hasAssociationReason;
@property (nonatomic) bool hasBand;
@property (nonatomic) bool hasBytesInActive;
@property (nonatomic) bool hasBytesInTotal;
@property (nonatomic) bool hasBytesOutActive;
@property (nonatomic) bool hasBytesOutTotal;
@property (nonatomic) bool hasCaptiveDetermination;
@property (nonatomic) bool hasCaptiveFlag;
@property (nonatomic) bool hasCca;
@property (nonatomic) bool hasChannel;
@property (nonatomic) bool hasChannelWidth;
@property (nonatomic) bool hasColocatedState;
@property (nonatomic) bool hasDataStalls;
@property (nonatomic) bool hasDisassocReason;
@property (nonatomic) bool hasDisassociationReason;
@property (nonatomic) bool hasFailedConnections;
@property (nonatomic) bool hasFaultyStay;
@property (nonatomic) bool hasHotspot20;
@property (nonatomic) bool hasIsEdgeBSS;
@property (nonatomic) bool hasIsKnownGood;
@property (nonatomic) bool hasLat;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic) bool hasLon;
@property (nonatomic) bool hasLowInternetDL;
@property (nonatomic) bool hasLowInternetUL;
@property (nonatomic) bool hasLowLQMStay;
@property (nonatomic) bool hasLowqStay;
@property (nonatomic) bool hasLqmTranCount;
@property (nonatomic) bool hasNetworkOrigin;
@property (nonatomic) bool hasNetworkType;
@property (nonatomic) bool hasOverAllStay;
@property (nonatomic) bool hasPacketsIn;
@property (nonatomic) bool hasPacketsOut;
@property (nonatomic) bool hasPhyMode;
@property (nonatomic) bool hasReTxBytes;
@property (nonatomic) bool hasReceivedDupes;
@property (nonatomic) bool hasRoundTripTimeAvg;
@property (nonatomic) bool hasRoundTripTimeAvgActive;
@property (nonatomic) bool hasRoundTripTimeMin;
@property (nonatomic) bool hasRoundTripTimeMinActive;
@property (nonatomic) bool hasRoundTripTimeVar;
@property (nonatomic) bool hasRoundTripTimeVarActive;
@property (nonatomic) bool hasRssi;
@property (nonatomic) bool hasRxOutOfOrderBytes;
@property (nonatomic) bool hasSecurityType;
@property (nonatomic) bool hasSnr;
@property (nonatomic) bool hasSuccessfulConnections;
@property (nonatomic) bool hasTimeOfDay;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTopDLRate;
@property (nonatomic, readonly) bool hasUniqueID;
@property (nonatomic) bool hasWasCaptiveFlag;
@property (nonatomic) bool hotspot20;
@property (nonatomic) bool isEdgeBSS;
@property (nonatomic) bool isKnownGood;
@property (nonatomic) double lat;
@property (nonatomic, retain) GEOLocation *location;
@property (nonatomic) double lon;
@property (nonatomic) bool lowInternetDL;
@property (nonatomic) bool lowInternetUL;
@property (nonatomic) unsigned long long lowLQMStay;
@property (nonatomic) unsigned long long lowqStay;
@property (nonatomic) unsigned long long lqmTranCount;
@property (nonatomic, retain) NSMutableArray *nearbyBSSs;
@property (nonatomic) int networkOrigin;
@property (nonatomic) int networkType;
@property (nonatomic, retain) NSMutableArray *otherUniqueIDs;
@property (nonatomic) unsigned long long overAllStay;
@property (nonatomic) unsigned long long packetsIn;
@property (nonatomic) unsigned long long packetsOut;
@property (nonatomic) unsigned int phyMode;
@property (nonatomic) unsigned long long reTxBytes;
@property (nonatomic) unsigned long long receivedDupes;
@property (nonatomic) float roundTripTimeAvg;
@property (nonatomic) float roundTripTimeAvgActive;
@property (nonatomic) float roundTripTimeMin;
@property (nonatomic) float roundTripTimeMinActive;
@property (nonatomic) float roundTripTimeVar;
@property (nonatomic) float roundTripTimeVarActive;
@property (nonatomic) int rssi;
@property (nonatomic) unsigned long long rxOutOfOrderBytes;
@property (nonatomic) unsigned int securityType;
@property (nonatomic) int snr;
@property (nonatomic) unsigned long long successfulConnections;
@property (nonatomic) unsigned long long timeOfDay;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) float topDLRate;
@property (nonatomic, readonly) int*traits;
@property (nonatomic, readonly) unsigned long long traitsCount;
@property (nonatomic, retain) NSString *uniqueID;
@property (nonatomic) unsigned int wasCaptiveFlag;

+ (Class)additionalUniqueIDsType;
+ (Class)essMembersType;
+ (Class)feedbackType;
+ (Class)nearbyBSSType;
+ (Class)otherUniqueIDsType;

- (void).cxx_destruct;
- (int)StringAsAssociationLength:(id)arg1;
- (int)StringAsAssociationReason:(id)arg1;
- (int)StringAsAuthTraits:(id)arg1;
- (int)StringAsCaptiveDetermination:(id)arg1;
- (int)StringAsDisassociationReason:(id)arg1;
- (int)StringAsNetworkOrigin:(id)arg1;
- (int)StringAsNetworkType:(id)arg1;
- (int)StringAsTraits:(id)arg1;
- (void)addAdditionalUniqueIDs:(id)arg1;
- (void)addAuthTraits:(int)arg1;
- (void)addEssMembers:(id)arg1;
- (void)addFeedback:(id)arg1;
- (void)addNearbyBSS:(id)arg1;
- (void)addOtherUniqueIDs:(id)arg1;
- (void)addTraits:(int)arg1;
- (id)additionalUniqueIDs;
- (id)additionalUniqueIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)additionalUniqueIDsCount;
- (unsigned int)assocReason;
- (unsigned int)associatedTime;
- (int)associationLength;
- (id)associationLengthAsString:(int)arg1;
- (int)associationReason;
- (id)associationReasonAsString:(int)arg1;
- (int*)authTraits;
- (id)authTraitsAsString:(int)arg1;
- (int)authTraitsAtIndex:(unsigned long long)arg1;
- (unsigned long long)authTraitsCount;
- (unsigned int)band;
- (unsigned long long)bytesInActive;
- (unsigned long long)bytesInTotal;
- (unsigned long long)bytesOutActive;
- (unsigned long long)bytesOutTotal;
- (int)captiveDetermination;
- (id)captiveDeterminationAsString:(int)arg1;
- (unsigned int)captiveFlag;
- (int)cca;
- (unsigned int)channel;
- (unsigned int)channelWidth;
- (void)clearAdditionalUniqueIDs;
- (void)clearAuthTraits;
- (void)clearEssMembers;
- (void)clearFeedbacks;
- (void)clearNearbyBSSs;
- (void)clearOtherUniqueIDs;
- (void)clearTraits;
- (unsigned int)colocatedState;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)dataStalls;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)disassocReason;
- (int)disassociationReason;
- (id)disassociationReasonAsString:(int)arg1;
- (id)essMembers;
- (id)essMembersAtIndex:(unsigned long long)arg1;
- (unsigned long long)essMembersCount;
- (unsigned long long)failedConnections;
- (unsigned long long)faultyStay;
- (id)feedbackAtIndex:(unsigned long long)arg1;
- (id)feedbacks;
- (unsigned long long)feedbacksCount;
- (bool)hasAssocReason;
- (bool)hasAssociatedTime;
- (bool)hasAssociationLength;
- (bool)hasAssociationReason;
- (bool)hasBand;
- (bool)hasBytesInActive;
- (bool)hasBytesInTotal;
- (bool)hasBytesOutActive;
- (bool)hasBytesOutTotal;
- (bool)hasCaptiveDetermination;
- (bool)hasCaptiveFlag;
- (bool)hasCca;
- (bool)hasChannel;
- (bool)hasChannelWidth;
- (bool)hasColocatedState;
- (bool)hasDataStalls;
- (bool)hasDisassocReason;
- (bool)hasDisassociationReason;
- (bool)hasFailedConnections;
- (bool)hasFaultyStay;
- (bool)hasHotspot20;
- (bool)hasIsEdgeBSS;
- (bool)hasIsKnownGood;
- (bool)hasLat;
- (bool)hasLocation;
- (bool)hasLon;
- (bool)hasLowInternetDL;
- (bool)hasLowInternetUL;
- (bool)hasLowLQMStay;
- (bool)hasLowqStay;
- (bool)hasLqmTranCount;
- (bool)hasNetworkOrigin;
- (bool)hasNetworkType;
- (bool)hasOverAllStay;
- (bool)hasPacketsIn;
- (bool)hasPacketsOut;
- (bool)hasPhyMode;
- (bool)hasReTxBytes;
- (bool)hasReceivedDupes;
- (bool)hasRoundTripTimeAvg;
- (bool)hasRoundTripTimeAvgActive;
- (bool)hasRoundTripTimeMin;
- (bool)hasRoundTripTimeMinActive;
- (bool)hasRoundTripTimeVar;
- (bool)hasRoundTripTimeVarActive;
- (bool)hasRssi;
- (bool)hasRxOutOfOrderBytes;
- (bool)hasSecurityType;
- (bool)hasSnr;
- (bool)hasSuccessfulConnections;
- (bool)hasTimeOfDay;
- (bool)hasTimestamp;
- (bool)hasTopDLRate;
- (bool)hasUniqueID;
- (bool)hasWasCaptiveFlag;
- (unsigned long long)hash;
- (bool)hotspot20;
- (bool)isEdgeBSS;
- (bool)isEqual:(id)arg1;
- (bool)isKnownGood;
- (double)lat;
- (id)location;
- (double)lon;
- (bool)lowInternetDL;
- (bool)lowInternetUL;
- (unsigned long long)lowLQMStay;
- (unsigned long long)lowqStay;
- (unsigned long long)lqmTranCount;
- (void)mergeFrom:(id)arg1;
- (id)nearbyBSSAtIndex:(unsigned long long)arg1;
- (id)nearbyBSSs;
- (unsigned long long)nearbyBSSsCount;
- (int)networkOrigin;
- (id)networkOriginAsString:(int)arg1;
- (int)networkType;
- (id)networkTypeAsString:(int)arg1;
- (id)otherUniqueIDs;
- (id)otherUniqueIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)otherUniqueIDsCount;
- (unsigned long long)overAllStay;
- (unsigned long long)packetsIn;
- (unsigned long long)packetsOut;
- (unsigned int)phyMode;
- (unsigned long long)reTxBytes;
- (bool)readFrom:(id)arg1;
- (unsigned long long)receivedDupes;
- (float)roundTripTimeAvg;
- (float)roundTripTimeAvgActive;
- (float)roundTripTimeMin;
- (float)roundTripTimeMinActive;
- (float)roundTripTimeVar;
- (float)roundTripTimeVarActive;
- (int)rssi;
- (unsigned long long)rxOutOfOrderBytes;
- (unsigned int)securityType;
- (void)setAdditionalUniqueIDs:(id)arg1;
- (void)setAssocReason:(unsigned int)arg1;
- (void)setAssociatedTime:(unsigned int)arg1;
- (void)setAssociationLength:(int)arg1;
- (void)setAssociationReason:(int)arg1;
- (void)setAuthTraits:(int*)arg1 count:(unsigned long long)arg2;
- (void)setBand:(unsigned int)arg1;
- (void)setBytesInActive:(unsigned long long)arg1;
- (void)setBytesInTotal:(unsigned long long)arg1;
- (void)setBytesOutActive:(unsigned long long)arg1;
- (void)setBytesOutTotal:(unsigned long long)arg1;
- (void)setCaptiveDetermination:(int)arg1;
- (void)setCaptiveFlag:(unsigned int)arg1;
- (void)setCca:(int)arg1;
- (void)setChannel:(unsigned int)arg1;
- (void)setChannelWidth:(unsigned int)arg1;
- (void)setColocatedState:(unsigned int)arg1;
- (void)setDataStalls:(unsigned long long)arg1;
- (void)setDisassocReason:(unsigned int)arg1;
- (void)setDisassociationReason:(int)arg1;
- (void)setEssMembers:(id)arg1;
- (void)setFailedConnections:(unsigned long long)arg1;
- (void)setFaultyStay:(unsigned long long)arg1;
- (void)setFeedbacks:(id)arg1;
- (void)setHasAssocReason:(bool)arg1;
- (void)setHasAssociatedTime:(bool)arg1;
- (void)setHasAssociationLength:(bool)arg1;
- (void)setHasAssociationReason:(bool)arg1;
- (void)setHasBand:(bool)arg1;
- (void)setHasBytesInActive:(bool)arg1;
- (void)setHasBytesInTotal:(bool)arg1;
- (void)setHasBytesOutActive:(bool)arg1;
- (void)setHasBytesOutTotal:(bool)arg1;
- (void)setHasCaptiveDetermination:(bool)arg1;
- (void)setHasCaptiveFlag:(bool)arg1;
- (void)setHasCca:(bool)arg1;
- (void)setHasChannel:(bool)arg1;
- (void)setHasChannelWidth:(bool)arg1;
- (void)setHasColocatedState:(bool)arg1;
- (void)setHasDataStalls:(bool)arg1;
- (void)setHasDisassocReason:(bool)arg1;
- (void)setHasDisassociationReason:(bool)arg1;
- (void)setHasFailedConnections:(bool)arg1;
- (void)setHasFaultyStay:(bool)arg1;
- (void)setHasHotspot20:(bool)arg1;
- (void)setHasIsEdgeBSS:(bool)arg1;
- (void)setHasIsKnownGood:(bool)arg1;
- (void)setHasLat:(bool)arg1;
- (void)setHasLon:(bool)arg1;
- (void)setHasLowInternetDL:(bool)arg1;
- (void)setHasLowInternetUL:(bool)arg1;
- (void)setHasLowLQMStay:(bool)arg1;
- (void)setHasLowqStay:(bool)arg1;
- (void)setHasLqmTranCount:(bool)arg1;
- (void)setHasNetworkOrigin:(bool)arg1;
- (void)setHasNetworkType:(bool)arg1;
- (void)setHasOverAllStay:(bool)arg1;
- (void)setHasPacketsIn:(bool)arg1;
- (void)setHasPacketsOut:(bool)arg1;
- (void)setHasPhyMode:(bool)arg1;
- (void)setHasReTxBytes:(bool)arg1;
- (void)setHasReceivedDupes:(bool)arg1;
- (void)setHasRoundTripTimeAvg:(bool)arg1;
- (void)setHasRoundTripTimeAvgActive:(bool)arg1;
- (void)setHasRoundTripTimeMin:(bool)arg1;
- (void)setHasRoundTripTimeMinActive:(bool)arg1;
- (void)setHasRoundTripTimeVar:(bool)arg1;
- (void)setHasRoundTripTimeVarActive:(bool)arg1;
- (void)setHasRssi:(bool)arg1;
- (void)setHasRxOutOfOrderBytes:(bool)arg1;
- (void)setHasSecurityType:(bool)arg1;
- (void)setHasSnr:(bool)arg1;
- (void)setHasSuccessfulConnections:(bool)arg1;
- (void)setHasTimeOfDay:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTopDLRate:(bool)arg1;
- (void)setHasWasCaptiveFlag:(bool)arg1;
- (void)setHotspot20:(bool)arg1;
- (void)setIsEdgeBSS:(bool)arg1;
- (void)setIsKnownGood:(bool)arg1;
- (void)setLat:(double)arg1;
- (void)setLocation:(id)arg1;
- (void)setLon:(double)arg1;
- (void)setLowInternetDL:(bool)arg1;
- (void)setLowInternetUL:(bool)arg1;
- (void)setLowLQMStay:(unsigned long long)arg1;
- (void)setLowqStay:(unsigned long long)arg1;
- (void)setLqmTranCount:(unsigned long long)arg1;
- (void)setNearbyBSSs:(id)arg1;
- (void)setNetworkOrigin:(int)arg1;
- (void)setNetworkType:(int)arg1;
- (void)setOtherUniqueIDs:(id)arg1;
- (void)setOverAllStay:(unsigned long long)arg1;
- (void)setPacketsIn:(unsigned long long)arg1;
- (void)setPacketsOut:(unsigned long long)arg1;
- (void)setPhyMode:(unsigned int)arg1;
- (void)setReTxBytes:(unsigned long long)arg1;
- (void)setReceivedDupes:(unsigned long long)arg1;
- (void)setRoundTripTimeAvg:(float)arg1;
- (void)setRoundTripTimeAvgActive:(float)arg1;
- (void)setRoundTripTimeMin:(float)arg1;
- (void)setRoundTripTimeMinActive:(float)arg1;
- (void)setRoundTripTimeVar:(float)arg1;
- (void)setRoundTripTimeVarActive:(float)arg1;
- (void)setRssi:(int)arg1;
- (void)setRxOutOfOrderBytes:(unsigned long long)arg1;
- (void)setSecurityType:(unsigned int)arg1;
- (void)setSnr:(int)arg1;
- (void)setSuccessfulConnections:(unsigned long long)arg1;
- (void)setTimeOfDay:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTopDLRate:(float)arg1;
- (void)setTraits:(int*)arg1 count:(unsigned long long)arg2;
- (void)setUniqueID:(id)arg1;
- (void)setWasCaptiveFlag:(unsigned int)arg1;
- (int)snr;
- (unsigned long long)successfulConnections;
- (unsigned long long)timeOfDay;
- (unsigned long long)timestamp;
- (float)topDLRate;
- (int*)traits;
- (id)traitsAsString:(int)arg1;
- (int)traitsAtIndex:(unsigned long long)arg1;
- (unsigned long long)traitsCount;
- (id)uniqueID;
- (unsigned int)wasCaptiveFlag;
- (void)writeTo:(id)arg1;

@end
