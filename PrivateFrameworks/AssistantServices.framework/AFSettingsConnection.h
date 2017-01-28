/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSettingsConnection : NSObject {
    NSXPCConnection * _connection;
    <AFSettingsDelegate> * _delegate;
    AFVoiceInfo * _selectedVoice;
    NSArray * _voices;
    NSObject<OS_dispatch_queue> * _voicesQueue;
}

@property (setter=_setDelegate:, nonatomic) <AFSettingsDelegate> *_delegate;

- (void).cxx_destruct;
- (void)_clearConnection;
- (id)_connection;
- (id)_delegate;
- (void)_fetchPeerData:(id)arg1;
- (id)_filterVoices:(id)arg1 forLanguage:(id)arg2;
- (void)_runServiceMaintenance;
- (void)_setDelegate:(id)arg1;
- (void)_setSyncVerificationNeededAndFullReportNeeded:(bool)arg1 shouldPostNotification:(bool)arg2 completion:(id)arg3;
- (void)_setVoices:(id)arg1;
- (id)_settingsService;
- (id)_settingsServiceWithErrorHandler:(id)arg1;
- (void)_syncDataWithAnchorKeys:(id)arg1 forceReset:(bool)arg2 reason:(id)arg3 completion:(id)arg4;
- (void)_tellDelegatePartialVerificationResult:(id)arg1;
- (void)_tellDelegateServerVerificationReport:(id)arg1;
- (void)_updateVoicesIncludingAssetInfo:(bool)arg1 completion:(id)arg2;
- (id)_voices;
- (id)accounts;
- (void)barrier;
- (void)createOfflineSpeechProfileWithLanguage:(id)arg1 JSONData:(id)arg2 completion:(id)arg3;
- (void)dealloc;
- (void)deleteAccountWithIdentifier:(id)arg1;
- (void)disableDESWithCompletion:(id)arg1;
- (void)fetchEventRecordsFromAnalyticsStoreAtPath:(id)arg1 completion:(id)arg2;
- (void)fetchSiriDisabledAppIDsWithCompletion:(id)arg1;
- (void)fetchSiriIntegrationEnabledForAppID:(id)arg1 completion:(id)arg2;
- (void)fetchSupportedLanguageCodes:(id)arg1;
- (void)getAvailableVoicesForLanguage:(id)arg1 includeAssetInfo:(bool)arg2 completion:(id)arg3;
- (void)getAvailableVoicesForRecognitionLanguage:(id)arg1 completion:(id)arg2;
- (void)getAvailableVoicesForRecognitionLanguage:(id)arg1 includeAssetInfo:(bool)arg2 completion:(id)arg3;
- (void)getAvailableVoicesForSynthesisLanguage:(id)arg1 completion:(id)arg2;
- (void)getOfflineDictationStatusWithCompletion:(id)arg1;
- (id)init;
- (void)killDaemon;
- (void)purgeAnalyticsStoreWithCompletion:(id)arg1;
- (void)resetAnalyticsStoreWithCompletion:(id)arg1;
- (void)runAdaptationRecipeEvaluation:(id)arg1 language:(id)arg2 completion:(id)arg3;
- (void)runLiveAdaptationRecipeEvaluationWithBaseURL:(id)arg1 completion:(id)arg2;
- (void)saveAccount:(id)arg1 setActive:(bool)arg2;
- (void)setActiveAccountIdentifier:(id)arg1;
- (void)setAssistantEnabled:(bool)arg1;
- (void)setDESLotteryWinOverrideEnabled:(bool)arg1 completion:(id)arg2;
- (void)setDESPolicyCDNOverride:(id)arg1 completion:(id)arg2;
- (void)setDESRecognitionEnabled:(bool)arg1 completion:(id)arg2;
- (void)setDESRecordingEnabled:(bool)arg1 completion:(id)arg2;
- (void)setDictationEnabled:(bool)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLanguage:(id)arg1 withCompletion:(id)arg2;
- (void)setOfflineDictationProfileOverridePath:(id)arg1 completion:(id)arg2;
- (void)setOutputVoice:(id)arg1;
- (void)setOutputVoice:(id)arg1 withCompletion:(id)arg2;
- (void)setSiriAccess:(bool)arg1 forAppID:(id)arg2;
- (void)startRemoteRequest:(id)arg1 completion:(id)arg2;
- (void)startUIRequest:(id)arg1;

@end
