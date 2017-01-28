/* Generated by RuntimeBrowser.
 */

@protocol ADAdRecipient <NSObject>

@required

- (UIView *)adSpaceView;
- (void)bannerTappedAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)changeBannerViewState:(int)arg1;
- (int)internalAdType;
- (long long)options;
- (void)pauseBannerMedia;
- (UIViewController *)presentingViewController;
- (void)privacyButtonWasTapped;
- (void)resumeBannerMedia;
- (void)serverBannerViewDidFailToReceiveAdWithError:(NSError *)arg1;
- (void)serverBannerViewDidLoad;
- (void)serverBannerViewWillLoad;
- (void)serverStoryboardDidTransitionOut;
- (bool)shouldTestVisibilityAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)storyboardViewControllerDidPresent;

@end
