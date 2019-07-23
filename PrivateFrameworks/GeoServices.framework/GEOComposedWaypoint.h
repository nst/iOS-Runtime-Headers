/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedWaypoint : PBCodable <NSCopying> {
    GEOLatLng * _latLng;
    GEOMapItemStorage * _mapItemStorage;
    GEOWaypointTyped * _waypoint;
}

@property (nonatomic, readonly) int destinationType;
@property (nonatomic, readonly) bool hasLatLng;
@property (nonatomic, readonly) bool hasMapItemStorage;
@property (nonatomic, readonly) bool hasWaypoint;
@property (nonatomic, retain) GEOLatLng *latLng;
@property (nonatomic, retain) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, retain) GEOWaypointTyped *waypoint;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)composedWaypointForAddressString:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(id /* block */)arg4 networkActivityHandler:(id /* block */)arg5;
+ (id)composedWaypointForCurrentLocation:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 completionHandler:(id /* block */)arg4 networkActivityHandler:(id /* block */)arg5;
+ (id)composedWaypointForCurrentLocation:(id)arg1 traits:(id)arg2 completionHandler:(id /* block */)arg3 networkActivityHandler:(id /* block */)arg4;
+ (id)composedWaypointForID:(unsigned long long)arg1 resultsProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4 clientAttributes:(id)arg5 completionHandler:(id /* block */)arg6 networkActivityHandler:(id /* block */)arg7;
+ (id)composedWaypointForID:(unsigned long long)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(id /* block */)arg4 networkActivityHandler:(id /* block */)arg5;
+ (id)composedWaypointForIncompleteMapItem:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(id /* block */)arg4 networkActivityHandler:(id /* block */)arg5;
+ (id)composedWaypointForLocation:(id)arg1 mapItem:(id)arg2 traits:(id)arg3 auditToken:(id)arg4 completionHandler:(id /* block */)arg5 networkActivityHandler:(id /* block */)arg6;
+ (id)composedWaypointForLocation:(id)arg1 mapItem:(id)arg2 traits:(id)arg3 completionHandler:(id /* block */)arg4 networkActivityHandler:(id /* block */)arg5;
+ (id)composedWaypointForMapItem:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 clientAttributes:(id)arg4 completionHandler:(id /* block */)arg5 networkActivityHandler:(id /* block */)arg6;
+ (id)composedWaypointForMapItem:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(id /* block */)arg4 networkActivityHandler:(id /* block */)arg5;
+ (id)composedWaypointForMapItemToRefine:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 clientAttributes:(id)arg4 completionHandler:(id /* block */)arg5 networkActivityHandler:(id /* block */)arg6;
+ (id)composedWaypointForMapItemToRefine:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(id /* block */)arg4 networkActivityHandler:(id /* block */)arg5;
+ (void)composedWaypointForMapServiceResponse:(id)arg1 clientAttributes:(id)arg2 error:(id)arg3 handler:(id /* block */)arg4;
+ (id)composedWaypointForSearchString:(id)arg1 completionItem:(id)arg2 traits:(id)arg3 clientAttributes:(id)arg4 clientResolvedCompletionHandler:(id /* block */)arg5 completionHandler:(id /* block */)arg6 networkActivityHandler:(id /* block */)arg7;
+ (id)composedWaypointForSearchString:(id)arg1 completionItem:(id)arg2 traits:(id)arg3 clientAttributes:(id)arg4 completionHandler:(id /* block */)arg5 networkActivityHandler:(id /* block */)arg6;
+ (id)composedWaypointForTransitID:(unsigned long long)arg1 coordinate:(struct { double x1; double x2; })arg2 isCurrentLocation:(bool)arg3 traits:(id)arg4 clientAttributes:(id)arg5 completionHandler:(id /* block */)arg6 networkActivityHandler:(id /* block */)arg7;
+ (id)composedWaypointForWaypointTyped:(id)arg1 completionHandler:(id /* block */)arg2 networkActivityHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)_addressCandidatesForComparison;
- (id)_locationCandidatesForComparison;
- (id)_muidCandidatesForComparison;
- (id)_regionCandidatesForContainment;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)distanceToWaypoint:(id)arg1;
- (id)geoMapItem;
- (bool)hasLatLng;
- (bool)hasMapItemStorage;
- (bool)hasWaypoint;
- (unsigned long long)hash;
- (id)initWithLocation:(id)arg1 isCurrentLocation:(bool)arg2;
- (id)initWithMapItem:(id)arg1;
- (bool)isCurrentLocation;
- (bool)isEqual:(id)arg1;
- (bool)isLocationWaypointType;
- (bool)isSameAs:(id)arg1;
- (bool)isSameAs:(id)arg1 comparisonCriteria:(unsigned long long)arg2;
- (id)latLng;
- (id)mapItemStorage;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIsCurrentLocation:(bool)arg1;
- (void)setLatLng:(id)arg1;
- (void)setMapItemStorage:(id)arg1;
- (void)setWaypoint:(id)arg1;
- (id)timezone;
- (id)waypoint;
- (void)writeTo:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (void)composedWaypointForMapItem:(id)arg1 useAsLocation:(bool)arg2 forQuickETA:(bool)arg3 traits:(id)arg4 completionHandler:(id /* block */)arg5 networkActivityHandler:(id /* block */)arg6;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

- (int)destinationType;
- (id)localeIdentifier;
- (id)navAnnouncementAddress;
- (id)navAnnouncementName;
- (id)navDisplayAddress;
- (id)navDisplayName;
- (id)navDisplayNameWithSpecialContacts:(bool)arg1;

@end
