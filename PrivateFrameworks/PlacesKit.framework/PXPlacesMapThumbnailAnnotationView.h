/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

@interface PXPlacesMapThumbnailAnnotationView : MKAnnotationView <PXPlacesMapAnnotationViewFadable> {
    UILabel * _countLabel;
    UIImageView * _countLabelBackgroundImageView;
    id  _displayCompletion;
    PKExtendedTraitCollection * _extendedTraitCollection;
    id  _extendedTraitObserver;
    long long  _geotaggablesCount;
    PXPlacesImageCache * _imageCache;
}

@property (nonatomic, retain) UILabel *countLabel;
@property (nonatomic, retain) UIImageView *countLabelBackgroundImageView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id displayCompletion;
@property (nonatomic, retain) PKExtendedTraitCollection *extendedTraitCollection;
@property (nonatomic, retain) id extendedTraitObserver;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXPlacesImageCache *imageCache;
@property (readonly) Class superclass;

+ (id)_thumbnailCreationOperationQueue;
+ (id)_thumbnailFetchOperationQueue;

- (void).cxx_destruct;
- (id)_countLabelBackgroundColor;
- (void)_fetchImageWithNetworkAccessAllowed:(bool)arg1;
- (void)_hideCountLabel;
- (void)_processGeotaggable:(id)arg1 withImage:(struct CGImage { }*)arg2 popoverImageType:(unsigned long long)arg3 shouldCache:(bool)arg4;
- (void)_processPlaceHolderForGeotaggable:(id)arg1;
- (void)_processPostImage;
- (void)_reloadCount:(long long)arg1;
- (void)_reloadData:(bool)arg1;
- (void)_showCountLabel;
- (id)countLabel;
- (id)countLabelBackgroundImageView;
- (void)dealloc;
- (id)displayCompletion;
- (id)extendedTraitCollection;
- (id)extendedTraitObserver;
- (id)imageCache;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 extendedTraitCollection:(id)arg3 imageCache:(id)arg4;
- (void)prepareForReuse;
- (id)primaryGeotaggable;
- (id)renderToImage;
- (void)setAnnotation:(id)arg1;
- (void)setCountLabel:(id)arg1;
- (void)setCountLabelBackgroundImageView:(id)arg1;
- (void)setDisplayCompletion:(id)arg1;
- (void)setExtendedTraitCollection:(id)arg1;
- (void)setExtendedTraitObserver:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageCache:(id)arg1;
- (id)userCacheKey;

@end
