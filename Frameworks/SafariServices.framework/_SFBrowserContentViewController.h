/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFBrowserContentViewController : UIViewController <SFReaderAppearanceViewControllerDelegate, SFReaderEnabledWebViewControllerDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, UIScrollViewDelegate, WBSFluidProgressControllerWindowDelegate, WBSFluidProgressStateSource, _SFActivityViewControllerDelegate, _SFBrowserKeyCommandMethods, _SFBrowserToolbarDataSource, _SFBrowserToolbarDelegate, _SFDownloadControllerDelegate, _SFDynamicBarAnimatorDelegate, _SFFindOnPageViewDelegate, _SFMailContentProviderDataSource, _SFNavigationBarDelegate, _SFPageLoadErrorControllerDelegate, _SFPrintControllerDelegate, _SFSafeBrowsingControllerDelegate, _SFSingleBookmarkNavigationControllerDelegate> {
    NSString * _EVOrganizationName;
    bool  _EVOrganizationNameIsValid;
    _SFURLSpoofingMitigator * _URLSpoofingMitigator;
    SFBrowserPersonaAnalyticsHelper * __analyticsHelper;
    unsigned long long  __persona;
    bool  __privateBrowsingInitiallyEnabled;
    _WKActivatedElementInfo * _activatedElementInfo;
    WBSAutomaticReaderActivationManager * _automaticReaderActivationManager;
    _SFBrowserToolbar * _bottomToolbar;
    _SFBrowserView * _browserView;
    _SFFluidProgressView * _cachedFluidProgressView;
    _SFMailContentProvider * _cachedMailContentProvider;
    _SFCalendarEventDetector * _calendarEventDetector;
    bool  _canOpenDownloadForInitialLoad;
    SFSafariViewControllerConfiguration * _configuration;
    double  _crashBannerDraggingOffset;
    bool  _currentLoadIsEligibleForAutoFillAuthentication;
    long long  _customPreferredStatusBarStyle;
    bool  _didNotifyInitialLoadFinish;
    bool  _didReceivePolicyForInitialLoad;
    long long  _dismissButtonStyle;
    long long  _displayMode;
    _SFDownloadController * _downloadController;
    _SFDynamicBarAnimator * _dynamicBarAnimator;
    _SFFindOnPageView * _findOnPageView;
    WBSFluidProgressController * _fluidProgressController;
    WBSFluidProgressState * _fluidProgressState;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _horizontalScrollIndicatorBaseInsets;
    bool  _interfaceFillsScreen;
    bool  _isDisplayingTelephonyPrompt;
    bool  _isShowingHTTPAuthenticationDialog;
    bool  _isSuppressingPreviewProgressAnimation;
    WKBackForwardListItem * _lastBackFowardListItemOnWhichReaderWasActivated;
    unsigned long long  _lastReaderDeactivationMode;
    _WKUserInitiatedAction * _lastUserInitiatedAction;
    NSArray * _linkActions;
    _SFNavigationBar * _navigationBar;
    _SFNavigationBarItem * _navigationBarItem;
    SFReaderEnabledWebViewController * _ownerWebViewController;
    _SFPageLoadErrorController * _pageLoadErrorController;
    bool  _pageScrollsWithBottomBar;
    UIColor * _preferredBarTintColor;
    UIColor * _preferredControlTintColor;
    _SFPrintController * _printController;
    SFReaderViewController * _readerViewController;
    _SFReloadOptionsController * _reloadOptionsController;
    bool  _remoteSwipeGestureEnabled;
    long long  _safariDataSharingMode;
    _SFSafeBrowsingController * _safeBrowsingController;
    bool  _safeBrowsingEnabled;
    bool  _scrollViewIsDragging;
    _SFSecIdentityPreferencesController * _secIdentityPreferencesController;
    _SFSafariSharingExtensionController * _sharingExtensionController;
    bool  _shouldDismissReaderInReponseToSameDocumentNavigation;
    UITapGestureRecognizer * _showBarsFromBottomBarRecognizer;
    bool  _showingCrashBanner;
    bool  _showingReader;
    _SFTelephonyNavigationMitigationPolicy * _telephonyNavigationPolicy;
    bool  _updatingGeometryFromDynamicBarAnimator;
    bool  _usesNarrowLayout;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _verticalScrollIndicatorBaseInsets;
    SFReaderEnabledWebViewController * _webViewController;
    bool  _webViewLayoutUnderlapsStatusBar;
    WKPreferences * _wkPreferences;
}

