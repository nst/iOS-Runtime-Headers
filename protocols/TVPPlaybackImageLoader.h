/* Generated by RuntimeBrowser.
 */

@protocol TVPPlaybackImageLoader <NSObject>

@required

- (void)cancelImageLoadingForIdentifiers:(NSArray *)arg1;
- (double)closestImageTimeForTime:(double)arg1;
- (void)invalidate;
- (NSArray *)loadImagesForTimes:(void *)arg1 maxSize:(void *)arg2 withHandler:(void *)arg3; // needs 3 arg types, found 19: NSArray *, struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, void*, unsigned int, unsigned int, void*, void*, void*, void*, void*, double, double, void*

@end
