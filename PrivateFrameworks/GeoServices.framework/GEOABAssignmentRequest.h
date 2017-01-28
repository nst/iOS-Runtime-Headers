/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOABAssignmentRequest : PBRequest <NSCopying> {
    GEOPDClientMetadata * _clientMetadata;
    NSString * _guid;
    struct { 
        unsigned int requestType : 1; 
    }  _has;
    int  _requestType;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPDClientMetadata *clientMetadata;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic, readonly) bool hasClientMetadata;
@property (nonatomic, readonly) bool hasGuid;
@property (nonatomic) bool hasRequestType;
@property (nonatomic) int requestType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (int)StringAsRequestType:(id)arg1;
- (id)clientMetadata;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)guid;
- (bool)hasClientMetadata;
- (bool)hasGuid;
- (bool)hasRequestType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)requestType;
- (id)requestTypeAsString:(int)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setClientMetadata:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasRequestType:(bool)arg1;
- (void)setRequestType:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
