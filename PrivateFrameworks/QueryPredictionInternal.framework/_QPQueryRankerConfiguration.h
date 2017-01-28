/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/QueryPredictionInternal.framework/QueryPredictionInternal
 */

@interface _QPQueryRankerConfiguration : NSObject {
    NSObject<OS_dispatch_queue> * queue;
}

@property (readonly) bool featureDisabled;

- (void).cxx_destruct;
- (bool)featureDisabled;
- (id)init;
- (void)registerHandlerForDatabaseChangeNotification:(id)arg1;
- (void)registerHandlerForDeleteDataNotification:(id)arg1;
- (void)registerHandlerForFeatureDisabledNotification:(id)arg1;

@end
