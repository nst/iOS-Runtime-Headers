/* Generated by RuntimeBrowser.
 */

@protocol AFUISiriSessionLocalDelegate <NSObject>

@required

- (void)siriSession:(AFUISiriSession *)arg1 didChangeDialogPhase:(AFDialogPhase *)arg2;
- (void)siriSession:(AFUISiriSession *)arg1 didChangeToState:(long long)arg2;
- (void)siriSession:(void *)arg1 didReceiveDeviceUnlockRequestAndCancelRequest:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: AFUISiriSession *, bool, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, long long, void*
- (void)siriSession:(void *)arg1 didReceiveDeviceUnlockRequestWithCompletion:(void *)arg2; // needs 2 arg types, found 7: AFUISiriSession *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, long long, void*
- (bool)siriSessionCanEnd:(AFUISiriSession *)arg1;
- (void)siriSessionDidEnd:(AFUISiriSession *)arg1;
- (void)siriSessionDidReceiveDelayedActionCancelCommand:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SAUIDelayedActionCancelCommand *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, AceObject<SAAceCommand> *, void*
- (void)siriSessionDidReceiveDelayedActionCommand:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SAUIDelayedActionCommand *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, AceObject<SAAceCommand> *, void*
- (void)siriSessionDidResetContext:(AFUISiriSession *)arg1;
- (void)siriSessionRecordingPreparationHasFinished:(AFUISiriSession *)arg1;
- (void)siriSessionWillEnd:(AFUISiriSession *)arg1;

@end
