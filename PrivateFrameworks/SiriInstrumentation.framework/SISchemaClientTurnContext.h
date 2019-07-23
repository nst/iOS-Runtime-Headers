/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaClientTurnContext : PBCodable <NSCopying> {
    NSData * _turnID;
}

@property (nonatomic, readonly) bool hasTurnID;
@property (nonatomic, retain) NSData *turnID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTurnID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTurnID:(id)arg1;
- (id)turnID;
- (void)writeTo:(id)arg1;

@end
