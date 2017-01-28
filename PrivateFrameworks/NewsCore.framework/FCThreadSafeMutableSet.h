/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCThreadSafeMutableSet : NSObject {
    FCMutexLock * _mutexLock;
    NSMutableSet * _set;
}

@property (nonatomic, readonly, copy) NSSet *readOnlySet;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (bool)containsObject:(id)arg1;
- (void)enumerateObjectsUsingBlock:(id)arg1;
- (id)init;
- (id)readOnlySet;
- (void)removeObject:(id)arg1;
- (void)removeObjectsInSet:(id)arg1;

@end