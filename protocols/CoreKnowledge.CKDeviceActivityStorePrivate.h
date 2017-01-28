/* Generated by RuntimeBrowser.
 */

@protocol CoreKnowledge.CKDeviceActivityStorePrivate

@required

- (NSDictionary *)activities;
- (_TtC13CoreKnowledge16CKKnowledgeStore *)backingStore;
- (bool)deleteActivityWithIdentifier:(NSString *)arg1 error:(id*)arg2;
- (NSDictionary *)recordedActivities;
- (bool)setFirstSeen:(NSDate *)arg1 forActivityId:(NSString *)arg2 error:(id*)arg3;
- (bool)setFrequency:(long long)arg1 forActivityId:(NSString *)arg2 error:(id*)arg3;
- (bool)setLastDuration:(double)arg1 forActivityId:(NSString *)arg2 error:(id*)arg3;
- (bool)setLastSeen:(NSDate *)arg1 forActivityId:(NSString *)arg2 error:(id*)arg3;
- (bool)setTotalDuration:(double)arg1 forActivityId:(NSString *)arg2 error:(id*)arg3;

@end
