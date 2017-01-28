/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDFaceTimeCallInterruptionBegan : PBCodable <NSCopying> {
    NSString * _guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int isAudioInterrupted : 1; 
        unsigned int isVideo : 1; 
        unsigned int isVideoInterrupted : 1; 
        unsigned int linkQuality : 1; 
        unsigned int onLockScreen : 1; 
    }  _has;
    unsigned int  _isAudioInterrupted;
    unsigned int  _isVideo;
    unsigned int  _isVideoInterrupted;
    int  _linkQuality;
    unsigned int  _onLockScreen;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *guid;
@property (nonatomic, readonly) bool hasGuid;
@property (nonatomic) bool hasIsAudioInterrupted;
@property (nonatomic) bool hasIsVideo;
@property (nonatomic) bool hasIsVideoInterrupted;
@property (nonatomic) bool hasLinkQuality;
@property (nonatomic) bool hasOnLockScreen;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int isAudioInterrupted;
@property (nonatomic) unsigned int isVideo;
@property (nonatomic) unsigned int isVideoInterrupted;
@property (nonatomic) int linkQuality;
@property (nonatomic) unsigned int onLockScreen;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)guid;
- (bool)hasGuid;
- (bool)hasIsAudioInterrupted;
- (bool)hasIsVideo;
- (bool)hasIsVideoInterrupted;
- (bool)hasLinkQuality;
- (bool)hasOnLockScreen;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (unsigned int)isAudioInterrupted;
- (bool)isEqual:(id)arg1;
- (unsigned int)isVideo;
- (unsigned int)isVideoInterrupted;
- (int)linkQuality;
- (void)mergeFrom:(id)arg1;
- (unsigned int)onLockScreen;
- (bool)readFrom:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasIsAudioInterrupted:(bool)arg1;
- (void)setHasIsVideo:(bool)arg1;
- (void)setHasIsVideoInterrupted:(bool)arg1;
- (void)setHasLinkQuality:(bool)arg1;
- (void)setHasOnLockScreen:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIsAudioInterrupted:(unsigned int)arg1;
- (void)setIsVideo:(unsigned int)arg1;
- (void)setIsVideoInterrupted:(unsigned int)arg1;
- (void)setLinkQuality:(int)arg1;
- (void)setOnLockScreen:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
