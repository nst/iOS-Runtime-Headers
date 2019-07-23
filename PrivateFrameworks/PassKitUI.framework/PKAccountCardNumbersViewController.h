/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKAccountCardNumbersViewController : PKSectionTableViewController {
    PKAccount * _account;
    unsigned long long  _accountFeatureIdentifier;
    PKAccountService * _accountService;
    PKVirtualCardCredentials * _cardCredentials;
    long long  _context;
    bool  _loadingReplacementCard;
    PKPaymentPass * _pass;
    PKPhysicalCard * _physicalCard;
    bool  _redactSensitiveDetails;
    PKVirtualCard * _virtualCard;
}

- (void).cxx_destruct;
- (id)_buttonCellForRowIndex:(long long)arg1 text:(id)arg2 cellStyle:(long long)arg3 forTableView:(id)arg4;
- (id)_cardCredentialsCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_credentialsCellWithPrimaryText:(id)arg1 detailText:(id)arg2 forTableView:(id)arg3;
- (id)_dpanCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (long long)_numberOfVirtualCardCredentialDetailsRowsEnabled;
- (id)_physicalCardCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_replaceCardAlertFromIndexPath:(id)arg1;
- (unsigned long long)_virtualCardCredentialDetailsRowForRowIndex:(long long)arg1;
- (bool)_virtualCardCredentialDetailsRowIsEnabled:(unsigned long long)arg1;
- (id)_virtualCardStateFooter;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (id)initWithPass:(id)arg1 accountService:(id)arg2 account:(id)arg3 cardCredentials:(id)arg4 virtualCard:(id)arg5 physicalCard:(id)arg6 context:(long long)arg7;
- (id)initWithPass:(id)arg1 accountService:(id)arg2 account:(id)arg3 physicalCard:(id)arg4 context:(long long)arg5;
- (bool)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (id)reuseIdentifierForSection:(unsigned long long)arg1;
- (bool)shouldMapSection:(unsigned long long)arg1;
- (bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;

@end
