/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCountedSet : NSMutableSet {
    void * _reserved;
    id  _table;
}

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)supportsSecureCoding;

- (void)addObject:(id)arg1;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (unsigned long long)countForObject:(id)arg1;
- (void)dealloc;
- (id)descriptionWithLocale:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)getObjects:(id*)arg1 count:(unsigned long long)arg2;
- (id)init;
- (id)initWithArray:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
- (id)initWithSet:(id)arg1;
- (id)initWithSet:(id)arg1 copyItems:(bool)arg2;
- (id)member:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectEnumerator;
- (void)removeObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_mostCommonObject;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

- (id)mf_debugDescription;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (id)fc_description;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit

- (void)enumerateObjectsSortedByCountUsingBlock:(id)arg1 ascending:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph

- (id)pg_objectWithMaxCount;
- (id)pg_objectWithMinCount;
- (id)pg_sortedArrayByCountAscending:(bool)arg1;

@end
