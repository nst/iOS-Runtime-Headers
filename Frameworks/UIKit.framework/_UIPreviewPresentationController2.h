/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPreviewPresentationController2 : UIPreviewPresentationController <_UIPlatterMenuDynamicsControllerDelegate, _UIPreviewActionSheetViewDelegate> {
    UIImageView * _actionSheetAvailableImageView;
    UIView * _actionSheetContainerView;
    UIScrollView * _containerScrollView;
    NSLayoutConstraint * _containerScrollViewXConstraint;
    _UIPreviewPresentationPlatterView * _contentPlatterView;
    <_UIPreviewInteractionHighlighting> * _currentHighlighter;
    unsigned long long  _currentPresentationPhase;
    <UIViewControllerPreviewing_Internal> * _currentPreviewingContext;
    bool  _didSendBeginEvent;
    bool  _hasAskedForCommitInternally;
    bool  _hasAskedForDismissalInternally;
    bool  _isAnimatingActionSheet;
    UIPreviewAction * _leadingPreviewAction;
    _UIPreviewQuickActionView * _leadingQuickActionView;
    NSLayoutConstraint * _leadingQuickActionViewEdgeConstraint;
    bool  _leadingQuickActionViewSelected;
    UIGestureRecognizer * _modalPreviewActionsPanningGestureRecognizer;
    UIGestureRecognizer * _panningGestureRecognizer;
    bool  _panningGestureRecognizerInProgress;
    _UIPlatterMenuDynamicsController * _platterMenuController;
    bool  _preDismissAnimationsInflight;
    _UIPreviewPresentationContainerView * _presentationContainerView;
    NSArray * _previewActionItems;
    _UIPreviewActionSheetView * _previewActionSheet;
    _UIVelocityIntegrator * _revealPanningVelocityIntegrator;
    _UIPreviewPresentationPlatterView * _revealPlatterView;
    bool  _shouldLayoutForPreview;
    UITapGestureRecognizer * _tapToDismissGestureRecognizer;
    UIPreviewAction * _trailingPreviewAction;
    _UIPreviewQuickActionView * _trailingQuickActionView;
    NSLayoutConstraint * _trailingQuickActionViewEdgeConstraint;
    bool  _trailingQuickActionViewSelected;
}

@property (nonatomic, retain) UIImageView *actionSheetAvailableImageView;
@property (nonatomic, retain) UIView *actionSheetContainerView;
@property (nonatomic, retain) UIScrollView *containerScrollView;
@property (nonatomic, retain) NSLayoutConstraint *containerScrollViewXConstraint;
@property (nonatomic, retain) _UIPreviewPresentationPlatterView *contentPlatterView;
@property (nonatomic, retain) <_UIPreviewInteractionHighlighting> *currentHighlighter;
@property (nonatomic) unsigned long long currentPresentationPhase;
@property (nonatomic) <UIViewControllerPreviewing_Internal> *currentPreviewingContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didSendBeginEvent;
@property (nonatomic) bool hasAskedForCommitInternally;
@property (nonatomic) bool hasAskedForDismissalInternally;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAnimatingActionSheet;
@property (nonatomic, copy) UIPreviewAction *leadingPreviewAction;
@property (nonatomic, retain) _UIPreviewQuickActionView *leadingQuickActionView;
@property (nonatomic, retain) NSLayoutConstraint *leadingQuickActionViewEdgeConstraint;
@property (nonatomic) bool leadingQuickActionViewSelected;
@property (nonatomic, retain) UIGestureRecognizer *modalPreviewActionsPanningGestureRecognizer;
@property (nonatomic, retain) UIGestureRecognizer *panningGestureRecognizer;
@property (nonatomic) bool panningGestureRecognizerInProgress;
@property (nonatomic, retain) _UIPlatterMenuDynamicsController *platterMenuController;
@property (nonatomic) bool preDismissAnimationsInflight;
@property (nonatomic, retain) _UIPreviewPresentationContainerView *presentationContainerView;
@property (nonatomic, copy) NSArray *previewActionItems;
@property (nonatomic, retain) _UIPreviewActionSheetView *previewActionSheet;
@property (nonatomic, retain) _UIVelocityIntegrator *revealPanningVelocityIntegrator;
@property (nonatomic, retain) _UIPreviewPresentationPlatterView *revealPlatterView;
@property (nonatomic) bool shouldLayoutForPreview;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapToDismissGestureRecognizer;
@property (nonatomic, copy) UIPreviewAction *trailingPreviewAction;
@property (nonatomic, retain) _UIPreviewQuickActionView *trailingQuickActionView;
@property (nonatomic, retain) NSLayoutConstraint *trailingQuickActionViewEdgeConstraint;
@property (nonatomic) bool trailingQuickActionViewSelected;

