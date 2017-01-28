/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
 */

@interface CTCellularPlanManager : NSObject <CTCellularPlanClientDelegate> {
    NSXPCConnection * _connection;
    NSData * _cookieData;
    NSString * _lastSessionId;
    struct dispatch_queue_s { } * _queue;
    NSMutableArray * _subscriptionCompletions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void)_connect_sync;
- (void)_ensureConnected_sync;
- (void)_plansForRenewal:(bool)arg1 progress:(id)arg2 completion:(id)arg3 latitude:(id)arg4 longitude:(id)arg5 additionalParameters:(id)arg6;
- (void)_reconnect;
- (void)carrierHandoffToken:(id)arg1;
- (void)connectionSettings:(id)arg1;
- (void)dealloc;
- (void)didProvisionEsimWithIccid:(id)arg1;
- (void)didPurchasePlanWithIccid:(id)arg1 downloadProfile:(bool)arg2;
- (void)didSelectPlanItem:(id)arg1 completion:(id)arg2;
- (void)expirePlan;
- (void)getCurrentPlanType:(id)arg1;
- (void)getDeviceInfo:(id)arg1;
- (void)getESimServerURL:(id)arg1;
- (void)getIMEIPrefix:(id)arg1;
- (void)getSelectedEnv:(id)arg1;
- (void)getSelectedProxy:(id)arg1;
- (id)init;
- (void)isAddButtonEnabled:(id)arg1;
- (void)isMultipleDataPlanSupportAvailable:(id)arg1;
- (void)isNewDataPlanCapable:(id)arg1;
- (void)isRoamingPlanSupportAvailable:(id)arg1;
- (void)latitudeLongitudeOverride:(id)arg1;
- (void)launchSequoia;
- (void)manageAccountForPlan:(id)arg1 completion:(id)arg2;
- (void)mccMncOverride:(id)arg1;
- (void)openInternalUrlId:(long long)arg1;
- (void)planInfoDidUpdate;
- (void)planItemsWithCompletion:(id)arg1;
- (void)plansForRenewalWithCompletion:(id)arg1;
- (void)plansForRenewalWithProgress:(id)arg1 andCompletion:(id)arg2;
- (void)plansWithCompletion:(id)arg1;
- (void)plansWithCompletion:(id)arg1 latitude:(id)arg2 longitude:(id)arg3;
- (void)plansWithProgress:(id)arg1 andCompletion:(id)arg2;
- (void)plansWithProgress:(id)arg1 andCompletion:(id)arg2 additionalParameters:(id)arg3;
- (void)setActivePlan:(id)arg1 completion:(id)arg2;
- (void)setESimServerURL:(id)arg1;
- (void)setIMEIPrefix:(id)arg1;
- (void)setLatitude:(id)arg1 andLongitude:(id)arg2;
- (void)setMcc:(long long)arg1 andMnc:(long long)arg2;
- (void)setSelectedEnv:(long long)arg1;
- (void)setSelectedProxy:(long long)arg1;
- (void)setUserInPurchaseFlow:(bool)arg1;
- (void)shouldShowPlanList:(id)arg1;
- (void)subscriptionDetailsForCompletion:(id)arg1;
- (void)subscriptionDetailsWithCompletion:(id)arg1;
- (void)triggerAddNewDataPlan:(id)arg1;
- (void)updatePlansDatabase;
- (void)willDisplayPlanItems;

@end
