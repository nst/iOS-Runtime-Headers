/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMMessageItem : IMItem <IMRemoteObjectCoding, NSCoding, NSCopying> {
    bool  _backwardsCompatibleVersion;
    bool  _blockingRichLinks;
    NSAttributedString * _body;
    NSData * _bodyData;
    NSData * _contactsAvatarRecipeData;
    unsigned int  _error;
    long long  _expireState;
    NSString * _expressiveSendStyleID;
    NSArray * _fileTransferGUIDs;
    unsigned long long  _flags;
    NSDictionary * _messageSummaryInfo;
    NSData * _payloadData;
    NSString * _plainBody;
    long long  _replaceID;
    NSString * _subject;
    NSDate * _timeDelivered;
    NSDate * _timeExpressiveSendPlayed;
    NSDate * _timePlayed;
    NSDate * _timeRead;
    NSData * _typingIndicatorIcon;
    bool  _updatingDataSourcePayload;
}

@property (nonatomic) bool backwardsCompatibleVersion;
@property (nonatomic) bool blockingRichLinks;
@property (nonatomic, retain) NSAttributedString *body;
@property (nonatomic, retain) NSData *bodyData;
@property (nonatomic, readonly, copy) NSAttributedString *breadcrumbText;
@property (nonatomic, retain) NSData *contactsAvatarRecipeData;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic) long long expireState;
@property (nonatomic, retain) NSString *expressiveSendStyleID;
@property (nonatomic, retain) NSArray *fileTransferGUIDs;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) bool hasDataDetectorResults;
@property (nonatomic, readonly) bool isAlert;
@property (nonatomic, readonly) bool isAudioMessage;
@property (nonatomic, readonly) bool isDelivered;
@property (nonatomic, readonly) bool isEmote;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) bool isExpirable;
@property (nonatomic, readonly) bool isFinished;
@property (nonatomic, readonly) bool isFromExternalSource;
@property (nonatomic, readonly) bool isLocatingMessage;
@property (nonatomic, readonly) bool isPlayed;
@property (nonatomic, readonly) bool isPrepared;
@property (nonatomic, readonly) bool isRead;
@property (nonatomic, readonly) bool isSent;
@property (nonatomic, readonly) bool isTypingMessage;
@property (nonatomic, retain) NSDictionary *messageSummaryInfo;
@property (nonatomic, retain) NSData *payloadData;
@property (nonatomic, retain) NSString *plainBody;
@property (nonatomic) long long replaceID;
@property (nonatomic, retain) NSString *subject;
@property (nonatomic, retain) NSDate *timeDelivered;
@property (nonatomic, retain) NSDate *timeExpressiveSendPlayed;
@property (nonatomic, retain) NSDate *timePlayed;
@property (nonatomic, retain) NSDate *timeRead;
@property (nonatomic, retain) NSData *typingIndicatorIcon;
@property (getter=isUpdatingDataSourcePayload, nonatomic) bool updatingDataSourcePayload;
@property (nonatomic, readonly) bool wasDataDetected;
@property (nonatomic, readonly) bool wasDowngraded;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

