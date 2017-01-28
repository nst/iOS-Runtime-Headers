/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLAppMigrator : WLMigrationWebService

+ (void)_sendStoreAddToWishlistRequestForMigratableApps:(id)arg1 completion:(id)arg2;
+ (void)_sendStoreDownloadRequestForFreeMigratableApps:(id)arg1 completion:(id)arg2;
+ (id)_ssItemForiTunesStoreIdentifier:(id)arg1;
+ (id)contentType;
+ (id)dataType;
+ (void)installMigratableApps:(id)arg1 completion:(id)arg2;

- (void)_insertMatchingApps:(id)arg1;
- (void)_lookupStoreItemsMatchingExternalIDs:(id)arg1 attempt:(unsigned long long)arg2 completion:(id)arg3;
- (id)contentType;
- (void)estimateItemSizeForSummary:(id)arg1 account:(id)arg2;
- (void)importDataFromProvider:(id)arg1 forSummaries:(id)arg2 summaryStart:(id)arg3 summaryCompletion:(id)arg4;

@end
