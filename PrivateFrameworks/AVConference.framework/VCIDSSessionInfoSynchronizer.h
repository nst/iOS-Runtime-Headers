/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCIDSSessionInfoSynchronizer : NSObject {
    int  _bytesReceivedToReport;
    int  _bytesSentToReport;
    VCConnectionManager * _connectionManager;
    unsigned int  _currentParticipantGenerationCounter;
    id  _delegate;
    NSNumber * _duplicationLinkID;
    id /* block */  _errorReponseCallback;
    bool  _isSessionInfoErrorResponseReported;
    int  _lastProcessedBytesReceived;
    int  _lastProcessedBytesSent;
    double  _lastUpdateTimestamp;
    int  _maxReceivedRate;
    int  _maxSentRate;
    int  _minReceivedRate;
    int  _minSentRate;
    id /* block */  _peerPublishedStreamCallback;
    NSMutableDictionary * _peerPublishedStreams;
    id /* block */  _peerSubscribedStreamCallback;
    NSMutableArray * _peerSubscribedStreams;
    NSNumber * _primaryLinkID;
    NSMutableArray * _publishedStreams;
    id  _reportingAgentWeak;
    int  _sessionInfoRequestBytesUsed;
    int  _sessionInfoResponseBytesUsed;
    NSObject<OS_dispatch_queue> * _stateQueue;
    NSMutableDictionary * _subscribedStreams;
}

@property (nonatomic, retain) NSNumber *duplicationLinkID;
@property (nonatomic, copy) id /* block */ errorReponseCallback;
@property (nonatomic, copy) id /* block */ peerPublishedStreamCallback;
@property (nonatomic, copy) id /* block */ peerSubscribedStreamCallback;
@property (nonatomic, retain) NSNumber *primaryLinkID;
@property (readonly) id reportingAgent;

- (void)checkVCIDSSessionInfoNeedUpdate:(unsigned char)arg1;
- (void)dealloc;
- (void)deregisterPeriodicTask;
- (id)duplicationLinkID;
- (id /* block */)errorReponseCallback;
- (void)flushRealTimeReportingStats;
- (id)initWithDelegate:(id)arg1 connectionManager:(id)arg2 reportingAgent:(id)arg3;
- (void)optInStreamIDsForConnection:(id)arg1;
- (void)optInStreamIDsForNewPrimaryConnection:(id)arg1 oldPrimaryConnection:(id)arg2;
- (void)optOutStreamIDsForNonPrimaryConnection:(id)arg1 sentOnConnection:(id)arg2;
- (id /* block */)peerPublishedStreamCallback;
- (id /* block */)peerSubscribedStreamCallback;
- (void)periodicTask:(void*)arg1;
- (id)primaryLinkID;
- (void)registerPeriodicTask;
- (id)reportingAgent;
- (void)resetParticipantGenerationCounter;
- (id)sessionInfoSynchronizerDelegate;
- (void)setDuplicationLinkID:(id)arg1;
- (void)setErrorReponseCallback:(id /* block */)arg1;
- (void)setErrorResponseCallback:(id /* block */)arg1;
- (void)setPeerPublishedStreamCallback:(id /* block */)arg1;
- (void)setPeerSubscribedStreamCallback:(id /* block */)arg1;
- (void)setPrimaryLinkID:(id)arg1;
- (void)setVCIDSSessionInfoPublishedStreamIDs:(id)arg1;
- (void)setVCIDSSessionInfoSubscribedStreamIDs:(id)arg1;
- (void)updateVCIDSSessionInfoResponse:(id)arg1;

@end
