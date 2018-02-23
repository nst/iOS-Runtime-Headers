/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPMapsPaths : NSObject {
    NSString * _bookmarksSettingsPath;
    NSString * _cacheDirectory;
    NSString * _directionsCachePath;
    NSString * _directionsSettingsPath;
    NSString * _failedDirectionsSettingsPath;
    NSString * _failedGeoDirectionsSettingsPath;
    NSString * _failedGeoSearchesSettingsPath;
    NSString * _failedSearchesSettingsPath;
    NSString * _favoritesSyncedMarkerFile;
    NSString * _fuzzyLocationStoragePath;
    NSString * _geoBookmarksSettingsPath;
    NSString * _geoHistorySettingsPath;
    NSString * _historySettingsPath;
    NSString * _historySyncedMarkerFile;
    id /* block */  _invalidationHandler;
    NSURL * _libraryURL;
    NSString * _mapsDirectory;
    NSString * _nanoDirectory;
    NSString * _nanoHistorySettingsPath;
    NSString * _pinsSettingsPath;
    NSString * _reportAProblemDirectionsRecordingsPath;
    NSString * _reportAProblemNotificationsPath;
    NSString * _reportAProblemSearchRecordingsPath;
    NSString * _transitAppRankerPath;
}

@property (nonatomic, readonly) NSString *bookmarksSettingsPath;
@property (nonatomic, readonly) NSString *cacheDirectory;
@property (nonatomic, readonly) NSString *directionsCachePath;
@property (nonatomic, readonly) NSString *directionsSettingsPath;
@property (nonatomic, readonly) NSString *failedDirectionsSettingsPath;
@property (nonatomic, readonly) NSString *failedGeoDirectionsSettingsPath;
@property (nonatomic, readonly) NSString *failedGeoSearchesSettingsPath;
@property (nonatomic, readonly) NSString *failedSearchesSettingsPath;
@property (nonatomic, readonly) NSString *favoritesSyncedMarkerFile;
@property (nonatomic, readonly) NSString *fuzzyLocationStoragePath;
@property (nonatomic, readonly) NSString *geoBookmarksSettingsPath;
@property (nonatomic, readonly) NSString *geoHistorySettingsPath;
@property (nonatomic, readonly) NSString *historySettingsPath;
@property (nonatomic, readonly) NSString *historySyncedMarkerFile;
@property (nonatomic, readonly) NSString *homeDirectory;
@property (nonatomic, readonly) NSString *mapsDirectory;
@property (nonatomic, readonly) NSString *nanoDirectory;
@property (nonatomic, readonly) NSString *nanoHistorySettingsPath;
@property (nonatomic, readonly) NSString *pinsSettingsPath;
@property (nonatomic, readonly) NSString *reportAProblemDirectionsRecordingsPath;
@property (nonatomic, readonly) NSString *reportAProblemNotificationsPath;
@property (nonatomic, readonly) NSString *reportAProblemSearchRecordingsPath;
@property (nonatomic, readonly) NSString *transitAppRankerPath;

+ (id)bookmarksSettingsPath;
+ (id)cacheDirectory;
+ (id)currentMapsApplicationContainerURL;
+ (id)directionsCachePath;
+ (id)directionsSettingsPath;
+ (id)failedDirectionsSettingsPath;
+ (id)failedGeoDirectionsSettingsPath;
+ (id)failedGeoSearchesSettingsPath;
+ (id)failedSearchesSettingsPath;
+ (id)favoritesSyncedMarkerFile;
+ (id)geoBookmarksSettingsPath;
+ (id)geoHistorySettingsPath;
+ (id)historySettingsPath;
+ (id)historySyncedMarkerFile;
+ (id)mapsApplicationContainerPaths;
+ (id)mapsApplicationContainerPathsWithInvalidationHandler:(id /* block */)arg1;
+ (id)mapsDirectory;
+ (id)nanoDirectory;
+ (id)nanoHistorySettingsPath;
+ (id)pathsAtLocation:(long long)arg1;
+ (id)pinsSettingsPath;
+ (id)reportAProblemDirectionsRecordingsPath;
+ (id)reportAProblemNotificationsPath;
+ (id)reportAProblemSearchRecordingsPath;
+ (id)transitAppRankerPath;

- (void).cxx_destruct;
- (bool)_deleteSyncedFileAtPath:(id)arg1;
- (void)_invalidate;
- (bool)_shouldSyncMergeAfterCheckingOrCreatingMarkerFileAtPath:(id)arg1;
- (id)bookmarksSettingsPath;
- (id)cacheDirectory;
- (bool)deleteFavoritesSyncedMarkerFile;
- (bool)deleteHistorySyncedMarkerFile;
- (id)directionsCachePath;
- (id)directionsSettingsPath;
- (id)failedDirectionsSettingsPath;
- (id)failedGeoDirectionsSettingsPath;
- (id)failedGeoSearchesSettingsPath;
- (id)failedSearchesSettingsPath;
- (id)favoritesSyncedMarkerFile;
- (id)fuzzyLocationStoragePath;
- (id)geoBookmarksSettingsPath;
- (id)geoHistorySettingsPath;
- (id)historySettingsPath;
- (id)historySyncedMarkerFile;
- (id)homeDirectory;
- (id)initWithLibraryDirectoryURL:(id)arg1 invalidationHandler:(id /* block */)arg2;
- (id)mapsDirectory;
- (id)nanoDirectory;
- (id)nanoHistorySettingsPath;
- (id)pinsSettingsPath;
- (id)reportAProblemDirectionsRecordingsPath;
- (id)reportAProblemNotificationsPath;
- (id)reportAProblemSearchRecordingsPath;
- (bool)shouldSyncMergeFavoritesAfterCheckingOrCreatingMarkerFile;
- (bool)shouldSyncMergeHistoryAfterCheckingOrCreatingMarkerFile;
- (id)transitAppRankerPath;

@end
