/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIApplicationRouter : NSObject

+ (void)_amsBagURLForKey:(id)arg1 withCompletion:(id /* block */)arg2;
+ (void)_dismissPresentedViewControllerWithCompletion:(id /* block */)arg1;
+ (void)_handleAccountSettingsPresentationWithViewController:(id)arg1;
+ (bool)_handleDocumentDataSource:(id)arg1 targetResponder:(id)arg2 viewElement:(id)arg3 completion:(id /* block */)arg4;
+ (void)_performForType:(long long)arg1 targetResponder:(id)arg2 viewElement:(id)arg3 eventDataSource:(id)arg4;
+ (id)_viewControllerWithIdentifier:(id)arg1;
+ (id)currentNavigationController;
+ (void)dismissOrPopLastViewControllerWithCompletion:(id /* block */)arg1;
+ (void)dismissOrPopViewControllerWithId:(id)arg1 completion:(id /* block */)arg2;
+ (void)dismissPresentedViewController;
+ (id)eventDataSourceForEvent:(id)arg1 viewElement:(id)arg2;
+ (bool)handleAccountSettingsEvent:(id)arg1 urlString:(id)arg2 amsBagKey:(id)arg3;
+ (bool)handleEvent:(id)arg1 targetResponder:(id)arg2 viewElement:(id)arg3 extraInfo:(id*)arg4;
+ (id)topMostVisibleViewController;
+ (id)topPresentedViewController;

@end
