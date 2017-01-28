/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
 */

@interface NCInteractiveNotificationViewController : UIViewController <NCInteractiveNotificationServiceInterface> {
    NSDictionary * _context;
    double  _maximumHeight;
    bool  _modal;
}

@property (nonatomic, copy) NSDictionary *context;
@property (nonatomic) double maximumHeight;
@property (getter=isModal, nonatomic) bool modal;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (void)_didChangeRevealPercent:(double)arg1;
- (void)_getActionContextWithCompletion:(id)arg1;
- (void)_getActionTitlesWithCompletion:(id)arg1;
- (void)_getInitialStateWithCompletion:(id)arg1;
- (void)_handleActionAtIndex:(unsigned long long)arg1;
- (void)_handleActionIdentifier:(id)arg1;
- (void)_interactiveNotificationDidAppear;
- (void)_proximityStateDidChange:(bool)arg1;
- (void)_setContext:(id)arg1;
- (void)_setMaximumHeight:(double)arg1;
- (void)_setModal:(bool)arg1;
- (void)_willPresentFromActionIdentifier:(id)arg1;
- (id)accessoryViewService;
- (id)actionContext;
- (id)actionTitles;
- (double)bottomOverhangHeight;
- (id)context;
- (void)didChangeRevealPercent:(double)arg1;
- (void)dismissWithContext:(id)arg1;
- (void)handleActionAtIndex:(unsigned long long)arg1;
- (void)handleActionIdentifier:(id)arg1;
- (id)inlayViewService;
- (void)interactiveNotificationDidAppear;
- (bool)isModal;
- (double)maximumHeight;
- (double)preferredContentHeight;
- (void)proximityStateDidChange:(bool)arg1;
- (void)requestDismissalEnabled:(bool)arg1;
- (void)requestPreferredContentHeight:(double)arg1;
- (void)requestProximityMonitoringEnabled:(bool)arg1;
- (void)setActionEnabled:(bool)arg1 atIndex:(unsigned long long)arg2;
- (void)setContext:(id)arg1;
- (void)setMaximumHeight:(double)arg1;
- (void)setModal:(bool)arg1;
- (bool)showsKeyboard;
- (void)viewDidLoad;
- (void)willPresentFromActionIdentifier:(id)arg1;

@end
