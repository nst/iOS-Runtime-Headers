/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

@interface W5Client : NSObject {
    NSXPCConnection * _conn;
    id  _eventCallback;
    bool  _isAdvertising;
    bool  _isBrowsing;
    bool  _isRunning;
    double  _lastRecoveryTimestamp;
    NSMutableDictionary * _mutableDiagnosticsCallbackMap;
    NSMutableArray * _mutableEventIDs;
    NSMutableDictionary * _mutableLogsCallbackMap;
    NSMutableDictionary * _mutablePerformanceCallbackMap;
    NSMutableArray * _mutableUUIDs;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, copy) id eventCallback;

+ (id)sharedClient;

- (void)__cancelAllRequestsAndReply:(id)arg1;
- (void)__cancelRequestWithUUID:(id)arg1 reply:(id)arg2;
- (void)__queryDefaultPairedDeviceAndReply:(id)arg1;
- (void)__queryLocalPeerAndReply:(id)arg1;
- (void)__queryPeerCacheAndReply:(id)arg1;
- (void)__startAdvertisingAndReply:(id)arg1;
- (void)__startBrowsingAndReply:(id)arg1;
- (void)__startMonitoringEvents:(id)arg1 reply:(id)arg2;
- (void)__stopAdvertisingAndReply:(id)arg1;
- (void)__stopBrowsingAndReply:(id)arg1;
- (void)__stopMonitoringEvents:(id)arg1 reply:(id)arg2;
- (void)cancelAllRequests;
- (void)cancelRequestWithUUID:(id)arg1;
- (id)collectLogs:(id)arg1 peer:(id)arg2 update:(id)arg3 diagnostics:(id)arg4 error:(out id*)arg5;
- (id)collectLogs:(id)arg1 peer:(id)arg2 update:(id)arg3 diagnostics:(id)arg4 reply:(id)arg5;
- (void)collectedLogItemID:(long long)arg1 next:(long long)arg2 peer:(id)arg3 completed:(double)arg4 uuid:(id)arg5;
- (void)completedDiagnosticsTest:(id)arg1 next:(id)arg2 peer:(id)arg3 completed:(double)arg4 uuid:(id)arg5;
- (void)dealloc;
- (id)defaultPairedDevice;
- (id)eventCallback;
- (id)init;
- (id)localPeer;
- (id)peerCache;
- (id)queryDebugConfigurationForPeer:(id)arg1 error:(out id*)arg2;
- (void)queryDebugConfigurationForPeer:(id)arg1 reply:(id)arg2;
- (id)queryStatusForPeer:(id)arg1 error:(out id*)arg2;
- (void)queryStatusForPeer:(id)arg1 reply:(id)arg2;
- (void)receivedEvent:(id)arg1;
- (void)run;
- (id)runDiagnosticsTests:(id)arg1 peer:(id)arg2 update:(id)arg3 error:(out id*)arg4;
- (id)runDiagnosticsTests:(id)arg1 peer:(id)arg2 update:(id)arg3 reply:(id)arg4;
- (id)runPerformanceTest:(id)arg1 update:(id)arg2 error:(out id*)arg3;
- (id)runPerformanceTest:(id)arg1 update:(id)arg2 reply:(id)arg3;
- (id)runWiFiSnifferOnChannel:(id)arg1 duration:(double)arg2 peer:(id)arg3 error:(out id*)arg4;
- (id)runWiFiSnifferOnChannel:(id)arg1 duration:(double)arg2 peer:(id)arg3 reply:(id)arg4;
- (bool)setDebugConfiguration:(id)arg1 peer:(id)arg2 error:(out id*)arg3;
- (void)setDebugConfiguration:(id)arg1 peer:(id)arg2 reply:(id)arg3;
- (void)setEventCallback:(id)arg1;
- (void)startAdvertising;
- (void)startBrowsing;
- (void)startMonitoringEvents:(id)arg1;
- (void)stopAdvertising;
- (void)stopBrowsing;
- (void)stopMonitoringEvents:(id)arg1;
- (void)updatedPerformanceTest:(id)arg1 uuid:(id)arg2;

@end
