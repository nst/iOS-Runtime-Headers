/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface _MFMailComposeAttachmentLoader : NSObject {
    id  _completionBlock;
    id  _content;
    bool  _didLoadBestAlternative;
    bool  _isDraft;
    MFMailMessage * _message;
}

- (void)dealloc;
- (id)initWithMessage:(id)arg1 content:(id)arg2 isDraft:(bool)arg3 didLoadBestAlternative:(bool)arg4 completion:(id)arg5;
- (void)loadAttachments;

@end
