/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceDataCacheFeedback : PBCodable <NSCopying> {
    NSString * _bundleIdentifier;
    GEOPDPlaceRequest * _request;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, readonly) bool hasBundleIdentifier;
@property (nonatomic, readonly) bool hasRequest;
@property (nonatomic, retain) GEOPDPlaceRequest *request;

- (id)bundleIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBundleIdentifier;
- (bool)hasRequest;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)request;
- (void)setBundleIdentifier:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)writeTo:(id)arg1;

@end
