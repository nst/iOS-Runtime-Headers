/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBFeedViewportElement : PBCodable <NSCopying> {
    struct { 
        unsigned int type : 1; 
    }  _has;
    NSString * _identifier;
    NTPBFeedViewportGap * _pbGap;
    NTPBFeedViewportGroup * _pbGroup;
    int  _type;
}

@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasPbGap;
@property (nonatomic, readonly) bool hasPbGroup;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NTPBFeedViewportGap *pbGap;
@property (nonatomic, retain) NTPBFeedViewportGroup *pbGroup;
@property (nonatomic) int type;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasPbGap;
- (bool)hasPbGroup;
- (bool)hasType;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pbGap;
- (id)pbGroup;
- (bool)readFrom:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPbGap:(id)arg1;
- (void)setPbGroup:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (void)writeTo:(id)arg1;

@end
