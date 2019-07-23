/* Generated by RuntimeBrowser.
 */

@protocol FCPrivateDataContextInternal <NSObject>

@required

- (<FCAppActivityMonitor> *)appActivityMonitor;
- (FCCKRecordZone *)channelMembershipsRecordZone;
- (FCCKRecordZone *)issueReadingHistoryRecordZone;
- (void)prepareRecordZonesForUseWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (FCCKPrivateDatabase *)privateDatabase;
- (FCCKRecordZone *)readingHistoryRecordZone;
- (FCCKRecordZone *)readingListRecordZone;
- (FCCKRecordZone *)recordZoneWithName:(NSString *)arg1;
- (FCCKRecordZone *)sensitiveSubscriptionsRecordZone;
- (FCCKRecordZone *)subscriptionsRecordZone;
- (FCCKRecordZone *)userInfoRecordZone;

@end
