/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFTransformItemProvider : HFItemProvider {
    HFItemProvider * _sourceProvider;
    id  _transformationBlock;
    NSMutableDictionary * _transformedItems;
}

@property (nonatomic, retain) HFItemProvider *sourceProvider;
@property (nonatomic, copy) id transformationBlock;
@property (nonatomic, retain) NSMutableDictionary *transformedItems;

- (void).cxx_destruct;
- (id)initWithHome:(id)arg1;
- (id)initWithHome:(id)arg1 sourceProvider:(id)arg2 transformationBlock:(id)arg3;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (void)setSourceProvider:(id)arg1;
- (void)setTransformationBlock:(id)arg1;
- (void)setTransformedItems:(id)arg1;
- (id)sourceProvider;
- (id)transformationBlock;
- (id)transformedItems;

@end
