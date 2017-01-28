/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKMasterDetailViewController : UISplitViewController <CAAnimationDelegate> {
    NSMutableArray * _controllersDelayingPresentation;
    bool  _covered;
    <GKMasterDetailViewControllerDelegate> * _masterDetailDelegate;
    GKMasterDetailNavigationController * _masterNavigationController;
    id  _presentationDelayHandler;
    UIView * _separatorBarMaskView;
    UIView * _separatorBarView;
    UIColor * _separatorLineColor;
    UIView * _separatorLineView;
    UIView * _separatorWrapperView;
    bool  _shouldCollapseToDetail;
}

@property (nonatomic, retain) NSMutableArray *controllersDelayingPresentation;
@property (getter=isCovered, nonatomic) bool covered;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <GKMasterDetailViewControllerDelegate> *masterDetailDelegate;
@property (nonatomic, retain) GKMasterDetailNavigationController *masterNavigationController;
@property (nonatomic, copy) id presentationDelayHandler;
@property (nonatomic, readonly, retain) UIViewController *rootDetailViewController;
@property (nonatomic, retain) UIView *separatorBarMaskView;
@property (nonatomic, retain) UIView *separatorBarView;
@property (nonatomic, retain) UIColor *separatorLineColor;
@property (nonatomic, retain) UIView *separatorLineView;
@property (nonatomic, retain) UIView *separatorWrapperView;
@property (nonatomic) bool shouldCollapseToDetail;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) UIViewController *topDetailViewController;
@property (nonatomic, readonly, retain) UIViewController *topMasterViewController;

+ (bool)_shouldForwardViewWillTransitionToSize;

- (void)_animateSlidingDoorTransitionFromRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 duration:(double)arg3 appearing:(bool)arg4;
- (void)_gkPushPresentedViewControllerForCompactSizeClass:(id)arg1;
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_gkRestorePopoverWithViewControllers:(id)arg1 completion:(id)arg2;
- (bool)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (id)_gkTargetViewControllerForAction:(SEL)arg1;
- (id)_gkViewControllersForRestoringPopover;
- (void)_setSeparatorBarHidden:(bool)arg1 animated:(bool)arg2;
- (void)_setupSeparatorViews;
- (id)_viewForSlidingInDetailView;
- (id)_viewForSlidingInMasterView;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (bool)automaticallyForwardAppearanceMethods;
- (double)bubbleFlowAnimateInDuration;
- (double)bubbleFlowAnimateOutDuration;
- (id)controllersDelayingPresentation;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)delayAppearingWithBubbleFlowUntil:(id)arg1;
- (void)dismissMasterOverlayViewControllerAnimated:(bool)arg1 completion:(id)arg2;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)init;
- (bool)isCovered;
- (bool)isUsingPrimaryViewOverlay;
- (id)masterDetailDelegate;
- (id)masterNavigationController;
- (void)notifyViewControllersOfNavigationController:(id)arg1 transitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)popToRootDetailViewControllerAnimated:(bool)arg1;
- (id)presentationDelayHandler;
- (void)pushMasterViewController:(id)arg1;
- (bool)readyToAppearWithBubbleFlow;
- (id)rootDetailViewController;
- (id)separatorBarMaskView;
- (id)separatorBarView;
- (id)separatorLineColor;
- (id)separatorLineView;
- (id)separatorWrapperView;
- (void)setControllersDelayingPresentation:(id)arg1;
- (void)setCovered:(bool)arg1;
- (void)setMasterDetailDelegate:(id)arg1;
- (void)setMasterNavigationController:(id)arg1;
- (void)setNavigationBarHidden:(bool)arg1;
- (void)setNavigationBarHidden:(bool)arg1 animated:(bool)arg2;
- (void)setPresentationDelayHandler:(id)arg1;
- (void)setSeparatorBarMaskView:(id)arg1;
- (void)setSeparatorBarView:(id)arg1;
- (void)setSeparatorLineColor:(id)arg1;
- (void)setSeparatorLineView:(id)arg1;
- (void)setSeparatorWrapperView:(id)arg1;
- (void)setShouldCollapseToDetail:(bool)arg1;
- (bool)shouldAutomaticallyForwardRotationMethods;
- (bool)shouldCollapseToDetail;
- (bool)shouldUnhidePrimaryViewController;
- (bool)statusShouldCoverSplitViewFor:(id)arg1;
- (id)topDetailViewController;
- (id)topMasterViewController;
- (void)updateCoveredColumnWidth;
- (void)updateViewsForCurrentAppSize;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappearAnimated:(bool)arg1 bubbleFlow:(bool)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willAnimateKeyframesForAppearingWithBubbleFlowFromRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 absoluteTransitionDuration:(double)arg3 fromViewController:(id)arg4;
- (void)willAnimateKeyframesForDisappearingWithBubbleFlowFromRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 absoluteTransitionDuration:(double)arg3 toViewController:(id)arg4;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
