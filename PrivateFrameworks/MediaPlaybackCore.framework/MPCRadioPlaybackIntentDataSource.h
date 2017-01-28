/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCRadioPlaybackIntentDataSource : NSObject <MPCPlaybackIntentDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_legacyAlternativeRepresentationForPlaybackIntent:(id)arg1 player:(id)arg2;
- (void)configureContainer:(id)arg1 forPlaybackIntent:(id)arg2 completionHandler:(id)arg3;
- (void)populateContainer:(id)arg1 forPlaybackIntent:(id)arg2 completionHandler:(id)arg3;
- (void)populateRepresentationsForItem:(id)arg1 completionHandler:(id)arg2;

@end
