/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCLegacyNotificationShortLookViewController : NCNotificationShortLookViewController {
    UIView * _backgroundView;
}

@property (nonatomic, retain) UIView *backgroundView;

- (void).cxx_destruct;
- (void)_backgroundTapGesture:(id)arg1;
- (void)_configureScrollViewIfNecessary;
- (void)_finishAdditionalContentReveal;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id)_legacyLookViewIfLoaded;
- (void)_loadLookView;
- (id)_newTransitionManager;
- (void)_notificationViewControllerViewDidLoad;
- (struct CGSize { double x1; double x2; })_preferredCustomContentSizeForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_resizeLegacyScrollViewToFitContentSize;
- (void)_resizeLegacyScrollViewToFitContentSizeWithKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setCustomContentProvidingViewController:(id)arg1;
- (void)_setupCustomContentProvider;
- (bool)_tryDismissingShortLookInScrollView:(id)arg1;
- (void)_updateScrollViewContentSize;
- (void)_updateWithProvidedCustomContent;
- (id)backgroundView;
- (bool)dismissPresentedViewControllerAndClearNotification:(bool)arg1 animated:(bool)arg2;
- (void)expandAndPlayAudioMessage;
- (bool)hasCommittedToPresentingCustomContentProvidingViewController;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)presentLongLook:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)transitioningDelegate:(id)arg1 didFinishDismissalOfViewController:(id)arg2 completed:(bool)arg3;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)wantsUseableContainerHeightForTransitionWithDelegate:(id)arg1;

@end
