/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUVideoEditViewController : PUEditViewController <ISChangeObserver, ISWrappedAVPlayerDelegate, PUEditPluginSessionDelegate, PUOneUpAssetTransitionViewController, PUPhotoEditToolbarDelegate, PUVideoEditScrubberControllerDelegate, PUVideoPlayerViewDelegate, PUViewControllerSpecChangeObserver, PUViewModelChangeObserver, PXPhotoLibraryUIChangeObserver, UIPopoverPresentationControllerDelegate> {
    AVAsset * __avAsset;
    ISWrappedAVPlayer * __avPlayer;
    AVPlayerItem * __avPlayerItem;
    bool  __interactivelyScrubbing;
    bool  __isAwaitingSlomoUpdate;
    bool  __isAwaitingVideoPlayerUpdate;
    bool  __isSeeking;
    struct CGSize { 
        double width; 
        double height; 
    }  __layoutReferenceSize;
    unsigned long long  __loadingState;
    bool  __playerIsPlaying;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  __startingTime;
    bool  __thumbHidden;
    <PUEditableAsset> * __videoAsset;
    PHResourceDownloadRequest * __videoDownloadRequest;
    float  __videoExportProgress;
    PUVideoEditMaker * __videoExporter;
    PUMediaDestination * __videoMediaDestination;
    PUEditableMediaProvider * __videoMediaProvider;
    bool  _hasPendingTime;
    unsigned long long  _inUseScrubberHandle;
    UIButton * _mainActionButton;
    unsigned long long  _mainButtonAction;
    PUPhotoEditToolbar * _mainToolbar;
    NSArray * _mainToolbarConstraints;
    struct { 
        bool buttons; 
        bool thumbVisibility; 
    }  _needsUpdateFlags;
    int  _outstandingPlaceholderImageRequest;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _pendingTime;
    UIButton * _playButton;
    id  _playerObserver;
    UIButton * _pluginButton;
    PUVideoEditPluginDataSource * _pluginDataSource;
    PUVideoEditPluginSession * _pluginSession;
    <PUVideoEditViewControllerPresentationDelegate> * _presentationDelegate;
    UIAlertController * _revertToOriginalActionSheet;
    PUProgressIndicatorView * _saveOperationProgressIndicator;
    NSArray * _saveOperationProgressIndicatorConstraints;
    NSArray * _scrubberConstraints;
    PUVideoEditScrubberController * _scrubberController;
    PUVideoEditScrubberImageSource * _scrubberImageSource;
    UIButton * _secondaryActionButton;
    <PUVideoEditViewControllerSessionDelegate> * _sessionDelegate;
    UIView * _toolbarWrapper;
    NSArray * _toolbarWrapperConstraints;
    UIAlertController * _trimTypeActionSheet;
    PUProgressIndicatorView * _videoDownloadProgressIndicator;
    NSArray * _videoDownloadProgressIndicatorConstraints;
    PUVideoEditModel * _videoEditModel;
    PUVideoPlayerView * _videoEditPlayerView;
    NSArray * _videoEditPlayerViewConstraints;
    PUVideoEditViewControllerSpec * _videoEditSpec;
}