@property (nonatomic, readonly) SFBrowserPersonaAnalyticsHelper *_analyticsHelper;
@property (nonatomic, readonly) bool _isUsedForAuthentication;
@property (nonatomic, readonly) unsigned long long _persona;
@property (nonatomic, readonly) bool _privateBrowsingInitiallyEnabled;
@property (nonatomic, readonly) bool _usesScrollToTopView;
@property (nonatomic, retain) _WKActivatedElementInfo *activatedElementInfo;
@property (nonatomic, readonly) bool canInstallProfiles;
@property (nonatomic, readonly) bool canPrint;
@property (nonatomic, copy) SFSafariViewControllerConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long dismissButtonStyle;
@property (nonatomic) long long displayMode;
@property (nonatomic, retain) _SFFindOnPageView *findOnPageView;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *linkActions;
@property (nonatomic, retain) UIColor *preferredBarTintColor;
@property (nonatomic, retain) UIColor *preferredControlTintColor;
@property (nonatomic, retain) _SFReloadOptionsController *reloadOptionsController;
@property (nonatomic) bool remoteSwipeGestureEnabled;
@property (nonatomic) long long safariDataSharingMode;
@property (readonly) Class superclass;
@property (nonatomic, retain) SFReaderEnabledWebViewController *webViewController;
@property (nonatomic) bool webViewLayoutUnderlapsStatusBar;

