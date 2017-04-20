/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSWiProxDidConnectToPeer : PBCodable <NSCopying> {
    unsigned long long  _duration;
    struct { 
        unsigned int duration : 1; 
        unsigned int resultCode : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _resultCode;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long duration;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasResultCode;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long resultCode;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (BOOL)hasDuration;
- (BOOL)hasResultCode;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned long long)resultCode;
- (void)setDuration:(unsigned long long)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasResultCode:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setResultCode:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end