/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKContinuityCoordinator : NSObject {
    NSUserActivity * _currentUserActivity;
    NSUserActivity * _getPaymentPassesUserActivity;
    NSUserActivity * _individualPassUserActivity;
    NSUserActivity * _passListUserActivity;
    NSUserActivity * _provisionPassUserActivity;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) NSUserActivity *currentUserActivity;
@property (nonatomic, retain) NSUserActivity *getPaymentPassesUserActivity;
@property (nonatomic, retain) NSUserActivity *individualPassUserActivity;
@property (nonatomic, retain) NSUserActivity *passListUserActivity;
@property (nonatomic, retain) NSUserActivity *provisionPassUserActivity;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedContinuityCoordinator;

- (void).cxx_destruct;
- (id)_init;
- (void)_saveUserActivity:(id)arg1;
- (id)_skeletonBridgeUserActivity;
- (id)currentUserActivity;
- (void)dealloc;
- (id)getPaymentPassesUserActivity;
- (id)individualPassUserActivity;
- (id)init;
- (void)invalidateAllActivities;
- (id)passListUserActivity;
- (id)provisionPassUserActivity;
- (id)queue;
- (void)setCurrentUserActivity:(id)arg1;
- (void)setGetPaymentPassesUserActivity:(id)arg1;
- (void)setIndividualPassUserActivity:(id)arg1;
- (void)setPassListUserActivity:(id)arg1;
- (void)setProvisionPassUserActivity:(id)arg1;
- (void)setQueue:(id)arg1;
- (id)userActivityForPassWithUniqueID:(id)arg1;
- (void)userNeedsPaymentPasses;
- (void)userNeedsToProvisionPassWithUniqueID:(id)arg1;
- (void)userViewingPassList;
- (void)userViewingPassWithUniqueID:(id)arg1 isPaymentPass:(bool)arg2;

@end
