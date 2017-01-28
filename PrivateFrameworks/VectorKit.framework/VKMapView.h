/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapView : CALayer <GGLRenderQueueSource, MDMapControllerDelegate, VKInteractiveMapDelegate, VKNavCameraControllerObserver, VKPuckAnimatorDelegate> {
    GEOResourceManifestConfiguration * _additionalManifestConfiguration;
    bool  _additionalManifestConfigurationLoaderOpen;
    struct VKEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _animatingToEdgeInsets;
    NSMutableArray * _annotationMarkersToAddToNewCanvas;
    unsigned char  _applicationState;
    VKMapCanvas * _canvas;
    bool  _containsOverlay;
    GGLDisplayLink * _displayLink;
    long long  _displayRate;
    unsigned char  _displayedSearchResultsType;
    VKTimedAnimation * _edgeInsetAnimation;
    VKClassicGlobeCanvas * _globe;
    bool  _isChangingMapType;
    bool  _isInBackground;
    double  _lastAnimatedCourse;
    struct Mercator3<double> { 
        double _e[3]; 
    }  _lastAnimatedUserPosition;
    bool  _loaderOpen;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    VKMapCameraController * _mapCameraController;
    <VKMapViewDelegate> * _mapDelegate;
    struct { 
        unsigned char timePeriod; 
        unsigned char overlayType; 
        unsigned char applicationState; 
        unsigned char searchResultsType; 
        bool mapHasLabels; 
    }  _mapDisplayStyle;
    VKTimedAnimation * _mapDisplayStyleAnimation;
    MDDisplayLayer * _mapLayer;
    long long  _mapType;
    VKMemoryObserver * _memoryObserver;
    VKNavContext * _navContext;
    VKNavCameraController * _navigationCameraController;
    long long  _navigationDisplayRate;
    struct vector<OnscreenTimestampData, std::__1::allocator<OnscreenTimestampData> > { 
        struct OnscreenTimestampData {} *__begin_; 
        struct OnscreenTimestampData {} *__end_; 
        struct __compressed_pair<OnscreenTimestampData *, std::__1::allocator<OnscreenTimestampData> > { 
            struct OnscreenTimestampData {} *__first_; 
        } __end_cap_; 
    }  _onscreenTimestamps;
    unsigned long long  _regionChangeCount;
    struct shared_ptr<ggl::RenderQueue> { 
        struct RenderQueue {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _renderQueue;
    long long  _requestedRate;
    VKLabelMarker * _selectedLabelMarker;
    NSString * _tileLoaderClientID;
    VKPuckAnimator * _userLocationAnimator;
    double  _verticalYaw;
}

@property (nonatomic, retain) GEOResourceManifestConfiguration *additionalManifestConfiguration;
@property (nonatomic) bool allowDatelineWraparound;
@property (nonatomic, readonly) double altitude;
@property (getter=isAnimatingToTrackAnnotation, nonatomic, readonly) bool animatingToTrackAnnotation;
@property (nonatomic, readonly) NSArray *annotationMarkers;
@property (nonatomic) long long annotationTrackingHeadingAnimationDisplayRate;
@property (nonatomic) long long annotationTrackingZoomStyle;
@property (nonatomic) unsigned char applicationState;
@property (nonatomic) long long applicationUILayout;
@property (nonatomic, readonly) bool canEnter3DMode;
@property (nonatomic, readonly) bool canShowFlyover;
@property (nonatomic, readonly) bool canShowFlyoverAnimation;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } centerCoordinate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool debugDrawContinuously;
@property (nonatomic) bool debugEnableMultisampling;
@property (nonatomic, readonly) float debugFramesPerSecond;
@property (nonatomic) bool debugLayoutContinuously;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long displayRate;
@property (nonatomic) unsigned char displayedSearchResultsType;
@property (nonatomic) struct VKEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic, readonly) bool enableDebugLabelHighlighting;
@property (nonatomic, retain) NSArray *externalTrafficIncidents;
@property (nonatomic, readonly) int flyoverMode;
@property (nonatomic, retain) VKPolylineOverlayPainter *focusedLabelsPolylinePainter;
@property (getter=isFullyDrawn, nonatomic, readonly) bool fullyDrawn;
@property (nonatomic) struct VKEdgeInsets { double x1; double x2; double x3; double x4; } fullyOccludedEdgeInsets;
@property (getter=isFullyPitched, nonatomic, readonly) bool fullyPitched;
@property (getter=isGesturing, nonatomic) bool gesturing;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CADisplay *hostDisplay;
@property (nonatomic) bool iconsShouldAlignToPixels;
@property (nonatomic) bool isPitchable;
@property (nonatomic) struct VKEdgeInsets { double x1; double x2; double x3; double x4; } labelEdgeInsets;
@property (getter=isLabelMarkerSelectionEnabled, nonatomic) bool labelMarkerSelectionEnabled;
@property (nonatomic, readonly) NSArray *labelMarkers;
@property (nonatomic) long long labelScaleFactor;
@property (nonatomic) bool localizeLabels;
@property (nonatomic, readonly) VKMapCanvas *mapCanvas;
@property (nonatomic) <VKMapViewDelegate> *mapDelegate;
@property (nonatomic) struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; } mapDisplayStyle;
@property (nonatomic, readonly) GEOMapRegion *mapRegion;
@property (nonatomic) long long mapType;
@property (nonatomic) long long navigationDisplayRate;
@property (nonatomic) long long navigationShieldSize;
@property (nonatomic, readonly) double pitch;
@property (getter=isPitched, nonatomic, readonly) bool pitched;
@property (nonatomic, readonly) double presentationYaw;
@property (nonatomic) bool rendersInBackground;
@property (nonatomic, retain) <GEORoutePreloadSession> *routePreloadSession;
@property (nonatomic, readonly) VKSceneConfiguration *sceneConfiguration;
@property (nonatomic, readonly) VKLabelMarker *selectedLabelMarker;
@property (nonatomic) long long shieldIdiom;
@property (nonatomic) long long shieldSize;
@property (nonatomic) bool shouldLoadFallbackTiles;
@property (nonatomic) bool shouldLoadMapMargin;
@property (getter=isShowingFlyover, nonatomic, readonly) bool showingFlyover;
@property (nonatomic) bool showsBuildings;
@property (nonatomic) bool showsPointsOfInterest;
@property (nonatomic) bool staysCenteredDuringPinch;
@property (nonatomic) bool staysCenteredDuringRotation;
@property (readonly) Class superclass;
@property (nonatomic) long long targetDisplay;
@property (nonatomic) bool trackingCameraShouldHandleGestures;
@property (nonatomic) double trackingZoomScale;
@property (nonatomic) bool trafficEnabled;
@property (nonatomic) bool trafficIncidentsEnabled;
@property (nonatomic, readonly) VKPuckAnimator *userLocationAnimator;
@property (nonatomic) struct { bool x1; } vehicleState;
@property (nonatomic, readonly) double verticalYaw;
@property (nonatomic, readonly) NSArray *visibleTileSets;
@property (nonatomic, readonly) double yaw;

// Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_clearAnalytics;
- (void)_closeAdditionalManifestConfigurationLoaderConnection;
- (bool)_createDisplayLayer;
- (void)_createGlobe;
- (void)_forceLayoutForSuspensionSnapShot;
- (void)_notifyDelegateFlyoverTourLabelChanged:(id)arg1;
- (void)_openAdditionalManifestConfigurationLoaderConnection;
- (void)_runFlyoverTourStateChange:(int)arg1 completion:(id)arg2;
- (void)_setStyleTransitionProgress:(double)arg1 targetStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })arg2 step:(long long)arg3;
- (double)_styleTransitionProgress;
- (void)_updateAnalytics:(bool)arg1;
- (void)_updateBackgroundColor;
- (void)_updateDisplayRate;
- (void)_updateMapDisplayStyle;
- (void)addAnnotationMarker:(id)arg1;
- (void)addCustomFeatureDataSource:(id)arg1;
- (void)addExternalAnchor:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)addPersistentOverlay:(id)arg1;
- (void)addRasterOverlay:(id)arg1;
- (id)additionalManifestConfiguration;
- (bool)allowDatelineWraparound;
- (double)altitude;
- (void)animateStylesWithDuration:(double)arg1 animations:(id)arg2;
- (id)annotationCoordinateTest;
- (id)annotationMarkers;
- (id)annotationRectTest;
- (long long)annotationTrackingHeadingAnimationDisplayRate;
- (long long)annotationTrackingZoomStyle;
- (unsigned char)applicationState;
- (long long)applicationUILayout;
- (id)attributionsForCurrentRegion;
- (id)boundsContextForSelectedTransitLines;
- (bool)buildingFootprintsDisabled;
- (struct shared_ptr<md::FeatureMarker> { struct FeatureMarker {} *x1; struct __shared_weak_count {} *x2; })buildingMarkerAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)canEnter3DMode;
- (bool)canRotate;
- (bool)canShowFlyover;
- (bool)canShowFlyoverAnimation;
- (bool)canZoomInForTileSize:(long long)arg1;
- (bool)canZoomOutForTileSize:(long long)arg1;
- (struct { double x1; double x2; double x3; })centerCoordinate;
- (void)clearOnscreenTimestamps;
- (void)clearScene;
- (void)closeLoaderConnection;
- (id)closestRoadMarkerForSelectionAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)consoleString:(bool)arg1;
- (struct CGPoint { double x1; double x2; })convertCoordinate:(struct { double x1; double x2; })arg1 toCameraModelPointToLayer:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertCoordinate:(struct { double x1; double x2; })arg1 toPointToLayer:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertMapPoint:(struct { double x1; double x2; })arg1 toPointToLayer:(id)arg2;
- (struct { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toCoordinateFromLayer:(id)arg2;
- (struct { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toMapPointFromLayer:(id)arg2;
- (id)currentCanvas;
- (long long)currentMapMode;
- (double)currentZoomLevelForTileSize:(long long)arg1;
- (void)dealloc;
- (bool)debugDrawContinuously;
- (bool)debugEnableMultisampling;
- (float)debugFramesPerSecond;
- (void)debugHighlightFeatureMarker:(const struct shared_ptr<md::FeatureMarker> { struct FeatureMarker {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (void)debugHighlightLabelAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)debugLayoutContinuously;
- (void)debugRunPerformanceTestWithOutputHeader:(id)arg1;
- (void)deselectLabelMarker;
- (void)deselectTransitLineMarker;
- (id)detailedDescription;
- (id)detailedDescriptionDictionaryRepresentation;
- (void)didEnterBackground;
- (void)didFinishSnapshotting;
- (void)didPresent;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)disableFlyoverStatistics;
- (long long)displayRate;
- (unsigned char)displayedSearchResultsType;
- (double)distanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2 fromLayer:(id)arg3 withPrecision:(long long)arg4;
- (double)durationToAnimateToMapRegion:(id)arg1;
- (struct VKEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (bool)enableDebugLabelHighlighting;
- (void)enableFlyoverStatistics;
- (void)enter3DMode;
- (void)exit3DMode;
- (id)externalTrafficIncidents;
- (struct shared_ptr<md::FeatureMarker> { struct FeatureMarker {} *x1; struct __shared_weak_count {} *x2; })featureMarkerAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)flushTileLoads;
- (int)flyoverMode;
- (id)flyoverStatistics;
- (id)focusedLabelsPolylinePainter;
- (void)forceFrame;
- (void)forceLayout;
- (void)forceSceneLoad;
- (struct VKEdgeInsets { double x1; double x2; double x3; double x4; })fullyOccludedEdgeInsets;
- (void)goToTileX:(int)arg1 Y:(int)arg2 Z:(int)arg3 tileSize:(int)arg4;
- (bool)gridDisabled;
- (id)hostDisplay;
- (id)iconForStyleAttributes:(id)arg1 contentScale:(double)arg2 size:(long long)arg3 customIconID:(unsigned long long)arg4 transparent:(bool)arg5;
- (bool)iconsShouldAlignToPixels;
- (id)initWithGlobe:(bool)arg1 shouldRasterize:(bool)arg2 inBackground:(bool)arg3 manifestConfiguration:(id)arg4 contentScale:(double)arg5;
- (void)insertRasterOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)insertRasterOverlay:(id)arg1 belowOverlay:(id)arg2;
- (bool)isAnimatingToTrackAnnotation;
- (bool)isEffectivelyHidden;
- (bool)isFullyDrawn;
- (bool)isFullyPitched;
- (bool)isGesturing;
- (bool)isLabelMarkerSelectionEnabled;
- (bool)isPitchable;
- (bool)isPitched;
- (bool)isPointValidForGesturing:(struct CGPoint { double x1; double x2; })arg1;
- (bool)isShowingFlyover;
- (bool)isShowingNoDataPlaceholders;
- (struct VKEdgeInsets { double x1; double x2; double x3; double x4; })labelEdgeInsets;
- (id)labelMarkerForCustomFeatureAnnotation:(id)arg1;
- (id)labelMarkerForCustomFeatureAnnotation:(id)arg1 dataSource:(id)arg2;
- (id)labelMarkerForSelectionAtPoint:(struct CGPoint { double x1; double x2; })arg1 selectableLabelsOnly:(bool)arg2;
- (id)labelMarkers;
- (long long)labelScaleFactor;
- (bool)labelsDisabled;
- (bool)localizeLabels;
- (void)map:(id)arg1 canEnter3DModeDidChange:(bool)arg2;
- (void)map:(id)arg1 canShowFlyoverDidChange:(bool)arg2;
- (void)map:(id)arg1 canZoomInDidChange:(bool)arg2;
- (void)map:(id)arg1 canZoomOutDidChange:(bool)arg2;
- (void)map:(id)arg1 didBecomePitched:(bool)arg2;
- (void)map:(id)arg1 didChangeRegionAnimated:(bool)arg2;
- (void)map:(id)arg1 didUpdateContainsOverlay:(bool)arg2;
- (void)map:(id)arg1 didUpdateVerticalYawTo:(double)arg2;
- (void)map:(id)arg1 flyoverModeDidChange:(int)arg2;
- (void)map:(id)arg1 flyoverModeWillChange:(int)arg2;
- (id)map:(id)arg1 painterForOverlay:(id)arg2;
- (id)map:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)map:(id)arg1 selectedLabelMarkerDidChangeState:(const struct shared_ptr<md::LabelMarker> { struct LabelMarker {} *x1; struct __shared_weak_count {} *x2; }*)arg2;
- (void)map:(id)arg1 selectedLabelMarkerWillDisappear:(const struct shared_ptr<md::LabelMarker> { struct LabelMarker {} *x1; struct __shared_weak_count {} *x2; }*)arg2;
- (void)map:(id)arg1 willChangeRegionAnimated:(bool)arg2;
- (void)map:(id)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4;
- (id)mapCanvas;
- (void)mapController:(id)arg1 requestsDisplayRate:(long long)arg2;
- (void)mapControllerNeedsDisplay:(id)arg1;
- (void)mapControllerNeedsInitialization:(id)arg1;
- (id)mapDelegate;
- (void)mapDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(bool)arg2;
- (void)mapDidBecomePartiallyDrawn:(id)arg1;
- (void)mapDidChangeVisibleRegion:(id)arg1;
- (void)mapDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
- (void)mapDidFinishChangingMapDisplayStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })arg1;
- (void)mapDidFinishInitialTrackingAnimation:(id)arg1;
- (void)mapDidFinishLoadingTiles:(id)arg1;
- (void)mapDidReloadStylesheet:(id)arg1;
- (void)mapDidStartLoadingTiles:(id)arg1;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })mapDisplayStyle;
- (void)mapLabelsDidLayout:(id)arg1;
- (id)mapRegion;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })mapRegionBounds;
- (long long)mapType;
- (double)maximumZoomLevelForTileSize:(long long)arg1;
- (double)minimumZoomLevelForTileSize:(long long)arg1;
- (void)moveToFlyoverTourStartPosition:(id)arg1 duration:(double)arg2 completion:(id)arg3;
- (void)navigationCameraHasStartedPanning;
- (void)navigationCameraHasStoppedPanning;
- (void)navigationCameraReturnToPuck;
- (long long)navigationDisplayRate;
- (long long)navigationShieldSize;
- (void)onTimerFired:(id)arg1;
- (void)openLoaderConnection;
- (void)panWithOffset:(struct CGPoint { double x1; double x2; })arg1 relativeToScreenPoint:(struct CGPoint { double x1; double x2; })arg2 animated:(bool)arg3 duration:(double)arg4 completionHandler:(id)arg5;
- (void)pauseFlyoverTourAnimation;
- (void)pauseTracking;
- (void)performStylesheetDidChange;
- (double)pitch;
- (bool)polygonsDisabled;
- (void)preloadNavigationSceneResources;
- (void)prepareFlyoverAnimation:(id)arg1 completion:(id)arg2;
- (double)presentationYaw;
- (void)puckAnimator:(id)arg1 runAnimation:(id)arg2;
- (void)puckAnimator:(id)arg1 updatedPosition:(const struct Mercator3<double> { double x1[3]; }*)arg2 course:(double)arg3;
- (void)puckAnimator:(id)arg1 updatedTargetPosition:(struct Matrix<double, 3, 1> { double x1[3]; })arg2;
- (void)puckAnimatorDidStop:(id)arg1;
- (void)pushNewOnscreenTimestamp:(id)arg1;
- (bool)rastersDisabled;
- (void)reloadStylesheet;
- (void)removeAnnotationMarker:(id)arg1;
- (void)removeCustomFeatureDataSource:(id)arg1;
- (void)removeExternalAnchor:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)removePersistentOverlay:(id)arg1;
- (void)removeRasterOverlay:(id)arg1;
- (void)renderInContext:(struct CGContext { }*)arg1;
- (struct RenderQueue { struct vector<ggl::RenderQueue::Pass, std::__1::allocator<ggl::RenderQueue::Pass> > { struct Pass {} *x_1_1_1; struct Pass {} *x_1_1_2; struct __compressed_pair<ggl::RenderQueue::Pass *, std::__1::allocator<ggl::RenderQueue::Pass> > { struct Pass {} *x_3_2_1; } x_1_1_3; } x1; struct vector<ggl::CommandBuffer *, std::__1::allocator<ggl::CommandBuffer *> > { struct CommandBuffer {} **x_2_1_1; struct CommandBuffer {} **x_2_1_2; struct __compressed_pair<ggl::CommandBuffer **, std::__1::allocator<ggl::CommandBuffer *> > { struct CommandBuffer {} **x_3_2_1; } x_2_1_3; } x2; struct shared_ptr<ggl::RenderTransaction> { struct RenderTransaction {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; }*)renderQueue;
- (bool)rendersInBackground;
- (void)resetFlyoverStatistics;
- (void)resetRenderQueue;
- (bool)restoreViewportFromInfo:(id)arg1;
- (void)resumeFlyoverTourAnimation;
- (bool)roadClassDisabled:(int)arg1;
- (id)roadMarkersForSelectionAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)roadsDisabled;
- (id)routePreloadSession;
- (void)runAnimation:(id)arg1;
- (id)sceneConfiguration;
- (id)secondaryCanvas;
- (void)selectLabelMarker:(id)arg1;
- (void)selectTransitLineMarker:(id)arg1;
- (id)selectedLabelMarker;
- (id)selectedTransitLineIDs;
- (void)setAdditionalManifestConfiguration:(id)arg1;
- (void)setAllowDatelineWraparound:(bool)arg1;
- (void)setAnnotationTrackingHeadingAnimationDisplayRate:(long long)arg1;
- (void)setAnnotationTrackingZoomStyle:(long long)arg1;
- (void)setApplicationState:(unsigned char)arg1;
- (void)setApplicationState:(unsigned char)arg1 displayedSearchResultsType:(unsigned char)arg2;
- (void)setApplicationUILayout:(long long)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCameraFramingInsets:(struct VKEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setCameraHorizontalOffset:(double)arg1 duration:(double)arg2 timingFunction:(id)arg3;
- (void)setCanonicalSkyHeight:(double)arg1;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 timingCurve:(id)arg6 completion:(id)arg7;
- (void)setContentsScale:(double)arg1;
- (void)setCurrentLocationText:(id)arg1;
- (void)setDebugDrawContinuously:(bool)arg1;
- (void)setDebugEnableMultisampling:(bool)arg1;
- (void)setDebugLayoutContinuously:(bool)arg1;
- (void)setDesiredMapMode:(long long)arg1 immediate:(bool)arg2;
- (void)setDisableBuildingFootprints:(bool)arg1;
- (void)setDisableGrid:(bool)arg1;
- (void)setDisableLabels:(bool)arg1;
- (void)setDisablePolygons:(bool)arg1;
- (void)setDisableRasters:(bool)arg1;
- (void)setDisableRoadClass:(bool)arg1 forRoadClass:(int)arg2;
- (void)setDisableRoads:(bool)arg1;
- (void)setDisableTransitLines:(bool)arg1;
- (void)setDisplayRate:(long long)arg1;
- (void)setDisplayedSearchResultsType:(unsigned char)arg1;
- (void)setEdgeInsets:(struct VKEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setEdgeInsets:(struct VKEdgeInsets { double x1; double x2; double x3; double x4; })arg1 duration:(double)arg2 timingFunction:(id)arg3 completionHandler:(id)arg4;
- (void)setExternalTrafficIncidents:(id)arg1;
- (void)setFlyoverMode:(int)arg1;
- (void)setFocusedLabelsPolylinePainter:(id)arg1;
- (void)setFullyOccludedEdgeInsets:(struct VKEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setGesturing:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHostDisplay:(id)arg1;
- (void)setIconsShouldAlignToPixels:(bool)arg1;
- (void)setIsPitchable:(bool)arg1;
- (void)setLabelEdgeInsets:(struct VKEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLabelMarkerSelectionEnabled:(bool)arg1;
- (void)setLabelScaleFactor:(long long)arg1;
- (void)setLocalizeLabels:(bool)arg1;
- (void)setMapDelegate:(id)arg1;
- (void)setMapDisplayStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })arg1;
- (void)setMapDisplayStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })arg1 animated:(bool)arg2;
- (void)setMapDisplayStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })arg1 animated:(bool)arg2 duration:(double)arg3;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(id)arg5;
- (void)setMapType:(long long)arg1;
- (void)setMapType:(long long)arg1 animated:(bool)arg2;
- (void)setNavContext:(id)arg1;
- (void)setNavigationDisplayRate:(long long)arg1;
- (void)setNavigationShieldSize:(long long)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsLayout;
- (void)setRendersInBackground:(bool)arg1;
- (void)setRouteContext:(id)arg1;
- (void)setRouteLineSplitAnnotation:(id)arg1;
- (void)setRoutePreloadSession:(id)arg1;
- (void)setRouteUserOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setShieldIdiom:(long long)arg1;
- (void)setShieldSize:(long long)arg1;
- (void)setShouldLoadFallbackTiles:(bool)arg1;
- (void)setShouldLoadMapMargin:(bool)arg1;
- (void)setShowsBuildings:(bool)arg1;
- (void)setShowsPointsOfInterest:(bool)arg1;
- (void)setStaysCenteredDuringPinch:(bool)arg1;
- (void)setStaysCenteredDuringRotation:(bool)arg1;
- (void)setStylesheetName:(id)arg1;
- (void)setTargetDisplay:(long long)arg1;
- (void)setTrackingCameraShouldHandleGestures:(bool)arg1;
- (void)setTrackingZoomScale:(double)arg1;
- (void)setTrafficEnabled:(bool)arg1;
- (void)setTrafficIncidentsEnabled:(bool)arg1;
- (void)setVehicleState:(struct { bool x1; })arg1;
- (void)setYaw:(double)arg1 animated:(bool)arg2;
- (long long)shieldIdiom;
- (long long)shieldSize;
- (bool)shouldHideOffscreenSelectedAnnotation;
- (bool)shouldLoadFallbackTiles;
- (bool)shouldLoadMapMargin;
- (bool)showsBuildings;
- (bool)showsPointsOfInterest;
- (void)startFlyoverAnimation:(id)arg1 animateToStart:(bool)arg2 completion:(id)arg3;
- (void)startFlyoverTourAnimation:(unsigned long long)arg1 animateToStart:(bool)arg2 completion:(id)arg3;
- (void)startPanningAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startPanningAtPoint:(struct CGPoint { double x1; double x2; })arg1 panAtStartPoint:(bool)arg2;
- (void)startPinchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startPitchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startRotatingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(bool)arg2 animated:(bool)arg3;
- (bool)staysCenteredDuringPinch;
- (bool)staysCenteredDuringRotation;
- (void)stopFlyoverAnimation;
- (void)stopPanningAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopPinchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopPitchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopRotatingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopSnappingAnimations;
- (void)stopTracking;
- (void)stopTrackingAnnotation;
- (struct shared_ptr<gss::CartoStyle<gss::PropertyID> > { struct CartoStyle<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })styleForFeature:(struct shared_ptr<md::FeatureMarker> { struct FeatureMarker {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })styleManager;
- (struct shared_ptr<gss::StyleSheet<gss::PropertyID> > { struct StyleSheet<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })stylesheet;
- (bool)stylesheetIsDevResource;
- (bool)supportsMapType:(long long)arg1;
- (bool)supportsNightMode;
- (long long)targetDisplay;
- (double)topDownMinimumZoomLevelForTileSize:(long long)arg1;
- (bool)trackingCameraShouldHandleGestures;
- (double)trackingZoomScale;
- (bool)trafficEnabled;
- (bool)trafficIncidentsEnabled;
- (id)transitLineMarkersForSelectionAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)transitLineMarkersInCurrentViewport;
- (bool)transitLinesDisabled;
- (void)transitionToTracking:(bool)arg1 mapMode:(long long)arg2 startLocation:(struct { double x1; double x2; })arg3 pounceCompletionHandler:(id)arg4;
- (bool)updateDisplayLinkStatus;
- (void)updateOnscreenTimestamps;
- (void)updatePanWithTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)updatePitchWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 translation:(double)arg2;
- (void)updateRotationWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 newValue:(double)arg2;
- (id)userLocationAnimator;
- (struct { bool x1; })vehicleState;
- (double)verticalYaw;
- (id)viewportInfo;
- (id)visibleTileSets;
- (void)willEnterForeground;
- (double)yaw;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint { double x1; double x2; })arg2 completionHandler:(id)arg3;
- (double)zoomLevelAdjustmentForTileSize:(long long)arg1;
- (void)zoomToLevel:(double)arg1 withFocusPoint:(struct CGPoint { double x1; double x2; })arg2;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (void)_mapkit_configureFromDefaults:(bool)arg1;

@end
