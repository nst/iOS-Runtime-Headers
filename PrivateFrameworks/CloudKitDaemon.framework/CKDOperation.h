/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDOperation : NSOperation <CKDFlowControllable, CKDURLRequestAuthRetryDelegate, CKDURLRequestMetricsDelegate> {
    CKDOperationMetrics * _MMCSMetrics;
    NSDictionary * _MMCSRequestOptions;
    NSDictionary * _additionalHTTPRequestHeaders;
    bool  _allowsBackgroundNetworking;
    bool  _allowsCellularAccess;
    NSString * _authPromptReason;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSMutableArray * _childOperations;
    NSObject<OS_dispatch_group> * _childOperationsGroup;
    NSString * _clientSuppliedDeviceIdentifier;
    CKDOperationMetrics * _cloudKitMetrics;
    CKDClientContext * _context;
    NSString * _deviceIdentifier;
    NSError * _error;
    NSMutableArray * _finishedChildOperationIDs;
    bool  _isExecuting;
    bool  _isFinished;
    bool  _isLongLived;
    bool  _isProxyOperation;
    NSDate * _metricExecuteStartDate;
    NSString * _operationID;
    NSObject<OS_os_activity> * _osActivity;
    CKDOperation * _parentOperation;
    NSString * _parentSectionID;
    <NSObject> * _powerAssertion;
    bool  _preferAnonymousRequests;
    CKDClientProxy * _proxy;
    CKDURLRequest * _request;
    NSMutableArray * _requestUUIDs;
    NSMutableDictionary * _responseHTTPHeadersByRequestUUID;
    bool  _shouldPipelineFetchAllChangesRequests;
    NSString * _sourceApplicationBundleIdentifier;
    NSString * _sourceApplicationSecondaryIdentifier;
    NSDate * _startDate;
    unsigned long long  _state;
    NSObject<OS_dispatch_group> * _stateTransitionGroup;
    CKTimeLogger * _timeLogger;
    double  _timeoutIntervalForRequest;
    double  _timeoutIntervalForResource;
    bool  _useEncryption;
    UMUserSyncTask * _userSyncTask;
    NSMutableDictionary * _w3cNavigationTimingByRequestUUID;
}

@property (nonatomic, retain) CKDOperationMetrics *MMCSMetrics;
@property (nonatomic, retain) NSDictionary *MMCSRequestOptions;
@property (nonatomic, readonly) unsigned int QOSClass;
@property (nonatomic, retain) NSDictionary *additionalHTTPRequestHeaders;
@property (nonatomic) bool allowsBackgroundNetworking;
@property (nonatomic) bool allowsCellularAccess;
@property (nonatomic, readonly) bool allowsPowerNapScheduling;
@property (nonatomic, retain) NSString *authPromptReason;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) NSMutableArray *childOperations;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *childOperationsGroup;
@property (nonatomic, retain) NSString *clientSuppliedDeviceIdentifier;
@property (nonatomic, retain) CKDOperationMetrics *cloudKitMetrics;
@property (nonatomic, retain) CKDClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *deviceIdentifier;
@property (retain) NSError *error;
@property (nonatomic, retain) NSMutableArray *finishedChildOperationIDs;
@property (nonatomic, readonly) NSString *flowControlKey;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isExecuting;
@property (nonatomic) bool isFinished;
@property (nonatomic, readonly) bool isLongLived;
@property (nonatomic, readonly) bool isProxyOperation;
@property (nonatomic, retain) NSDate *metricExecuteStartDate;
@property (nonatomic, readonly) NSString *operationID;
@property (nonatomic, readonly) CKOperationResult *operationResult;
@property (nonatomic) CKDOperation *parentOperation;
@property (nonatomic, retain) NSString *parentSectionID;
@property (nonatomic, retain) <NSObject> *powerAssertion;
@property (nonatomic) bool preferAnonymousRequests;
@property (nonatomic) CKDClientProxy *proxy;
@property (nonatomic, retain) CKDURLRequest *request;
@property (nonatomic, retain) NSMutableArray *requestUUIDs;
@property (nonatomic, retain) NSMutableDictionary *responseHTTPHeadersByRequestUUID;
@property (nonatomic, readonly) bool shouldCheckAppVersion;
@property (nonatomic) bool shouldPipelineFetchAllChangesRequests;
@property (nonatomic, retain) NSString *sourceApplicationBundleIdentifier;
@property (nonatomic, retain) NSString *sourceApplicationSecondaryIdentifier;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic) unsigned long long state;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *stateTransitionGroup;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKTimeLogger *timeLogger;
@property (nonatomic) double timeoutIntervalForRequest;
@property (nonatomic) double timeoutIntervalForResource;
@property (nonatomic) bool useEncryption;
@property (nonatomic, retain) UMUserSyncTask *userSyncTask;
@property (nonatomic, readonly) bool usesBackgroundSession;
@property (nonatomic, retain) NSMutableDictionary *w3cNavigationTimingByRequestUUID;

