/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapEdgeFinder : GEOMapRequest {
    struct { 
        double x; 
        double y; 
    }  _centerPoint;
    NSMutableSet * _edgeBuilders;
    id  _edgeHandler;
    double  _mapRadius;
    GEOMapTileFinder * _tileFinder;
}

@property (nonatomic, copy) id edgeHandler;
@property (nonatomic, readonly) GEOMapAccess *map;

- (void)_buildersInTile:(id)arg1 localPoint:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg2 localRadiusSqr:(float)arg3 localSearch:(const struct Box<float, 2> { struct Matrix<float, 2, 1> { float x_1_1_1[2]; } x1; struct Matrix<float, 2, 1> { float x_2_1_1[2]; } x2; }*)arg4 handler:(id)arg5;
- (bool)_checkEdgeForDuplicates:(const struct shared_ptr<geo::MapEdge> { struct MapEdge {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (void)cancel;
- (void)dealloc;
- (id)edgeHandler;
- (void)findEdges:(id)arg1;
- (id)initWithMap:(id)arg1 center:(struct { double x1; double x2; })arg2 radius:(double)arg3;
- (id)map;
- (void)setEdgeHandler:(id)arg1;

@end
