/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKPRValueType : PBCodable <NSCopying> {
    int  _type;
    long long  _typeCode;
}

@property (nonatomic) int type;
@property (nonatomic) long long typeCode;

- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setType:(int)arg1;
- (void)setTypeCode:(long long)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (long long)typeCode;
- (void)writeTo:(id)arg1;

@end
