/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNQueue : NSObject {
    NSMutableArray * _buffer;
    <CNQueueingStrategy> * _strategy;
}

@property (readonly) NSArray *allObjects;
@property (readonly) unsigned long long count;

+ (id)boundedQueueWithCapacity:(unsigned long long)arg1;
+ (id)boundedQueueWithCapacity:(unsigned long long)arg1 overflowHandler:(id)arg2;
+ (id)priorityQueueWithComparator:(id)arg1;

- (id)allObjects;
- (unsigned long long)count;
- (void)dealloc;
- (id)dequeue;
- (void)dequeueObject:(id)arg1;
- (id)drain;
- (void)enqueue:(id)arg1;
- (id)init;
- (id)initWithStrategy:(id)arg1;
- (id)peek;

@end
