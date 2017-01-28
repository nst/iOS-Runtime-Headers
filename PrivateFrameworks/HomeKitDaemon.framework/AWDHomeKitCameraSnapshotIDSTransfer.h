/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitCameraSnapshotIDSTransfer : PBCodable <NSCopying> {
    struct { 
        unsigned int receivedImage : 1; 
        unsigned int sentImage : 1; 
    }  _has;
    unsigned long long  _receivedImage;
    unsigned long long  _sentImage;
}

@property (nonatomic) bool hasReceivedImage;
@property (nonatomic) bool hasSentImage;
@property (nonatomic) unsigned long long receivedImage;
@property (nonatomic) unsigned long long sentImage;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasReceivedImage;
- (bool)hasSentImage;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)receivedImage;
- (unsigned long long)sentImage;
- (void)setHasReceivedImage:(bool)arg1;
- (void)setHasSentImage:(bool)arg1;
- (void)setReceivedImage:(unsigned long long)arg1;
- (void)setSentImage:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
