/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKFullScreenBalloonViewControllerPhone : CKFullScreenBalloonViewController <CKActionSheetMenuViewDelegate, CKBalloonViewDelegate, CKStickerDetailViewControllerDelegate> {
    bool  _animationsDisabledForTesting;
    UIView * _balloonView;
    double  _balloonYOffsetFromTranscript;
    NSArray * _interfaceActions;
    CKActionSheetMenuView * _menuView;
    bool  _shouldLayoutViews;
    CKGroupAcknowledgmentVotingViewController * _votingViewController;
}

@property (nonatomic) bool animationsDisabledForTesting;
@property (nonatomic, retain) UIView *balloonView;
@property (nonatomic) double balloonYOffsetFromTranscript;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *interfaceActions;
@property (nonatomic, retain) CKActionSheetMenuView *menuView;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKGroupAcknowledgmentVotingViewController *votingViewController;

- (void).cxx_destruct;
- (bool)_shouldShowVotingView;
- (void)_stickerDetailViewControllerCloseButtonPressed:(id)arg1;
- (bool)animationsDisabledForTesting;
- (void)balloonEditMenuViewWasDismissed:(id)arg1;
- (id)balloonView;
- (void)balloonViewDoubleTapped:(id)arg1;
- (void)balloonViewLongTouched:(id)arg1;
- (void)balloonViewTapped:(id)arg1;
- (double)balloonYOffsetFromTranscript;
- (void)dealloc;
- (void)disableAnimationsForTesting;
- (void)dismissTapGestureRecognized:(id)arg1;
- (id)initWithChatItem:(id)arg1 title:(id)arg2 interfaceActions:(id)arg3 gradientReferenceView:(id)arg4 isGroupConversation:(bool)arg5 showActionMenu:(bool)arg6 pluginBalloonSnapshot:(id)arg7 delegate:(id)arg8;
- (void)interactionStartedFromPreviewItemControllerInBalloonView:(id)arg1;
- (void)interactionStoppedFromPreviewItemControllerInBalloonView:(id)arg1;
- (id)interfaceActions;
- (id)menuView;
- (void)performClosingAnimationsWithSendAnimation:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)performInitialAnimations;
- (void)presentStickerDetailControllerWithStickers:(id)arg1;
- (void)setAnimationsDisabledForTesting:(bool)arg1;
- (void)setBalloonView:(id)arg1;
- (void)setBalloonYOffsetFromTranscript:(double)arg1;
- (void)setInterfaceActions:(id)arg1;
- (void)setMenuView:(id)arg1;
- (void)setVotingViewController:(id)arg1;
- (void)stickerDetailViewController:(id)arg1 deletedStickerWithTransferGUID:(id)arg2;
- (void)stickerDetailViewController:(id)arg1 selectedStickerPackWithAdamID:(id)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (id)votingViewController;

@end
