/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
 */

@interface CommunicationsFilterBlockList : NSObject {
    CommunicationsFilterBlockListCache * _cache;
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _recentObjectsTested;
    int  _retries;
}

+ (id)sharedInstance;

- (bool)_connect;
- (bool)_disconnect;
- (void)_disconnected;
- (id)_sendSynchronousXPCRequest:(id)arg1;
- (void)_sendXPCRequest:(id)arg1 completionBlock:(id)arg2;
- (void)addItemForAllServices:(id)arg1;
- (id)copyAllItems;
- (void)dealloc;
- (id)init;
- (bool)isItemInList:(id)arg1;
- (void)removeItemForAllServices:(id)arg1;

@end
