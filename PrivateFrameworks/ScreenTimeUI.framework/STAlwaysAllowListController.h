/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STAlwaysAllowListController : PSListController {
    PSSpecifier * _allowedAppsGroupSpecifier;
    NSArray * _allowedAppsSpecifiers;
    STAlwaysAllowList * _alwaysAllowList;
    PSSpecifier * _chooseAppsGroupSpecifier;
    NSArray * _chooseAppsSpecifiers;
    NSArray * _chooseBundleIDs;
    <STRootViewModelCoordinator> * _coordinator;
    <STAlwaysAllowListControllerDelegate> * _delegate;
    NSSet * _installedBundleIDs;
}

@property (nonatomic, retain) PSSpecifier *allowedAppsGroupSpecifier;
@property (nonatomic, retain) NSArray *allowedAppsSpecifiers;
@property (nonatomic, copy) STAlwaysAllowList *alwaysAllowList;
@property (nonatomic, retain) PSSpecifier *chooseAppsGroupSpecifier;
@property (nonatomic, retain) NSArray *chooseAppsSpecifiers;
@property (nonatomic, copy) NSArray *chooseBundleIDs;
@property (nonatomic, retain) <STRootViewModelCoordinator> *coordinator;
@property (nonatomic) <STAlwaysAllowListControllerDelegate> *delegate;
@property (nonatomic, copy) NSSet *installedBundleIDs;

- (void).cxx_destruct;
- (id)allowedAppsGroupSpecifier;
- (id)allowedAppsSpecifiers;
- (id)alwaysAllowList;
- (id)appSpecifiersForBundleIDs:(id)arg1;
- (bool)canBeShownFromSuspendedState;
- (id)chooseAppsGroupSpecifier;
- (id)chooseAppsSpecifiers;
- (id)chooseBundleIDs;
- (id)coordinator;
- (id)createAllowedAppsSpecifiers;
- (id)createChooseAppsSpecifiers;
- (id)delegate;
- (id)init;
- (id)installedBundleIDs;
- (void)removeAllowedIdentifier:(id)arg1 withSpecifier:(id)arg2;
- (id)removeMessagesConfirmationPrompt;
- (void)setAllowedAppsGroupSpecifier:(id)arg1;
- (void)setAllowedAppsSpecifiers:(id)arg1;
- (void)setAlwaysAllowList:(id)arg1;
- (void)setChooseAppsGroupSpecifier:(id)arg1;
- (void)setChooseAppsSpecifiers:(id)arg1;
- (void)setChooseBundleIDs:(id)arg1;
- (void)setCoordinator:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInstalledBundleIDs:(id)arg1;
- (bool)shouldReloadSpecifiersOnResume;
- (id)specifiers;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)willResignActive;

@end