- (void).cxx_destruct;
- (id)_animatorForContainmentTransition;
- (bool)_canCommitPresentation;
- (bool)_canDismissPresentation;
- (void)_cancelTransitionDidEnd:(bool)arg1;
- (void)_configureActionSheetChromeViews;
- (void)_configureDynamicsController;
- (void)_configureInitialActionSheetViewIfNeeded;
- (void)_dismissForHandledActionWithCompletion:(id)arg1;
- (void)_dismissForSelectionQuickActionAnimated;
- (void)_dismissPresentation;
- (void)_dismissPresentationWithCompletion:(id)arg1;
- (struct CGPoint { double x1; double x2; })_dismissedActionSheetCenterForActionSheet:(id)arg1;
- (bool)_hasPreviewActions;
- (bool)_hasPreviewQuickActions;
- (bool)_hasSelectedQuickAction;
- (void)_hideQuickActions;
- (void)_interactiveHighlightTransitionDidEnd:(bool)arg1;
- (void)_invokeCommitHandlerFromInteractionProgress;
- (void)_layoutContentViews;
- (void)_layoutForCancel;
- (void)_layoutForInteractiveHighlight;
- (void)_layoutForPreview;
- (double)_leadingQuickActionOffsetForCenterPosition:(struct CGPoint { double x1; double x2; })arg1 swipeView:(id)arg2;
- (id)_makeAndAddToViewHierarchyPreviewActionSheetForMenuItems:(id)arg1;
- (void)_panningGestureRecognizerDidFire:(id)arg1;
- (bool)_platterIsInInitialPosition;
- (bool)_platterIsInInitialPositionMostly;
- (bool)_platterIsSelectingPreviewActions;
- (struct CGSize { double x1; double x2; })_preferredContentPlatterSizeForViewController:(id)arg1;
- (void)_prepareContentPlatterViewForPresentationTransitionIfNeeded:(id)arg1;
- (void)_preparePresentationContainerViewForPreviewInteraction;
- (void)_prepareRevealPlatterViewForPresentationTransitionIfNeeded:(id)arg1;
- (void)_presentSubActionSheetForPreviewActionGroup:(id)arg1;
- (void)_presentationTransitionWillBeginForContainerEffectView:(id)arg1;
- (struct CGPoint { double x1; double x2; })_presentedActionSheetCenterForActionSheet:(id)arg1;
- (void)_previewTransitionDidEnd:(bool)arg1;
- (double)_quickActionSelectionOffset;
- (double)_quickActionsSelectionThresholdForPreviewMenuItemStyle:(long long)arg1;
- (void)_restorePlatterToInitialStatePositionAnimated;
- (void)_restorePlatterToInitialStatePositionAnimatedWithCompletion:(id)arg1;
- (struct CGSize { double x1; double x2; })_standardContentPlatterSize;
- (void)_tapToDismissPreviewWithActionsDidFire:(id)arg1;
- (double)_trailingQuickActionOffsetForCenterPosition:(struct CGPoint { double x1; double x2; })arg1 swipeView:(id)arg2;
- (void)_triggerQuickActionHandlerIfNeeded;
- (void)_updateVisibiltyOfPreviewActionChromeForCurrentState;
- (id)_viewsParticipatingInNavigationControllerTransition;
- (void)_willCommitPresentation;
- (id)actionSheetAvailableImageView;
- (id)actionSheetContainerView;
- (struct CGPoint { double x1; double x2; })centerForMenuDismissed;
- (struct CGPoint { double x1; double x2; })centerForMenuDismissedForActionSheet:(id)arg1;
- (struct CGPoint { double x1; double x2; })centerForMenuPresented;
- (struct CGPoint { double x1; double x2; })centerForMenuPresentedForActionSheet:(id)arg1;
- (struct CGPoint { double x1; double x2; })centerForPlatterWithMenuViewDismissed;
- (struct CGPoint { double x1; double x2; })centerForPlatterWithMenuViewPresented;
- (struct CGPoint { double x1; double x2; })centerForPlatterWithMenuViewPresentedForActionSheet:(id)arg1;
- (id)containerScrollView;
- (id)containerScrollViewXConstraint;
- (void)containerViewDidLayoutSubviews;
- (id)contentPlatterView;
- (id)currentHighlighter;
- (unsigned long long)currentPresentationPhase;
- (id)currentPreviewingContext;
- (void)dealloc;
- (bool)didSendBeginEvent;
- (void)dismissalTransitionDidEnd:(bool)arg1;
- (void)dismissalTransitionWillBegin;
- (bool)hasAskedForCommitInternally;
- (bool)hasAskedForDismissalInternally;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (struct CGPoint { double x1; double x2; })initialCenterForLeadingSwipeActionView;
- (struct CGPoint { double x1; double x2; })initialCenterForTrailingSwipeActionView;
- (bool)isAnimatingActionSheet;
- (id)leadingPreviewAction;
- (id)leadingQuickActionView;
- (id)leadingQuickActionViewEdgeConstraint;
- (bool)leadingQuickActionViewSelected;
- (id)leadingSwipeActionView;
- (double)minimumSpacingBetweenPlatterAndMenu;
- (id)modalPreviewActionsPanningGestureRecognizer;
- (id)panningGestureRecognizer;
- (bool)panningGestureRecognizerInProgress;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })platterBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })platterContainerBounds;
- (double)platterContainerCenterX;
- (double)platterContainerCenterY;
- (id)platterMenuController;
- (void)platterMenuDynamicsController:(id)arg1 didMoveSwipeView:(id)arg2 toPosition:(struct CGPoint { double x1; double x2; })arg3;
- (void)platterMenuDynamicsControllerDidDismissWithController:(id)arg1;
- (id)platterView;
- (bool)preDismissAnimationsInflight;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)presentationContainerView;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (void)presentationTransitionWillBegin;
- (id)previewActionItems;
- (id)previewActionSheet;
- (bool)previewActionSheetCanSelectItem:(id)arg1;
- (id)revealPanningVelocityIntegrator;
- (id)revealPlatterView;
- (void)setActionSheetAvailableImageView:(id)arg1;
- (void)setActionSheetContainerView:(id)arg1;
- (void)setContainerScrollView:(id)arg1;
- (void)setContainerScrollViewXConstraint:(id)arg1;
- (void)setContentPlatterView:(id)arg1;
- (void)setCurrentHighlighter:(id)arg1;
- (void)setCurrentPresentationPhase:(unsigned long long)arg1;
- (void)setCurrentPreviewingContext:(id)arg1;
- (void)setDidSendBeginEvent:(bool)arg1;
- (void)setHasAskedForCommitInternally:(bool)arg1;
- (void)setHasAskedForDismissalInternally:(bool)arg1;
- (void)setIsAnimatingActionSheet:(bool)arg1;
- (void)setLeadingPreviewAction:(id)arg1;
- (void)setLeadingQuickActionView:(id)arg1;
- (void)setLeadingQuickActionViewEdgeConstraint:(id)arg1;
- (void)setLeadingQuickActionViewSelected:(bool)arg1;
- (void)setModalPreviewActionsPanningGestureRecognizer:(id)arg1;
- (void)setPanningGestureRecognizer:(id)arg1;
- (void)setPanningGestureRecognizerInProgress:(bool)arg1;
- (void)setPlatterMenuController:(id)arg1;
- (void)setPreDismissAnimationsInflight:(bool)arg1;
- (void)setPresentationContainerView:(id)arg1;
- (void)setPreviewActionItems:(id)arg1;
- (void)setPreviewActionSheet:(id)arg1;
- (void)setRevealPanningVelocityIntegrator:(id)arg1;
- (void)setRevealPlatterView:(id)arg1;
- (void)setShouldLayoutForPreview:(bool)arg1;
- (void)setTapToDismissGestureRecognizer:(id)arg1;
- (void)setTrailingPreviewAction:(id)arg1;
- (void)setTrailingQuickActionView:(id)arg1;
- (void)setTrailingQuickActionViewEdgeConstraint:(id)arg1;
- (void)setTrailingQuickActionViewSelected:(bool)arg1;
- (void)setupAdditionalModalGestureRecognizers;
- (bool)shouldLayoutForPreview;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (id)tapToDismissGestureRecognizer;
- (id)trailingPreviewAction;
- (id)trailingQuickActionView;
- (id)trailingQuickActionViewEdgeConstraint;
- (bool)trailingQuickActionViewSelected;
- (id)trailingSwipeActionView;
- (void)updateSwipeActionsIfApplicable;

@end
