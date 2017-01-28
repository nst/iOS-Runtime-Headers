/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOResourceManager : NSObject {
    GEOResourceManifestConfiguration * _configuration;
}

+ (id)sharedManager;
+ (id)sharedManagerForConfiguration:(id)arg1;
+ (id)sharedManagerForTileGroupIdentifier:(unsigned int)arg1;

- (id)allResourceNames;
- (id)dataForResourceWithName:(id)arg1 fallbackBundle:(id)arg2;
- (id)dataForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(id)arg3;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (bool)isDevResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(id)arg3;
- (id)pathForResourceWithName:(id)arg1 fallbackBundle:(id)arg2;
- (id)pathForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(id)arg3;

@end
