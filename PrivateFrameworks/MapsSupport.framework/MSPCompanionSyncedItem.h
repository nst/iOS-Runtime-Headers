/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPCompanionSyncedItem : PBCodable <NSCopying, SYChange, SYObject> {
    MSPBookmarkStorage * _bookmark;
    int  _changeType;
    struct { 
        unsigned int changeType : 1; 
    }  _has;
    MSPPinStorage * _pin;
    MSPHistoryEntryStorage * _searchRequest;
    NSString * _syncId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) MSPBookmarkStorage *bookmark;
@property (nonatomic) int changeType;
@property (nonatomic, readonly) long long changeType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasBookmark;
@property (nonatomic) bool hasChangeType;
@property (nonatomic, readonly) bool hasPin;
@property (nonatomic, readonly) bool hasSearchRequest;
@property (nonatomic, readonly) bool hasSyncId;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *objectIdentifier;
@property (nonatomic, retain) MSPPinStorage *pin;
@property (nonatomic, retain) MSPHistoryEntryStorage *searchRequest;
@property (nonatomic, readonly) NSString *sequencer;
@property (readonly) Class superclass;
@property (nonatomic) long long syChangeType;
@property (nonatomic, retain) NSString *syncId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)syncIdWithPrefix:(id)arg1 identifier:(id)arg2;

- (void).cxx_destruct;
- (int)StringAsChangeType:(id)arg1;
- (id)bookmark;
- (int)changeType;
- (id)changeTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBookmark;
- (bool)hasChangeType;
- (bool)hasPin;
- (bool)hasSearchRequest;
- (bool)hasSyncId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)objectIdentifier;
- (id)pin;
- (bool)readFrom:(id)arg1;
- (id)searchRequest;
- (id)sequencer;
- (void)setBookmark:(id)arg1;
- (void)setChangeType:(int)arg1;
- (void)setHasChangeType:(bool)arg1;
- (void)setPin:(id)arg1;
- (void)setSearchRequest:(id)arg1;
- (void)setSyChangeType:(long long)arg1;
- (void)setSyncId:(id)arg1;
- (long long)syChangeType;
- (id)syncId;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
