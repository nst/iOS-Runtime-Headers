/* Generated by RuntimeBrowser
   Image: /usr/lib/libIOAccessoryManager.dylib
 */

@interface ResourceArbiterClient : NSObject {
    int  _clientPriority;
    <ResourceArbiterClientDelegate> * _delegate;
    unsigned int  _ioConnect;
    unsigned int  _ioNotificationObject;
    struct IONotificationPort { } * _ioNotificationPort;
    unsigned int  _ioService;
    NSObject<OS_dispatch_queue> * _notificationPortQueue;
    int  _pendingResourceRequest;
    bool  _resourceAccessStatus;
    NSObject<OS_dispatch_semaphore> * _sema;
}

@property (nonatomic, readonly) int clientPriority;
@property (nonatomic) <ResourceArbiterClientDelegate> *delegate;
@property (nonatomic, readonly) unsigned int ioService;
@property (nonatomic, readonly) int pendingResourceRequest;
@property (nonatomic, readonly) bool resourceAccessStatus;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *sema;

- (void).cxx_destruct;
- (void)_processResourceAccessStatus:(bool)arg1;
- (bool)asynchRequestResourceAccess:(bool)arg1;
- (int)clientPriority;
- (void)dealloc;
- (id)delegate;
- (id)initWithID:(int)arg1;
- (unsigned int)ioService;
- (int)pendingResourceRequest;
- (void)releaseResourceAccess;
- (void)resourceAccessGranted;
- (void)resourceAccessRevoked;
- (bool)resourceAccessStatus;
- (id)sema;
- (void)setDelegate:(id)arg1;
- (bool)synchRequestResourceAccess;

@end
