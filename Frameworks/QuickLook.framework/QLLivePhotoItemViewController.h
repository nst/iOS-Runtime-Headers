/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLLivePhotoItemViewController : QLScrollableContentItemViewController <PHLivePhotoViewDelegate, UIGestureRecognizerDelegate> {
    bool  _fullyZoomedOut;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    bool  _isFullScreen;
    bool  _isPlaying;
    UIImageView * _livePhotoBadge;
    NSLayoutConstraint * _livePhotoBadgeLeftConstraint;
    NSLayoutConstraint * _livePhotoBadgeTopConstraint;
    bool  _livePhotoBadgeVisible;
    PHLivePhotoView * _livePhotoView;
    bool  _shouldPlayHint;
    bool  _transitionInProgress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateLivePhotoBadgeAnimated:(bool)arg1;
- (bool)canEnterFullScreen;
- (void)didEndZoomingAtScale:(double)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (struct CGSize { double x1; double x2; })imageSize;
- (void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2;
- (void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2;
- (void)loadPreviewControllerWithPreviewItem:(id)arg1 completionHandler:(id)arg2;
- (long long)preferredWhitePointAdaptivityStyle;
- (void)previewBecameFullScreen:(bool)arg1 animated:(bool)arg2;
- (void)previewDidAppear:(bool)arg1;
- (void)previewDidDisappear:(bool)arg1;
- (void)previewWillAppear:(bool)arg1;
- (void)previewWillFinishAppearing;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;
- (void)transitionDidFinish:(bool)arg1 didComplete:(bool)arg2;
- (void)transitionDidStart:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willBeginZooming;

@end
