/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFLazyCache : NSObject <NSCacheDelegate> {
    MFWeakReferenceHolder * _delegate;
    struct { 
        unsigned int delegateRespondsToLazyCacheWillEvictObject : 1; 
    }  _flags;
    NSRecursiveLock * _lock;
    NSCache * _storage;
}

@property (readonly, copy) NSString *debugDescription;
@property <MFLazyCacheDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_exchangeOriginalValue:(id)arg1 forKey:(id)arg2 withValue:(id)arg3;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)removeAllObjects;
- (void)setDelegate:(id)arg1;
- (id)storedValueForKey:(id)arg1;
- (id)valueForKey:(id)arg1 valueGenerator:(id)arg2;
- (long long)waiterCountForKey:(id)arg1;

@end
