/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

@interface TVPBaseMediaItem : NSObject <TVPMediaItem> {
    NSMutableDictionary * _metadataDictionary;
    NSMutableDictionary * _transactionDictionary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_postMetadataDidChangeNotificationWithMetadataProperties:(id)arg1;
- (void)_postMetadataWillChangeNotificationWithMetadataProperties:(id)arg1;
- (void)_setMetadata:(id)arg1 forProperty:(id)arg2 postNotification:(bool)arg3;
- (id)description;
- (bool)hasTrait:(id)arg1;
- (id)init;
- (bool)isEqualToMediaItem:(id)arg1;
- (id)mediaItemMetadataForProperty:(id)arg1;
- (id)mediaItemURL;
- (void)performMediaItemMetadataTransactionWithBlock:(id /* block */)arg1;
- (void)removeMediaItemMetadataForProperty:(id)arg1;
- (id)reportingDelegate;
- (void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2;
- (void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(bool)arg4;
- (void)updatePlayCountForElapsedTime:(double)arg1 duration:(double)arg2;

@end
