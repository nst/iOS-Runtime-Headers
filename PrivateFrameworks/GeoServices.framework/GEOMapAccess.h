/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapAccess : GEOMapRequestManager {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    <GEOMapAccessRestrictions> * _restrictions;
    id  _tileErrorHandler;
    bool  _useMapMatchingTilesetForRoads;
}

@property (nonatomic, readonly) bool allowsNetworkTileLoad;
@property (nonatomic, readonly) unsigned long long buildingsZoomLevel;
@property (nonatomic, readonly) unsigned int maxTransitZoomLevel;
@property (nonatomic, readonly) unsigned int maxZoomLevel;
@property (nonatomic, readonly) unsigned int minZoomLevel;
@property (nonatomic) <GEOMapAccessRestrictions> *restrictions;
@property (nonatomic, readonly) unsigned long long roadsZoomLevel;
@property (nonatomic, copy) id tileErrorHandler;
@property (nonatomic, readonly) unsigned long long transitZoomLevel;
@property (nonatomic) bool useMapMatchingTilesetForRoads;
@property (nonatomic) unsigned int zoomLevel;

+ (id)map;
+ (id)realisticMap;
+ (bool)supportsBuildingMapAccess;
+ (bool)supportsRealisticMap;
+ (bool)supportsRoadMapAccess;
+ (bool)supportsTransitMap;
+ (bool)supportsTransitMapAccess;
+ (id)transitMap;

