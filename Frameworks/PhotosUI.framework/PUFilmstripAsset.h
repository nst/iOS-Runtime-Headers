/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFilmstripAsset : NSObject <PUDisplayAsset> {
    AVAsset * __asset;
    bool  __isSourceTimeAccurate;
    double  __normalizedTime;
    unsigned long long  _pixelHeight;
    unsigned long long  _pixelWidth;
    double  _sourceTime;
}

@property (setter=_setAsset:, nonatomic) AVAsset *_asset;
@property (setter=_setSourceTimeAccurate:, nonatomic) bool _isSourceTimeAccurate;
@property (setter=_setNormalizedTime:, nonatomic) double _normalizedTime;
@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) bool canPlayLoopingVideo;
@property (nonatomic, readonly) bool canPlayPhotoIris;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (getter=isFavorite, nonatomic, readonly) bool favorite;
@property (nonatomic, readonly) bool hasPhotoColorAdjustments;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAnimatedImage;
@property (nonatomic, readonly) bool isPhotoIrisPlaceholder;
@property (nonatomic, readonly) bool isTemporaryPlaceholder;
@property (getter=isLivePhoto, nonatomic, readonly) bool livePhoto;
@property (nonatomic, readonly) NSString *localizedGeoDescription;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) unsigned long long mediaSubtypes;
@property (nonatomic, readonly) unsigned long long mediaType;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) unsigned long long originalFilesize;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } photoIrisStillDisplayTime;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } photoIrisVideoDuration;
@property (nonatomic, readonly) unsigned long long pixelHeight;
@property (nonatomic, readonly) unsigned long long pixelWidth;
@property (nonatomic, readonly) long long playbackStyle;
@property (nonatomic, readonly) long long playbackVariation;
@property (nonatomic) double sourceTime;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniformTypeIdentifier;
@property (nonatomic, readonly) NSString *uuid;

- (id)_asset;
- (bool)_isSourceTimeAccurate;
- (double)_normalizedTime;
- (void)_setAsset:(id)arg1;
- (void)_setNormalizedTime:(double)arg1;
- (void)_setSourceTimeAccurate:(bool)arg1;
- (double)aspectRatio;
- (bool)canPlayLoopingVideo;
- (bool)canPlayPhotoIris;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (double)duration;
- (bool)hasPhotoColorAdjustments;
- (unsigned long long)hash;
- (id)init;
- (id)initWithNormalizedTime:(double)arg1 asset:(id)arg2;
- (bool)isAnimatedImage;
- (unsigned long long)isContentEqualTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFavorite;
- (bool)isLivePhoto;
- (bool)isPhotoIrisPlaceholder;
- (bool)isTemporaryPlaceholder;
- (void)loadSourceTimeWithCompletionHandler:(id /* block */)arg1;
- (id)localizedGeoDescription;
- (id)location;
- (unsigned long long)mediaSubtypes;
- (unsigned long long)mediaType;
- (id)modificationDate;
- (unsigned long long)originalFilesize;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })photoIrisStillDisplayTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })photoIrisVideoDuration;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (long long)playbackStyle;
- (long long)playbackVariation;
- (void)setSourceTime:(double)arg1;
- (double)sourceTime;
- (id)uniformTypeIdentifier;
- (id)uuid;

@end
