/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKContentRuleListStore : NSObject <WKObject> {
    struct ObjectStorage<API::ContentRuleListStore> { 
        struct type { 
            unsigned char __lx[56]; 
        } data; 
    }  _contentRuleListStore;
}

@property (readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_registerPathAsUnsafeToMemoryMapForTesting:(id)arg1;
+ (id)defaultStore;
+ (id)defaultStoreWithLegacyFilename;
+ (id)storeWithURL:(id)arg1;
+ (id)storeWithURLAndLegacyFilename:(id)arg1;

- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (void)_compileContentRuleListForIdentifier:(id)arg1 encodedContentRuleList:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_getContentRuleListSourceForIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_invalidateContentRuleListVersionForIdentifier:(id)arg1;
- (void)_removeAllContentRuleLists;
- (void)compileContentRuleListForIdentifier:(id)arg1 encodedContentRuleList:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (void)getAvailableContentRuleListIdentifiers:(id /* block */)arg1;
- (void)lookUpContentRuleListForIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeContentRuleListForIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;

@end