@property (setter=_setAVAsset:, nonatomic, retain) AVAsset *_avAsset;
@property (setter=_setAVPlayer:, nonatomic, retain) ISWrappedAVPlayer *_avPlayer;
@property (setter=_setAVPlayerItem:, nonatomic, retain) AVPlayerItem *_avPlayerItem;
@property (setter=_setInteractivelyScrubbing:, nonatomic) bool _interactivelyScrubbing;
@property (setter=_setIsAwaitingSlomoUpdate:, nonatomic) bool _isAwaitingSlomoUpdate;
@property (setter=_setAwaitingVideoPlayerUpdate:, nonatomic) bool _isAwaitingVideoPlayerUpdate;
@property (setter=_setSeeking:, nonatomic) bool _isSeeking;
@property (setter=_setLayoutReferenceSize:, nonatomic) struct CGSize { double x1; double x2; } _layoutReferenceSize;
@property (setter=_setLoadingState:, nonatomic) unsigned long long _loadingState;
@property (setter=_setPlayerIsPlaying:, nonatomic) bool _playerIsPlaying;
@property (setter=_setStartingTime:, nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } _startingTime;
@property (setter=_setThumbHidden:, nonatomic) bool _thumbHidden;
@property (nonatomic, readonly) <PUEditableAsset> *_videoAsset;
@property (setter=_setVideoDownloadRequest:, nonatomic, retain) PHResourceDownloadRequest *_videoDownloadRequest;
@property (setter=_setVideoExportProgress:, nonatomic) float _videoExportProgress;
@property (setter=_setVideoExporter:, nonatomic, retain) PUVideoEditMaker *_videoExporter;
@property (nonatomic, readonly) PUMediaDestination *_videoMediaDestination;
@property (nonatomic, readonly) PUEditableMediaProvider *_videoMediaProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PUVideoEditViewControllerPresentationDelegate> *presentationDelegate;
@property (nonatomic) <PUVideoEditViewControllerSessionDelegate> *sessionDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_avAsset;
- (id)_avPlayer;
- (id)_avPlayerItem;
- (void)_createNewPlayerItem;
- (void)_createPluginSession;
- (void)_didFinishDownloadingVideoWithSuccess:(bool)arg1 canceled:(bool)arg2 error:(id)arg3;
- (void)_didFinishSavingWithSuccess:(bool)arg1 duplicatedAsset:(id)arg2;
- (void)_didLoadContentEditingInput:(id)arg1;
- (void)_dismissWithChanges:(bool)arg1 duplicatedAsset:(id)arg2;
- (void)_downloadVideo;
- (void)_handleDidFinishSeekToPendingTime:(bool)arg1;
- (void)_handleMainActionButton:(id)arg1;
- (void)_handlePlayButton:(id)arg1;
- (void)_handlePluginButton:(id)arg1;
- (void)_handleRevertButton:(id)arg1;
- (void)_handleSaveButton:(id)arg1;
- (void)_handleSecondaryActionButton:(id)arg1;
- (bool)_interactivelyScrubbing;
- (void)_invalidateButtons;
- (void)_invalidateThumbVisibility;
- (bool)_isAwaitingSlomoUpdate;
- (bool)_isAwaitingVideoPlayerUpdate;
- (bool)_isSeeking;
- (struct CGSize { double x1; double x2; })_layoutReferenceSize;
- (void)_loadAVAsset;
- (void)_loadAVAssetValues;
- (void)_loadFallbackAdjustmentsIfNeeded;
- (void)_loadInitialVideoBuilderWithAdjustments:(id)arg1;
- (void)_loadVideo;
- (unsigned long long)_loadingState;
- (bool)_needsUpdate;
- (void)_pausePlayer;
- (void)_playPlayer;
- (bool)_playerIsAtEnd;
- (bool)_playerIsPlaying;
- (id)_preferredStatusBarHideAnimationParameters;
- (void)_presentAlertForVideoLoadFailure;
- (void)_presentErrorAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)_presentErrorAlertWithTitle:(id)arg1 message:(id)arg2 additionalAction:(id)arg3;
- (void)_recordAggdStatsForSave;
- (void)_refetchPlaceholderImage;
- (void)_revertToOriginal;
- (void)_saveEditsWithInPlaceTrim:(bool)arg1;
- (void)_seekPlayerToBeginning;
- (void)_seekToTime:(double)arg1;
- (void)_setAVAsset:(id)arg1;
- (void)_setAVPlayer:(id)arg1;
- (void)_setAVPlayerItem:(id)arg1;
- (void)_setAwaitingVideoPlayerUpdate:(bool)arg1;
- (void)_setInteractivelyScrubbing:(bool)arg1;
- (void)_setIsAwaitingSlomoUpdate:(bool)arg1;
- (void)_setLayoutReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setLoadingState:(unsigned long long)arg1;
- (void)_setNeedsUpdate;
- (void)_setPlayerIsPlaying:(bool)arg1;
- (void)_setSeeking:(bool)arg1;
- (void)_setStartingTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setThumbHidden:(bool)arg1;
- (void)_setVideoDownloadRequest:(id)arg1;
- (void)_setVideoExportProgress:(float)arg1;
- (void)_setVideoExporter:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_startingTime;
- (bool)_thumbHidden;
- (void)_updateButtonsIfNeeded;
- (void)_updateDownloadProgressIndicator;
- (void)_updateEnabledStateForEditControls;
- (void)_updateFromPendingTime;
- (void)_updateIfNeeded;
- (void)_updatePlayerItemEndFromModel;
- (void)_updateSaveProgressIndicator;
- (void)_updateScrubber;
- (void)_updateScrubberTime;
- (void)_updateSlomoEditorFromModelTimes;
- (void)_updateSpec;
- (void)_updateSubviewOrdering;
- (void)_updateThumbVisibilityIfNeeded;
- (void)_updateToolbar;
- (void)_updateVideoEditPlayerView;
- (id)_videoAsset;
- (id)_videoDownloadRequest;
- (double)_videoDuration;
- (float)_videoExportProgress;
- (id)_videoExporter;
- (id)_videoMediaDestination;
- (id)_videoMediaProvider;
- (void)avPlayer:(id)arg1 itemDidPlayToEnd:(id)arg2;
- (void)avPlayerDidDeallocate;
- (void)dealloc;
- (void)dismissAccessibilityHUDForPhotoEditToolbar:(id)arg1;
- (void)editPluginSession:(id)arg1 didEndWithCompletionType:(unsigned long long)arg2;
- (void)editPluginSessionAvailabilityDidChange:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithVideoAsset:(id)arg1 mediaProvider:(id)arg2 mediaDestination:(id)arg3;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)oneUpAssetTransition:(id)arg1 animateTransitionWithContext:(id)arg2 duration:(double)arg3 completion:(id /* block */)arg4;
- (void)oneUpAssetTransition:(id)arg1 requestTransitionContextWithCompletion:(id /* block */)arg2;
- (void)oneUpAssetTransitionDidEnd:(id)arg1;
- (void)oneUpAssetTransitionWillBegin:(id)arg1;
- (void)photoEditToolbar:(id)arg1 showAccessibilityHUDForItem:(id)arg2;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (bool)prefersStatusBarHidden;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (id)presentationDelegate;
- (bool)pu_wantsNavigationBarVisible;
- (bool)pu_wantsTabBarVisible;
- (bool)pu_wantsToolbarVisible;
- (void)scrubberController:(id)arg1 didBeginScrubbingWithHandle:(unsigned long long)arg2;
- (void)scrubberController:(id)arg1 didEndScrubbingWithHandle:(unsigned long long)arg2;
- (void)scrubberController:(id)arg1 editingEndValueDidChange:(double)arg2;
- (void)scrubberController:(id)arg1 editingStartValueDidChange:(double)arg2;
- (void)scrubberController:(id)arg1 slomoRegionsDidChangeWithHandle:(unsigned long long)arg2;
- (void)scrubberController:(id)arg1 valueDidChange:(double)arg2;
- (void)scrubberControllerDidBeginEditingSlomoRegions:(id)arg1;
- (void)scrubberControllerDidEndEditingSlomoRegions:(id)arg1;
- (id)sessionDelegate;
- (void)setPlaceholderImage:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)setSessionDelegate:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateViewConstraints;
- (void)videoPlayerView:(id)arg1 isReadyForDisplayDidChange:(bool)arg2;
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
