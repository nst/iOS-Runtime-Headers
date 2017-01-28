/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
 */

@interface CLIndoorMaintenance : CLIndoorXPCProvider <CLIndoorXPCProviderImplementation>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)doSynchronousXPC:(id)arg1 description:(const char *)arg2 waitForever:(bool)arg3;
- (id)endpointName;
- (void)eraseEverything;
- (void)numFloors:(id)arg1;
- (void)onQueueEraseEverything:(id)arg1;
- (void)onQueueNumFloors:(id)arg1;
- (void)onQueuePrefetch:(id)arg1 callback:(id)arg2 when:(unsigned char)arg3;
- (void)onQueueShutdown;
- (void)prefetch:(id)arg1;
- (void)prefetchSynchronous:(id)arg1;
- (id)remoteObjectProtocol;
- (void)retrieveLocationRelevancyDurationWithCompletionHandler:(id)arg1;
- (void)shutdown;
- (bool)withinQueueCanReinitializeRemoteState;
- (void)withinQueueInvalidateState;
- (id)withinQueuePermanentShutdownReason;
- (void)withinQueueReconnectInvalidatedConnectionFailed:(id)arg1;
- (void)withinQueueReinitializeRemoteState;

@end
