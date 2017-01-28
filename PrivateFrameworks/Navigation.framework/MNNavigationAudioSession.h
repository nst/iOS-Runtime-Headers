/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNNavigationAudioSession : NSObject {
    unsigned long long  _appContext;
    <MNNavigationAudioSessionDelegate> * _delegate;
    NSString * _language;
    bool  _muteSpeechOverride;
    unsigned long long  _sessionType;
    bool  _speechEnabled;
}

@property (nonatomic) unsigned long long appContext;
@property (nonatomic) <MNNavigationAudioSessionDelegate> *delegate;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic) bool muteSpeechOverride;
@property (nonatomic) unsigned long long sessionType;
@property (nonatomic) bool speechEnabled;

+ (id)sessionOfType:(unsigned long long)arg1 language:(id)arg2;

- (void).cxx_destruct;
- (bool)_beepIfNecessaryWithShortPromptType:(unsigned long long)arg1;
- (bool)_headphonesAreInUse;
- (bool)_isVoiceGuidanceEnabled;
- (void)_speak:(id)arg1 fallbackPrompt:(unsigned long long)arg2 completionBlock:(id)arg3;
- (unsigned long long)appContext;
- (void)beginSession;
- (void)clearAllAnnouncements;
- (void)dealloc;
- (id)delegate;
- (void)endAnnounce;
- (void)endSession;
- (id)init;
- (id)language;
- (bool)muteSpeechOverride;
- (void)prepareToAnnounce;
- (unsigned long long)sessionType;
- (void)setAppContext:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMuteSpeechOverride:(bool)arg1;
- (void)setSessionType:(unsigned long long)arg1;
- (void)setSpeechEnabled:(bool)arg1;
- (void)speak:(id)arg1 shortPromptType:(unsigned long long)arg2;
- (void)speak:(id)arg1 shortPromptType:(unsigned long long)arg2 completionBlock:(id)arg3;
- (void)speak:(id)arg1 shortPromptType:(unsigned long long)arg2 ignorePromptStyle:(bool)arg3;
- (void)speak:(id)arg1 shortPromptType:(unsigned long long)arg2 ignorePromptStyle:(bool)arg3 completionBlock:(id)arg4;
- (void)speakInitialAnnouncement:(id)arg1;
- (bool)speechEnabled;
- (void)stop;
- (bool)vibrateForPrompt:(unsigned long long)arg1;

@end
