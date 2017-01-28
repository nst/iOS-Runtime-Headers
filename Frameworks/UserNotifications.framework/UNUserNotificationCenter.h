/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNUserNotificationCenter : NSObject <UNUserNotificationServiceConnectionObserver> {
    NSString * _bundleIdentifier;
    <UNUserNotificationCenterDelegate> * _delegate;
    NSMutableArray * _observers;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UNUserNotificationCenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *observers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsContentExtensions;

+ (id)currentNotificationCenter;
+ (bool)supportsContentExtensions;

- (void).cxx_destruct;
- (void)addNotificationRequest:(id)arg1;
- (void)addNotificationRequest:(id)arg1 withCompletionHandler:(id)arg2;
- (void)addNotificationRequests:(id)arg1 withCompletionHandler:(id)arg2;
- (void)addObserver:(id)arg1;
- (id)bundleIdentifier;
- (id)delegate;
- (void)didChangePendingNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)didDeliverNotifications:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)getDeliveredNotificationsWithCompletionHandler:(id)arg1;
- (void)getNotificationCategoriesWithCompletionHandler:(id)arg1;
- (void)getNotificationSettingsWithCompletionHandler:(id)arg1;
- (void)getPendingNotificationRequestsWithCompletionHandler:(id)arg1;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)observers;
- (void)removeAllDeliveredNotifications;
- (void)removeAllPendingNotificationRequests;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)removePendingNotificationRequestsWithIdentifiers:(id)arg1;
- (void)removeSimilarNotificationRequests:(id)arg1;
- (void)removeSimilarNotificationRequests:(id)arg1 withCompletionHandler:(id)arg2;
- (void)requestAuthorizationWithOptions:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNotificationCategories:(id)arg1;
- (void)setNotificationRequests:(id)arg1;
- (void)setNotificationRequests:(id)arg1 withCompletionHandler:(id)arg2;
- (void)setObservers:(id)arg1;
- (bool)supportsContentExtensions;

@end