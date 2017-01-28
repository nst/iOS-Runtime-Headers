/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUISoftwareUpdateController : PSListController <DevicePINControllerDelegate, PSUISoftwareUpdateManagerDelegate, UITableViewDelegate> {
    NSString * _devicePasscode;
    id  _devicePasscodeCompletion;
    bool  _disableInstallButton;
    bool  _hideInsufficientStorageUI;
    PSSpecifier * _installButtonGroup;
    PSSpecifier * _installButtonSpecifier;
    PSUISoftwareUpdateManager * _manager;
    bool  _refreshOnNextAppearance;
    bool  _showingTerms;
    NSError * _suError;
    PSSoftwareUpdateTitleCell * _titleCell;
    PSSpecifier * _titleGroup;
    UsageStorageController * _usageStorageController;
}

@property (nonatomic, retain) NSError *SUError;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id devicePasscodeCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)SUError;
- (void)autoInstallCancel:(id)arg1;
- (void)autoInstallCancelPrompt:(id)arg1;
- (id)controllerForSpecifier:(id)arg1;
- (void)dealloc;
- (void)detailedReleaseNotesDonePressed:(id)arg1;
- (void)devicePINControllerDidDismissPINPane:(id)arg1;
- (id)devicePasscodeCompletion;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)downloadAndInstall:(id)arg1;
- (id)init;
- (void)install:(id)arg1;
- (void)loadView;
- (void)manager:(id)arg1 didTransitionToState:(int)arg2 fromState:(int)arg3 error:(id)arg4;
- (void)manager:(id)arg1 download:(id)arg2 failedWithError:(id)arg3;
- (void)manager:(id)arg1 downloadProgressChanged:(id)arg2 displayStyle:(int)arg3;
- (void)manager:(id)arg1 promptForDevicePasscodeWithCompletion:(id)arg2;
- (void)manager:(id)arg1 scanFoundUpdate:(id)arg2 error:(id)arg3;
- (void)presentError:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id)arg3;
- (void)refreshState;
- (void)resumeDownload:(id)arg1;
- (void)setDevicePasscodeCompletion:(id)arg1;
- (void)setSUError:(id)arg1;
- (void)setSUError:(id)arg1 disableButton:(bool)arg2 reload:(bool)arg3;
- (void)setShowsTermsProgress:(bool)arg1;
- (void)showStorageHelpLinkIfNeededOnFooterForGroup:(id)arg1 error:(id)arg2;
- (id)specifiers;
- (id)specifiersForState:(int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (Class)tableViewClass;
- (void)updateState;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willEnterForeground;

@end
