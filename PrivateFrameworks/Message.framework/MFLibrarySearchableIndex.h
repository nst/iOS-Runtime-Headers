/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFLibrarySearchableIndex : NSObject <CSSearchableIndexDelegate, MFDiagnosticsGenerator> {
    NSObject<OS_os_activity> * _batchIndexingActivity;
    MFCoalescer * _budgetCoalescer;
    bool  _clientStateFetched;
    bool  _coalesceTimerFired;
    NSObject<OS_dispatch_source> * _coalescingTimer;
    CSSearchableIndex * _csIndex;
    unsigned long long  _currentMaximumBatchSize;
    <MFLibrarySearchableIndexDataSource> * _dataSource;
    NSObject<OS_dispatch_queue> * _dataSourceQueue;
    NSString * _indexName;
    NSObject<OS_dispatch_queue> * _indexingQueue;
    bool  _isActive;
    bool  _isForeground;
    MFWeakSet * _middleware;
    bool  _needsRefresh;
    bool  _needsVerification;
    NSMutableSet * _pendingDomainRemovals;
    _MFLibrarySearchableIndexPendingRemovals * _pendingIdentifierRemovals;
    NSMutableArray * _pendingItems;
    NSObject<OS_dispatch_queue> * _queue;
    double  _remainingIndexingBudget;
    long long  _remainingIndexingBudgetOverage;
    long long  _resumeCount;
    bool  _scheduledProcessing;
    bool  _scheduledRefresh;
    bool  _scheduledVerification;
    MFLazyCache * _searchResultsCache;
    unsigned long long  _throttledDataSourceBatchSize;
    unsigned long long  _throttledIndexingBatchSize;
    long long  _transaction;
}

@property (nonatomic, retain) CSSearchableIndex *csIndex;
@property (nonatomic) <MFLibrarySearchableIndexDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_isForeground, setter=_setForeground:, nonatomic) bool foreground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=_transaction, readonly) long long transaction;

+ (id)_localClientState;
+ (id)_localClientStateURL;
+ (void)_saveLocalClientState:(id)arg1;

- (id)_budgetPersistenceKey;
- (void)_coalescingTimerFired;
- (id)_consumeBatchOfSize:(unsigned long long)arg1;
- (void)_dataSourceAssignTransaction:(long long)arg1 forIdentifiers:(id)arg2 completion:(id)arg3;
- (void)_dataSourceAssignTransaction:(long long)arg1 updates:(id)arg2 completion:(id)arg3;
- (void)_dataSourceInvalidateItemsGreaterThanTransaction:(long long)arg1 completion:(id)arg2;
- (void)_dataSourceRequestNeededUpdatesWithCompletion:(id)arg1;
- (void)_dataSourceScheduleWork:(id)arg1;
- (void)_dataSourceVerifyRepresentativeSampleWithCompletion:(id)arg1;
- (void)_fetchLastClientState;
- (void)_getDomainRemovals:(id*)arg1 identifierRemovals:(id*)arg2;
- (void)_indexItems:(id)arg1 fromRefresh:(bool)arg2;
- (void)_invalidateCache;
- (bool)_isForeground;
- (long long)_nextTransaction;
- (void)_noteNeedsLastClientStateFetch;
- (void)_persistRemainingIndexingBudgetValue:(id)arg1;
- (void)_powerStateChanged:(id)arg1;
- (id)_processDomainRemovals:(id)arg1;
- (void)_processIdentifierRemovals:(id)arg1;
- (void)_processIndexingBatch:(id)arg1 clientState:(id)arg2;
- (void)_processRefreshRequestWithCompletion:(id)arg1;
- (void)_processSpotlightVerificationWithCompletion:(id)arg1;
- (void)_queueConsumeBudgetElapsedPeriod:(double)arg1;
- (void)_queueConsumeBudgetItemCount:(unsigned long long)arg1;
- (void)_queueRefresh;
- (void)_queueTransitionActive:(bool)arg1;
- (void)_registerDistantFutureSpotlightVerification;
- (void)_resetIndexingBudgetTimer;
- (void)_scheduleDataSourceRefresh;
- (void)_scheduleProcessPendingItems;
- (void)_scheduleResetIndexingBudgetTimer;
- (void)_scheduleSpotlightVerification;
- (void)_setForeground:(bool)arg1;
- (void)_startCoalescingTimer;
- (void)_stopCoalescingTimer;
- (double)_throttleRequestedSize:(unsigned long long*)arg1 action:(id)arg2;
- (long long)_transaction;
- (void)_transitionWithBudgetTimeUsed:(double)arg1;
- (void)_verifySpotlightIndex;
- (void)addMiddleware:(id)arg1;
- (void)applicationWillResume;
- (void)applicationWillSuspend;
- (id)copyDiagnosticInformation;
- (id)csIndex;
- (id)dataSource;
- (void)dealloc;
- (id)identifiersMatchingCriterion:(id)arg1;
- (void)indexItems:(id)arg1;
- (id)indexedEmptySubjectIdentifers;
- (id)init;
- (id)initWithName:(id)arg1 dataSource:(id)arg2;
- (double)persistedRemainingIndexingBudget;
- (void)refresh;
- (void)removeAllItems;
- (void)removeItemsForDomainIdentifier:(id)arg1;
- (void)removeItemsWithIdentifiers:(id)arg1;
- (void)removeItemsWithIdentifiers:(id)arg1 reasons:(id)arg2;
- (void)requestSpotlightDiagnosticsForMessageRowId:(id)arg1;
- (void)resume;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(id)arg2;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(id)arg3;
- (void)setCsIndex:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setRemainingIndexingBudget:(double)arg1 shouldPersist:(bool)arg2;
- (void)suspend;

@end
