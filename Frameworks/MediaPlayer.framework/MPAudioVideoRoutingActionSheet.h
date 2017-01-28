/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAudioVideoRoutingActionSheet : UIActionSheet <UIActionSheetDelegate> {
    int  _airPlayPasswordAlertDidAppearToken;
    bool  _airPlayPasswordAlertDidAppearTokenIsValid;
    long long  _avItemType;
    id  _completionHandler;
    NSArray * _displayedRoutes;
    MPAVRoutingController * _routingController;
    bool  _shouldPauseAfterDismissing;
    UIViewController * _viewControllerForActionSheet;
    UIWindow * _windowForActionSheet;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_availableRoutes;
- (void)_debugButtonAction:(id)arg1;
- (bool)_isDeviceVideoRoute:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)dealloc;
- (id)initWithType:(long long)arg1;
- (id)initWithType:(long long)arg1 routingController:(id)arg2;
- (void)layoutSubviews;
- (void)showFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(bool)arg3 withCompletionHandler:(id)arg4;
- (void)showInPopoverFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 backgroundStyle:(long long)arg3 animated:(bool)arg4 completionHandler:(id)arg5;
- (void)showWithValidInterfaceOrientationMaskBlock:(id)arg1 completionHandler:(id)arg2;
- (void)showWithValidInterfaceOrientationMaskBlock:(id)arg1 windowLevel:(double)arg2 completionHandler:(id)arg3;
- (void)showWithValidInterfaceOrientationsBlock:(id)arg1 completionHandler:(id)arg2;

@end
