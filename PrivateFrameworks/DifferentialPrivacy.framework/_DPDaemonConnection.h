/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPDaemonConnection : NSObject <_DPDaemonProtocol> {
    NSXPCConnection * _daemonConnection;
}

@property (nonatomic, readonly) NSXPCConnection *daemonConnection;

+ (id)daemonConnection;

- (void).cxx_destruct;
- (id)daemonConnection;
- (void)dealloc;
- (id)init;
- (void)recordNumbers:(id)arg1 forKey:(id)arg2 withReply:(id)arg3;
- (void)recordStrings:(id)arg1 forKey:(id)arg2 withReply:(id)arg3;
- (void)recordWords:(id)arg1 forKey:(id)arg2 withReply:(id)arg3;

@end