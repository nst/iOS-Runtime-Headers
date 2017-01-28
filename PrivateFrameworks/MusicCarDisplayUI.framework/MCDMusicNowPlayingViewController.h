/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDMusicNowPlayingViewController : UIViewController <AFContextProvider, MCDNowPlayingViewControllerDataSource, MCDNowPlayingViewControllerDelegate> {
    UIAlertController * _actionSheetAlertController;
    UIActivityIndicatorView * _activityIndicator;
    MPWeakTimer * _activityTimer;
    MPMediaQuery * _albumQuery;
    NSArray * _controlPages;
    unsigned long long  _currentPageIndex;
    bool  _isExplicitTrack;
    bool  _isLive;
    NSString * _nowPlayingAlbum;
    UIImage * _nowPlayingAlbumArt;
    NSString * _nowPlayingArtist;
    NSString * _nowPlayingTitle;
    MCDNowPlayingViewController * _nowPlayingViewController;
    bool  _observingMediaRemoteCommandChanges;
    MPAVController * _player;
    UILabel * _rightTitleLabel;
    NSString * _rightTitleText;
    <MCDCarDisplayServiceProvider> * _serviceProvider;
    NSDictionary * _supportedCommands;
    NSMutableDictionary * _transportControlImages;
    int  _viewMode;
}

@property (nonatomic, retain) NSArray *controlPages;
@property (nonatomic) unsigned long long currentPageIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *transportControlImages;
@property (nonatomic) int viewMode;

- (void).cxx_destruct;
- (void)_addItemsToLibrary;
- (void)_addSongToLibrary;
- (void)_adjustRightTitleLabelToFit;
- (void)_bufferingStateChanged:(id)arg1;
- (void)_invalidateActivityTimer;
- (bool)_itemAlreadyAddedToLibrary;
- (bool)_itemCanBeAddedToLibrary;
- (bool)_itemCanCreateRadioStation;
- (void)_itemChanged:(id)arg1;
- (void)_itemIsExplicitDidChangeNotification:(id)arg1;
- (void)_itemStoreIDDidChangeNotification:(id)arg1;
- (void)_itemTitlesDidChangeNotification:(id)arg1;
- (void)_playbackContentsChanged:(id)arg1;
- (void)_playbackStateChanged:(id)arg1;
- (void)_presentCreateStationError;
- (void)_presentNowPlayingInfo;
- (void)_rateDidChange:(id)arg1;
- (void)_registerForNotifications;
- (void)_setNextRepeatState;
- (void)_setupActivityTimer;
- (void)_startObservingRemoteCommandChanges;
- (void)_stopObservingRemoteCommandChanges;
- (bool)_trackBuffering;
- (void)_unregisterForNotifications;
- (void)_updateSupportedCommands;
- (void)_updateSupportedCommandsWithArray:(id)arg1;
- (id)albumTextForNowPlayingController:(id)arg1;
- (bool)allowContextProvider:(id)arg1;
- (id)artistTextForNowPlayingController:(id)arg1;
- (id)backgroundArtForNowPlayingController:(id)arg1;
- (id)controlPages;
- (unsigned long long)currentPageIndex;
- (void)dealloc;
- (id)getCurrentContext;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPlayer:(id)arg1 serviceProvider:(id)arg2 startPlay:(bool)arg3;
- (id)initWithQuery:(id)arg1 startingAtIndex:(unsigned long long)arg2 player:(id)arg3 serviceProvider:(id)arg4;
- (id)initWithQueryToShuffle:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3;
- (id)newPresentationNavigationController;
- (bool)nowPlayingViewController:(id)arg1 buttonShouldBeActive:(long long)arg2;
- (void)nowPlayingViewController:(id)arg1 didSendAction:(long long)arg2 state:(long long)arg3;
- (bool)nowPlayingViewController:(id)arg1 shouldDisplayButton:(long long)arg2 withImage:(out id*)arg3 existingIdentifier:(id)arg4 tinted:(out bool*)arg5;
- (bool)nowPlayingViewController:(id)arg1 shouldEnableButton:(long long)arg2;
- (void)nowPlayingViewControllerAddToLibrary:(id)arg1;
- (bool)nowPlayingViewControllerCanRepeat:(id)arg1;
- (bool)nowPlayingViewControllerCanShowAddToLibrary:(id)arg1;
- (bool)nowPlayingViewControllerCanShowMore:(id)arg1;
- (bool)nowPlayingViewControllerCanShuffle:(id)arg1;
- (bool)nowPlayingViewControllerIsFuseSubscriber:(id)arg1;
- (bool)nowPlayingViewControllerIsPlaying:(id)arg1;
- (bool)nowPlayingViewControllerIsShowingExplicitTrack:(id)arg1;
- (void)nowPlayingViewControllerMore:(id)arg1;
- (void)nowPlayingViewControllerToggleRepeat:(id)arg1;
- (void)nowPlayingViewControllerToggleShuffle:(id)arg1;
- (double)playbackDurationForNowPlayingViewController:(id)arg1;
- (double)playbackElapsedTimeForNowPlayingViewController:(id)arg1;
- (bool)playbackIsLiveStreamForNowPlayingViewController:(id)arg1;
- (id)preferredFocusedItem;
- (long long)repeatTypeForNowPlayingViewController:(id)arg1;
- (void)setControlPages:(id)arg1;
- (void)setCurrentPageIndex:(unsigned long long)arg1;
- (void)setRightTitle:(id)arg1;
- (void)setTransportControlImages:(id)arg1;
- (void)setViewMode:(int)arg1;
- (long long)shuffleTypeForNowPlayingViewController:(id)arg1;
- (id)titleForNowPlayingController:(id)arg1;
- (id)transportControlImages;
- (void)updateTrackInformation;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (int)viewMode;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
