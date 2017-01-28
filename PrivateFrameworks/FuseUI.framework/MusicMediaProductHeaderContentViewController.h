/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMediaProductHeaderContentViewController : UIViewController <MusicClientContextConsuming, MusicEntityProductHeaderLockupViewDelegate, MusicMediaDetailHeaderContentViewController> {
    MusicContextualLibraryUpdateAlertAction * _addRemoveLibraryAlertAction;
    NSArray * _addRemoveNotificationObservers;
    bool  _allowsEditing;
    MusicClientContext * _clientContext;
    <MusicEntityProviding> * _containerEntityProvider;
    MusicEntityValueContext * _containerEntityValueContext;
    <MusicEntityProviding> * _contextualActionsOverrideTracklistEntityProvider;
    <MusicMediaProductHeaderContentViewControllerDelegate> * _delegate;
    UIImage * _editedContentArtworkImage;
    MusicHairlineView * _hairlineView;
    bool  _hairlineVisible;
    MusicContextualLibraryUpdateAlertAction * _keepLocalAlertAction;
    NSString * _lockupArtworkProperty;
    MusicMediaDetailTintInformation * _mediaDetailTintInformation;
    bool  _needToMakeTitleFirstResponder;
    MPAVController * _player;
    long long  _presentationSource;
    MusicEntityViewProductHeaderLockupContentDescriptor * _productHeaderLockupContentDecriptor;
    MusicEntityProductHeaderLockupView * _productHeaderLockupView;
    bool  _shouldDelayTransitionProgress;
    bool  _trailingSeparatorInsetFollowsLayoutInsets;
    double  _transitionProgress;
    bool  _wantsRefreshActivityIndicator;
}

@property (nonatomic, readonly) MusicEntityValueContext *_containerEntityValueContext;
@property (nonatomic) bool allowsEditing;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic, readonly) <MusicEntityProviding> *containerEntityProvider;
@property (nonatomic, retain) <MusicEntityProviding> *contextualActionsOverrideTracklistEntityProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MusicMediaProductHeaderContentViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *editableText;
@property (nonatomic, retain) UIImage *editedContentArtworkImage;
@property (getter=isHairlineVisible, nonatomic) bool hairlineVisible;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *lockupArtworkProperty;
@property (nonatomic, copy) MusicMediaDetailTintInformation *mediaDetailTintInformation;
@property (nonatomic, readonly) long long presentationSource;
@property (nonatomic, readonly) UIButton *shareButton;
@property (nonatomic) bool shouldDelayTransitionProgress;
@property (readonly) Class superclass;
@property (nonatomic) bool trailingSeparatorInsetFollowsLayoutInsets;

- (void).cxx_destruct;
- (void)_applyLockupArtworkProperty;
- (void)_applyProductHeaderLayoutInsets;
- (void)_applyTransitionProgress;
- (bool)_calculateWantsRefreshButton;
- (void)_configureProductHeaderLockupContentDescriptor:(id)arg1 withTintInformation:(id)arg2;
- (void)_configureWithTintInformation;
- (void)_containerEntityProviderDidInvalidateNotification:(id)arg1;
- (id)_containerEntityValueContext;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_contentTasteControllerDidChangeNotification:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_hairlineViewFrame;
- (id)_loadProductHeaderLockupContentDescriptor;
- (void)_presentContextualActionsFromButton:(id)arg1;
- (id)_productHeaderLockupContentDescriptor;
- (void)_reloadAddRemoveLibraryAndKeepLocalActions;
- (void)_reloadContainerEntityValueContextProperties;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_updateContentTaste;
- (void)_updateHairline;
- (void)_updateHairlineLayoutInsets;
- (void)_updateNavigationTitle;
- (void)_updatePreferredContentSize;
- (void)_updateProductHeaderLockupProperties;
- (bool)allowsEditing;
- (id)clientContext;
- (id)containerEntityProvider;
- (id)contextualActionsOverrideTracklistEntityProvider;
- (void)dealloc;
- (id)delegate;
- (id)editableText;
- (id)editedContentArtworkImage;
- (id)initWithContainerEntityProvider:(id)arg1 presentationSource:(long long)arg2;
- (bool)isHairlineVisible;
- (id)lockupArtworkProperty;
- (void)makeEditableTitleBecomeFirstResponder;
- (id)mediaDetailTintInformation;
- (void)music_viewInheritedLayoutInsetsDidChange;
- (long long)presentationSource;
- (void)productHeaderLockupView:(id)arg1 didSelectCameraButton:(id)arg2;
- (void)productHeaderLockupView:(id)arg1 didSelectPlayButtonAction:(unsigned long long)arg2;
- (void)productHeaderLockupViewDidSelectContextualActionsButton:(id)arg1;
- (void)productHeaderLockupViewDidSelectDownloadProgressButton:(id)arg1;
- (void)productHeaderLockupViewDidSelectEditButton:(id)arg1;
- (void)productHeaderLockupViewDidSelectLikeDislikeButton:(id)arg1;
- (void)productHeaderLockupViewDidSelectRefreshButton:(id)arg1;
- (void)productHeaderLockupViewDidSelectShareButton:(id)arg1;
- (void)productHeaderLockupViewDidUpdateEditableText:(id)arg1;
- (void)productHeaderLockupViewTintColorDidChange:(id)arg1;
- (void)setAllowsEditing:(bool)arg1;
- (void)setClientContext:(id)arg1;
- (void)setContextualActionsOverrideTracklistEntityProvider:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditedContentArtworkImage:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setHairlineVisible:(bool)arg1;
- (void)setLockupArtworkProperty:(id)arg1;
- (void)setMediaDetailHeaderHeight:(double)arg1 withMaximumHeaderHeight:(double)arg2 transitionProgress:(double)arg3;
- (void)setMediaDetailTintInformation:(id)arg1;
- (void)setShouldDelayTransitionProgress:(bool)arg1;
- (void)setTrailingSeparatorInsetFollowsLayoutInsets:(bool)arg1;
- (id)shareButton;
- (bool)shouldDelayTransitionProgress;
- (bool)trailingSeparatorInsetFollowsLayoutInsets;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
