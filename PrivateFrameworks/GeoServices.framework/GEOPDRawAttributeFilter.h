/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDRawAttributeFilter : PBCodable <NSCopying> {
    NSMutableArray * _keys;
}

@property (nonatomic, retain) NSMutableArray *keys;

+ (Class)keyType;

- (void)addKey:(id)arg1;
- (void)clearKeys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)keyAtIndex:(unsigned long long)arg1;
- (id)keys;
- (unsigned long long)keysCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setKeys:(id)arg1;
- (void)writeTo:(id)arg1;

@end
