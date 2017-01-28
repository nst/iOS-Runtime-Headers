/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUISchedulerProvider : CNSchedulerProvider {
    <CNScheduler> * _lowPriorityBackgroundProvider;
}

@property (nonatomic, retain) <CNScheduler> *lowPriorityBackgroundProvider;

- (void).cxx_destruct;
- (id)backgroundSchedulerWithQualityOfService:(unsigned long long)arg1;
- (id)initWithBackgroundScheduler:(id)arg1 mainThreadScheduler:(id)arg2 immediateScheduler:(id)arg3 serialSchedulerProvider:(id)arg4 synchronousSerialSchedulerProvider:(id)arg5;
- (id)lowPriorityBackgroundProvider;
- (void)setLowPriorityBackgroundProvider:(id)arg1;

@end