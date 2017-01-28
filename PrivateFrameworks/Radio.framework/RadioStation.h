/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioStation : NSObject <MusicEntityValueProviding, RadioManagedObjectWrapperProtocol> {
    NSData * _adData;
    long long  _adamID;
    NSURL * _artworkURL;
    NSData * _artworkURLData;
    NSString * _coreSeedName;
    bool  _databaseBacked;
    NSDictionary * _debugDictionary;
    bool  _editEnabled;
    NSArray * _editableFields;
    bool  _featured;
    bool  _gatewayVideoAdEnabled;
    bool  _hasSkipRules;
    unsigned long long  _impressionThreshold;
    bool  _isExplicit;
    bool  _likesEnabled;
    NSManagedObject * _managedObject;
    RadioModel * _model;
    NSString * _name;
    long long  _persistentID;
    bool  _premiumPlacement;
    bool  _previewOnly;
    bool  _requiresSubscription;
    id  _seedTracks;
    NSString * _shareToken;
    bool  _shared;
    bool  _sharingEnabled;
    bool  _skipEnabled;
    int  _skipFrequency;
    NSString * _skipIdentifier;
    double  _skipInterval;
    NSArray * _skipTimestamps;
    long long  _songMixType;
    int  _sortOrder;
    bool  _sponsored;
    NSString * _stationDescription;
    NSString * _stationHash;
    long long  _stationID;
    NSString * _stationStringID;
    NSURL * _streamCertificateURL;
    NSURL * _streamKeyURL;
    NSURL * _streamURL;
    bool  _subscribed;
    int  _subscriberCount;
    NSArray * _trackPlaybackDescriptorQueue;
    bool  _virtualPlayEnabled;
}

@property (nonatomic, retain) NSData *adData;
@property (nonatomic) long long adamID;
@property (nonatomic, readonly) RadioArtworkCollection *artworkCollection;
@property (nonatomic, copy) NSURL *artworkURL;
@property (nonatomic, copy) NSData *artworkURLData;
@property (nonatomic, copy) NSString *coreSeedName;
@property (getter=isDatabaseBacked, nonatomic, readonly) bool databaseBacked;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSDictionary *debugDictionary;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) bool editEnabled;
@property (nonatomic, retain) NSArray *editableFields;
@property (getter=isFeatured, nonatomic) bool featured;
@property (nonatomic, readonly, copy) NSDictionary *feedbackDictionaryRepresentation;
@property (getter=isGatewayVideoAdEnabled, nonatomic) bool gatewayVideoAdEnabled;
@property (nonatomic) bool hasSkipRules;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long impressionThreshold;
@property (nonatomic) bool isExplicit;
@property (nonatomic) bool likesEnabled;
@property (nonatomic, readonly) NSManagedObject *managedObject;
@property (nonatomic, readonly) RadioModel *model;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long persistentID;
@property (getter=isPremiumPlacement, nonatomic) bool premiumPlacement;
@property (getter=isPreview, nonatomic, readonly) bool preview;
@property (getter=isPreviewOnly, nonatomic) bool previewOnly;
@property (nonatomic) bool requiresSubscription;
@property (nonatomic, retain) id seedTracks;
@property (nonatomic, copy) NSString *shareToken;
@property (getter=isShared, nonatomic) bool shared;
@property (getter=isSharingEnabled, nonatomic) bool sharingEnabled;
@property (nonatomic) bool skipEnabled;
@property (nonatomic) int skipFrequency;
@property (nonatomic, copy) NSString *skipIdentifier;
@property (nonatomic) double skipInterval;
@property (nonatomic, copy) NSArray *skipTimestamps;
@property (nonatomic) long long songMixType;
@property (nonatomic) int sortOrder;
@property (getter=isSponsored, nonatomic) bool sponsored;
@property (nonatomic, copy) NSString *stationDescription;
@property (nonatomic, copy) NSString *stationHash;
@property (nonatomic) long long stationID;
@property (nonatomic, copy) NSString *stationStringID;
@property (nonatomic, retain) NSURL *streamCertificateURL;
@property (nonatomic, retain) NSURL *streamKeyURL;
@property (nonatomic, retain) NSURL *streamURL;
@property (getter=isSubscribed, nonatomic) bool subscribed;
@property (nonatomic) int subscriberCount;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *trackPlaybackDescriptorQueue;
@property (nonatomic) bool virtualPlayEnabled;

