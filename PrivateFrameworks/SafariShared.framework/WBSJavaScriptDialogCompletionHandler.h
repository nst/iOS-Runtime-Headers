/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSJavaScriptDialogCompletionHandler : NSObject {
    id  _alertCompletionHandler;
    id  _confirmCompletionHandler;
    long long  _dialogMode;
    id  _promptCompletionHandler;
}

@property (nonatomic, copy) id alertCompletionHandler;
@property (nonatomic, copy) id confirmCompletionHandler;
@property (nonatomic) long long dialogMode;
@property (nonatomic, copy) id promptCompletionHandler;

- (void).cxx_destruct;
- (id)alertCompletionHandler;
- (void)cancel;
- (id)confirmCompletionHandler;
- (long long)dialogMode;
- (id)initWithAlertCompletionHandler:(id)arg1;
- (id)initWithConfirmCompletionHandler:(id)arg1;
- (id)initWithPromptCompletionHandler:(id)arg1;
- (id)promptCompletionHandler;
- (void)setAlertCompletionHandler:(id)arg1;
- (void)setConfirmCompletionHandler:(id)arg1;
- (void)setDialogMode:(long long)arg1;
- (void)setPromptCompletionHandler:(id)arg1;

@end
