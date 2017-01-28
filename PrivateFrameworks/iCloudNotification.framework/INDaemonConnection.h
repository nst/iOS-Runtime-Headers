/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudNotification.framework/iCloudNotification
 */

@interface INDaemonConnection : NSObject {
    NSXPCConnection * _connection;
}

- (void).cxx_destruct;
- (bool)clearAllRegistrationDigestsWithError:(id*)arg1;
- (void)dealloc;
- (id)diagnosticReport;
- (id)init;
- (bool)registerAccount:(id)arg1 foriCloudNotificationsWithReason:(unsigned long long)arg2 error:(id*)arg3;
- (bool)unregisterAccount:(id)arg1 fromiCloudNotificationsWithError:(id*)arg2;

@end
