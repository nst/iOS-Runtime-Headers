/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKAVFaceBaseView : NTKBackgroundImageFaceView <NTKVideoPlayerViewDelegate> {
    UIImageView * _posterImageView;
    NTKVideoPlayerView * _videoPlayerView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *posterImageView;
@property (readonly) Class superclass;
@property (nonatomic, retain) NTKVideoPlayerView *videoPlayerView;

- (void).cxx_destruct;
- (void)_beginTransitionToOption;
- (void)_cleanupAfterOptionTransitionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_createVideoPlayerViewIfNeeded;
- (void)_loadSnapshotContentViews;
- (void)_mediaServicesWereReset:(id)arg1;
- (id)_posterImageView;
- (void)_prepareForEditing;
- (void)_reset;
- (id)_selectedContentView;
- (void)_transitionToPosterView:(id)arg1;
- (void)_unloadSnapshotContentViews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)pauseVideoPlayerViewIfItExists;
- (id)posterImageView;
- (void)setPosterImageView:(id)arg1;
- (void)setVideoPlayerView:(id)arg1;
- (id)videoPlayerView;

@end
