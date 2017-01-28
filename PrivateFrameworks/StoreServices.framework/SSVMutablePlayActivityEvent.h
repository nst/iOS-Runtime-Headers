/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVMutablePlayActivityEvent : SSVPlayActivityEvent

@property (getter=isSBEnabled, nonatomic) bool SBEnabled;
@property (nonatomic, copy) NSString *buildVersion;
@property (nonatomic, copy) NSString *containerID;
@property (nonatomic, copy) SSVPlayActivityEventContainerIDs *containerIDs;
@property (nonatomic) unsigned long long containerType;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic) unsigned long long endReasonType;
@property (nonatomic, copy) NSDate *eventDate;
@property (nonatomic, copy) NSTimeZone *eventTimeZone;
@property (nonatomic) unsigned long long eventType;
@property (nonatomic, copy) NSString *externalID;
@property (nonatomic, copy) NSString *featureName;
@property (getter=isInternalBuild, nonatomic) bool internalBuild;
@property (nonatomic) double itemDuration;
@property (nonatomic) double itemEndTime;
@property (nonatomic, copy) SSVPlayActivityEventItemIDs *itemIDs;
@property (nonatomic) double itemStartTime;
@property (nonatomic) unsigned long long itemType;
@property (nonatomic) unsigned long long mediaType;
@property (getter=isOffline, nonatomic) bool offline;
@property (nonatomic) long long persistentID;
@property (nonatomic, copy) NSString *personalizedContainerID;
@property (nonatomic) unsigned long long reasonHintType;
@property (nonatomic, copy) NSData *recommendationData;
@property (nonatomic, copy) NSString *requestingBundleIdentifier;
@property (nonatomic, copy) NSString *requestingBundleVersion;
@property (nonatomic) unsigned long long sourceType;
@property (nonatomic) unsigned long long storeAccountID;
@property (nonatomic, copy) NSString *storeFrontID;
@property (nonatomic, copy) NSString *storeID;
@property (nonatomic, copy) NSData *timedMetadata;
@property (nonatomic, copy) NSData *trackInfo;
@property (nonatomic) long long version;

- (Class)_mutableCopyClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setBuildVersion:(id)arg1;
- (void)setContainerID:(id)arg1;
- (void)setContainerIDs:(id)arg1;
- (void)setContainerType:(unsigned long long)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setEndReasonType:(unsigned long long)arg1;
- (void)setEventDate:(id)arg1;
- (void)setEventTimeZone:(id)arg1;
- (void)setEventType:(unsigned long long)arg1;
- (void)setExternalID:(id)arg1;
- (void)setFeatureName:(id)arg1;
- (void)setInternalBuild:(bool)arg1;
- (void)setItemDuration:(double)arg1;
- (void)setItemEndTime:(double)arg1;
- (void)setItemIDs:(id)arg1;
- (void)setItemStartTime:(double)arg1;
- (void)setItemType:(unsigned long long)arg1;
- (void)setMediaType:(unsigned long long)arg1;
- (void)setOffline:(bool)arg1;
- (void)setPersistentID:(long long)arg1;
- (void)setPersonalizedContainerID:(id)arg1;
- (void)setReasonHintType:(unsigned long long)arg1;
- (void)setRecommendationData:(id)arg1;
- (void)setRequestingBundleIdentifier:(id)arg1;
- (void)setRequestingBundleVersion:(id)arg1;
- (void)setSBEnabled:(bool)arg1;
- (void)setSourceType:(unsigned long long)arg1;
- (void)setStoreAccountID:(unsigned long long)arg1;
- (void)setStoreFrontID:(id)arg1;
- (void)setStoreID:(id)arg1;
- (void)setTimedMetadata:(id)arg1;
- (void)setTrackInfo:(id)arg1;
- (void)setVersion:(long long)arg1;

@end
