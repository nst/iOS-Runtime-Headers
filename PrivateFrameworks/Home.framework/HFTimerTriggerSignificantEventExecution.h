/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFTimerTriggerSignificantEventExecution : NSObject <HFTimerTriggerExecutionTime, HFTimerTriggerExecutionTime_Private> {
    NSString * _significantEvent;
    NSDateComponents * _significantEventOffset;
    HFTimerTriggerBuilder * _timerTriggerBuilder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *significantEvent;
@property (nonatomic, copy) NSDateComponents *significantEventOffset;
@property (readonly) Class superclass;
@property (nonatomic) HFTimerTriggerBuilder *timerTriggerBuilder;

- (void).cxx_destruct;
- (id)commitCreateTimerTriggerBuilder;
- (id)commitUpdateExecutionTime;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1;
- (id)performValidation;
- (void)setSignificantEvent:(id)arg1;
- (void)setSignificantEventOffset:(id)arg1;
- (void)setTimerTriggerBuilder:(id)arg1;
- (id)significantEvent;
- (id)significantEventOffset;
- (id)timerTriggerBuilder;

@end
