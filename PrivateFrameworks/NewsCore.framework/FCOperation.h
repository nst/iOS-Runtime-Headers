/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCOperation : NSOperation <FCOperationPrioritizing> {
    NSMutableArray * _childOperations;
    bool  _childOperationsCancelled;
    bool  _childOperationsFinished;
    FCMutexLock * _childOperationsLock;
    bool  _executing;
    bool  _finished;
    NSObject<OS_dispatch_group> * _finishedGroup;
    double  _operationEndTime;
    NSString * _operationID;
    double  _operationStartTime;
    long long  _relativePriority;
    unsigned long long  _retryCount;
    FCMutexLock * _startLock;
}

@property (nonatomic, retain) NSMutableArray *childOperations;
@property (nonatomic) bool childOperationsCancelled;
@property (nonatomic) bool childOperationsFinished;
@property (nonatomic, retain) FCMutexLock *childOperationsLock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *finishedGroup;
@property (readonly) unsigned long long hash;
@property (nonatomic) double operationEndTime;
@property (nonatomic, readonly, copy) NSString *operationID;
@property (nonatomic) double operationStartTime;
@property (nonatomic, readonly) FCOperation *proxyOperation;
@property (nonatomic) long long relativePriority;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic, retain) FCMutexLock *startLock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_associateChildOperation:(id)arg1;
- (id)_errorUserInfo;
- (void)_finishOperationWithError:(id)arg1;
- (bool)_shouldThrottleOperationWithRetryAfter:(double*)arg1;
- (id)_userDefaultsKeyForThrottleEndDate;
- (void)addCompletionHandler:(id)arg1;
- (void)associateChildOperation:(id)arg1;
- (void)associateChildOperations:(id)arg1;
- (bool)canRetryWithError:(id)arg1 retryAfter:(double*)arg2;
- (void)cancel;
- (void)cancelChildOperations;
- (id)childOperations;
- (bool)childOperationsCancelled;
- (bool)childOperationsFinished;
- (id)childOperationsLock;
- (void)dealloc;
- (void)finishFromEarlyCancelation;
- (id)finishedGroup;
- (void)finishedPerformingOperationWithError:(id)arg1;
- (id)init;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (unsigned long long)maxRetries;
- (void)operationDidFinishWithError:(id)arg1;
- (double)operationEndTime;
- (id)operationID;
- (double)operationStartTime;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (unsigned long long)propertiesInheritedByChildOperations;
- (id)proxyOperation;
- (long long)relativePriority;
- (void)resetForRetry;
- (unsigned long long)retryCount;
- (void)setChildOperations:(id)arg1;
- (void)setChildOperationsCancelled:(bool)arg1;
- (void)setChildOperationsFinished:(bool)arg1;
- (void)setChildOperationsLock:(id)arg1;
- (void)setFinishedGroup:(id)arg1;
- (void)setOperationEndTime:(double)arg1;
- (void)setOperationStartTime:(double)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setRelativePriority:(long long)arg1;
- (void)setRetryCount:(unsigned long long)arg1;
- (void)setStartLock:(id)arg1;
- (bool)shouldStartThrottlingWithError:(id)arg1 retryAfter:(double*)arg2;
- (void)start;
- (void)startIfNeeded;
- (id)startLock;
- (id)throttleGroup;
- (bool)validateOperation;
- (bool)waitUntilFinishedWithTimeout:(double)arg1;

@end
