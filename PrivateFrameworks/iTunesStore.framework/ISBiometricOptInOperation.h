/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISBiometricOptInOperation : ISOperation {
    bool  _promptUser;
    id  _resultBlock;
}

@property bool promptUser;
@property (copy) id resultBlock;

- (void).cxx_destruct;
- (id)_newSourceByStartingTimeoutTimer;
- (bool)_performOptInDialogOperationWithError:(id*)arg1;
- (bool)_performPasscodeDialogOperationWithError:(id*)arg1;
- (void)_updateTouchIDSettingsForAccount:(id)arg1;
- (bool)promptUser;
- (id)resultBlock;
- (void)run;
- (void)setPromptUser:(bool)arg1;
- (void)setResultBlock:(id)arg1;

@end