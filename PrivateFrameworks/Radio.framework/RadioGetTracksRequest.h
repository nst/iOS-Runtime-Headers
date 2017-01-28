/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioGetTracksRequest : RadioRequest {
    NSNumber * _accountUniqueIdentifier;
    NSDictionary * _additionalRequestParameters;
    unsigned long long  _globalVersion;
    bool  _hasSetWillContinuePlayback;
    NSData * _heartbeatTokenData;
    bool  _includeCleanTracksOnly;
    RadioStationMatchContext * _nowPlayingMatchContext;
    unsigned long long  _numberOfTracks;
    NSArray * _playActivityEvents;
    RadioPlayEventCollection * _playEventCollection;
    RadioPlaybackContext * _playbackContext;
    SSVPlaybackLease * _playbackLease;
    long long  _reasonType;
    SSURLConnectionRequest * _request;
    bool  _shouldIncludeAsset;
    bool  _shouldIncludeStationInResponse;
    bool  _skipPromptForSeamlessPlayback;
    NSString * _stationHash;
    long long  _stationID;
    RadioStationMatchContext * _stationMatchContext;
    NSString * _stationStringID;
    bool  _willContinuePlayback;
}

@property (nonatomic, readonly, copy) NSNumber *accountUniqueIdentifier;
@property (nonatomic, copy) NSDictionary *additionalRequestParameters;
@property (nonatomic, copy) NSData *heartbeatTokenData;
@property (nonatomic) bool includeCleanTracksOnly;
@property (nonatomic, retain) RadioStationMatchContext *nowPlayingMatchContext;
@property (nonatomic) unsigned long long numberOfTracks;
@property (nonatomic, copy) NSArray *playActivityEvents;
@property (nonatomic, copy) RadioPlayEventCollection *playEventCollection;
@property (nonatomic, copy) RadioPlaybackContext *playbackContext;
@property (nonatomic, retain) SSVPlaybackLease *playbackLease;
@property (nonatomic) long long reasonType;
@property (nonatomic) bool shouldIncludeAsset;
@property (nonatomic) bool shouldIncludeStationInResponse;
@property (nonatomic) bool skipPromptForSeamlessPlayback;
@property (nonatomic, retain) RadioStationMatchContext *stationMatchContext;
@property (nonatomic) bool willContinuePlayback;

- (void).cxx_destruct;
- (id)_playbackContextForStation:(id)arg1;
- (id)accountUniqueIdentifier;
- (id)additionalRequestParameters;
- (void)cancel;
- (id)heartbeatTokenData;
- (bool)includeCleanTracksOnly;
- (id)init;
- (id)initWithGlobalVersion:(unsigned long long)arg1;
- (id)initWithStation:(id)arg1 globalVersion:(unsigned long long)arg2;
- (id)initWithStationStringID:(id)arg1 globalVersion:(unsigned long long)arg2;
- (id)nowPlayingMatchContext;
- (unsigned long long)numberOfTracks;
- (id)playActivityEvents;
- (id)playEventCollection;
- (id)playbackContext;
- (id)playbackLease;
- (long long)reasonType;
- (void)setAdditionalRequestParameters:(id)arg1;
- (void)setHeartbeatTokenData:(id)arg1;
- (void)setIncludeCleanTracksOnly:(bool)arg1;
- (void)setNowPlayingMatchContext:(id)arg1;
- (void)setNumberOfTracks:(unsigned long long)arg1;
- (void)setPlayActivityEvents:(id)arg1;
- (void)setPlayEventCollection:(id)arg1;
- (void)setPlaybackContext:(id)arg1;
- (void)setPlaybackLease:(id)arg1;
- (void)setReasonType:(long long)arg1;
- (void)setShouldIncludeAsset:(bool)arg1;
- (void)setShouldIncludeStationInResponse:(bool)arg1;
- (void)setSkipPromptForSeamlessPlayback:(bool)arg1;
- (void)setStationMatchContext:(id)arg1;
- (void)setWillContinuePlayback:(bool)arg1;
- (bool)shouldIncludeAsset;
- (bool)shouldIncludeStationInResponse;
- (bool)skipPromptForSeamlessPlayback;
- (void)startWithCompletionHandler:(id)arg1;
- (id)stationMatchContext;
- (bool)willContinuePlayback;

@end
