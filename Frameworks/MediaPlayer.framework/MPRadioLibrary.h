/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRadioLibrary : NSObject {
    MPRadioController * _radioController;
}

@property (nonatomic, readonly) bool isEnabled;
@property (nonatomic, readonly) unsigned long long stationCount;
@property (nonatomic, readonly) NSArray *stations;

+ (id)defaultRadioLibrary;

- (void).cxx_destruct;
- (void)_radioAvailabilityDidChangeNotification:(id)arg1;
- (id)_radioModel;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (void)_radioRecentStationsDidChangeNotification:(id)arg1;
- (void)addStationBasedOnTrackIDs:(id)arg1 completion:(id)arg2;
- (void)dealloc;
- (void)getRecentStationGroupsWithCompletionHandler:(id)arg1;
- (id)init;
- (bool)isEnabled;
- (unsigned long long)stationCount;
- (id)stationWithIdentifier:(long long)arg1;
- (id)stations;

@end
