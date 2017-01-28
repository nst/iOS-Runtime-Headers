/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSBeginDiscoveryMessage : PBCodable <NSCopying> {
    int  _discoveryTypes;
    struct { 
        unsigned int discoveryTypes : 1; 
        unsigned int hasPairedNetworkNames : 1; 
    }  _has;
    bool  _hasPairedNetworkNames;
    NSMutableArray * _pairedNetworkNames;
}

@property (nonatomic) int discoveryTypes;
@property (nonatomic) bool hasDiscoveryTypes;
@property (nonatomic) bool hasHasPairedNetworkNames;
@property (nonatomic) bool hasPairedNetworkNames;
@property (nonatomic, retain) NSMutableArray *pairedNetworkNames;

- (void).cxx_destruct;
- (void)addPairedNetworkNames:(id)arg1;
- (void)clearPairedNetworkNames;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)discoveryTypes;
- (bool)hasDiscoveryTypes;
- (bool)hasHasPairedNetworkNames;
- (bool)hasPairedNetworkNames;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pairedNetworkNames;
- (id)pairedNetworkNamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)pairedNetworkNamesCount;
- (bool)readFrom:(id)arg1;
- (void)setDiscoveryTypes:(int)arg1;
- (void)setHasDiscoveryTypes:(bool)arg1;
- (void)setHasHasPairedNetworkNames:(bool)arg1;
- (void)setHasPairedNetworkNames:(bool)arg1;
- (void)setPairedNetworkNames:(id)arg1;
- (void)writeTo:(id)arg1;

@end
