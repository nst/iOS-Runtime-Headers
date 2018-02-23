/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface NoteAttachmentPresentationOccurence : NSObject <QLPreviewItem> {
    DOMHTMLElement * _element;
    NoteAttachmentPresentation * _presentation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) DOMHTMLElement *element;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NoteAttachmentPresentation *presentation;
@property (nonatomic, readonly) NSString *previewItemTitle;
@property (nonatomic, readonly) NSURL *previewItemURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)element;
- (id)init;
- (id)initWithPresentation:(id)arg1 element:(id)arg2;
- (id)presentation;
- (id)previewItemURL;
- (bool)showsUpInRange:(id)arg1;

@end
