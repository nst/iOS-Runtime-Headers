/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPlaybackIntent : NSObject {
    long long  _artworkSource;
    <NSSecureCoding> * _artworkToken;
    long long  _kind;
    NSString * _playActivityFeatureName;
    NSData * _playActivityRecommendationData;
    <MPCPlaybackIntentDataSource> * _resolvedTracklistDataSource;
    long long  _shuffleMode;
    NSString * _title;
    long long  _tracklistSource;
    <NSSecureCoding> * _tracklistToken;
}

@property (nonatomic) long long artworkSource;
@property (nonatomic, retain) <NSSecureCoding> *artworkToken;
@property (nonatomic) long long kind;
@property (nonatomic, copy) NSString *playActivityFeatureName;
@property (nonatomic, copy) NSData *playActivityRecommendationData;
@property (nonatomic) long long shuffleMode;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) <MPCPlaybackIntentDataSource> *tracklistDataSource;
@property (nonatomic) long long tracklistSource;
@property (nonatomic, retain) <NSSecureCoding> *tracklistToken;

+ (id)tracklistDataSourceForSource:(long long)arg1;

- (void).cxx_destruct;
- (id)_legacyRepresentationForPlayer:(id)arg1;
- (id)artworkCatalog;
- (long long)artworkSource;
- (id)artworkToken;
- (void)configureContainer:(id)arg1 completionHandler:(id)arg2;
- (id)description;
- (long long)kind;
- (id)playActivityFeatureName;
- (id)playActivityRecommendationData;
- (void)populateItemsForContainer:(id)arg1 completionHandler:(id)arg2;
- (void)setArtworkSource:(long long)arg1;
- (void)setArtworkToken:(id)arg1;
- (void)setKind:(long long)arg1;
- (void)setPlayActivityFeatureName:(id)arg1;
- (void)setPlayActivityRecommendationData:(id)arg1;
- (void)setShuffleMode:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setTracklistSource:(long long)arg1;
- (void)setTracklistToken:(id)arg1;
- (long long)shuffleMode;
- (id)title;
- (id)tracklistDataSource;
- (long long)tracklistSource;
- (id)tracklistToken;

@end
