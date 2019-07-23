/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSHistoryItem : NSObject {
    NSMutableArray * _autocompleteTriggers;
    float  _cachedTopSitesURLPenalty;
    float  _cachedTopSitesVisitScore;
    struct Vector<int, 0, WTF::CrashOnOverflow, 16> { 
        int *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    }  _dailyVisitCountScores;
    long long  _databaseID;
    double  _lastTimeTopSitesScoreWasComputed;
    WBSHistoryVisit * _lastVisit;
    NSMutableArray * _redirectSourceItems;
    bool  _shouldRecomputeDerivedVisitCountScores;
    NSURL * _url;
    NSString * _urlString;
    NSString * _userVisibleURLString;
    unsigned long long  _visitCount;
    unsigned long long  _visitCountScore;
    NSMutableArray * _visits;
    NSMutableSet * _visitsPendingWriteToDataStore;
    struct Vector<int, 0, WTF::CrashOnOverflow, 16> { 
        int *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    }  _weeklyVisitCountScores;
}

@property (nonatomic, readonly) NSArray *autocompleteTriggers;
@property (nonatomic, readonly) NSData *autocompleteTriggersDataOnSynchronizationQueue;
@property (nonatomic) float cachedTopSitesURLPenalty;
@property (nonatomic) float cachedTopSitesVisitScore;
@property (nonatomic, readonly) unsigned long long dailyVisitCountScoresCountOnSynchronizationQueue;
@property (nonatomic, readonly) NSData *dailyVisitCountScoresDataOnSynchronizationQueue;
@property (nonatomic, readonly) const int*dailyVisitCountScoresPtrOnSynchronizationQueue;
@property (nonatomic) long long databaseID;
@property (nonatomic, readonly) WBSHistoryItem *endOfLastVisitRedirectChain;
@property (nonatomic) double lastTimeTopSitesScoreWasComputed;
@property (nonatomic, readonly) WBSHistoryVisit *lastVisit;
@property (nonatomic, readonly) WBSHistoryVisit *lastVisitOnSynchronizationQueue;
@property (nonatomic, readonly) WBSHistoryItem *lastVisitRedirectDestinationItem;
@property (nonatomic) bool lastVisitWasFailure;
@property (nonatomic, readonly) bool lastVisitWasHTTPNonGet;
@property (nonatomic, readonly) NSDate *lastVisitedDate;
@property (nonatomic, readonly) double lastVisitedTimeInterval;
@property (nonatomic, readonly) double lastVisitedTimeIntervalOnSynchronizationQueue;
@property (nonatomic, readonly) NSArray *redirectSourceItems;
@property (nonatomic, readonly) bool shouldRecomputeDerivedVisitCountScores;
@property (nonatomic, readonly) NSString *stringForUserTypedDomainExpansion;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSString *urlString;
@property (nonatomic, readonly) NSString *userVisibleURLString;
@property (nonatomic, readonly) unsigned long long visitCount;
@property (nonatomic, readonly) unsigned long long visitCountScore;
@property (nonatomic, readonly) NSArray *visits;
@property (nonatomic, readonly) NSSet *visitsPendingWriteToDataStoreOnSynchronizationQueue;
@property (nonatomic, readonly) unsigned long long weeklyVisitCountScoresCountOnSynchronizationQueue;
@property (nonatomic, readonly) NSData *weeklyVisitCountScoresDataOnSynchronizationQueue;
@property (nonatomic, readonly) const int*weeklyVisitCountScoresPtrOnSynchronizationQueue;

+ (void)initialize;
+ (id)synchronizationQueue;
+ (double)timeIntervalForDailyAndWeeklyVisitCountScores;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_addAutocompleteTriggerFromSynchronizationQueue:(id)arg1;
- (void)_addExistingVisit:(id)arg1;
- (void)_addVisit:(id)arg1;
- (id)_autocompleteTriggersFromSynchronizationQueue;
- (void)_collapseDailyVisitsToWeekly;
- (void)_padDailyCountsForNewVisitAtTime:(double)arg1 indexOfNewVisit:(int*)arg2;
- (void)_wasVisitedOnSynchronizationQueue:(id)arg1;
- (bool)addAutocompleteTrigger:(id)arg1;
- (void)addRedirectSourceItemFromSynchronizationQueue:(id)arg1;
- (id)autocompleteTriggers;
- (id)autocompleteTriggersDataOnSynchronizationQueue;
- (float)cachedTopSitesURLPenalty;
- (float)cachedTopSitesVisitScore;
- (void)clearVisitsPendingWriteToDataStoreFromSynchronizationQueue;
- (unsigned long long)dailyVisitCountScoresCountOnSynchronizationQueue;
- (id)dailyVisitCountScoresDataOnSynchronizationQueue;
- (const int*)dailyVisitCountScoresPtrOnSynchronizationQueue;
- (long long)databaseID;
- (id)endOfLastVisitRedirectChain;
- (id)initWithSQLiteRow:(id)arg1;
- (id)initWithURLString:(id)arg1;
- (double)lastTimeTopSitesScoreWasComputed;
- (id)lastVisit;
- (id)lastVisitOnSynchronizationQueue;
- (id)lastVisitRedirectDestinationItem;
- (bool)lastVisitWasFailure;
- (bool)lastVisitWasHTTPNonGet;
- (id)lastVisitedDate;
- (double)lastVisitedTimeInterval;
- (double)lastVisitedTimeIntervalOnSynchronizationQueue;
- (void)mergeDataFromItem:(id)arg1;
- (void)recomputeDerivedVisitCountScoresWithVisits:(id)arg1;
- (id)redirectSourceItems;
- (void)removeVisits:(id)arg1 candidateLastVisit:(id)arg2;
- (void)removeVisitsOnSynchronizationQueue:(id)arg1 candidateLastVisit:(id)arg2;
- (void)scoreOfVisit:(id)arg1 wasUpdatedFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)setCachedTopSitesURLPenalty:(float)arg1;
- (void)setCachedTopSitesVisitScore:(float)arg1;
- (void)setDatabaseID:(long long)arg1;
- (void)setLastTimeTopSitesScoreWasComputed:(double)arg1;
- (void)setLastVisitWasFailure:(bool)arg1;
- (void)setTitle:(id)arg1;
- (bool)shouldRecomputeDerivedVisitCountScores;
- (id)stringForUserTypedDomainExpansion;
- (id)title;
- (id)url;
- (id)urlString;
- (id)userVisibleURLString;
- (unsigned long long)visitCount;
- (unsigned long long)visitCountScore;
- (void)visitWasModified:(id)arg1;
- (id)visits;
- (id)visitsPendingWriteToDataStoreOnSynchronizationQueue;
- (void)wasRedirectedFrom:(id)arg1 to:(id)arg2;
- (void)wasVisited:(id)arg1;
- (unsigned long long)weeklyVisitCountScoresCountOnSynchronizationQueue;
- (id)weeklyVisitCountScoresDataOnSynchronizationQueue;
- (const int*)weeklyVisitCountScoresPtrOnSynchronizationQueue;

@end
