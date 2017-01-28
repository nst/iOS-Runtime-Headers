/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSentinelTile : PBCodable <NSCopying> {
    NSString * _resourceName;
    int  _type;
}

@property (nonatomic, retain) NSString *resourceName;
@property (nonatomic) int type;

- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)resourceName;
- (void)setResourceName:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
