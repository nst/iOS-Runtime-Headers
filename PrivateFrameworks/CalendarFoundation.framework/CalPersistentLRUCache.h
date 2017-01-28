/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalPersistentLRUCache : NSObject {
    NSMutableDictionary * _cacheItemsByKey;
    unsigned long long  _capacity;
    NSDate * _expirationDate;
    double  _expirationInterval;
    NSObject<OS_dispatch_source> * _expirationSource;
    CalFileSensor * _fileSensor;
    CalPersistentLRUCacheItem * _firstCacheItem;
    CalPersistentLRUCacheItem * _lastCacheItem;
    unsigned long long  _numItems;
    NSString * _path;
    NSObject<OS_dispatch_queue> * _queue;
    CalLimitingQueue * _saveQueue;
    id  _systemClockObserver;
}

- (void).cxx_destruct;
- (void)_addCacheItem:(id)arg1;
- (void)_dataChanged;
- (void)_expire;
- (void)_promoteCacheItem:(id)arg1;
- (void)_pruneIfNeeded;
- (void)_readFromFile;
- (void)_removeCacheItem:(id)arg1;
- (void)_resetExpirationTimer;
- (void)_writeToFile;
- (void)cacheObject:(id)arg1 forKey:(id)arg2;
- (id)cachedObjectForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithPath:(id)arg1 capacity:(unsigned long long)arg2 expirationInterval:(double)arg3;

@end
