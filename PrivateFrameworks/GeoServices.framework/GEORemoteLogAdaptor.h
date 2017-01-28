/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORemoteLogAdaptor : GEOBaseLogAdaptor <GEOPBSessionRequesterDelegate> {
    id  _backgroundTaskEnd;
    id  _backgroundTaskStart;
    NSString * _debugRequestName;
    NSURL * _remoteURL;
    GEOLogMessageCollectionRequest * _request;
    NSLock * _requestLock;
    GEORequester * _requester;
    NSMapTable * _requesterToBackgroundTask;
    NSObject<OS_dispatch_source> * _sendLogMessageTimer;
    NSLock * _sendLogMessageTimerLock;
}

@property (nonatomic, copy) id backgroundTaskEnd;
@property (nonatomic, copy) id backgroundTaskStart;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSString *debugRequestName;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSURL *remoteURL;
@property (readonly) Class superclass;

- (void)_cleanupRequester;
- (void)_cleanupSendLogMessageTimer;
- (void)_endBackgroundTaskForRequester:(id)arg1;
- (void)_prepareRequest;
- (void)_scheduleSendLogMessageTimer;
- (void)_sendPendingLogMessageToRemoteServer;
- (void)_startBackgroundTaskForRequester:(id)arg1;
- (id)backgroundTaskEnd;
- (id)backgroundTaskStart;
- (void)dealloc;
- (id)debugRequestName;
- (void)flushLogs;
- (id)init;
- (id)initWithRemoteURL:(id)arg1 debugRequestName:(id)arg2 supportedTypes:(id)arg3 supportedSubTypes:(id)arg4;
- (void)queueLogMessage:(id)arg1;
- (id)remoteURL;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)setBackgroundTaskEnd:(id)arg1;
- (void)setBackgroundTaskStart:(id)arg1;
- (void)setDebugRequestName:(id)arg1;
- (void)setRemoteURL:(id)arg1;

@end
