/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKAppPrototype : NSObject {
    IKDOMPrototype * _prototype;
    NSMutableIndexSet * _usageIndexes;
    IKViewElement * _viewElement;
}

@property (nonatomic, readonly) IKDOMPrototype *prototype;
@property (nonatomic, readonly, copy) NSIndexSet *usageIndexes;
@property (nonatomic, retain) IKViewElement *viewElement;

- (void).cxx_destruct;
- (void)addUsageForIndex:(long long)arg1;
- (id)initWithPrototype:(id)arg1;
- (id)prototype;
- (void)removeUsageForIndex:(long long)arg1;
- (void)setViewElement:(id)arg1;
- (void)updateUsageIndexesWithChangeSet:(id)arg1;
- (id)usageIndexes;
- (id)viewElement;

@end
