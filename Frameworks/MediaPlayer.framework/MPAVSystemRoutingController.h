/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVSystemRoutingController : NSObject {
    long long  _clientDiscoveryMode;
    NSPointerArray * _clientRoutingControllers;
    int  _debugNotifyToken;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

+ (id)sharedRoutingController;

- (void).cxx_destruct;
- (void)_clientRoutingControllerDidUpdateDiscoveryModeNotification:(id)arg1;
- (void)_debugLogSystemControllerState;
- (id)_init;
- (void)_onQueueUpdateClientRouteDiscoveryMode;
- (void)_updateClientRouteDiscoveryMode;
- (void)dealloc;
- (id)init;
- (void)registerClientRoutingController:(id)arg1;
- (void)unregisterClientRoutingController:(id)arg1;

@end
