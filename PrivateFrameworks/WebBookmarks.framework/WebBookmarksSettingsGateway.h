/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WebBookmarksSettingsGateway : NSObject {
    WebBookmarksXPCConnection * _connection;
}

- (void).cxx_destruct;
- (void)clearAllSafariHistory;
- (void)deleteAllSafariSecurityOrigins;
- (void)deleteSafariPersistentURLCacheStorage;
- (void)deleteSafariWebsiteDataRecord:(id)arg1;
- (void)getCurrentlySelectedSearchEngineWithCompletion:(id)arg1;
- (void)getSafariDataUsageByteCountWithCompletionHandler:(id)arg1;
- (void)getSafariWebDataUsageWithCompletion:(id)arg1;
- (id)init;
- (void)scheduleBookmarksDatabaseMaintenance;

@end