// Image: /System/Library/PrivateFrameworks/Radio.framework/Radio

- (void).cxx_destruct;
- (void)_radioModelWasDeletedNotification:(id)arg1;
- (id)adData;
- (long long)adamID;
- (id)artworkCollection;
- (id)artworkURL;
- (id)artworkURLData;
- (id)artworkURLForSize:(struct CGSize { double x1; double x2; })arg1 expectedSize:(struct CGSize { double x1; double x2; }*)arg2;
- (id)coreSeedName;
- (void)dealloc;
- (id)debugDictionary;
- (id)dictionaryRepresentation;
- (bool)editEnabled;
- (id)editableFields;
- (id)feedbackDictionaryRepresentation;
- (bool)hasSkipRules;
- (unsigned long long)hash;
- (unsigned long long)impressionThreshold;
- (id)initWithModel:(id)arg1 managedObject:(id)arg2;
- (bool)isDatabaseBacked;
- (bool)isEqual:(id)arg1;
- (bool)isExplicit;
- (bool)isFeatured;
- (bool)isGatewayVideoAdEnabled;
- (bool)isPremiumPlacement;
- (bool)isPreview;
- (bool)isPreviewOnly;
- (bool)isShared;
- (bool)isSharingEnabled;
- (bool)isSponsored;
- (bool)isSubscribed;
- (bool)likesEnabled;
- (id)managedObject;
- (id)model;
- (id)name;
- (long long)persistentID;
- (bool)requiresSubscription;
- (id)seedTracks;
- (void)setAdData:(id)arg1;
- (void)setAdamID:(long long)arg1;
- (void)setArtworkURL:(id)arg1;
- (void)setArtworkURLData:(id)arg1;
- (void)setCoreSeedName:(id)arg1;
- (void)setDebugDictionary:(id)arg1;
- (void)setEditEnabled:(bool)arg1;
- (void)setEditableFields:(id)arg1;
- (void)setFeatured:(bool)arg1;
- (void)setGatewayVideoAdEnabled:(bool)arg1;
- (void)setHasSkipRules:(bool)arg1;
- (void)setImpressionThreshold:(unsigned long long)arg1;
- (void)setIsExplicit:(bool)arg1;
- (void)setLikesEnabled:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPersistentID:(long long)arg1;
- (void)setPremiumPlacement:(bool)arg1;
- (void)setPreviewOnly:(bool)arg1;
- (void)setRequiresSubscription:(bool)arg1;
- (void)setSeedTracks:(id)arg1;
- (void)setShareToken:(id)arg1;
- (void)setShared:(bool)arg1;
- (void)setSharingEnabled:(bool)arg1;
- (void)setSkipEnabled:(bool)arg1;
- (void)setSkipFrequency:(int)arg1;
- (void)setSkipIdentifier:(id)arg1;
- (void)setSkipInterval:(double)arg1;
- (void)setSkipTimestamps:(id)arg1;
- (void)setSongMixType:(long long)arg1;
- (void)setSortOrder:(int)arg1;
- (void)setSponsored:(bool)arg1;
- (void)setStationDescription:(id)arg1;
- (void)setStationHash:(id)arg1;
- (void)setStationID:(long long)arg1;
- (void)setStationStringID:(id)arg1;
- (void)setStreamCertificateURL:(id)arg1;
- (void)setStreamKeyURL:(id)arg1;
- (void)setStreamURL:(id)arg1;
- (void)setSubscribed:(bool)arg1;
- (void)setSubscriberCount:(int)arg1;
- (void)setTrackPlaybackDescriptorQueue:(id)arg1;
- (void)setVirtualPlayEnabled:(bool)arg1;
- (id)shareToken;
- (bool)skipEnabled;
- (int)skipFrequency;
- (id)skipIdentifier;
- (double)skipInterval;
- (id)skipTimestamps;
- (long long)songMixType;
- (int)sortOrder;
- (id)stationDescription;
- (id)stationHash;
- (long long)stationID;
- (id)stationStringID;
- (id)streamCertificateURL;
- (id)streamKeyURL;
- (id)streamURL;
- (int)subscriberCount;
- (id)trackPlaybackDescriptorQueue;
- (bool)virtualPlayEnabled;

// Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI

- (id)entityUniqueIdentifier;
- (id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2 destinationScale:(double)arg3;
- (id)valueForEntityProperty:(id)arg1;
- (id)valuesForEntityProperties:(id)arg1;

@end
