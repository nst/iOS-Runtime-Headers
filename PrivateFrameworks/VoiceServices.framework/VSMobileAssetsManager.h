/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSMobileAssetsManager : NSObject {
    NSObject<OS_dispatch_queue> * _cacheConcurrentQueue;
    NSMutableDictionary * _voiceResourceCache;
    NSMutableDictionary * _voiceSelectionCache;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *cacheConcurrentQueue;
@property (nonatomic, retain) NSMutableDictionary *voiceResourceCache;
@property (nonatomic, retain) NSMutableDictionary *voiceSelectionCache;

+ (id)_builtInVoiceForLanguage:(id)arg1;
+ (id)_cachedVoiceAssets;
+ (id)_cachedVoiceResourcesAssets;
+ (id)_defaultVoiceSettingsForLanguage:(id)arg1;
+ (id)_nonCacheInstalledAssetsForType:(long long)arg1 voicename:(id)arg2 language:(id)arg3 gender:(long long)arg4 footprint:(long long)arg5;
+ (id)_nonCacheInstalledVoiceResources;
+ (void)_reloadAndCacheVoiceAssets;
+ (void)_reloadAndCacheVoiceResourcesAssets;
+ (void)amendVoiceWithDefaultSettings:(id)arg1;
+ (id)bundleIdentifierForVoiceType:(long long)arg1;
+ (id)getLatestAssetFromArray:(id)arg1;
+ (id)installedAssetsForType:(long long)arg1 voicename:(id)arg2 language:(id)arg3 gender:(long long)arg4 footprint:(long long)arg5;
+ (id)installedVoiceResources;
+ (bool)isVoiceAssetWellDefined:(id)arg1;
+ (id)legacyLocalVocalizerVoiceAssetForLanguage:(id)arg1;
+ (id)pickCorrectAssetFromLocalAssets:(id)arg1;
+ (id)queryForType:(long long)arg1 voicename:(id)arg2 language:(id)arg3 gender:(long long)arg4 footprint:(long long)arg5 localOnly:(bool)arg6;
+ (id)queryForVoiceResourceAsset:(id)arg1 localOnly:(bool)arg2;
+ (id)selectVoiceForLang:(id)arg1 type:(long long)arg2 gender:(long long)arg3 footprint:(long long)arg4;
+ (id)selectVoiceResourceAssetForLanguage:(id)arg1;
+ (id)sharedManager;
+ (id)voiceDataFromAsset:(id)arg1;
+ (id)voiceResourceFromAsset:(id)arg1;
+ (long long)voiceTypeForBundleIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_cachedVoiceAssetsForLanguage:(id)arg1 type:(long long)arg2 gender:(long long)arg3 footprint:(long long)arg4;
- (id)_cachedVoiceResourcesAssetsForLanguage:(id)arg1;
- (void)_downloadAsset:(id)arg1 withOptions:(id)arg2 completion:(id)arg3;
- (void)_downloadAsset:(id)arg1 withOptions:(id)arg2 progressHandler:(id)arg3;
- (bool)_purgeAsset:(id)arg1;
- (id)cacheConcurrentQueue;
- (void)cleanOldVoiceResources;
- (void)cleanUnusedVoiceAssets;
- (void)downloadVoiceAsset:(id)arg1 useBattery:(bool)arg2 completion:(id)arg3;
- (void)downloadVoiceAsset:(id)arg1 useBattery:(bool)arg2 progressUpdateHandler:(id)arg3;
- (void)downloadVoiceResource:(id)arg1 useBattery:(bool)arg2 completion:(id)arg3;
- (void)reinstallVoiceData:(id)arg1 completion:(id)arg2;
- (void)removeVoiceAsset:(id)arg1 completion:(id)arg2;
- (void)removeVoiceResource:(id)arg1 completion:(id)arg2;
- (void)setCacheConcurrentQueue:(id)arg1;
- (void)setVoiceResourceCache:(id)arg1;
- (void)setVoiceSelectionCache:(id)arg1;
- (id)voiceResourceCache;
- (id)voiceSelectionCache;

@end
