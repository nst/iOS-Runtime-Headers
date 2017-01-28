/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
 */

@interface CDDXPCConnection : NSObject {
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    CDDebug * _debug;
    bool  _hasValidConnection;
    NSObject<OS_dispatch_queue> * _replyQueue;
    long long  _sequenceNumber;
    NSString * _serviceName;
}

@property (readonly) CDDebug *debug;
@property (readonly) NSString *serviceName;

- (void).cxx_destruct;
- (void)cancelConnection;
- (id)connection;
- (void)dealloc;
- (id)debug;
- (bool)establishConnection;
- (id)initWithMachServiceName:(id)arg1 dispatchQueue:(id)arg2;
- (void)invalidateConnection;
- (id)makeStashWithId:(unsigned long long)arg1;
- (void)sendBarrier:(id)arg1;
- (bool)sendMessageAsync:(id)arg1 withReplyHandler:(id)arg2;
- (unsigned long long)sequenceNumber;
- (id)serviceName;

@end
