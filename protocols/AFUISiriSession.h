/* Generated by RuntimeBrowser.
 */

@protocol AFUISiriSession <NSObject>

@required

- (void)cancelSpeechRequest;
- (void)clearContext;
- (void)end;
- (void)forceAudioSessionActive;
- (void)forceAudioSessionInactive;
- (void)performAceCommand:(AceObject<SAAceCommand> *)arg1;
- (void)performAceCommand:(void *)arg1 conflictHandler:(void *)arg2; // needs 2 arg types, found 6: AceObject<SAAceCommand> *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, void*
- (void)preheat;
- (void)recordRequestMetricEvent:(NSString *)arg1 withTimestamp:(double)arg2;
- (void)recordUIMetrics:(AFMetrics *)arg1;
- (void)requestDidPresentViewForErrorCommand:(SABaseClientBoundCommand *)arg1;
- (void)requestDidPresentViewForUICommand:(SABaseClientBoundCommand *)arg1;
- (void)resetContextTypes:(long long)arg1;
- (void)resultDidChangeForAceCommand:(AceObject<SAAceCommand> *)arg1;
- (void)resultDidChangeForAceCommand:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: AceObject<SAAceCommand> *, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, AceObject<SAAceCommand> *, void*
- (void)rollbackClearContext;
- (void)sendReplyCommand:(AceObject<SAAceCommand> *)arg1;
- (void)setAlertContext;
- (void)setApplicationContext;
- (void)setIsStark:(bool)arg1;
- (void)setLockState:(unsigned long long)arg1;
- (void)startCorrectedRequestWithText:(NSString *)arg1 correctionIdentifier:(id)arg2 userSelectionResults:(AFUserUtteranceSelectionResults *)arg3;
- (void)startRequestWithOptions:(AFUIRequestOptions *)arg1;
- (void)stopRecordingSpeech;
- (void)stopRequestWithOptions:(AFUIRequestOptions *)arg1;
- (void)telephonyRequestCompleted;
- (void)updateRequestOptions:(AFUIRequestOptions *)arg1;

@end
