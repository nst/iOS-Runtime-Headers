/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFilterExtensionProviderContext : NEExtensionProviderContext <NEFilterExtensionProviderHostProtocol, NEFilterExtensionProviderProtocol> {
    NSString * _description;
    long long  _onceToken;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)queue;
- (void)setExtensionIdentifier:(id)arg1 deviceIdentifier:(id)arg2;
- (void)setQueue:(id)arg1;
- (void)startFilterWithOptions:(id)arg1 completionHandler:(id)arg2;
- (void)stopWithReason:(int)arg1;
- (void)updateConfiguration:(id)arg1;

@end
