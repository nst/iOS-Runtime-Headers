/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDLogger : NSObject {
    NSData * _activeAID;
    AWDServerConnection * _awdServer;
    NSObject<OS_dispatch_queue> * _awdSubmissionQueue;
    NSData * _deviceExceptionUuid;
    unsigned long long  _middlewareExceptionCount;
    unsigned long long  _previousCardIngestionSessionState;
    unsigned long long  _previousExpressFelicaState;
    unsigned long long  _previousTransactionState;
    unsigned long long  _previousVASTransactionState;
    NSData * _tsmUuid;
    unsigned long long  _tsmUuidRefTimestamp;
    NSUserDefaults * _userDefault;
    NSData * _uuid;
    unsigned long long  _uuidRefTimestamp;
    NFAWDVersionInfo * _versionInfo;
}

@property (copy) NSData *activeAID;

+ (id)sharedAWDLogger;

- (id)activeAID;
- (void)dealloc;
- (void)enableQueryMetricsListener;
- (id)generateUUID;
- (unsigned long long)getTimestamp;
- (bool)incrementMiddlewareExceptionCountWithReset:(bool)arg1;
- (id)init;
- (void)postAWDAPNReceived;
- (void)postAWDCRSActivationTimerExpiredWithVersion:(unsigned int)arg1 withStatus:(unsigned int)arg2;
- (void)postAWDCRSAuthECommerceWithParameters:(id)arg1;
- (void)postAWDCRSAuthInitEventWithStatus:(unsigned int)arg1;
- (void)postAWDCRSAuthWithStatus:(unsigned int)arg1 withMethod:(unsigned int)arg2;
- (void)postAWDCRSDeAuthWithStatus:(unsigned int)arg1;
- (void)postAWDCardIngestionReaderStateChangeWithType:(unsigned int)arg1 errorCode:(unsigned int)arg2;
- (void)postAWDCardIngestionSessionStateChangeTo:(unsigned int)arg1;
- (void)postAWDEvent:(id)arg1;
- (void)postAWDExpressFelicaStarted:(bool)arg1;
- (void)postAWDFieldEventWithFieldOn:(bool)arg1 withTechnology:(unsigned int)arg2;
- (void)postAWDHCIEndOfTransactionEventWithParameters:(id)arg1;
- (void)postAWDHCIStartOfTransactionEventWithVersion:(unsigned int)arg1 withStatus:(unsigned int)arg2;
- (void)postAWDMiddlewareException:(unsigned int)arg1 errorType:(unsigned int)arg2 errorCode:(unsigned int)arg3 checkMaxExceptionCounter:(bool)arg4;
- (void)postAWDPLLUnlockEvent;
- (void)postAWDReaderModeExceptionForType:(unsigned int)arg1 withErrorCode:(unsigned int)arg2;
- (void)postAWDRestrictedModeFromContactlessMode:(bool)arg1 isIcf:(bool)arg2;
- (void)postAWDSERemovedEvent:(unsigned int)arg1 isIcf:(bool)arg2 hasCardEmulationStarted:(bool)arg3 hasExpressTransitStarted:(bool)arg4;
- (void)postAWDSESelectEventWithAID:(id)arg1;
- (void)postAWDTSMConnectivityException:(unsigned int)arg1;
- (void)postAWDTSMEndOfSession;
- (void)postAWDTSMEndWithParameters:(id)arg1;
- (void)postAWDTSMStartWithParameters:(id)arg1;
- (void)postAWDTransactionEndOfOperation;
- (void)postAWDTransactionLastRAPDU;
- (void)postAWDVASGetData:(id)arg1;
- (void)postAWDVASSelectOSE:(id)arg1;
- (void)postAWDVASTransactionException:(unsigned int)arg1 withSWStatus:(unsigned int)arg2;
- (void)postAWDVersionInfo:(id)arg1;
- (void)setActiveAID:(id)arg1;
- (void)updateStats:(id)arg1 reset:(bool)arg2;

@end
