/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTStateManager : NSObject <VTGestureMonitorDelegate> {
    id /* block */  _callbackWithMessageAndTimestamp;
    VTPolicy * _enablePolicy;
    VTGestureMonitor * _gestureMonitor;
    VTPhraseSpotter * _phraseSpotter;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _rtModelDownloaded;
    bool  _voiceTriggerIsEnabled;
    unsigned long long  _wakeGestureHostTime;
    VTXPCServiceServer * _xpcServer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_serviceClient;
+ (void)clearVoiceTriggerCount;
+ (id)firstChanceAudioBuffer;
+ (id)firstChanceTriggeredDate;
+ (id)firstChanceVTEventInfo;
+ (long long)getVoiceTriggerCount;
+ (bool)isLastTriggerForced;
+ (bool)isLastTriggerSecondChanceTriggered;
+ (void)notifyVoiceTrigger;
+ (void)notifyVoiceTriggeredSiriSessionCancelled;
+ (void)notifyVoiceTriggeredSiriSessionCancelled:(id)arg1;
+ (void)requestAudioCapture:(double)arg1;
+ (id)requestCurrentVoiceTriggerAssetDictionary;
+ (void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(id /* block */)arg1;
+ (void)requestForcedSecondChance;
+ (void)requestForcedTriggerEvent;
+ (void)requestPhraseSpotterBypassing:(bool)arg1 timeout:(double)arg2;
+ (void)requestVoiceTriggerEnabled:(bool)arg1 forReason:(id)arg2;

- (void).cxx_destruct;
- (void)_initializeXPCService;
- (void)_notifyStateTransitionToState:(long long)arg1 withStartTimestamp:(unsigned long long)arg2;
- (void)_powerlog:(id)arg1;
- (void)_stateTransitionDidOccur:(bool)arg1;
- (void)gestureMonitorDidReceiveSleepGesture:(id)arg1;
- (void)gestureMonitorDidReceiveWakeGesture:(id)arg1;
- (id)getModel;
- (id)getPhraseSpotter;
- (id)initWithProperty:(id)arg1 callbackWithMessage:(id /* block */)arg2;
- (id)initWithProperty:(id)arg1 callbackWithMessageAndTimestamp:(id /* block */)arg2;
- (id)initWithProperty:(id)arg1 phraseSpotter:(id)arg2 enablePolicy:(id)arg3 callbackWithMessageAndTimestamp:(id /* block */)arg4;

@end
