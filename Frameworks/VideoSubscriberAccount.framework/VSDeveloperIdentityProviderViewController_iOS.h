/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSDeveloperIdentityProviderViewController_iOS : UITableViewController <VSDeveloperAttributeCellDelegate, VSDeveloperIdentityProviderViewController> {
    NSArray * _attributes;
    <VSDeveloperIdentityProviderViewControllerDelegate> * _delegate;
    long long  _editingMode;
    VSIdentityProvider * _identityProvider;
}

@property (nonatomic, copy) NSArray *attributes;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VSDeveloperIdentityProviderViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long editingMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) VSIdentityProvider *identityProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_attributeForCell:(id)arg1;
- (void)_cancelButtonPressed:(id)arg1;
- (id)_cellReuseIdentifierForRowAtIndexPath:(id)arg1;
- (void)_configureCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)_didCancel;
- (void)_didDelete;
- (void)_didFinish;
- (void)_doneButtonPressed:(id)arg1;
- (bool)_isLastAttributeIndexPath:(id)arg1;
- (void)_presentDeletionConfirmationFromCellAtIndexPath:(id)arg1;
- (id)attributes;
- (id)delegate;
- (void)developerAttributeCell:(id)arg1 fieldValueDidChange:(id)arg2;
- (void)developerAttributeCellDidFinish:(id)arg1;
- (long long)editingMode;
- (id)identityProvider;
- (id)initWithStyle:(long long)arg1;
- (long long)modalPresentationStyle;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditingMode:(long long)arg1;
- (void)setIdentityProvider:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end