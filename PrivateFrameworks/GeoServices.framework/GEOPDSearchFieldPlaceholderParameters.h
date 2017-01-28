/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSearchFieldPlaceholderParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int version : 1; 
    }  _has;
    PBUnknownFields * _unknownFields;
    int  _version;
}

@property (nonatomic) bool hasVersion;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) int version;

- (int)StringAsVersion:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setVersion:(int)arg1;
- (id)unknownFields;
- (int)version;
- (id)versionAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
