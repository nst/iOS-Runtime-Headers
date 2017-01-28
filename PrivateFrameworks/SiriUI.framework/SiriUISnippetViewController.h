/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUISnippetViewController : SiriUIBaseSnippetViewController {
    NSAttributedString * _attributedSubtitle;
    bool  _cancelled;
    bool  _confirmed;
    UIView * _containingView;
    long long  _defaultKeylineType;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _defaultViewInsets;
    UICollectionReusableView<SiriUIReusableView> * _footerView;
    SAUIAppPunchOut * _headerPunchOut;
    UICollectionReusableView<SiriUIReusableView> * _headerView;
    bool  _isFullPadWidth;
    bool  _isTransparent;
    bool  _loading;
    NSString * _navigationTitle;
    SAUIConfirmationOptions * _previousConfirmationOptions;
    bool  _provisional;
    NSArray * _requestContext;
    bool  _showHeaderChevron;
    SAUIAppPunchOut * _snippetPunchOut;
    UIColor * _titleBackgroundColor;
    UIColor * _titleTextColor;
    bool  _topKeylineHidden;
    UICollectionReusableView<SiriUIReusableView> * _transparentFooterView;
    UICollectionReusableView<SiriUIReusableView> * _transparentHeaderView;
    bool  _virgin;
    bool  _wantsConfirmationInsets;
    bool  _willAnimateCancellation;
    bool  _willAnimateConfirmation;
}

@property (nonatomic, copy) NSAttributedString *attributedSubtitle;
@property (getter=isCancelled, nonatomic) bool cancelled;
@property (getter=isConfirmed, nonatomic) bool confirmed;
@property (nonatomic) UIView *containingView;
@property (nonatomic) long long defaultKeylineType;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } defaultViewInsets;
@property (nonatomic) <SiriUISnippetViewControllerDelegate> *delegate;
@property (nonatomic, retain) SAUIAppPunchOut *headerPunchOut;
@property (nonatomic) bool isFullPadWidth;
@property (nonatomic) bool isTransparent;
@property (getter=isLoading, nonatomic) bool loading;
@property (nonatomic, copy) NSString *navigationTitle;
@property (getter=_previousConfirmationOptions, setter=_setPreviousConfirmationOptions:, nonatomic, retain) SAUIConfirmationOptions *previousConfirmationOptions;
@property (getter=_isProvisional, setter=_setProvisional:, nonatomic) bool provisional;
@property (nonatomic, copy) NSArray *requestContext;
@property (nonatomic) bool showHeaderChevron;
@property (nonatomic, retain) SAUIAppPunchOut *snippetPunchOut;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) UIColor *titleBackgroundColor;
@property (nonatomic, copy) UIColor *titleTextColor;
@property (nonatomic) bool topKeylineHidden;
@property (getter=isVirgin, nonatomic, readonly) bool virgin;
@property (nonatomic) bool wantsConfirmationInsets;
@property (getter=_willAnimateCancellation, setter=_setWillAnimateCancellation:, nonatomic) bool willAnimateCancellation;
@property (getter=_willAnimateConfirmation, setter=_setWillAnimateConfirmation:, nonatomic) bool willAnimateConfirmation;

- (void).cxx_destruct;
- (void)_cellDidLayoutSubviews;
- (id)_createReusableViewIfNeededWithClass:(Class)arg1;
- (id)_footerView;
- (bool)_hasConfirmationButtons;
- (bool)_hasConfirmationOrCancelledInsets;
- (id)_headerView;
- (long long)_insertionAnimation;
- (bool)_isProvisional;
- (long long)_pinAnimationType;
- (id)_previousConfirmationOptions;
- (id)_privateDelegate;
- (long long)_replacementAnimation;
- (void)_setPreviousConfirmationOptions:(id)arg1;
- (void)_setProvisional:(bool)arg1;
- (void)_setVirgin:(bool)arg1;
- (void)_setWillAnimateCancellation:(bool)arg1;
- (void)_setWillAnimateConfirmation:(bool)arg1;
- (void)_snippetPunchOutButtonTapped;
- (void)_snippetViewControllerWillBeRemoved;
- (id)_transparentFooterView;
- (id)_transparentHeaderView;
- (bool)_willAnimateCancellation;
- (bool)_willAnimateConfirmation;
- (id)alternativeAceCommandsToPerformIfNotExposingViews;
- (id)attributedSubtitle;
- (void)cancelButtonTapped:(id)arg1;
- (void)configureReusableFooterView:(id)arg1;
- (void)configureReusableHeaderView:(id)arg1;
- (void)configureReusableTransparentFooterView:(id)arg1;
- (void)configureReusableTransparentHeaderView:(id)arg1;
- (void)confirmButtonTapped:(id)arg1;
- (id)containingView;
- (long long)defaultKeylineType;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })defaultViewInsets;
- (double)desiredHeightForFooterView;
- (double)desiredHeightForHeaderView;
- (double)desiredHeightForTransparentFooterView;
- (double)desiredHeightForTransparentHeaderView;
- (Class)footerViewClass;
- (id)headerPunchOut;
- (void)headerTapped:(id)arg1;
- (Class)headerViewClass;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isCancelled;
- (bool)isConfirmed;
- (bool)isFullPadWidth;
- (bool)isLoading;
- (bool)isMemoryIntensive;
- (bool)isTransparent;
- (bool)isVirgin;
- (id)navigationTitle;
- (bool)removedAfterDialogProgresses;
- (id)requestContext;
- (void)setAttributedSubtitle:(id)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setConfirmed:(bool)arg1;
- (void)setContainingView:(id)arg1;
- (void)setDefaultKeylineType:(long long)arg1;
- (void)setDefaultViewInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHeaderPunchOut:(id)arg1;
- (void)setIsFullPadWidth:(bool)arg1;
- (void)setIsTransparent:(bool)arg1;
- (void)setLoading:(bool)arg1;
- (void)setManageBackgroundColor:(bool)arg1;
- (void)setNavigationTitle:(id)arg1;
- (void)setRequestContext:(id)arg1;
- (void)setShowHeaderChevron:(bool)arg1;
- (void)setSnippetPunchOut:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitleBackgroundColor:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (void)setTopKeylineHidden:(bool)arg1;
- (void)setWantsConfirmationInsets:(bool)arg1;
- (bool)showHeaderChevron;
- (void)siriDidLayoutSnippetView;
- (void)siriWillLayoutSnippetView;
- (id)snippetPunchOut;
- (id)subtitle;
- (id)titleBackgroundColor;
- (id)titleTextColor;
- (bool)topKeylineHidden;
- (Class)transparentFooterViewClass;
- (Class)transparentHeaderViewClass;
- (bool)usePlatterStyle;
- (bool)wantsConfirmationInsets;
- (void)willCancel;
- (void)willConfirm;

@end
