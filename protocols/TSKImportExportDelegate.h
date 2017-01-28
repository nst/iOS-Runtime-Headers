/* Generated by RuntimeBrowser.
 */

@protocol TSKImportExportDelegate <NSObject>

@required

- (void)addWarning:(TSKWarning *)arg1;
- (void)removeWarning:(TSKWarning *)arg1;
- (NSArray *)warnings;

@optional

- (void)addIncompatibleMediaContainer:(id <TSDCompatibilityAwareMediaContainer>)arg1 incompatibleData:(TSPData *)arg2 compatibilityLevel:(long long)arg3;
- (NSDictionary *)incompatibleMediaContainersWithDataUnsupportedOnAllDevices;
- (NSDictionary *)incompatibleMediaContainersWithDataUnsupportedOnThisDevice;
- (bool)isBrowsingVersions;
- (void)replaceIncompatibleMediaContainer:(id <TSDCompatibilityAwareMediaContainer>)arg1 withNewMediaContainer:(id <TSDCompatibilityAwareMediaContainer>)arg2;
- (void)showDownloadPermissionAlertIfNeededForDownloadingAssetsWithEstimatedDownloadSize:(void *)arg1 isPrecise:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: long long, bool, id, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id, bool, void*

@end
