/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKTreeNode : TSPObject {
    NSMutableArray * mChildren;
    NSString * mDisplayName;
    id  mObject;
}

@property (nonatomic, retain) NSMutableArray *children;
@property (nonatomic, retain) id dataObject;
@property (nonatomic, retain) NSString *name;

- (void)addChildWithName:(id)arg1 object:(id)arg2;
- (void)addNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)childEnumerator;
- (id)children;
- (id)dataObject;
- (void)dealloc;
- (id)description;
- (void)enumerateAllChildrenWithBlock:(id)arg1;
- (bool)hasChildWithName:(id)arg1;
- (long long)indexOfNodeWithObject:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)name;
- (id)nodeAtIndex:(unsigned long long)arg1;
- (id)nodeWithObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)removeAllChildren;
- (void)removeChildAtIndex:(unsigned long long)arg1;
- (void)removeChildWithDataObject:(id)arg1;
- (void)removeChildWithName:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)setChildren:(id)arg1;
- (void)setDataObject:(id)arg1;
- (void)setName:(id)arg1;
- (id)shallowCopy;

@end
