/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTCarouselController : NSObject <AVTAvatarActionsViewControllerDelegate, AVTAvatarDisplayingControllerDelegate, AVTAvatarEditorViewControllerDelegate, AVTAvatarRecordDataSourceObserver, AVTDisplayingCarouselController, AVTRecordingCarouselController> {
    <AVTAvatarDisplayingController> * _avatarDisplayingController;
    UIView * _avtViewContainer;
    AVTViewCarouselLayout * _avtViewLayout;
    AVTViewSession * _avtViewSession;
    AVTViewSessionProvider * _avtViewSessionProvider;
    AVTAvatarContainerViewController * _containerViewController;
    <AVTAvatarRecord> * _currentAvatarRecord;
    AVTAvatarRecordDataSource * _dataSource;
    double  _decelerationRate;
    AVTUIEnvironment * _environment;
    <AVTUILogger> * _logger;
    long long  _mode;
    AVTMultiAvatarController * _multiAvatarController;
    AVTSingleAvatarController * _singleAvatarController;
    bool  _singleAvatarMode;
    UIView * _view;
    <AVTDisplayingCarouselControllerDelegate> * displayingDelegate;
    <AVTPresenterDelegate> * presenterDelegate;
    <AVTRecordingCarouselControllerDelegate> * recordingDelegate;
}

@property (nonatomic) bool allowsCreate;
@property (nonatomic, retain) <AVTAvatarDisplayingController> *avatarDisplayingController;
@property (nonatomic, retain) UIView *avtViewContainer;
@property (nonatomic, retain) AVTViewCarouselLayout *avtViewLayout;
@property (nonatomic, retain) AVTViewSession *avtViewSession;
@property (nonatomic, readonly) AVTViewSessionProvider *avtViewSessionProvider;
@property (nonatomic, retain) AVTAvatarContainerViewController *containerViewController;
@property (nonatomic, retain) <AVTAvatarRecord> *currentAvatarRecord;
@property (nonatomic, readonly) AVTAvatarRecordDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double decelerationRate;
@property (readonly, copy) NSString *description;
@property (nonatomic) <AVTDisplayingCarouselControllerDelegate> *displayingDelegate;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, readonly) AVTView *focusedDisplayView;
@property (nonatomic, readonly) <AVTAvatarRecord> *focusedRecord;
@property (nonatomic, readonly) AVTRecordView *focusedRecordingView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <AVTUILogger> *logger;
@property (nonatomic, readonly) long long mode;
@property (nonatomic, retain) AVTMultiAvatarController *multiAvatarController;
@property (nonatomic) <AVTPresenterDelegate> *presenterDelegate;
@property (nonatomic) <AVTRecordingCarouselControllerDelegate> *recordingDelegate;
@property (nonatomic, retain) AVTSingleAvatarController *singleAvatarController;
@property (nonatomic) bool singleAvatarMode;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *view;

+ (id)displayingCarouselForRecordDataSource:(id)arg1;
+ (long long)indexClosestToIndex:(unsigned long long)arg1 withinSet:(id)arg2;
+ (id)recordingCarouselForRecordDataSource:(id)arg1;
+ (id)sessionProviderForMode:(long long)arg1 environment:(id)arg2;
+ (void)setupAVTView:(id)arg1;

- (void).cxx_destruct;
- (bool)allowsCreate;
- (id)avatarActionsViewController:(id)arg1 recordUpdateForDeletingRecord:(id)arg2;
- (void)avatarActionsViewControllerDidFinish:(id)arg1;
- (id)avatarDisplayingController;
- (void)avatarEditorViewController:(id)arg1 didFinishWithAvatarRecord:(id)arg2;
- (void)avatarEditorViewControllerDidCancel:(id)arg1;
- (id)avtViewContainer;
- (id)avtViewLayout;
- (id)avtViewSession;
- (id)avtViewSessionProvider;
- (void)beginAVTViewSession;
- (id)containerViewController;
- (id)currentAvatarRecord;
- (id)dataSource;
- (void)dataSource:(id)arg1 didAddRecord:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)dataSource:(id)arg1 didEditRecord:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)dataSource:(id)arg1 didRemoveRecord:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)decelerationRate;
- (void)didBeginFocus:(id)arg1;
- (void)didEndFocus:(id)arg1;
- (void)displayAvatarRecord:(id)arg1 animated:(bool)arg2;
- (void)displayAvatarRecordWithIdentifier:(id)arg1 animated:(bool)arg2;
- (void)displayingController:(id)arg1 didChangeCurrentRecord:(id)arg2;
- (void)displayingController:(id)arg1 didMoveTowardRecord:(id)arg2 withFactor:(double)arg3;
- (void)displayingControllerWantsToPresentEditorForCreation:(id)arg1;
- (id)displayingDelegate;
- (id)environment;
- (id)focusedDisplayView;
- (id)focusedRecord;
- (id)focusedRecordingView;
- (id)indexSetForEditableRecords;
- (id)initWithMode:(long long)arg1 dataSource:(id)arg2;
- (id)initWithMode:(long long)arg1 sessionProvider:(id)arg2 dataSource:(id)arg3 environment:(id)arg4;
- (void)loadView;
- (void)lockOnFocusedViewAnimated:(bool)arg1;
- (id)logger;
- (long long)mode;
- (id)multiAvatarController;
- (void)notifyDelegateDidFocusRecord:(id)arg1 avtView:(id)arg2;
- (void)notifyDelegateDidUpdateWithRecord:(id)arg1;
- (void)notifyDelegateNearnessFactorDidChange:(double)arg1 towardRecord:(id)arg2;
- (void)notifyDelegateWillEndFocusOnRecord:(id)arg1 avtView:(id)arg2;
- (void)presentActionsForAvatar:(id)arg1;
- (void)presentEditorForCreatingAvatar:(id)arg1;
- (id)presenterDelegate;
- (id)recordingDelegate;
- (void)reloadData;
- (void)reloadDataCenteringToAvatarRecord:(id)arg1;
- (void)renderForARFrame:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setAllowsCreate:(bool)arg1;
- (void)setAllowsCreate:(bool)arg1 animated:(bool)arg2;
- (void)setAvatarDisplayingController:(id)arg1;
- (void)setAvtViewContainer:(id)arg1;
- (void)setAvtViewLayout:(id)arg1;
- (void)setAvtViewSession:(id)arg1;
- (void)setContainerViewController:(id)arg1;
- (void)setCurrentAvatarRecord:(id)arg1;
- (void)setDecelerationRate:(double)arg1;
- (void)setDisplayingDelegate:(id)arg1;
- (void)setMultiAvatarController:(id)arg1;
- (void)setPresenterDelegate:(id)arg1;
- (void)setRecordingDelegate:(id)arg1;
- (void)setSingleAvatarController:(id)arg1;
- (void)setSingleAvatarMode:(bool)arg1;
- (void)setSingleAvatarMode:(bool)arg1 animated:(bool)arg2;
- (void)setView:(id)arg1;
- (void)showMultiAvatarControllerAnimated:(bool)arg1;
- (void)showSingleAvatarControllerAnimated:(bool)arg1;
- (void)significantRecordChangeInDataSource:(id)arg1;
- (id)singleAvatarController;
- (bool)singleAvatarMode;
- (id)snapshotProviderFocusedOnRecordWithIdentifier:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)unlockFromFocusedViewAnimated:(bool)arg1;
- (id)view;
- (void)willBeginFocus:(id)arg1;
- (void)willEndFocus:(id)arg1;
- (void)wrapAndPresentViewController:(id)arg1 animated:(bool)arg2;

@end
