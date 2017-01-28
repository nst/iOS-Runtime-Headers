/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDActivitySummaryBuilder : NSObject {
    HDProfile * _profile;
    bool  _shouldIncludePrivateProperties;
}

@property (nonatomic) bool shouldIncludePrivateProperties;

- (void).cxx_destruct;
- (void)activitySummariesWithPredicate:(id)arg1 handler:(id)arg2;
- (id)init;
- (id)initWithProfile:(id)arg1;
- (void)setShouldIncludePrivateProperties:(bool)arg1;
- (bool)shouldIncludePrivateProperties;

@end