- (id)_findTransitPointWithID:(unsigned long long)arg1 near:(struct { double x1; double x2; })arg2 type:(unsigned long long)arg3 pointHandler:(id)arg4 completionHandler:(id)arg5;
- (id)_findTransitPointsWithin:(double)arg1 of:(struct { double x1; double x2; })arg2 type:(unsigned long long)arg3 pointHandler:(id)arg4 completionHandler:(id)arg5;
- (bool)_hasLoadedTilesNearCoordinate:(struct { double x1; double x2; })arg1 radius:(double)arg2 zoomLevel:(unsigned long long)arg3 tileStyle:(int)arg4 tileSize:(int)arg5 tileScale:(int)arg6;
- (id)_transitPointForTransitMapNode:(struct shared_ptr<geo::MapNodeTransit> { struct MapNodeTransit {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (bool)allowsNetworkTileLoad;
- (id)buildMapEdgeTransitFrom:(const struct TransitEdgePiece { struct { /* ? */ } *x1; unsigned long long x2; struct { /* ? */ } *x3; struct _retain_ptr<GEOFeature *, geo::_retain_GEOFeature, geo::_release_GEOFeature, geo::_hash_ptr, geo::_equal_ptr> { int (**x_4_1_1)(); struct { /* ? */ } *x_4_1_2; struct _retain_GEOFeature { } x_4_1_3; struct _release_GEOFeature { } x_4_1_4; } x4; unsigned int x5; bool x6; }*)arg1 edgeHandler:(id)arg2;
- (unsigned long long)buildingsZoomLevel;
- (id)callbackQueue;
- (void)dealloc;
- (id)findBuildingsWithin:(double)arg1 of:(struct { double x1; double x2; })arg2 buildingHandler:(id)arg3 completionHandler:(id)arg4;
- (id)findClosestNamedFeaturesAtCoordinate:(struct { double x1; double x2; })arg1 roadHandler:(id)arg2 pointHandler:(id)arg3 polygonHandler:(id)arg4 completionHandler:(id)arg5;
- (id)findClosestRoadAtCoordinate:(struct { double x1; double x2; })arg1 roadHandler:(id)arg2 completionHandler:(id)arg3;
- (id)findRoadEdgesWithin:(double)arg1 of:(struct { double x1; double x2; })arg2 edgeHandler:(id)arg3 completionHandler:(id)arg4;
- (id)findRoadTilesWithin:(double)arg1 of:(struct { double x1; double x2; })arg2 tileHander:(id)arg3 completionHandler:(id)arg4;
- (id)findRoadsWithin:(double)arg1 of:(struct { double x1; double x2; })arg2 handler:(id)arg3 completionHandler:(id)arg4;
- (id)findTransitEdgesWithin:(double)arg1 of:(struct { double x1; double x2; })arg2 edgeHandler:(id)arg3 completionHandler:(id)arg4;
- (id)findTransitHallWithID:(unsigned long long)arg1 near:(struct { double x1; double x2; })arg2 hallHandler:(id)arg3 completionHandler:(id)arg4;
- (id)findTransitHallsWithin:(double)arg1 of:(struct { double x1; double x2; })arg2 hallHandler:(id)arg3 completionHandler:(id)arg4;
- (id)findTransitLinksWithin:(double)arg1 of:(struct { double x1; double x2; })arg2 linkHandler:(id)arg3 completionHandler:(id)arg4;
- (id)findTransitNodeWithID:(unsigned long long)arg1 near:(struct { double x1; double x2; })arg2 nodeHandler:(id)arg3 completionHandler:(id)arg4;
- (id)findTransitNodesWithin:(double)arg1 of:(struct { double x1; double x2; })arg2 nodeHandler:(id)arg3 completionHandler:(id)arg4;
- (id)findTransitPointWithID:(unsigned long long)arg1 near:(struct { double x1; double x2; })arg2 pointHandler:(id)arg3 completionHandler:(id)arg4;
- (id)findTransitPointWithParentID:(unsigned long long)arg1 near:(struct { double x1; double x2; })arg2 type:(unsigned long long)arg3 pointHandler:(id)arg4 completionHandler:(id)arg5;
- (id)findTransitPointsWithin:(double)arg1 of:(struct { double x1; double x2; })arg2 pointHandler:(id)arg3 completionHandler:(id)arg4;
- (id)findTransitStationWithID:(unsigned long long)arg1 near:(struct { double x1; double x2; })arg2 stationHandler:(id)arg3 completionHandler:(id)arg4;
- (id)findTransitStationsWithin:(double)arg1 of:(struct { double x1; double x2; })arg2 stationHandler:(id)arg3 completionHandler:(id)arg4;
- (id)findTransitStopWithID:(unsigned long long)arg1 near:(struct { double x1; double x2; })arg2 stopHandler:(id)arg3 completionHandler:(id)arg4;
- (id)findTransitStopsWithin:(double)arg1 of:(struct { double x1; double x2; })arg2 stopHandler:(id)arg3 completionHandler:(id)arg4;
- (bool)hasLoadedBuildingTilesNearCoordinate:(struct { double x1; double x2; })arg1 radius:(double)arg2;
- (bool)hasLoadedRoadTilesNearCoordinate:(struct { double x1; double x2; })arg1 radius:(double)arg2;
- (bool)hasLoadedTransitTilesNearCoordinate:(struct { double x1; double x2; })arg1 radius:(double)arg2;
- (id)init;
- (unsigned int)maxTransitZoomLevel;
- (unsigned int)maxZoomLevel;
- (unsigned int)minZoomLevel;
- (void)preloadBuildingTilesNearCoordinate:(struct { double x1; double x2; })arg1 radius:(double)arg2 completionHandler:(id)arg3;
- (void)preloadRoadTilesNearCoordinate:(struct { double x1; double x2; })arg1 radius:(double)arg2 completionHandler:(id)arg3;
- (void)preloadTransitTilesNearCoordinate:(struct { double x1; double x2; })arg1 radius:(double)arg2 completionHandler:(id)arg3;
- (id)restrictions;
- (unsigned long long)roadsZoomLevel;
- (void)setCallbackQueue:(id)arg1;
- (void)setRestrictions:(id)arg1;
- (void)setTileErrorHandler:(id)arg1;
- (void)setUseMapMatchingTilesetForRoads:(bool)arg1;
- (void)setZoomLevel:(unsigned int)arg1;
- (id)tileErrorHandler;
- (unsigned long long)transitZoomLevel;
- (bool)useMapMatchingTilesetForRoads;
- (unsigned int)zoomLevel;

@end
