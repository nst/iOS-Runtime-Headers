/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMediaNegotiationBlobBandwidthSettings : PBCodable <NSCopying> {
    int  _configuration;
    unsigned int  _maxBandwidth;
}

@property (nonatomic) int configuration;
@property (nonatomic) unsigned int maxBandwidth;

- (int)StringAsConfiguration:(id)arg1;
- (int)configuration;
- (id)configurationAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)maxBandwidth;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConfiguration:(int)arg1;
- (void)setMaxBandwidth:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
