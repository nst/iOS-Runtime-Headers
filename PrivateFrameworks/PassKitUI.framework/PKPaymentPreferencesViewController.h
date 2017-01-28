/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentPreferencesViewController : UIViewController <CNContactPickerDelegate, CNPostalAddressEditorDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    UITextField * _currentEditingField;
    id  _handler;
    PKPassSnapshotter * _passSnapshotter;
    id  _pickedContactHandler;
    id  _pickedContactPropertyHandler;
    NSArray * _preferences;
    int  _style;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id handler;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id pickedContactHandler;
@property (nonatomic, copy) id pickedContactPropertyHandler;
@property (nonatomic, retain) NSArray *preferences;
@property (nonatomic, readonly) int style;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) UITableView *tableView;

- (void).cxx_destruct;
- (id)_cellForPreference:(id)arg1 row:(unsigned long long)arg2;
- (id)_cellOfClass:(Class)arg1;
- (bool)_isPaymentStyle;
- (bool)_isViewTranslucent;
- (void)_keyboardDidShow:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_setContactHandlersForPreference:(id)arg1;
- (void)_showAddressEditorForPreference:(id)arg1 contact:(id)arg2;
- (bool)_showChinaDistrictAddressFlowIfRequiredForPreference:(id)arg1 contact:(id)arg2 labeledValue:(id)arg3;
- (void)_showContactsPickerForPreference:(id)arg1;
- (void)_updateContactName;
- (void)_updateNavigationBarButtons;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)dealloc;
- (id)handler;
- (id)initWithStyle:(int)arg1 preferences:(id)arg2 title:(id)arg3 handler:(id)arg4;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)pickedContactHandler;
- (id)pickedContactPropertyHandler;
- (id)pk_childrenForAppearance;
- (void)postalAddressEditor:(id)arg1 finishedEditingContact:(id)arg2;
- (void)postalAddressEditor:(id)arg1 finishedEditingProperty:(id)arg2;
- (void)postalAddressEditorDidCancel:(id)arg1;
- (id)preferences;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setHandler:(id)arg1;
- (void)setPickedContactHandler:(id)arg1;
- (void)setPickedContactPropertyHandler:(id)arg1;
- (void)setPreferences:(id)arg1;
- (int)style;
- (id)tableView;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
