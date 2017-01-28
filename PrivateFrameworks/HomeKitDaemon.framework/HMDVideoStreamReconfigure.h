/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDVideoStreamReconfigure : NSObject <HMFLogging, HMFTimerDelegate> {
    <HMDVideoStreamReconfigureDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    HMFTimer * _downgradeDebouceTimer;
    NSDictionary * _downlinkQualityInfo;
    bool  _reconfigurationMode;
    NSMutableArray * _reconfigureEvents;
    HMDCameraSessionID * _sessionID;
    HMFTimer * _upgradeDebouceTimer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly) <HMDVideoStreamReconfigureDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HMFTimer *downgradeDebouceTimer;
@property (nonatomic, retain) NSDictionary *downlinkQualityInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool reconfigurationMode;
@property (nonatomic, readonly) NSMutableArray *reconfigureEvents;
@property (nonatomic, readonly) HMDCameraSessionID *sessionID;
@property (readonly) Class superclass;
@property (nonatomic, retain) HMFTimer *upgradeDebouceTimer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_addReconfigureEvent:(unsigned long long)arg1;
- (void)_callNetworkDeteriorated;
- (void)_callNetworkImproved;
- (bool)_isReconfigureFlipFlop;
- (void)_processDownlinkQuality;
- (void)_processDownlinkQualityChanged:(id)arg1;
- (id)delegate;
- (id)delegateQueue;
- (id)downgradeDebouceTimer;
- (void)downlinkQualityChanged:(id)arg1;
- (id)downlinkQualityInfo;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;
- (id)logIdentifier;
- (bool)reconfigurationMode;
- (id)reconfigureEvents;
- (id)sessionID;
- (void)setDowngradeDebouceTimer:(id)arg1;
- (void)setDownlinkQualityInfo:(id)arg1;
- (void)setReconfigurationMode:(bool)arg1;
- (void)setUpgradeDebouceTimer:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (void)updateReconfigurationMode:(bool)arg1;
- (id)upgradeDebouceTimer;
- (id)workQueue;

@end
