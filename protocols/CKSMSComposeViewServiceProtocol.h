/* Generated by RuntimeBrowser.
 */

@protocol CKSMSComposeViewServiceProtocol <NSObject>

@required

- (void)disableCameraAttachments;
- (void)forceCancelComposition;
- (void)forceMMS;
- (void)insertAttachmentWithURL:(NSURL *)arg1 andDescription:(NSString *)arg2;
- (void)insertData:(NSData *)arg1 MIMEType:(NSString *)arg2 exportedFilename:(NSString *)arg3;
- (void)insertFilename:(NSString *)arg1 MIMEType:(NSString *)arg2 exportedFilename:(NSString *)arg3 options:(NSDictionary *)arg4;
- (void)insertRemoteItemForSending:(CKRemoteItemForSending *)arg1;
- (void)setCanEditRecipients:(bool)arg1;
- (void)setGameCenterModeWithPickerBlock:(void *)arg1; // needs 1 arg types, found 5: id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, void*
- (void)setGameCenterPickedHandles:(NSArray *)arg1 playerNames:(NSArray *)arg2;
- (void)setPendingAddresses:(NSArray *)arg1;
- (void)setText:(NSString *)arg1 subject:(NSString *)arg2 addresses:(NSArray *)arg3;
- (void)setTextEntryContentsVisible:(bool)arg1;
- (void)setUICustomizationData:(NSData *)arg1;

@end