- (void)_clearBodyData;
- (void)_generateBodyDataIfNeeded;
- (void)_generateBodyTextIfNeeded;
- (id)_localizedBackwardsCompatibleExpressiveSendText;
- (void)_regenerateBodyData;
- (void)_regenerateBodyText;
- (void)_updateFlags:(unsigned long long)arg1;
- (void)adjustIsEmptyFlag;
- (bool)backwardsCompatibleVersion;
- (bool)blockingRichLinks;
- (id)body;
- (id)bodyData;
- (id)breadcrumbText;
- (id)contactsAvatarRecipeData;
- (id)copyDictionaryRepresentation;
- (id)copyForBackwardsCompatibility;
- (id)copyWithFlags:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)errorCode;
- (long long)expireState;
- (id)expressiveSendStyleID;
- (id)fileTransferGUIDs;
- (unsigned long long)flags;
- (bool)hasDataDetectorResults;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 hint:(id)arg2;
- (id)initWithSender:(id)arg1 time:(id)arg2 body:(id)arg3 attributes:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8;
- (id)initWithSender:(id)arg1 time:(id)arg2 body:(id)arg3 attributes:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 type:(long long)arg9;
- (id)initWithSender:(id)arg1 time:(id)arg2 guid:(id)arg3 type:(long long)arg4;
- (id)initWithSenderInfo:(id)arg1 time:(id)arg2 guid:(id)arg3 messageID:(long long)arg4 account:(id)arg5 accountID:(id)arg6 service:(id)arg7 handle:(id)arg8 roomName:(id)arg9 unformattedID:(id)arg10 countryCode:(id)arg11;
- (id)initWithSenderInfo:(id)arg1 time:(id)arg2 timeRead:(id)arg3 timeDelivered:(id)arg4 timePlayed:(id)arg5 subject:(id)arg6 body:(id)arg7 bodyData:(id)arg8 attributes:(id)arg9 fileTransferGUIDs:(id)arg10 flags:(unsigned long long)arg11 guid:(id)arg12 messageID:(long long)arg13 account:(id)arg14 accountID:(id)arg15 service:(id)arg16 handle:(id)arg17 roomName:(id)arg18 unformattedID:(id)arg19 countryCode:(id)arg20 expireState:(long long)arg21 balloonBundleID:(id)arg22 payloadData:(id)arg23 expressiveSendStyleID:(id)arg24 timeExpressiveSendPlayed:(id)arg25 errorType:(unsigned int)arg26;
- (id)initWithSenderInfo:(id)arg1 time:(id)arg2 timeRead:(id)arg3 timeDelivered:(id)arg4 timePlayed:(id)arg5 subject:(id)arg6 body:(id)arg7 bodyData:(id)arg8 attributes:(id)arg9 fileTransferGUIDs:(id)arg10 flags:(unsigned long long)arg11 guid:(id)arg12 messageID:(long long)arg13 account:(id)arg14 accountID:(id)arg15 service:(id)arg16 handle:(id)arg17 roomName:(id)arg18 unformattedID:(id)arg19 countryCode:(id)arg20 expireState:(long long)arg21 balloonBundleID:(id)arg22 payloadData:(id)arg23 expressiveSendStyleID:(id)arg24 timeExpressiveSendPlayed:(id)arg25 errorType:(unsigned int)arg26 type:(long long)arg27;
- (bool)isAlert;
- (bool)isAudioMessage;
- (bool)isDelivered;
- (bool)isEmote;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isExpirable;
- (bool)isFinished;
- (bool)isFromExternalSource;
- (bool)isFromMe;
- (bool)isLastMessageCandidate;
- (bool)isLocatingMessage;
- (bool)isPlayed;
- (bool)isPrepared;
- (bool)isRead;
- (bool)isSent;
- (bool)isTypingMessage;
- (bool)isUpdatingDataSourcePayload;
- (id)messageSummaryInfo;
- (id)payloadData;
- (id)plainBody;
- (long long)replaceID;
- (id)sender;
- (void)setBackwardsCompatibleVersion:(bool)arg1;
- (void)setBlockingRichLinks:(bool)arg1;
- (void)setBody:(id)arg1;
- (void)setBodyData:(id)arg1;
- (void)setContactsAvatarRecipeData:(id)arg1;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setExpireState:(long long)arg1;
- (void)setExpressiveSendStyleID:(id)arg1;
- (void)setFileTransferGUIDs:(id)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setHasDataDetectorResults:(bool)arg1;
- (void)setMessageSummaryInfo:(id)arg1;
- (void)setPayloadData:(id)arg1;
- (void)setPlainBody:(id)arg1;
- (void)setReplaceID:(long long)arg1;
- (void)setSubject:(id)arg1;
- (void)setTimeDelivered:(id)arg1;
- (void)setTimeExpressiveSendPlayed:(id)arg1;
- (void)setTimePlayed:(id)arg1;
- (void)setTimeRead:(id)arg1;
- (void)setTypingIndicatorIcon:(id)arg1;
- (void)setUpdatingDataSourcePayload:(bool)arg1;
- (void)setWasDataDetected:(bool)arg1;
- (id)subject;
- (id)timeDelivered;
- (id)timeExpressiveSendPlayed;
- (id)timePlayed;
- (id)timeRead;
- (id)typingIndicatorIcon;
- (bool)wasDataDetected;
- (bool)wasDowngraded;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

+ (Class)contextClass;

- (id)_copy;
- (id)_copyWithFlags:(unsigned long long)arg1;
- (bool)_hasMessageChatItem;
- (bool)_isInvitation;
- (id)_newChatItems;
- (id)_newChatItemsWithFilteredChat:(bool)arg1;
- (id)_service;
- (void)_setInivtation:(bool)arg1;
- (id)descriptionForPurpose:(long long)arg1 isGroupMessage:(bool)arg2 messageDataSource:(id)arg3 attachmentDataSource:(id)arg4;
- (bool)isCancelTypingMessage;
- (bool)isExtensibleMessageWithPluginPayload:(id*)arg1;
- (bool)isIncomingTypingMessage;
- (bool)isIncomingTypingOrCancelTypingMessage;
- (bool)isSystemMessage;
- (bool)isTypingOrCancelTypingMessage;
- (id)message;

@end
