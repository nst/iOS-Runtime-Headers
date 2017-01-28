/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFRFC822AttachmentDataProvider : NSObject <MFAttachmentDataProviderProtocol> {
    MFMailMessage * _message;
    NSData * _messageData;
    MFMimePart * _parentPart;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (void)fetchDataForAttachment:(id)arg1 withDataConsumer:(id)arg2 completion:(id)arg3;
- (id)fetchLocalDataForAttachment:(id)arg1;
- (id)initWithMessageData:(id)arg1 parentPart:(id)arg2;
- (id)messageForAttachment:(id)arg1;
- (id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2;

@end
