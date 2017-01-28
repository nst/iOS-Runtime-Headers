/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallHistoryController : NSObject <TUCallProviderManagerDelegate> {
    CHManager * _callHistoryManager;
    TUCallProviderManager * _callProviderManager;
    NSString * _coalescingStrategy;
    TUDispatcher * _dispatcher;
    NSMutableSet * _metadataPreCachedOptions;
    unsigned long long  _options;
    NSArray * _recentCalls;
    TUDispatcher * _simpleIvarDispatcher;
    unsigned long long  _unreadAudioCallCount;
    unsigned long long  _unreadCallCount;
    unsigned long long  _unreadVideoCallCount;
}

@property (nonatomic, retain) CHManager *callHistoryManager;
@property (nonatomic, retain) TUCallProviderManager *callProviderManager;
@property (nonatomic, copy) NSString *coalescingStrategy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) TUDispatcher *dispatcher;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *metadataPreCachedOptions;
@property (nonatomic) unsigned long long options;
@property (nonatomic, retain) NSArray *recentCalls;
@property (nonatomic, retain) TUDispatcher *simpleIvarDispatcher;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long unreadAudioCallCount;
@property (nonatomic) unsigned long long unreadCallCount;
@property (nonatomic) unsigned long long unreadVideoCallCount;

+ (id)callHistoryControllerWithCoalescingStrategy:(id)arg1 options:(unsigned long long)arg2;
+ (id)sharedController;
+ (id)sharedControllerWithCoalescingStrategy:(id)arg1 options:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)_updateCallHistoryManagerUsingCurrentOptions;
- (void)boostQualityOfService;
- (void)callHistoryDatabaseChanged:(id)arg1;
- (id)callHistoryManager;
- (id)callHistoryManagerInitializationDispatchBlock;
- (id)callHistoryManagerRecentCallsDispatchBlock;
- (id)callProviderManager;
- (id)coalescingStrategy;
- (void)dealloc;
- (void)deleteAllRecentCalls;
- (void)deleteRecentCall:(id)arg1;
- (void)deleteRecentCalls:(id)arg1;
- (id)dispatcher;
- (void)dispatcherDidFinishBoost:(id)arg1;
- (id)init;
- (id)initWithCoalescingStrategy:(id)arg1 options:(unsigned long long)arg2;
- (void)loadDispatchQueue;
- (void)markRecentAudioCallsAsRead;
- (void)markRecentCallsAsRead;
- (void)markRecentCallsAsReadWithPredicate:(id)arg1;
- (void)markRecentVideoCallsAsRead;
- (id)metadataPreCachedOptions;
- (unsigned long long)options;
- (void)providersChangedForProviderManager:(id)arg1;
- (id)recentCalls;
- (id)recentCallsWithPredicate:(id)arg1;
- (void)reloadWithOptions:(unsigned long long)arg1;
- (void)setCallHistoryManager:(id)arg1;
- (void)setCallProviderManager:(id)arg1;
- (void)setCoalescingStrategy:(id)arg1;
- (void)setDispatcher:(id)arg1;
- (void)setMetadataPreCachedOptions:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setRecentCalls:(id)arg1;
- (void)setSimpleIvarDispatcher:(id)arg1;
- (void)setUnreadAudioCallCount:(unsigned long long)arg1;
- (void)setUnreadCallCount:(unsigned long long)arg1;
- (void)setUnreadVideoCallCount:(unsigned long long)arg1;
- (id)simpleIvarDispatcher;
- (unsigned long long)unreadAudioCallCount;
- (unsigned long long)unreadCallCount;
- (unsigned long long)unreadVideoCallCount;

@end
