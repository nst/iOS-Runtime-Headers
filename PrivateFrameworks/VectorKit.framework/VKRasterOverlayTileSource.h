/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRasterOverlayTileSource : VKTileSource {
    NSObject<OS_dispatch_queue> * _homeQ;
    NSMutableArray * _overlays;
    bool  _overrideMaxZoomLevel;
    NSObject<OS_dispatch_group> * _renderGroup;
    NSMutableSet * _worldSizedOverlays;
}

@property (nonatomic, readonly) NSArray *overlays;
@property (nonatomic) bool overrideMaxZoomLevel;

- (void)_flush;
- (void)_queueDraw:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)addOverlay:(id)arg1;
- (bool)canFetchTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (bool)cancelFetchForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)dealloc;
- (void)exchangeOverlayAtIndex:(unsigned long long)arg1 withOverlayAtIndex:(unsigned long long)arg2;
- (void)fetchTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 sourceKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (id)init;
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;
- (void)invalidate;
- (void)invalidateRect:(const struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; }*)arg1 level:(long long)arg2;
- (unsigned int)maximumDownloadZoomLevel;
- (bool)maximumZoomLevelBoundsCamera;
- (unsigned int)minimumDownloadZoomLevel;
- (bool)minimumZoomLevelBoundsCamera;
- (id)overlays;
- (bool)overrideMaxZoomLevel;
- (void)removeOverlay:(id)arg1;
- (void)setOverrideMaxZoomLevel:(bool)arg1;
- (long long)tileSize;

@end
