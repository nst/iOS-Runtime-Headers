/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPrefsDaemon : NSObject {
    NSObject<OS_xpc_object> * _listener;
    const char * _name;
    int  _role;
    unsigned int * _shmem;
    struct __CFSet { } * _sourceCache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _sourceCacheLock;
    bool  _testMode;
}

- (void)_initializeShmemPage:(void *)arg1; // needs 1 arg types, found 2: /* Warning: Unrecognized filer type: '' using 'void*' */ void***, unsigned int
- (void)checkIn;
- (void)flushDomainInAgents:(const char *)arg1;
- (void)flushDomainInDaemon:(const char *)arg1;
- (void)getShmemName:(char *)arg1 bufLen:(unsigned long long)arg2;
- (void)handleAgentCheckInMessage:(id)arg1;
- (void)handleError:(id)arg1;
- (void)handleFlushManagedMessage:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)handleFlushSourceForDomainMessage:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)handleMessage:(id)arg1 fromPeer:(id)arg2 replyHandler:(id /* block */)arg3;
- (void)handleMultiMessage:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)handleSourceMessage:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)handleUserDeletedMessage:(id)arg1 replyHandler:(id /* block */)arg2;
- (id)initWithRole:(int)arg1 testMode:(bool)arg2;
- (bool)isInTestMode;
- (id)listener;
- (void)logDomainInconsistencyForProcess:(int)arg1 message:(id)arg2 source:(id)arg3;
- (int)role;
- (/* Warning: Unrecognized filer type: '' using 'void*' */ void**)shmem:(SEL)arg1;
- (void)synchronousWithSourceCache:(id /* block */)arg1;
- (unsigned int)userID;
- (void)withSourceForDomain:(struct __CFString { }*)arg1 inContainer:(struct __CFString { }*)arg2 user:(struct __CFString { }*)arg3 byHost:(bool)arg4 managed:(bool)arg5 managedUsesContainer:(bool)arg6 cloudStoreEntitlement:(id)arg7 cloudConfigurationPath:(struct __CFString { }*)arg8 performWithSourceLock:(id /* block */)arg9 afterReleasingSourceLock:(id /* block */)arg10;
- (void)withSources:(id /* block */)arg1;

@end
