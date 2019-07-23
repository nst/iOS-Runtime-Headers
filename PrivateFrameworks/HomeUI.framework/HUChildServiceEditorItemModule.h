/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUChildServiceEditorItemModule : HFItemModule {
    HFServiceItemProvider * _childServiceItemProvider;
    unsigned long long  _editingMode;
    HMHome * _home;
    NSSet * _itemProviders;
    HFItem<HFServiceLikeItem> * _sourceItem;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, retain) HFServiceItemProvider *childServiceItemProvider;
@property (nonatomic, readonly) unsigned long long editingMode;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HFItem<HFServiceLikeItem> *sourceItem;

+ (id /* block */)childItemComparator;
+ (id)supportedServiceTypes;

- (void).cxx_destruct;
- (id)_createItemProviders;
- (id)_isConfiguredControlItemForItem:(id)arg1;
- (id)accessory;
- (bool)canToggleConfigurationStateForItem:(id)arg1;
- (id)childServiceItemProvider;
- (long long)configurationStateForItem:(id)arg1;
- (unsigned long long)editingMode;
- (id)home;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 sourceItem:(id)arg3 mode:(unsigned long long)arg4;
- (id)itemProviders;
- (void)setChildServiceItemProvider:(id)arg1;
- (id)sourceItem;
- (id)toggleConfigurationStateForItem:(id)arg1;

@end
