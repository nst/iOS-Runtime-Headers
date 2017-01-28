/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightReceiver.framework/SpotlightReceiver
 */

@interface SpotlightReceiverDelegate : NSObject <NSXPCListenerDelegate, SpotlightReceiverJob> {
    NSMutableSet * _connections;
    NSObject<SpotlightReceiver> * _receiver;
}

@property (nonatomic, retain) NSMutableSet *connections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<SpotlightReceiver> *receiver;
@property (readonly) Class superclass;

+ (void)initialize;
+ (void)startListening:(id)arg1 withReceiver:(id)arg2;

- (void).cxx_destruct;
- (void)addInteraction:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 completionHandler:(id)arg4;
- (void)addUserActions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 completionHandler:(id)arg4;
- (id)connections;
- (void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2 completionHandler:(id)arg3;
- (void)deleteFromBundle:(id)arg1 sinceDate:(id)arg2 domains:(id)arg3 deletes:(id)arg4 completionHandler:(id)arg5;
- (void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 completionHandler:(id)arg4;
- (void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 completionHandler:(id)arg4;
- (void)fetchSetupInfoWithCompletionHandler:(id)arg1;
- (void)indexFromBundle:(id)arg1 protectionClass:(id)arg2 items:(id)arg3 itemsContent:(id)arg4 completionHandler:(id)arg5;
- (id)initWithReceiver:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)purgeFromBundle:(id)arg1 identifiers:(id)arg2 completionHandler:(id)arg3;
- (id)receiver;
- (void)setConnections:(id)arg1;
- (id)xpcInterface;

@end
