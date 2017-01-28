/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAttachmentWebModel : ICAttachmentModel <WKNavigationDelegate, WKScriptMessageHandler> {
    id  _pendingFetchCompletionHandler;
    WKWebView * _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) id pendingFetchCompletionHandler;
@property (readonly) Class superclass;
@property (retain) WKWebView *webView;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;
+ (id)sharedWKProcessPool;

- (void).cxx_destruct;
- (void)didCancelPreviewGeneratorOperation;
- (void)downloadWebIcons:(id)arg1 completionHandler:(id)arg2;
- (void)fetchMetadataFromURL:(id)arg1 completionHandler:(id)arg2;
- (bool)generateAsynchronousPreviews;
- (void)generatePreviewsInOperation:(id)arg1;
- (id)genericBrickThumbnailCreator;
- (id)genericListThumbnailCreator;
- (bool)hasPreviews;
- (bool)needToGeneratePreviews;
- (id)pendingFetchCompletionHandler;
- (id)rootURLFromURL:(id)arg1;
- (void)saveWebIcons:(id)arg1;
- (void)setPendingFetchCompletionHandler:(id)arg1;
- (void)setWebView:(id)arg1;
- (bool)showThumbnailInNoteList;
- (id)standardWebIconsForURL:(id)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)webView;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;

@end
