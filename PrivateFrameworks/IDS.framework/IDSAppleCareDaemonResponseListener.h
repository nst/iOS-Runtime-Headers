/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSAppleCareDaemonResponseListener : NSObject <IDSDaemonListenerProtocol> {
    id  _disconnectedBlock;
    IDSDaemonRequestTimer * _requestTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)applecareResponseForRequestID:(id)arg1 withError:(id)arg2;
- (void)daemonDisconnected;
- (void)dealloc;
- (id)initWithDisconnectedBlockAndNoTimeout:(id)arg1;
- (id)initWithRequestTimer:(id)arg1;

@end