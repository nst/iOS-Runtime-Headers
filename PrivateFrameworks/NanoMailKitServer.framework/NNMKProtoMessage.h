/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtoMessage : PBCodable <NSCopying> {
    NSString * _accountId;
    NSMutableArray * _bccs;
    NSMutableArray * _ccs;
    NSString * _conversationId;
    NSData * _dateReceived;
    NSData * _dateSent;
    NSString * _from;
    struct { 
        unsigned int status : 1; 
    }  _has;
    NSString * _messageId;
    NSString * _messageIdHeader;
    NSString * _notificationMessageId;
    NSString * _remoteId;
    unsigned int  _status;
    NSString * _subject;
    NSMutableArray * _tos;
}

@property (nonatomic, retain) NSString *accountId;
@property (nonatomic, retain) NSMutableArray *bccs;
@property (nonatomic, retain) NSMutableArray *ccs;
@property (nonatomic, retain) NSString *conversationId;
@property (nonatomic, retain) NSData *dateReceived;
@property (nonatomic, retain) NSData *dateSent;
@property (nonatomic, retain) NSString *from;
@property (nonatomic, readonly) bool hasAccountId;
@property (nonatomic, readonly) bool hasConversationId;
@property (nonatomic, readonly) bool hasDateReceived;
@property (nonatomic, readonly) bool hasDateSent;
@property (nonatomic, readonly) bool hasFrom;
@property (nonatomic, readonly) bool hasMessageId;
@property (nonatomic, readonly) bool hasMessageIdHeader;
@property (nonatomic, readonly) bool hasNotificationMessageId;
@property (nonatomic, readonly) bool hasRemoteId;
@property (nonatomic) bool hasStatus;
@property (nonatomic, readonly) bool hasSubject;
@property (nonatomic, retain) NSString *messageId;
@property (nonatomic, retain) NSString *messageIdHeader;
@property (nonatomic, retain) NSString *notificationMessageId;
@property (nonatomic, retain) NSString *remoteId;
@property (nonatomic) unsigned int status;
@property (nonatomic, retain) NSString *subject;
@property (nonatomic, retain) NSMutableArray *tos;

- (void).cxx_destruct;
- (id)accountId;
- (void)addBcc:(id)arg1;
- (void)addCc:(id)arg1;
- (void)addTo:(id)arg1;
- (id)bccAtIndex:(unsigned long long)arg1;
- (id)bccs;
- (unsigned long long)bccsCount;
- (id)ccAtIndex:(unsigned long long)arg1;
- (id)ccs;
- (unsigned long long)ccsCount;
- (void)clearBccs;
- (void)clearCcs;
- (void)clearTos;
- (id)conversationId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateReceived;
- (id)dateSent;
- (id)description;
- (id)dictionaryRepresentation;
- (id)from;
- (bool)hasAccountId;
- (bool)hasConversationId;
- (bool)hasDateReceived;
- (bool)hasDateSent;
- (bool)hasFrom;
- (bool)hasMessageId;
- (bool)hasMessageIdHeader;
- (bool)hasNotificationMessageId;
- (bool)hasRemoteId;
- (bool)hasStatus;
- (bool)hasSubject;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)messageId;
- (id)messageIdHeader;
- (id)notificationMessageId;
- (bool)readFrom:(id)arg1;
- (id)remoteId;
- (void)setAccountId:(id)arg1;
- (void)setBccs:(id)arg1;
- (void)setCcs:(id)arg1;
- (void)setConversationId:(id)arg1;
- (void)setDateReceived:(id)arg1;
- (void)setDateSent:(id)arg1;
- (void)setFrom:(id)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setMessageId:(id)arg1;
- (void)setMessageIdHeader:(id)arg1;
- (void)setNotificationMessageId:(id)arg1;
- (void)setRemoteId:(id)arg1;
- (void)setStatus:(unsigned int)arg1;
- (void)setSubject:(id)arg1;
- (void)setTos:(id)arg1;
- (unsigned int)status;
- (id)subject;
- (id)toAtIndex:(unsigned long long)arg1;
- (id)tos;
- (unsigned long long)tosCount;
- (void)writeTo:(id)arg1;

@end
