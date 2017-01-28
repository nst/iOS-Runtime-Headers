/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDLocalizedAddress : PBCodable <NSCopying> {
    GEOAddress * _address;
    NSString * _language;
}

@property (nonatomic, retain) GEOAddress *address;
@property (nonatomic, readonly) bool hasAddress;
@property (nonatomic, readonly) bool hasLanguage;
@property (nonatomic, retain) NSString *language;

- (id)address;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAddress;
- (bool)hasLanguage;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)language;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAddress:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)writeTo:(id)arg1;

@end
