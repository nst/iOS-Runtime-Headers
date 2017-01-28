/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
 */

@interface PDFCollectionView_ios : PDFCollectionView {
    UITouch * _currentTouch;
    bool  _inDelayedUpdate;
    bool  _isInScrubbingGesture;
    bool  _isUpdatingScrollPosition;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastFrame;
    PDFPage * _lastScrubbedToPage;
    PDFThumbnailItem_ios * _scrubbingItemView;
}

@property (retain) UITouch *currentTouch;
@property bool inDelayedUpdate;
@property bool isInScrubbingGesture;
@property bool isUpdatingScrollPosition;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } lastFrame;
@property PDFPage *lastScrubbedToPage;
@property (retain) PDFThumbnailItem_ios *scrubbingItemView;

+ (struct CGSize { double x1; double x2; })defaultThumbnailSize;
+ (id)layoutForPlatform;

- (void).cxx_destruct;
- (void)_hideScrubber;
- (void)_reloadDataForFrameChangeAfterDelay:(id)arg1;
- (void)_showScrubberForLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_showScrubberForPage:(id)arg1 withCenter:(struct CGPoint { double x1; double x2; })arg2;
- (void)_updateScrubberToShowCurrentPage;
- (id)currentTouch;
- (void)dealloc;
- (bool)inDelayedUpdate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 collectionViewLayout:(id)arg2;
- (bool)isInScrubbingGesture;
- (bool)isUpdatingScrollPosition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lastFrame;
- (id)lastScrubbedToPage;
- (void)layoutSubviews;
- (unsigned long long)maxFittingItems;
- (void)pageDidChangeNotification:(id)arg1;
- (void)reloadDataAndRecenter;
- (id)scrubbingItemView;
- (void)setCurrentTouch:(id)arg1;
- (void)setInDelayedUpdate:(bool)arg1;
- (void)setIsInScrubbingGesture:(bool)arg1;
- (void)setIsUpdatingScrollPosition:(bool)arg1;
- (void)setLastFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLastScrubbedToPage:(id)arg1;
- (void)setScrubbingItemView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
