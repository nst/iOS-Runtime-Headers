/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSSpeechSynthesizer : NSObject <VSSpeechConnectionDelegate> {
    unsigned int  _audioQueueFlags;
    unsigned int  _audioSessionID;
    bool  _audioSessionIDIsValid;
    NSString * _clientBundleIdentifier;
    <VSSpeechSynthesizerDelegate> * _delegate;
    long long  _footprint;
    long long  _gender;
    VSKeepAlive * _inactiveKeepAlive;
    VSKeepAlive * _keepAlive;
    NSString * _language;
    float  _pitch;
    NSObject<OS_dispatch_queue> * _queue;
    float  _rate;
    VSSpeechConnection * _speechConnection;
    struct { 
        unsigned int delegateStart : 1; 
        unsigned int delegateFinish : 1; 
        unsigned int delegateFinishWithPhonemesSpoken : 1; 
        unsigned int delegatePause : 1; 
        unsigned int delegateContinue : 1; 
        unsigned int delegateWillSpeak : 1; 
        unsigned int delegateStartWithRequest : 1; 
        unsigned int delegateFinishWithRequest : 1; 
        unsigned int delegateFinishWithPhonemesSpokenWithRequest : 1; 
        unsigned int delegateSuccessWithInstrumentMetrics : 1; 
        unsigned int delegatePauseWithRequest : 1; 
        unsigned int delegateContinueWithRequest : 1; 
        unsigned int delegateWillSpeakWithRequest : 1; 
        unsigned int willUseInput : 1; 
    }  _synthesizerFlags;
    bool  _useCustomVoice;
    bool  _useSharedSession;
    NSString * _voice;
    long long  _voiceType;
    float  _volume;
}

@property (nonatomic) <VSSpeechSynthesizerDelegate> *delegate;
@property (nonatomic) float pitch;
@property (nonatomic) float rate;
@property (nonatomic, retain) NSString *voice;
@property (nonatomic) float volume;

+ (id)availableFootprintsForVoice:(id)arg1 languageCode:(id)arg2;
+ (id)availableLanguageCodes;
+ (id)availableVoices;
+ (id)availableVoicesForLanguageCode:(id)arg1;
+ (void)getAllVoiceAssets:(id)arg1;
+ (void)getAutoDownloadedVoiceAssets:(id)arg1;
+ (void)getLocalVoiceAssets:(id)arg1;
+ (void)getLocalVoiceResources:(id)arg1;
+ (void)getLogToFile:(id)arg1;
+ (void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 custom:(bool)arg4 reply:(id)arg5;
+ (void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 type:(long long)arg4 reply:(id)arg5;
+ (void)getVoiceResourceForLanguage:(id)arg1 reply:(id)arg2;
+ (bool)isSystemSpeaking;
+ (bool)playVoicePreviewForLanguageCode:(id)arg1 gender:(long long)arg2;
+ (void)setAutoDownloadedVoiceAssets:(id)arg1;
+ (void)setLogToFile:(bool)arg1;

- (void).cxx_destruct;
- (bool)_continueSpeakingRequest:(id)arg1 withError:(id*)arg2;
- (bool)_pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(bool)arg3 error:(id*)arg4;
- (void)_setDelegate:(id)arg1;
- (bool)_startSpeakingString:(id)arg1 orAttributedString:(id)arg2 toURL:(id)arg3 withLanguageCode:(id)arg4 request:(id*)arg5 error:(id*)arg6;
- (bool)_stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(bool)arg3 error:(id*)arg4;
- (void)connection:(id)arg1 speechRequest:(id)arg2 didStopAtEnd:(bool)arg3 phonemesSpoken:(id)arg4 error:(id)arg5;
- (void)connection:(id)arg1 speechRequest:(id)arg2 successWithInstrumentMetrics:(id)arg3;
- (void)connection:(id)arg1 speechRequest:(id)arg2 willSpeakMark:(long long)arg3 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)connection:(id)arg1 speechRequestDidContinue:(id)arg2;
- (void)connection:(id)arg1 speechRequestDidPause:(id)arg2;
- (void)connection:(id)arg1 speechRequestDidStart:(id)arg2;
- (bool)continueSpeakingRequest:(id)arg1 withError:(id*)arg2;
- (bool)continueSpeakingWithError:(id*)arg1;
- (void)dealloc;
- (id)delegate;
- (long long)footprint;
- (long long)gender;
- (id)init;
- (id)initForInputFeedback;
- (bool)isSpeaking;
- (id)language;
- (float)maximumRate;
- (float)minimumRate;
- (bool)pauseSpeakingAtNextBoundary:(long long)arg1 error:(id*)arg2;
- (bool)pauseSpeakingAtNextBoundary:(long long)arg1 synchronously:(bool)arg2 error:(id*)arg3;
- (bool)pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 error:(id*)arg3;
- (bool)pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(bool)arg3 error:(id*)arg4;
- (float)pitch;
- (bool)prewarmIfNeeded;
- (float)rate;
- (void)setDelegate:(id)arg1;
- (void)setFootprint:(long long)arg1;
- (void)setGender:(long long)arg1;
- (void)setLanguage:(id)arg1;
- (void)setMaintainInactivePersistentConnection:(bool)arg1;
- (void)setMaintainPersistentConnection:(bool)arg1;
- (void)setPitch:(float)arg1;
- (void)setRate:(float)arg1;
- (void)setUseCustomVoice:(bool)arg1;
- (void)setVoice:(id)arg1;
- (void)setVoiceType:(long long)arg1;
- (void)setVolume:(float)arg1;
- (id)speechString;
- (bool)startSpeakingAttributedString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3 error:(id*)arg4;
- (bool)startSpeakingString:(id)arg1 error:(id*)arg2;
- (bool)startSpeakingString:(id)arg1 request:(id*)arg2 error:(id*)arg3;
- (bool)startSpeakingString:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (bool)startSpeakingString:(id)arg1 toURL:(id)arg2 request:(id*)arg3 error:(id*)arg4;
- (bool)startSpeakingString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3 error:(id*)arg4;
- (bool)startSpeakingString:(id)arg1 withLanguageCode:(id)arg2 error:(id*)arg3;
- (bool)startSpeakingString:(id)arg1 withLanguageCode:(id)arg2 request:(id*)arg3 error:(id*)arg4;
- (bool)stopSpeakingAtNextBoundary:(long long)arg1 error:(id*)arg2;
- (bool)stopSpeakingAtNextBoundary:(long long)arg1 synchronously:(bool)arg2 error:(id*)arg3;
- (bool)stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 error:(id*)arg3;
- (bool)stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(bool)arg3 error:(id*)arg4;
- (void)useAudioQueueFlags:(unsigned int)arg1;
- (bool)useCustomVoice;
- (void)useSharedAudioSession:(bool)arg1;
- (void)useSpecificAudioSession:(unsigned int)arg1;
- (id)voice;
- (long long)voiceType;
- (float)volume;

@end
