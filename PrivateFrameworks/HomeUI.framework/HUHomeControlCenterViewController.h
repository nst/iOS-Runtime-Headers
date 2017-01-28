/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUHomeControlCenterViewController : UIViewController <CCUIControlCenterPageContentProviding, HFHomeManagerObserver, HFItemManagerDelegate, HUCCGridViewControllerDelegate, LSApplicationWorkspaceObserverProtocol> {
    HUCCGridViewController * _actionSetGridViewController;
    unsigned long long  _activePage;
    HUCCGridViewController * _activePageViewController;
    LSApplicationWorkspace * _appWorkspace;
    <CCUIControlCenterPageContentViewControllerDelegate> * _delegate;
    int  _keybagLockStatusNotifyToken;
    long long  _layoutStyle;
    HUCCPageItemManager * _pageItemManager;
    HUCCGridViewController * _serviceGridViewController;
    bool  _wantsVisible;
}

@property (nonatomic, retain) HUCCGridViewController *actionSetGridViewController;
@property (nonatomic) unsigned long long activePage;
@property (nonatomic, retain) HUCCGridViewController *activePageViewController;
@property (nonatomic, readonly) LSApplicationWorkspace *appWorkspace;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CCUIControlCenterPageContentViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int keybagLockStatusNotifyToken;
@property (nonatomic) long long layoutStyle;
@property (nonatomic, retain) HUCCPageItemManager *pageItemManager;
@property (nonatomic, retain) HUCCGridViewController *serviceGridViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) HUControlCenterContainerView *view;
@property (nonatomic) bool wantsVisible;

+ (id)pageNumberByPageString;
+ (id)pageStringByPageNumber;

- (void).cxx_destruct;
- (void)_homeButtonPressed:(id)arg1;
- (bool)_isAccessAllowedForCurrentLockState;
- (void)_pageSwitchButtonPressed:(id)arg1;
- (void)_registerKeybagLockStatusNotifications;
- (void)_setupChecksForHomeAppRemoval;
- (void)_unregisterKeybagLockStatusNotifications;
- (void)_updateActivePage;
- (void)_updateHomeAppRemoved:(bool)arg1;
- (void)_updatePageSwitchButtonHiddenState;
- (void)_updatePageSwitchButtonText;
- (void)_updatePageVisibility;
- (void)_updateRegistrationForLockStatusNotification;
- (id)actionSetGridViewController;
- (unsigned long long)activePage;
- (id)activePageViewController;
- (id)appWorkspace;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)controlCenterDidDismiss;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterWillFinishTransitionOpen:(bool)arg1 withDuration:(double)arg2;
- (void)controlCenterWillPresent;
- (void)dealloc;
- (id)delegate;
- (bool)dismissModalFullScreenIfNeeded;
- (void)gridViewControllerDidEndApplyingDynamicBackgrounds:(id)arg1;
- (void)gridViewControllerWillBeginApplyingDynamicBackgrounds:(id)arg1;
- (void)homeManager:(id)arg1 didUpdateAccessAllowedWhenLocked:(bool)arg2;
- (void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isDeviceUnlockedForGridViewController:(id)arg1;
- (bool)itemManager:(id)arg1 performBatchUpdateBlock:(id)arg2;
- (int)keybagLockStatusNotifyToken;
- (long long)layoutStyle;
- (void)loadView;
- (id)pageItemManager;
- (id)prepareForActionRequiringDeviceUnlockForGridViewController:(id)arg1;
- (id)serviceGridViewController;
- (void)setActionSetGridViewController:(id)arg1;
- (void)setActivePage:(unsigned long long)arg1;
- (void)setActivePageViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setKeybagLockStatusNotifyToken:(int)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setPageItemManager:(id)arg1;
- (void)setServiceGridViewController:(id)arg1;
- (void)setWantsVisible:(bool)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (bool)wantsVisible;

@end
