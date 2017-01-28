/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSocketPairDataMessage : IDSSocketPairMessage {
    bool  _compressed;
    NSData * _data;
    bool  _expectsPeerResponse;
    NSDate * _expiryDate;
    NSString * _messageUUID;
    unsigned long long  _payloadLength;
    unsigned long long  _payloadOffset;
    NSString * _peerResponseIdentifier;
    unsigned int  _sequenceNumber;
    unsigned short  _streamID;
    bool  _wantsAppAck;
}

@property (nonatomic) bool compressed;
@property (nonatomic, readonly, retain) NSData *data;
@property (nonatomic, readonly) bool expectsPeerResponse;
@property (nonatomic, retain) NSDate *expiryDate;
@property (nonatomic, readonly, retain) NSString *messageUUID;
@property (nonatomic, readonly, retain) NSString *peerResponseIdentifier;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned short streamID;
@property (nonatomic, readonly) bool wantsAppAck;

- (id)_nonHeaderData;
- (unsigned char)command;
- (bool)compressed;
- (id)data;
- (void)dealloc;
- (bool)expectsPeerResponse;
- (id)expiryDate;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (id)initWithSequenceNumber:(unsigned int)arg1 streamID:(unsigned short)arg2 expectsPeerResponse:(bool)arg3 wantsAppAck:(bool)arg4 compressed:(bool)arg5 peerResponseIdentifier:(id)arg6 messageUUID:(id)arg7 data:(id)arg8 expiryDate:(id)arg9;
- (id)messageUUID;
- (id)peerResponseIdentifier;
- (unsigned int)sequenceNumber;
- (void)setCompressed:(bool)arg1;
- (void)setExpiryDate:(id)arg1;
- (void)setSequenceNumber:(unsigned int)arg1;
- (void)setStreamID:(unsigned short)arg1;
- (unsigned short)streamID;
- (bool)wantsAppAck;

@end
