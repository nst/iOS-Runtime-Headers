/* Generated by RuntimeBrowser.
 */

@protocol CKComposeChatControllerDelegate <NSObject, CKChatControllerDelegate>

@required

- (void)composeChatController:(CKComposeChatController *)arg1 didSelectNewConversation:(CKConversation *)arg2;
- (bool)composeChatControllerCanEditRecipients;
- (void)composeChatControllerDidCancelComposition:(CKComposeChatController *)arg1;
- (bool)composeChatControllerShouldShowBackButtonViewDuringSendAnimation:(CKComposeChatController *)arg1;

@optional

- (void)composeChatController:(void *)arg1 shouldSendComposition:(void *)arg2 inConversation:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: CKComposeChatController *, CKComposition *, CKConversation *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, bool, void*

@end
