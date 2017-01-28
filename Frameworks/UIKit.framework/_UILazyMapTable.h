/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UILazyMapTable : NSObject {
    NSMapTable * _keysToClientTables;
    NSMapTable * _keysToValues;
    id  _mappingBlock;
    NSMapTable * _valuesToKeys;
}

- (void).cxx_destruct;
- (id)cachedObjectEnumerable;
- (id)cachedObjects;
- (unsigned long long)count;
- (id)description;
- (bool)hasCachedObjectForKey:(id)arg1;
- (id)initWithMappingBlock:(id)arg1;
- (id)keyEnumerable;
- (id)keys;
- (id)objectForKey:(id)arg1;
- (void)registerClient:(id)arg1 ofObjectForKey:(id)arg2;
- (void)unregisterClient:(id)arg1 ofObjectForKey:(id)arg2;

@end
