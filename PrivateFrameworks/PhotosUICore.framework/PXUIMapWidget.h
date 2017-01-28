/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUIMapWidget : NSObject <PXPhotosDataSourceChangeObserver, PXWidget> {
    NSString * __cachedDisclosureTitle;
    NSString * __cachedLocalizedSubtitle;
    NSString * __cachedLocalizedTitle;
    UIView * __containerView;
    UIView * __contentView;
    PXPlacesSnapshotFactory * __factory;
    PXPlacesMapFetchResultViewController * __mapViewController;
    NSMutableArray * __nearbyCountCompletionBlocks;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    PXPhotosDetailsContext * _context;
    bool  _didDisplayContentView;
    NSMutableDictionary * _fetchedImages;
    double  _height;
    bool  _isLoaded;
    long long  _lastFetchedBoundingRectAssetCount;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumInitialSize;
    bool  _showAddressLink;
    PXWidgetSpec * _spec;
    PXPlacesMapViewPort * _viewPort;
    <PXWidgetDelegate> * _widgetDelegate;
}

@property (nonatomic, retain) NSString *_cachedDisclosureTitle;
@property (nonatomic, retain) NSString *_cachedLocalizedSubtitle;
@property (nonatomic, retain) NSString *_cachedLocalizedTitle;
@property (nonatomic, readonly) UIView *_containerView;
@property (nonatomic, readonly) UIView *_contentView;
@property (nonatomic, retain) PXPlacesSnapshotFactory *_factory;
@property (nonatomic, readonly) PXPlacesMapFetchResultViewController *_mapViewController;
@property (nonatomic, retain) NSMutableArray *_nearbyCountCompletionBlocks;
@property (nonatomic, readonly) bool allowUserInteractionWithSubtitle;
@property (nonatomic, readonly) long long contentLayoutStyle;
@property (nonatomic, readonly) PXTilingController *contentTilingController;
@property (nonatomic, readonly) NSObject<PXAnonymousView> *contentView;
@property (nonatomic, readonly) long long contentViewAnchoringType;
@property (nonatomic, retain) PXPhotosDetailsContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFaceModeEnabled, nonatomic) bool faceModeEnabled;
@property (nonatomic, readonly) bool hasContentForCurrentInput;
@property (nonatomic, readonly) bool hasLoadedContentData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedCaption;
@property (nonatomic, readonly) NSString *localizedDisclosureTitle;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (getter=isSelecting, nonatomic) bool selecting;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (nonatomic) bool showAddressLink;
@property (nonatomic, retain) PXWidgetSpec *spec;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFaceMode;
@property (nonatomic, readonly) bool supportsSelection;
@property (getter=isUserInteractionEnabled, nonatomic) bool userInteractionEnabled;
@property (nonatomic) <PXWidgetDelegate> *widgetDelegate;

- (void).cxx_destruct;
- (id)_cachedDisclosureTitle;
- (id)_cachedLocalizedSubtitle;
- (id)_cachedLocalizedTitle;
- (id)_containerView;
- (id)_contentView;
- (id)_createSnapshotOptions;
- (id)_factory;
- (long long)_fetchCountOfAssetsWithLocation;
- (void)_fetchPlacesSnapshotUsingMapType:(unsigned long long)arg1 fetchResults:(id)arg2 shouldFetchNearbyAssetCount:(bool)arg3;
- (id)_fetchResultsForSections;
- (id)_firstAsset;
- (void)_handleSnapshotResponse:(id)arg1 viewPort:(id)arg2 snapshotMapType:(unsigned long long)arg3 shouldFetchNearbyAssetCount:(bool)arg4 fetchedImageKey:(id)arg5 error:(id)arg6;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (bool)_hasCachedSnapshotImageForKey:(id)arg1;
- (id)_imageView;
- (void)_loadAndUpdateLabelsUsingAsset:(id)arg1;
- (void)_loadContainerView;
- (id)_localizedGeoDescriptionForAsset:(id)arg1;
- (id)_mapViewController;
- (id)_mapViewControllerWithContentMode:(unsigned long long)arg1;
- (id)_nearbyCountCompletionBlocks;
- (void)_refreshLabelsUsingAsset:(id)arg1;
- (void)_setImage:(id)arg1 animated:(bool)arg2;
- (void)_showPlaceholder;
- (void)_showPlacesWithContentMode:(unsigned long long)arg1;
- (void)_updateContentViewFrame;
- (void)_updateTitle:(id)arg1 subtitle:(id)arg2;
- (bool)allowUserInteractionWithSubtitle;
- (id)contentView;
- (id)context;
- (void)dealloc;
- (bool)hasContentForCurrentInput;
- (id)init;
- (void)loadContentData;
- (id)localizedDisclosureTitle;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (double)preferredContentHeightForWidth:(double)arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContext:(id)arg1;
- (void)setShowAddressLink:(bool)arg1;
- (void)setSpec:(id)arg1;
- (void)setWidgetDelegate:(id)arg1;
- (void)set_cachedDisclosureTitle:(id)arg1;
- (void)set_cachedLocalizedSubtitle:(id)arg1;
- (void)set_cachedLocalizedTitle:(id)arg1;
- (void)set_factory:(id)arg1;
- (void)set_nearbyCountCompletionBlocks:(id)arg1;
- (bool)showAddressLink;
- (id)spec;
- (id)standaloneMapViewController;
- (void)unloadContentData;
- (void)userDidSelectDisclosureControl;
- (void)userDidSelectSubtitle;
- (id)widgetDelegate;

@end