- (void).cxx_destruct;
- (id)_EVOrganizationName;
- (id)_activeToolbar;
- (id)_analyticsHelper;
- (id)_applicationPayloadForOpeningInSafari;
- (bool)_canScrollToTopInView:(id)arg1;
- (bool)_canShowDownloadWithoutPrompting:(id)arg1;
- (void)_commitPreviewViewController:(id)arg1;
- (id)_committedDomainForAutomaticReader;
- (double)_crashBannerDraggingOffsetForContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (id)_currentWebView;
- (void)_didLoadWebView;
- (void)_didReceiveAllQueuedMessages;
- (void)_dismiss;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_effectiveWebViewSafeAreaInsets;
- (void)_fetchActivityViewControllerInfoForURL:(id)arg1 title:(id)arg2 completion:(id /* block */)arg3;
- (void)_fetchSharingURLWithCompletionHandler:(id /* block */)arg1;
- (void)_getSafariDataSharingModeWithPrivacyPrompt:(bool)arg1 completion:(id /* block */)arg2;
- (void)_goBack;
- (void)_goForward;
- (void)_hideCrashBanner;
- (void)_hideReaderAnimated:(bool)arg1 deactivationMode:(unsigned long long)arg2;
- (void)_initialLoadFinishedWithSuccess:(bool)arg1;
- (void)_invalidateEVOrganizationName;
- (bool)_isPreviewing;
- (bool)_isSecure;
- (bool)_isSplitScreen;
- (bool)_isUsedForAuthentication;
- (id)_linkPreviewActionsWithDefaultActions:(id)arg1;
- (id)_mailContentProvider;
- (double)_maximumHeightObscuredByBottomBar;
- (bool)_notifyInitialLoadDidFinish:(bool)arg1;
- (void)_openCurrentURLInSafari;
- (id)_openNewWebViewIfNeededWithConfiguration:(id)arg1 forNavigationAction:(id)arg2;
- (void)_perSiteAutomaticReaderActivationPreferenceDidChange:(id)arg1;
- (void)_performSafeBrowsingCheckForURL:(id)arg1;
- (unsigned long long)_persona;
- (id)_previewViewControllerForURL:(id)arg1 defaultActions:(id)arg2 elementInfo:(id)arg3;
- (bool)_privateBrowsingInitiallyEnabled;
- (void)_recordHostAppIdAndURLForTapToRadar:(id)arg1;
- (void)_redirectToExternalNavigationResult:(id)arg1 fromOriginalRequest:(id)arg2 isMainFrame:(bool)arg3 userAction:(id)arg4;
- (bool)_redirectToHostAppWithExpectedCallbackSchemeIfPossible:(id)arg1;
- (bool)_redirectToHostAppWithNavigationResult:(id)arg1 options:(id)arg2;
- (void)_reload;
- (bool)_safeAreaShouldAffectWebViewObscuredInsets;
- (void)_scrollToTopFromScrollToTopView;
- (void)_setShowingCrashBanner:(bool)arg1 animated:(bool)arg2;
- (void)_setShowingReader:(bool)arg1 deactivationMode:(unsigned long long)arg2 animated:(bool)arg3;
- (void)_setSuppressingPreviewProgressAnimation:(bool)arg1;
- (void)_setUpCalendarEventDetectorIfNeeded;
- (void)_setUpFindOnPageViewIfNeeded;
- (void)_setUpReloadOptionsControllerIfNeeded;
- (void)_setUpSafeBrowsingController;
- (void)_setUpToolbar;
- (void)_setUpTopBarAndBottomBar;
- (void)_setUpWebViewControllerIfNeeded;
- (void)_setWebView:(id)arg1;
- (bool)_shouldGoBackToOwnerWebView;
- (void)_showBars;
- (void)_showBarsFromBottomBarTap:(id)arg1;
- (void)_showDownload:(id)arg1;
- (void)_showGenericDownloadAlert;
- (bool)_showICSControllerForPath:(id)arg1 sourceURL:(id)arg2;
- (void)_showPassBookControllerForPass:(id)arg1;
- (void)_showReaderAnimated:(bool)arg1;
- (bool)_supportsTrackerProtection;
- (void)_toggleReaderFromExplicitUserAction;
- (void)_updateCrashBannerOffset;
- (void)_updateCurrentScrollViewInsets;
- (void)_updateDoNotTrackPreference;
- (void)_updateDynamicBarGeometry;
- (void)_updateInterfaceFillsScreen;
- (void)_updateNavigationBar;
- (void)_updatePreferredBarTintColor;
- (void)_updatePreferredControlTintColor;
- (void)_updatePreviewLoadingUI;
- (void)_updateRemoteSwipeGestureState;
- (void)_updateScrollIndicatorVerticalInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 horizontalInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)_updateScrollToTopView;
- (void)_updateStatusBarStyleForced:(bool)arg1;
- (void)_updateTrackerProtectionPreferences;
- (void)_updateUI;
- (void)_updateUsesNarrowLayout;
- (void)_updateWebViewLayoutSize;
- (void)_updateWebViewShrinkToFit;
- (bool)_usesScrollToTopView;
- (void)_viewDidTransitionToSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1;
- (id)activatedElementInfo;
- (void)activityViewController:(id)arg1 prepareActivity:(id)arg2 completion:(id /* block */)arg3;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)addBookmarkNavController:(id)arg1 didFinishWithResult:(bool)arg2;
- (bool)addBookmarkNavControllerCanSaveBookmarkChanges:(id)arg1;
- (unsigned long long)availableContentTypeForMailContentProvider:(id)arg1;
- (bool)becomeFirstResponder;
- (unsigned long long)browserPersonaForWebViewController:(id)arg1;
- (bool)browserToolbarCanGoBack:(id)arg1;
- (bool)browserToolbarCanGoForward:(id)arg1;
- (bool)browserToolbarCanOpenPageInSafari:(id)arg1;
- (bool)browserToolbarCanShowAction:(id)arg1;
- (double)browserToolbarDismissButtonPadding:(id)arg1;
- (struct CGSize { double x1; double x2; })browserToolbarDismissButtonSize:(id)arg1;
- (void)browserToolbarGoBack:(id)arg1;
- (void)browserToolbarGoForward:(id)arg1;
- (void)browserToolbarOpenInSafari:(id)arg1;
- (bool)browserToolbarShouldShowOpenInSafariBarButtonItem:(id)arg1;
- (void)browserToolbarShowActionSheet:(id)arg1;
- (bool)canBecomeFirstResponder;
- (bool)canInstallProfiles;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)canPrint;
- (void)cancelKeyPressed;
- (void)clearFluidProgressState;
- (void)compressedNavigationBarWasTapped:(id)arg1;
- (id)configuration;
- (bool)createFluidProgressState;
- (id)currentFluidProgressStateSource;
- (bool)currentLoadIsEligibleForAutoFillAuthenticationForWebViewController:(id)arg1;
- (void)dealloc;
- (void)didMoveToParentViewController:(id)arg1;
- (long long)dismissButtonStyle;
- (long long)displayMode;
- (id)downloadBackgroundTaskName;
- (bool)dynamicBarAnimator:(id)arg1 canHideBarsByDraggingWithOffset:(double)arg2;
- (double)dynamicBarAnimator:(id)arg1 minimumTopBarHeightForOffset:(double)arg2;
- (void)dynamicBarAnimatorOutputsDidChange:(id)arg1;
- (void)dynamicBarAnimatorWillEnterSteadyState:(id)arg1;
- (void)dynamicBarAnimatorWillLeaveSteadyState:(id)arg1;
- (double)estimatedProgress;
- (id)expectedOrCurrentURL;
- (void)fileDownloadDidFinish:(id)arg1;
- (void)findKeyPressed;
- (id)findOnPageView;
- (void)fluidProgressRocketAnimationDidComplete;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)hasFailedURL;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isSafariRestricted;
- (id)keyCommands;
- (id)linkActions;
- (void)loadRequest:(id)arg1;
- (void)loadView;
- (void)mailContentProvider:(id)arg1 getPDFDataWithCompletionHandler:(id /* block */)arg2;
- (void)mailContentProvider:(id)arg1 getReaderContentWithCompletionHandler:(id /* block */)arg2;
- (void)mailContentProvider:(id)arg1 getWebArchiveDataWithCompletion:(id /* block */)arg2;
- (void)navigateBackKeyPressed;
- (void)navigateForwardKeyPressed;
- (void)navigationBar:(id)arg1 backDropWillApplySettings:(id)arg2;
- (bool)navigationBar:(id)arg1 shouldPermitShareOperation:(long long)arg2;
- (void)navigationBarBackdropDidApplySettings:(id)arg1;
- (void)navigationBarCancelButtonWasTapped:(id)arg1;
- (void)navigationBarDoneButtonWasTapped:(id)arg1;
- (void)navigationBarMetricsDidChange:(id)arg1;
- (void)navigationBarReaderAppearanceButtonWasTapped:(id)arg1;
- (void)navigationBarReaderButtonWasLongPressed:(id)arg1;
- (void)navigationBarReaderButtonWasTapped:(id)arg1;
- (void)navigationBarReloadButtonWasLongPressed:(id)arg1;
- (void)navigationBarReloadButtonWasTapped:(id)arg1;
- (void)navigationBarStopLoadingButtonWasTapped:(id)arg1;
- (id)navigationBarURLForSharing:(id)arg1;
- (id)newProcessPool;
- (void)nextFindResultKeyPressed;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)overrideTraitCollectionForChildViewController:(id)arg1;
- (void)pageLoadErrorController:(id)arg1 loadFailedRequestAfterError:(id)arg2;
- (void)pageLoadErrorController:(id)arg1 presentViewController:(id)arg2;
- (void)pageLoadErrorController:(id)arg1 setAllowsSpecificHTTPSCertificate:(id)arg2 forHost:(id)arg3;
- (void)pageLoadErrorControllerClosePage:(id)arg1;
- (id)pageLoadErrorControllerGetSecIdentityPreferencesController:(id)arg1;
- (bool)pageLoadErrorControllerShouldHandleCertificateError:(id)arg1;
- (bool)pageLoadErrorControllerShouldPermanentlyAcceptCertificate:(id)arg1;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 inView:(inout id*)arg3;
- (id)preferredBarTintColor;
- (id)preferredControlTintColor;
- (long long)preferredStatusBarStyle;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)presentingViewControllerForWebViewController:(id)arg1;
- (id)previewActionItems;
- (void)previousFindResultKeyPressed;
- (bool)printControllerCanPresentPrintUI:(id)arg1;
- (bool)printControllerPageIsLoading:(id)arg1;
- (bool)printControllerShouldPrintReader:(id)arg1;
- (id)processPool;
- (id)processPoolConfiguration;
- (id)progressState;
- (void)readerAppearanceViewControllerDidChangeFont:(id)arg1;
- (void)readerAppearanceViewControllerDidChangeTheme:(id)arg1;
- (void)readerAppearanceViewControllerDidDecreaseTextSize:(id)arg1;
- (void)readerAppearanceViewControllerDidIncreaseTextSize:(id)arg1;
- (void)reloadKeyPressed;
- (id)reloadOptionsController;
- (void)reloadWithoutContentBlockers;
- (bool)remoteSwipeGestureEnabled;
- (long long)safariDataSharingMode;
- (void)safeBrowsingController:(id)arg1 didIgnoreWarningWithURL:(id)arg2;
- (void)safeBrowsingControllerClosePage:(id)arg1;
- (void)safeBrowsingControllerDidShowSecurityWarningPage:(id)arg1;
- (void)safeBrowsingControllerGoBack:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setActivatedElementInfo:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDismissButtonStyle:(long long)arg1;
- (void)setDisplayMode:(long long)arg1;
- (void)setFindOnPageView:(id)arg1;
- (void)setLinkActions:(id)arg1;
- (void)setPreferredBarTintColor:(id)arg1;
- (void)setPreferredControlTintColor:(id)arg1;
- (void)setReloadOptionsController:(id)arg1;
- (void)setRemoteSwipeGestureEnabled:(bool)arg1;
- (void)setSafariDataSharingMode:(long long)arg1;
- (void)setWebViewController:(id)arg1;
- (void)setWebViewLayoutUnderlapsStatusBar:(bool)arg1;
- (void)stopLoading;
- (void)toggleReaderKeyPressed;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateBottombarOffset:(double)arg1 topBarHeight:(double)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)visibilityWillChangeForFindOnPageView:(id)arg1;
- (id)webViewConfiguration;
- (id)webViewController;
- (void)webViewController:(id)arg1 commitPreviewedViewController:(id)arg2;
- (void)webViewController:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)webViewController:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webViewController:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webViewController:(id)arg1 didClickLinkInReaderWithRequest:(id)arg2;
- (void)webViewController:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webViewController:(id)arg1 didEndNavigationGestureToBackForwardListItem:(id)arg2;
- (void)webViewController:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webViewController:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webViewController:(id)arg1 didFinishDocumentLoadForNavigation:(id)arg2;
- (void)webViewController:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webViewController:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)webViewController:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webViewController:(id)arg1 didSameDocumentNavigation:(id)arg2 ofType:(long long)arg3;
- (void)webViewController:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (id)webViewController:(id)arg1 previewViewControllerForURL:(id)arg2 defaultActions:(id)arg3 elementInfo:(id)arg4;
- (void)webViewController:(id)arg1 printFrame:(id)arg2;
- (void)webViewController:(id)arg1 webViewDidClose:(id)arg2;
- (void)webViewController:(id)arg1 willPerformClientRedirectToURL:(id)arg2 withDelay:(double)arg3;
- (void)webViewControllerDidCancelClientRedirect:(id)arg1;
- (void)webViewControllerDidChangeEstimatedProgress:(id)arg1;
- (void)webViewControllerDidChangeHasOnlySecureContent:(id)arg1;
- (void)webViewControllerDidChangeLoadingState:(id)arg1;
- (void)webViewControllerDidChangeSafeAreaInsets:(id)arg1;
- (void)webViewControllerDidChangeSafeAreaShouldAffectObscuredInsets:(id)arg1;
- (void)webViewControllerDidChangeURL:(id)arg1;
- (void)webViewControllerDidDetermineReaderAvailability:(id)arg1 dueToSameDocumentNavigation:(bool)arg2;
- (void)webViewControllerDidFirstVisuallyNonEmptyLayout:(id)arg1;
- (void)webViewControllerWebProcessDidBecomeResponsive:(id)arg1;
- (void)webViewControllerWebProcessDidBecomeUnresponsive:(id)arg1;
- (void)webViewControllerWebProcessDidCrash:(id)arg1;
- (void)webViewControllerWillAuthenticateForAutoFill:(id)arg1;
- (void)webViewControllerWillPresentJavaScriptDialog:(id)arg1;
- (id)webViewForFindOnPageView:(id)arg1;
- (bool)webViewLayoutUnderlapsStatusBar;
- (id)websiteDataStore;
- (id)websiteDataStoreConfiguration;

@end