+ (id)_globalOperationCallbackQueueForQOS:(long long)arg1;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)CKStatusReportLogGroups;
- (id)CKStatusReportProperties;
- (id)MMCSMetrics;
- (id)MMCSRequestOptions;
- (unsigned int)QOSClass;
- (void)_acquirePowerAssertion;
- (void)_acquirePowerAssertionsForSelfAndParent;
- (bool)_checkAppVersion;
- (void)_combineMetricsWithOperation:(id)arg1;
- (void)_continueOperationStart;
- (void)_dropPowerAssertion;
- (void)_dropPowerAssertionsForSelfAndParent;
- (bool)_errorShouldImpactFlowControl:(id)arg1;
- (void)_finishInternalOnCallbackQueueWithError:(id)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_registerAttemptForOperation;
- (id)_runDurationString;
- (id)_startDateString;
- (id)activityCreate;
- (void)addAndRunChildOperation:(id)arg1;
- (id)additionalHTTPRequestHeaders;
- (bool)allowsBackgroundNetworking;
- (bool)allowsCellularAccess;
- (bool)allowsPowerNapScheduling;
- (id)authPromptReason;
- (void)beginUserSyncTask;
- (id)callbackQueue;
- (void)cancel;
- (id)childOperations;
- (id)childOperationsGroup;
- (id)clientSuppliedDeviceIdentifier;
- (id)cloudKitMetrics;
- (void)configureRequest:(id)arg1;
- (id)context;
- (id)createConcurrentQueue;
- (id)createInactiveConcurrentQueue;
- (id)createInactiveSerialQueue;
- (id)createSerialQueue;
- (void)dealloc;
- (id)description;
- (id)deviceIdentifier;
- (id)error;
- (void)fillOutOperationResult:(id)arg1;
- (void)finishWithError:(id)arg1;
- (id)finishedChildOperationIDs;
- (id)flowControlKey;
- (unsigned long long)hash;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (bool)isConcurrent;
- (bool)isEqual:(id)arg1;
- (bool)isExecuting;
- (bool)isFinished;
- (bool)isLongLived;
- (bool)isProxyOperation;
- (void)main;
- (bool)makeStateTransition;
- (void)makeStateTransition:(bool)arg1;
- (id)metricExecuteStartDate;
- (id)nameForState:(unsigned long long)arg1;
- (id)newChildOperationInfoOfClass:(Class)arg1;
- (id)operationID;
- (id)operationResult;
- (Class)operationResultClass;
- (bool)operationShouldBeFlowControlled;
- (id)parentOperation;
- (id)parentSectionID;
- (id)powerAssertion;
- (bool)preferAnonymousRequests;
- (id)proxy;
- (id)request;
- (void)request:(id)arg1 didFinishWithMetrics:(id)arg2 w3cNavigationTiming:(id)arg3;
- (void)requestDidBeginWaitingForUserAuth:(id)arg1;
- (void)requestDidEndWaitingForUserAuth:(id)arg1;
- (id)requestUUIDs;
- (id)responseHTTPHeadersByRequestUUID;
- (void)setAdditionalHTTPRequestHeaders:(id)arg1;
- (void)setAllowsBackgroundNetworking:(bool)arg1;
- (void)setAllowsCellularAccess:(bool)arg1;
- (void)setAuthPromptReason:(id)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setChildOperations:(id)arg1;
- (void)setChildOperationsGroup:(id)arg1;
- (void)setClientSuppliedDeviceIdentifier:(id)arg1;
- (void)setCloudKitMetrics:(id)arg1;
- (void)setCompletionBlock:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFinishedChildOperationIDs:(id)arg1;
- (void)setIsExecuting:(bool)arg1;
- (void)setIsFinished:(bool)arg1;
- (void)setMMCSMetrics:(id)arg1;
- (void)setMMCSRequestOptions:(id)arg1;
- (void)setMetricExecuteStartDate:(id)arg1;
- (void)setParentOperation:(id)arg1;
- (void)setParentSectionID:(id)arg1;
- (void)setPowerAssertion:(id)arg1;
- (void)setPreferAnonymousRequests:(bool)arg1;
- (void)setProxy:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setRequestUUIDs:(id)arg1;
- (void)setResponseHTTPHeadersByRequestUUID:(id)arg1;
- (void)setShouldPipelineFetchAllChangesRequests:(bool)arg1;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setSourceApplicationSecondaryIdentifier:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setStateTransitionGroup:(id)arg1;
- (void)setTimeLogger:(id)arg1;
- (void)setTimeoutIntervalForRequest:(double)arg1;
- (void)setTimeoutIntervalForResource:(double)arg1;
- (void)setUseEncryption:(bool)arg1;
- (void)setUserSyncTask:(id)arg1;
- (void)setW3cNavigationTimingByRequestUUID:(id)arg1;
- (bool)shouldCheckAppVersion;
- (bool)shouldPipelineFetchAllChangesRequests;
- (id)sourceApplicationBundleIdentifier;
- (id)sourceApplicationSecondaryIdentifier;
- (void)start;
- (id)startDate;
- (unsigned long long)state;
- (id)stateTransitionGroup;
- (id)statusReportWithIndent:(unsigned long long)arg1;
- (id)timeLogger;
- (double)timeoutIntervalForRequest;
- (double)timeoutIntervalForResource;
- (bool)useEncryption;
- (id)userSyncTask;
- (bool)usesBackgroundSession;
- (id)w3cNavigationTimingByRequestUUID;

@end
