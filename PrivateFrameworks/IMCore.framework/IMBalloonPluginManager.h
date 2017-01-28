/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMBalloonPluginManager : NSObject {
    id  _extensionMatchingContext;
    NSMutableDictionary * _pluginIDToMetadataCache;
    NSString * _pluginMetaDataFolder;
    NSMutableDictionary * _pluginsMap;
}

@property (nonatomic, retain) id extensionMatchingContext;
@property (nonatomic, retain) NSMutableDictionary *pluginIDToMetadataCache;
@property (nonatomic, retain) NSString *pluginMetaDataFolder;
@property (nonatomic, retain) NSMutableDictionary *pluginsMap;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

+ (id)_extensionBlacklist;
+ (bool)isRunningPPT;
+ (void)setIsRunningPPT:(bool)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_appProxyBundleIdentifiersForAppPlugins;
- (void)_clearPluginMetadataForUninstalledApps;
- (void)_deleteMetaDataForPlugins:(id)arg1;
- (id)_fallBackMessagesExtensionPluginForBundleID:(id)arg1;
- (void)_findPluginsInPathInternal:(id)arg1;
- (void)_findPluginsInPaths:(id)arg1;
- (id)_identifiersForAppPlugins;
- (id)_infoPlistPathForPluginCreatingFolderIfNeeded:(id)arg1;
- (void)_insertPluginForExtension:(id)arg1 balloonProviderBundle:(id)arg2 andTimingCollection:(id)arg3;
- (bool)_isExtensionBlackListed:(id)arg1;
- (bool)_isServerBlackListedBundle:(id)arg1 serverBag:(id)arg2;
- (void)_loadAllDataSources;
- (void)_loadAppExtensionDataSources;
- (id)_metadataForPluginIdentifier:(id)arg1;
- (void)_moveExtensionDataSourcesFromMessagesExtensionPluginToAppExtensions;
- (id)_pluginPlistPath:(id)arg1;
- (id)_pluginsForWhichWeHaveMetadata;
- (id)_proxyIdentifiersForPlugins;
- (void)_removePluginsForIdentifiers:(id)arg1;
- (void)_storeMetadata:(id)arg1 _forPlugin:(id)arg2;
- (void)_updatePluginsForExtensions:(id)arg1;
- (id)allPlugins;
- (id)balloonPluginForBundleID:(id)arg1;
- (id)conversationID:(id)arg1 appID:(id)arg2;
- (Class)dataSourceClassForBundleID:(id)arg1;
- (id)dataSourceForPluginPayload:(id)arg1;
- (void)dealloc;
- (id)existingDataSourceForMessageGUID:(id)arg1 bundleID:(id)arg2;
- (id)extensionMatchingContext;
- (id)init;
- (void)insertDataSource:(id)arg1 forGUID:(id)arg2;
- (id)localParticipantIdentifierForAppID:(id)arg1 conversationID:(id)arg2;
- (void)pluginChatItem:(id)arg1 didRelinquishController:(id)arg2;
- (id)pluginIDToMetadataCache;
- (id)pluginMetaDataFolder;
- (id)pluginsMap;
- (id)recipientIDForRecipient:(id)arg1 appID:(id)arg2;
- (void)setExtensionMatchingContext:(id)arg1;
- (void)setPluginIDToMetadataCache:(id)arg1;
- (void)setPluginMetaDataFolder:(id)arg1;
- (void)setPluginsMap:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)balloonControllerForIMChatItem:(id)arg1;

@end
