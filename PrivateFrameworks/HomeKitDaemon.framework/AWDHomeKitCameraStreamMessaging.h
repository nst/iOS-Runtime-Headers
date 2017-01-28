/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitCameraStreamMessaging : PBCodable <NSCopying> {
    struct { 
        unsigned int receivedConnSetup : 1; 
        unsigned int receivedNegotiationRequest : 1; 
        unsigned int receivedStartRequest : 1; 
        unsigned int sentConnSetup : 1; 
        unsigned int sentNegotiationRequest : 1; 
        unsigned int sentNegotiationResponse : 1; 
        unsigned int sentStartRequest : 1; 
        unsigned int sentStartResponse : 1; 
    }  _has;
    unsigned long long  _receivedConnSetup;
    unsigned long long  _receivedNegotiationRequest;
    unsigned long long  _receivedStartRequest;
    unsigned long long  _sentConnSetup;
    unsigned long long  _sentNegotiationRequest;
    unsigned long long  _sentNegotiationResponse;
    unsigned long long  _sentStartRequest;
    unsigned long long  _sentStartResponse;
}

@property (nonatomic) bool hasReceivedConnSetup;
@property (nonatomic) bool hasReceivedNegotiationRequest;
@property (nonatomic) bool hasReceivedStartRequest;
@property (nonatomic) bool hasSentConnSetup;
@property (nonatomic) bool hasSentNegotiationRequest;
@property (nonatomic) bool hasSentNegotiationResponse;
@property (nonatomic) bool hasSentStartRequest;
@property (nonatomic) bool hasSentStartResponse;
@property (nonatomic) unsigned long long receivedConnSetup;
@property (nonatomic) unsigned long long receivedNegotiationRequest;
@property (nonatomic) unsigned long long receivedStartRequest;
@property (nonatomic) unsigned long long sentConnSetup;
@property (nonatomic) unsigned long long sentNegotiationRequest;
@property (nonatomic) unsigned long long sentNegotiationResponse;
@property (nonatomic) unsigned long long sentStartRequest;
@property (nonatomic) unsigned long long sentStartResponse;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasReceivedConnSetup;
- (bool)hasReceivedNegotiationRequest;
- (bool)hasReceivedStartRequest;
- (bool)hasSentConnSetup;
- (bool)hasSentNegotiationRequest;
- (bool)hasSentNegotiationResponse;
- (bool)hasSentStartRequest;
- (bool)hasSentStartResponse;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)receivedConnSetup;
- (unsigned long long)receivedNegotiationRequest;
- (unsigned long long)receivedStartRequest;
- (unsigned long long)sentConnSetup;
- (unsigned long long)sentNegotiationRequest;
- (unsigned long long)sentNegotiationResponse;
- (unsigned long long)sentStartRequest;
- (unsigned long long)sentStartResponse;
- (void)setHasReceivedConnSetup:(bool)arg1;
- (void)setHasReceivedNegotiationRequest:(bool)arg1;
- (void)setHasReceivedStartRequest:(bool)arg1;
- (void)setHasSentConnSetup:(bool)arg1;
- (void)setHasSentNegotiationRequest:(bool)arg1;
- (void)setHasSentNegotiationResponse:(bool)arg1;
- (void)setHasSentStartRequest:(bool)arg1;
- (void)setHasSentStartResponse:(bool)arg1;
- (void)setReceivedConnSetup:(unsigned long long)arg1;
- (void)setReceivedNegotiationRequest:(unsigned long long)arg1;
- (void)setReceivedStartRequest:(unsigned long long)arg1;
- (void)setSentConnSetup:(unsigned long long)arg1;
- (void)setSentNegotiationRequest:(unsigned long long)arg1;
- (void)setSentNegotiationResponse:(unsigned long long)arg1;
- (void)setSentStartRequest:(unsigned long long)arg1;
- (void)setSentStartResponse:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
