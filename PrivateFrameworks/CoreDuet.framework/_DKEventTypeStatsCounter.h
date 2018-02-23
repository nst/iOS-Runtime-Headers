/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKEventTypeStatsCounter : NSObject <_DKEventStatsCounterInternalProperty> {
    _DKEventStatsCounterInternal * _internal;
}

@property (retain) _DKEventStatsCounterInternal *internal;

+ (id)counterInCollection:(id)arg1 withEventName:(id)arg2 eventType:(id)arg3 eventTypePossibleValues:(id)arg4;

- (void).cxx_destruct;
- (unsigned long long)countWithTypeValue:(id)arg1;
- (id)eventName;
- (id)eventType;
- (void)incrementCountByNumber:(unsigned long long)arg1 typeValue:(id)arg2;
- (void)incrementCountWithTypeValue:(id)arg1;
- (id)internal;
- (void)setInternal:(id)arg1;
- (id)typeValues;

@end
