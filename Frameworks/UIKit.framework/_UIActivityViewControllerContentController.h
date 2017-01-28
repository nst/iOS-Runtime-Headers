/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIActivityViewControllerContentController : UIViewController <SFAirDropActivityViewControllerDelegate, UIActivityGroupViewControllerDataSource, UIActivityGroupViewControllerDelegate, _UIActivityViewControllerContentControllerAPI> {
    _UIActivityGroupListViewController * _activityGroupListViewController;
    SFAirDropActivityViewController * _airDropViewController;
    <_UIActivityViewControllerContentControllerDelegate> * _delegate;
}

@property (nonatomic, retain) _UIActivityGroupListViewController *activityGroupListViewController;
@property (nonatomic, retain) SFAirDropActivityViewController *airDropViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <_UIActivityViewControllerContentControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityGroupListViewController;
- (id)activityGroupViewController:(id)arg1 availableActivitiesInCategory:(long long)arg2;
- (void)activityGroupViewController:(id)arg1 didSelectActivity:(id)arg2;
- (void)airDropActivityDidSuccessfullyCompleteTransfer;
- (void)airDropActivityDidSuccessfullyStartTransfer;
- (void)airDropActivityRequestingSharedItemsWithCompletionHandler:(id)arg1;
- (void)airDropActivityRequestingSharedItemsWithOptions:(id)arg1 completionHandler:(id)arg2;
- (id)airDropViewController;
- (void)cleanupWithSelectedActivityType:(id)arg1;
- (id)createActivityGroupViewControllerForItems:(id)arg1 category:(long long)arg2 userDefaults:(id)arg3;
- (void)createContentViewControllersWithActivityItems:(id)arg1 availableActivities:(id)arg2 excludedActivityTypes:(id)arg3 includedActivityTypes:(id)arg4 excludedActivityCategories:(long long)arg5 sourceIsManaged:(bool)arg6 allowsEmbedding:(bool)arg7;
- (id)delegate;
- (double)displayHeight;
- (bool)hasAirDrop;
- (id)initWithDelegate:(id)arg1;
- (void)invalidateLayout;
- (void)reloadImageForActivityType:(id)arg1;
- (void)setActivityGroupListViewController:(id)arg1;
- (void)setAirDropViewController:(id)arg1;
- (void)setContentViewController:(id)arg1;
- (void)setDarkStyleOnLegacyApp:(bool)arg1;
- (void)setNeedsRequestingSharedItems;
- (void)setOtherActivityViewPresented:(bool)arg1;
- (void)setSharedItemsAvailable:(bool)arg1;
- (void)updateActivities:(id)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })updatePreferredContentSizeWithWidth:(double)arg1;
- (void)viewDidLoad;

@end
