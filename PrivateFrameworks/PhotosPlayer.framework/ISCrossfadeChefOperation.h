/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISCrossfadeChefOperation : NSOperation {
    double  _crossfadeDuration;
    float  _minimumFrameInterval;
    int  _photoEXIFOrientation;
    id  _resultHandler;
    double  _sourceStartTime;
    id  _stillPhoto;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
    AVAsset * _videoAsset;
    AVVideoComposition * _videoComposition;
}

@property (nonatomic, readonly) double crossfadeDuration;
@property (nonatomic, readonly) float minimumFrameInterval;
@property (nonatomic, readonly) int photoEXIFOrientation;
@property (nonatomic, readonly, copy) id resultHandler;
@property (nonatomic, readonly) double sourceStartTime;
@property (nonatomic, retain) id stillPhoto;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } targetSize;
@property (nonatomic, readonly) AVAsset *videoAsset;
@property (nonatomic, readonly, copy) AVVideoComposition *videoComposition;

- (void).cxx_destruct;
- (double)crossfadeDuration;
- (id)initWithVideoAsset:(id)arg1 sourceStartTime:(double)arg2 stillPhoto:(struct CGImage { }*)arg3 photoEXIFOrientation:(int)arg4 crossfadeDuration:(double)arg5 minimumFrameInterval:(float)arg6 targetSize:(struct CGSize { double x1; double x2; })arg7 videoComposition:(id)arg8 resultHandler:(id)arg9;
- (float)minimumFrameInterval;
- (int)photoEXIFOrientation;
- (id)resultHandler;
- (void)setStillPhoto:(id)arg1;
- (double)sourceStartTime;
- (id)stillPhoto;
- (struct CGSize { double x1; double x2; })targetSize;
- (id)videoAsset;
- (id)videoComposition;

@end
