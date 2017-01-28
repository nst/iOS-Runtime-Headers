/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFClientPluginManager : NSObject {
    NSMutableDictionary * _domainKeyDictionary;
    NSArray * _domainKeys;
    id  _factoryInitializationBlock;
    NSString * _path;
}

+ (id)pluginManagerForPath:(id)arg1 domainKeys:(id)arg2 factoryInitializationBlock:(id)arg3;

- (void).cxx_destruct;
- (void)_loadBundles;
- (void)_registerBundle:(id)arg1;
- (id)description;
- (void)enumerateFactoryInstancesForDomainKey:(id)arg1 groupIdentifier:(id)arg2 classIdentifier:(id)arg3 usingBlock:(id)arg4;
- (id)initWithPath:(id)arg1 domainKeys:(id)arg2 factoryInitializationBlock:(id)arg3;

@end
